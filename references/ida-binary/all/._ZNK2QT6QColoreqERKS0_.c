// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111FB0
// Name:            ._ZNK2QT6QColoreqERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111FB0 jmp     cs:_ZNK2QT6QColoreqERKS0__ptr
//
// Resolved target: _ZNK2QT6QColoreqERKS0_
// Target address:  0x8D3A88
// GOT/IAT slot:    0x89FC78
// Slot symbol:     _ZNK2QT6QColoreqERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT6QColoreqERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColoreqERKS0_ via GOT/IAT indirection
    return _ZNK2QT6QColoreqERKS0_(/* forwarded args */);
}

