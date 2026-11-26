//! Port of `decompiler/cpp/partmap.hh` (W1): the `partmap<>` template mapping
//! a linear space to value objects.
//!
//! Let R be the linear space with an ordering, and let { a_i } be a finite
//! set of points in R.  The a_i partition R into a finite number of disjoint
//! sets
//! `{ x : x < a_0 }, { x : x>=a_0 && x < a_1 }, ... { x : x>=a_n }`.
//!
//! A partmap maps elements of this partition to value objects.  A value is
//! associated with any element x in R by looking up the value associated
//! with the partition element containing x.
//!
//! The map is defined by starting with a *default* value object that applies
//! to the whole linear space.  Then *split* points are introduced, one at a
//! time, in the linear space.  At each split point, the associated value
//! object is split into two objects.  At any point the value object
//! describing some part of the linear space can be changed.
//!
//! C++ method-name mapping: `getValue` (non-const) → [`PartMap::get_value_mut`],
//! `getValue` (const) → [`PartMap::get_value`], `begin()` → [`PartMap::iter`],
//! `begin(pnt)` (a `lower_bound`) → [`PartMap::iter_from`].

use std::collections::BTreeMap;
use std::ops::Bound::{Excluded, Included, Unbounded};

/// A map from a linear space to value objects (C++ `partmap<_linetype,_valuetype>`).
#[derive(Debug, Clone)]
pub struct PartMap<K, V> {
    /// Map from linear split points to the value objects
    database: BTreeMap<K, V>,
    /// The value object *before* the first split point
    defaultvalue: V,
}

impl<K: Ord + Clone, V: Clone + Default> Default for PartMap<K, V> {
    /// C++ default-constructs `defaultvalue`.
    fn default() -> Self {
        PartMap::new(V::default())
    }
}

impl<K: Ord + Clone, V: Clone> PartMap<K, V> {
    /// Create an empty partition with the given default value object.
    pub fn new(defaultvalue: V) -> Self {
        PartMap {
            database: BTreeMap::new(),
            defaultvalue,
        }
    }

    /// Return the value at the greatest split point at or before `pnt`,
    /// or the default value before the first split point (C++ `getValue`).
    pub fn get_value(&self, pnt: &K) -> &V {
        match self.database.range((Unbounded, Included(pnt))).next_back() {
            Some((_, v)) => v,
            None => &self.defaultvalue,
        }
    }

    /// Mutable lookup, including the default value before the first split
    /// point. Returns the value directly without cloning a key.
    pub fn get_value_mut(&mut self, pnt: &K) -> &mut V {
        if self
            .database
            .first_key_value()
            .is_none_or(|(first, _)| pnt < first)
        {
            return &mut self.defaultvalue;
        }
        match self
            .database
            .range_mut((Unbounded, Included(pnt)))
            .next_back()
        {
            Some((_, v)) => v,
            None => &mut self.defaultvalue,
        }
    }

    /// Add (if not already present) a point to the linear partition.
    /// Returns the (possibly) new value object for the range starting at the
    /// point.  (C++ `split`.)
    pub fn split(&mut self, pnt: &K) -> &mut V {
        let newval = match self.database.range((Unbounded, Included(pnt))).next_back() {
            Some((k, v)) => {
                if k == pnt {
                    None // point matches exactly: return old ref
                } else {
                    Some(v.clone())
                }
            }
            None => Some(self.defaultvalue.clone()),
        };
        match newval {
            None => self
                .database
                .get_mut(pnt)
                .expect("partmap: exact split point vanished"),
            Some(v) => self.database.entry(pnt.clone()).or_insert(v),
        }
    }

    /// Remove an exact split point, letting the preceding value cover its range.
    pub fn remove_split(&mut self, pnt: &K) {
        self.database.remove(pnt);
    }

    /// Get the default value object (C++ `defaultValue`, const flavor).
    pub fn default_value(&self) -> &V {
        &self.defaultvalue
    }

    /// Get the default value object (C++ `defaultValue`, non-const flavor).
    pub fn default_value_mut(&mut self) -> &mut V {
        &mut self.defaultvalue
    }

    /// Clear a range of split points (C++ `clearRange`).
    ///
    /// Split points are introduced at the two boundary points of the given
    /// range, and all split points in between are removed.  The value object
    /// that was initially present at the left-most boundary point becomes
    /// the value (as a copy) for the whole range.  Requires `pnt1 <= pnt2`
    /// (the C++ erase is undefined otherwise).
    pub fn clear_range(&mut self, pnt1: &K, pnt2: &K) -> &mut V {
        self.split(pnt1);
        self.split(pnt2);
        // Erase every split point strictly between pnt1 and pnt2.
        // (pnt1 == pnt2 is C++ UB through erase(beg,end) with beg past end;
        // here it simply erases nothing.)
        if pnt1 < pnt2 {
            let doomed: Vec<K> = self
                .database
                .range((Excluded(pnt1), Excluded(pnt2)))
                .map(|(k, _)| k.clone())
                .collect();
            for k in &doomed {
                self.database.remove(k);
            }
        }
        self.database
            .get_mut(pnt1)
            .expect("partmap: clear_range left boundary vanished")
    }

    /// Get the value object for a given point and return the range over
    /// which the value object applies (C++ `bounds`).
    ///
    /// Returns `(value, before, after, valid)` where `before`/`after` define
    /// the maximal range over which the value applies and `valid` describes
    /// which of the bounding points apply:
    ///   - 0 if both bounds apply
    ///   - 1 if there is no lower bound
    ///   - 2 if there is no upper bound
    ///   - 3 if there is neither a lower or upper bound
    ///
    /// (`before`/`after` are `None` exactly where the C++ version leaves the
    /// corresponding out-parameter untouched.)
    pub fn bounds(&self, pnt: &K) -> (&V, Option<&K>, Option<&K>, i32) {
        if self.database.is_empty() {
            return (&self.defaultvalue, None, None, 3);
        }
        let enditer = self.database.range((Excluded(pnt), Unbounded)).next();
        let previter = self.database.range((Unbounded, Included(pnt))).next_back();
        match previter {
            Some((before, value)) => match enditer {
                None => (value, Some(before), None, 2), // No upperbound
                Some((after, _)) => (value, Some(before), Some(after), 0), // Fully bounded
            },
            None => {
                // No lowerbound; after = first split point (non-empty here)
                let (after, _) = enditer.expect("partmap: non-empty database");
                (&self.defaultvalue, None, Some(after), 1)
            }
        }
    }

    /// Iterate over all split points (C++ `begin()`/`end()`).
    pub fn iter(&self) -> impl Iterator<Item = (&K, &V)> {
        self.database.iter()
    }

    /// Iterate over all split points with mutable values.
    pub fn iter_mut(&mut self) -> impl Iterator<Item = (&K, &mut V)> {
        self.database.iter_mut()
    }

    /// Get first split point at-or-after the given point — a `lower_bound`
    /// (C++ `begin(pnt)`).
    pub fn iter_from<'a>(
        &'a self,
        pnt: &K,
    ) -> impl Iterator<Item = (&'a K, &'a V)> + use<'a, K, V> {
        self.database.range((Included(pnt), Unbounded))
    }

    /// Mutable flavor of [`PartMap::iter_from`].
    pub fn iter_from_mut<'a>(
        &'a mut self,
        pnt: &K,
    ) -> impl Iterator<Item = (&'a K, &'a mut V)> + use<'a, K, V> {
        self.database.range_mut((Included(pnt), Unbounded))
    }

    /// Clear all split points (C++ `clear`).
    pub fn clear(&mut self) {
        self.database.clear();
    }

    /// Return `true` if there are no split points (C++ `empty`).
    pub fn empty(&self) -> bool {
        self.database.is_empty()
    }
}

#[cfg(test)]
mod tests;
