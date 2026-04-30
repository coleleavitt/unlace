// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116140
// Name:            ._ZNK2QT6QColorneERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116140 jmp     cs:_ZNK2QT6QColorneERKS0__ptr
//
// Resolved target: _ZNK2QT6QColorneERKS0_
// Target address:  0x8D64A8
// GOT/IAT slot:    0x8A1D40
// Slot symbol:     _ZNK2QT6QColorneERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT6QColorneERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColorneERKS0_ via GOT/IAT indirection
    return _ZNK2QT6QColorneERKS0_(/* forwarded args */);
}

