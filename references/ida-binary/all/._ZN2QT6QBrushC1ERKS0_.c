// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1164C0
// Name:            ._ZN2QT6QBrushC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1164C0 jmp     cs:_ZN2QT6QBrushC1ERKS0__ptr
//
// Resolved target: _ZN2QT6QBrushC1ERKS0_
// Target address:  0x8D66B8
// GOT/IAT slot:    0x8A1F00
// Slot symbol:     _ZN2QT6QBrushC1ERKS0__ptr
// Target type:     _QWORD(QT::QBrush *__hidden this, const QT::QBrush *)
// ============================================================

/* see target sig */ ._ZN2QT6QBrushC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT6QBrushC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT6QBrushC1ERKS0_(/* forwarded args */);
}

