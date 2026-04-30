// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1149B0
// Name:            ._ZN2QT6QBrushD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1149B0 jmp     cs:_ZN2QT6QBrushD1Ev_ptr
//
// Resolved target: _ZN2QT6QBrushD1Ev
// Target address:  0x8D55D0
// GOT/IAT slot:    0x8A1178
// Slot symbol:     _ZN2QT6QBrushD1Ev_ptr
// Target type:     void(QT::QBrush *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QBrushD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QBrushD1Ev via GOT/IAT indirection
    return _ZN2QT6QBrushD1Ev(/* forwarded args */);
}

