// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1195E0
// Name:            ._ZN2QT5QFontaSERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1195E0 jmp     cs:_ZN2QT5QFontaSERKS0__ptr
//
// Resolved target: _ZN2QT5QFontaSERKS0_
// Target address:  0x8D85A8
// GOT/IAT slot:    0x8A3790
// Slot symbol:     _ZN2QT5QFontaSERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT5QFontaSERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFontaSERKS0_ via GOT/IAT indirection
    return _ZN2QT5QFontaSERKS0_(/* forwarded args */);
}

