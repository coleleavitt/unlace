// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1111B0
// Name:            ._ZN2QT7QStringaSERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1111B0 jmp     cs:_ZN2QT7QStringaSERKS0__ptr
//
// Resolved target: _ZN2QT7QStringaSERKS0_
// Target address:  0x8D3180
// GOT/IAT slot:    0x89F578
// Slot symbol:     _ZN2QT7QStringaSERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QStringaSERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QStringaSERKS0_ via GOT/IAT indirection
    return _ZN2QT7QStringaSERKS0_(/* forwarded args */);
}

