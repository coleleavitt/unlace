// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B7E0
// Name:            ._ZN2QT6QBrushaSERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B7E0 jmp     cs:_ZN2QT6QBrushaSERKS0__ptr
//
// Resolved target: _ZN2QT6QBrushaSERKS0_
// Target address:  0x8D9B30
// GOT/IAT slot:    0x8A4890
// Slot symbol:     _ZN2QT6QBrushaSERKS0__ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT6QBrushaSERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT6QBrushaSERKS0_ via GOT/IAT indirection
    return _ZN2QT6QBrushaSERKS0_(/* forwarded args */);
}

