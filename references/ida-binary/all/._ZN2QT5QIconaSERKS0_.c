// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112D30
// Name:            ._ZN2QT5QIconaSERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112D30 jmp     cs:_ZN2QT5QIconaSERKS0__ptr
//
// Resolved target: _ZN2QT5QIconaSERKS0_
// Target address:  0x8D4350
// GOT/IAT slot:    0x8A0338
// Slot symbol:     _ZN2QT5QIconaSERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT5QIconaSERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT5QIconaSERKS0_ via GOT/IAT indirection
    return _ZN2QT5QIconaSERKS0_(/* forwarded args */);
}

