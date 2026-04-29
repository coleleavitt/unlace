// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x162B0
// Name:            ._ZNK2QT6QColoreqERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x162B0 jmp     cs:off_4F140
//
// Resolved target: _ZNK2QT6QColoreqERKS0_
// Target address:  0x4FFE0
// GOT/IAT slot:    0x4F140
// Slot symbol:     off_4F140
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT6QColoreqERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColoreqERKS0_ via GOT/IAT indirection
    return _ZNK2QT6QColoreqERKS0_(/* forwarded args */);
}

