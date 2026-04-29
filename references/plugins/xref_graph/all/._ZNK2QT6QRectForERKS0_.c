// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16640
// Name:            ._ZNK2QT6QRectForERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16640 jmp     cs:off_4F308
//
// Resolved target: _ZNK2QT6QRectForERKS0_
// Target address:  0x50318
// GOT/IAT slot:    0x4F308
// Slot symbol:     off_4F308
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT6QRectForERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QRectForERKS0_ via GOT/IAT indirection
    return _ZNK2QT6QRectForERKS0_(/* forwarded args */);
}

