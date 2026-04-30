// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112240
// Name:            ._ZNK2QT6QRectFanERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112240 jmp     cs:_ZNK2QT6QRectFanERKS0__ptr
//
// Resolved target: _ZNK2QT6QRectFanERKS0_
// Target address:  0x8D3C18
// GOT/IAT slot:    0x89FDC0
// Slot symbol:     _ZNK2QT6QRectFanERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT6QRectFanERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QRectFanERKS0_ via GOT/IAT indirection
    return _ZNK2QT6QRectFanERKS0_(/* forwarded args */);
}

