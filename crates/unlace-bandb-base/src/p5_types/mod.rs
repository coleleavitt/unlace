//! S5 -- Value & type facts: the type system + type inference.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod borrowcompare; // (kuna) a branchless two-word borrow compare folds to one double-precision compare
pub mod codescalar;
pub mod comtyping; // (kuna) a COM request's out-parameter holds the interface its id argument names
pub mod constseq;
pub mod double;
pub mod fatstr; // (kuna) length-carried (ptr,len) string literals (docs/multilang.md W3/W4)
pub mod fieldtype; // (kuna) a synthesized field some access holds as a pointer is declared as that pointer
pub mod funcdata_union;
pub mod gonewtype; // (kuna) type a runtime.newobject result from its descriptor argument (docs/multilang.md, Go pack)
pub mod indexrescale;
pub mod inferfuncentry;
pub mod kalloctype; // (kuna) a typed allocation returns the struct its kalloc_type view describes
pub mod memsetsequence;
pub mod objcrettype; // (kuna) an Objective-C message send typed and resolved by its receiver
pub mod pebnames; // (kuna) type the Windows TEB segment base so PEB/TEB field reads are named
pub mod ptrdepth;
pub mod rodatastring;
pub mod roundingops; // (kuna) a rounding user op p-code has no operator for is float in, float out
pub mod storetype; // (kuna) a global typed from the values stored into it
pub mod swiftstr; // (kuna) Swift two-word string literals
pub mod thumbfuncptr;
pub mod tlsnames; // (kuna) static TLS variables at their thread-pointer offsets
pub mod typevote;
pub mod unionresolve;
pub mod varargfloat; // (kuna) a variadic argument in a floating-point register is a double
pub mod vtabletypes; // (kuna) typed C++ vtables: a virtual call through a named slot of its class
