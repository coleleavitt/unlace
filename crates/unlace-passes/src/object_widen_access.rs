//! The object access map (Hex-Rays `typectx+808`, recorder `sub_27E790`).

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::mem_object::MemObject;
use unlace_ir::ssa::PrimitiveType;

/// One recorded access to a memory object.
///
/// Ordered by offset first, so iterating an [`ObjectAccesses`] set walks the
/// object front to back, as `sub_27AE10`'s layout loop expects.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub struct ObjectAccess {
    /// Byte offset of the access from the object start.
    pub offset: u64,
    /// Scale of the variable index in the address (`0` for a constant
    /// address).
    pub stride: u64,
    /// Access width in bytes.
    pub size: u64,
    /// Type of the loaded or stored value.
    pub ty: PrimitiveType,
}

/// Every access recorded for one object.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct ObjectAccesses {
    pub accesses: BTreeSet<ObjectAccess>,
    /// Largest `offset + size` over every access seen, including accesses
    /// the recording rule did not keep.
    pub max_end: u64,
}

/// Accesses grouped by the object they touch.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct AccessMap {
    objects: BTreeMap<MemObject, ObjectAccesses>,
}

impl AccessMap {
    /// Record one access (`sub_27E790`).
    ///
    /// The access is kept when it is the whole object at offset 0, or when
    /// it is aligned to its own size and any index steps over at least one
    /// whole element. The object's maximal end is updated either way.
    pub fn record(&mut self, object: MemObject, access: ObjectAccess) {
        if access.size == 0 {
            return;
        }
        let entry = self.objects.entry(object).or_default();
        let whole = access.offset == 0 && access.stride == 0;
        let aligned = (access.stride == 0 || access.stride >= access.size)
            && access.offset.is_multiple_of(access.size);
        if whole || aligned {
            entry.accesses.insert(access);
        }
        entry.max_end = entry.max_end.max(access.offset.saturating_add(access.size));
    }

    pub fn get(&self, object: MemObject) -> Option<&ObjectAccesses> {
        self.objects.get(&object)
    }

    pub fn iter(&self) -> impl Iterator<Item = (&MemObject, &ObjectAccesses)> {
        self.objects.iter()
    }

    pub fn objects(&self) -> impl Iterator<Item = MemObject> + '_ {
        self.objects.keys().copied()
    }

    pub fn is_empty(&self) -> bool {
        self.objects.is_empty()
    }
}
