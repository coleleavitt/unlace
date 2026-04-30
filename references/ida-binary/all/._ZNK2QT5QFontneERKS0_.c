// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113440
// Name:            ._ZNK2QT5QFontneERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113440 jmp     cs:_ZNK2QT5QFontneERKS0__ptr
//
// Resolved target: _ZNK2QT5QFontneERKS0_
// Target address:  0x8D47F0
// GOT/IAT slot:    0x8A06C0
// Slot symbol:     _ZNK2QT5QFontneERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZNK2QT5QFontneERKS0_(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QFontneERKS0_ via GOT/IAT indirection
    return _ZNK2QT5QFontneERKS0_(/* forwarded args */);
}

