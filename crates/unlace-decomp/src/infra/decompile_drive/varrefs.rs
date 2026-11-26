//! Per-render storage queries share one varnode-bank traversal.

use super::{VarInfo, parameter_storage, select_storage_varrefs, signed_space_offset};
use crate::context::HighVariableId;
use crate::funcdata::Funcdata;
use std::collections::{BTreeMap, BTreeSet};
use std::rc::Rc;
use unlace_base::address::Address;

#[derive(Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
enum StorageKey {
    Parameter((u8, i32, u64), Option<usize>, i64),
    Stack(i64, i64),
}

impl StorageKey {
    fn parameter(address: &Address, size: i64) -> Self {
        Self::Parameter(
            address.sort_key(),
            address.get_space().map(|space| Rc::as_ptr(space) as usize),
            size,
        )
    }

    fn variable(fd: &Funcdata, variable: &VarInfo) -> Option<Self> {
        if variable.is_param {
            let (address, size) = parameter_storage(fd, variable.arg_index?)?;
            Some(Self::parameter(&address, size))
        } else {
            fd.get_scope_local()?;
            Some(Self::Stack(variable.stack_offset?, variable.size))
        }
    }
}

type StorageMatch = (u64, Option<HighVariableId>, bool);

pub(super) struct StorageIndex {
    matches: BTreeMap<StorageKey, Vec<StorageMatch>>,
}

impl StorageIndex {
    pub(super) fn new(fd: &Funcdata, variables: &[VarInfo]) -> Self {
        let mut matches: BTreeMap<_, Vec<StorageMatch>> = variables
            .iter()
            .filter_map(|variable| StorageKey::variable(fd, variable))
            .map(|key| (key, Vec::new()))
            .collect();
        if matches.is_empty() {
            return Self { matches };
        }
        let has_parameters = matches
            .keys()
            .any(|key| matches!(key, StorageKey::Parameter(..)));
        let stack_space = fd.get_scope_local().map(|scope| scope.get_space_id());
        for id in fd.vbank().iter_loc() {
            let Some(varnode) = fd.vbank().get(id) else {
                continue;
            };
            let entry = (
                varnode.get_create_index() as u64,
                varnode.get_high(),
                varnode.is_input(),
            );
            if has_parameters {
                let key = StorageKey::parameter(varnode.get_addr(), varnode.get_size() as i64);
                if let Some(bucket) = matches.get_mut(&key) {
                    bucket.push(entry);
                }
            }
            if let Some(space) = stack_space {
                if varnode
                    .get_addr()
                    .get_space()
                    .is_some_and(|s| s.get_index() == space.get_index())
                {
                    let key = StorageKey::Stack(
                        signed_space_offset(space, varnode.get_offset()),
                        varnode.get_size() as i64,
                    );
                    if let Some(bucket) = matches.get_mut(&key) {
                        bucket.push((entry.0, entry.1, false));
                    }
                }
            }
        }
        Self { matches }
    }

    pub(super) fn varrefs(&self, fd: &Funcdata, variable: &VarInfo) -> BTreeSet<u64> {
        let Some(key) = StorageKey::variable(fd, variable) else {
            return BTreeSet::new();
        };
        let Some(bucket) = self.matches.get(&key) else {
            return BTreeSet::new();
        };
        let inputs_only = variable.is_param && bucket.iter().any(|entry| entry.2);
        let matches: Vec<_> = bucket
            .iter()
            .filter(|entry| !inputs_only || entry.2)
            .map(|entry| (entry.0, entry.1))
            .collect();
        select_storage_varrefs(fd, &matches, &variable.name)
    }
}

#[cfg(test)]
mod tests;
