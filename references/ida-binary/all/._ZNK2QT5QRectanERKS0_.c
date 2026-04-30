// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118390
// Name:            ._ZNK2QT5QRectanERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118390 jmp     cs:_ZNK2QT5QRectanERKS0__ptr
//
// Resolved target: _ZNK2QT5QRectanERKS0_
// Target address:  0x8D7A48
// GOT/IAT slot:    0x8A2E68
// Slot symbol:     _ZNK2QT5QRectanERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT5QRectanERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QRectanERKS0_ via GOT/IAT indirection
    return _ZNK2QT5QRectanERKS0_(/* forwarded args */);
}

