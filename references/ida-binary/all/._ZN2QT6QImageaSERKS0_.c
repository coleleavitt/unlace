// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1193E0
// Name:            ._ZN2QT6QImageaSERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1193E0 jmp     cs:_ZN2QT6QImageaSERKS0__ptr
//
// Resolved target: _ZN2QT6QImageaSERKS0_
// Target address:  0x8D8440
// GOT/IAT slot:    0x8A3690
// Slot symbol:     _ZN2QT6QImageaSERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT6QImageaSERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT6QImageaSERKS0_ via GOT/IAT indirection
    return _ZN2QT6QImageaSERKS0_(/* forwarded args */);
}

