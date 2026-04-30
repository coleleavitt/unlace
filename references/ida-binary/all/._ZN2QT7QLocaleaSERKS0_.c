// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1126E0
// Name:            ._ZN2QT7QLocaleaSERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1126E0 jmp     cs:_ZN2QT7QLocaleaSERKS0__ptr
//
// Resolved target: _ZN2QT7QLocaleaSERKS0_
// Target address:  0x8D3F48
// GOT/IAT slot:    0x8A0010
// Slot symbol:     _ZN2QT7QLocaleaSERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QLocaleaSERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QLocaleaSERKS0_ via GOT/IAT indirection
    return _ZN2QT7QLocaleaSERKS0_(/* forwarded args */);
}

