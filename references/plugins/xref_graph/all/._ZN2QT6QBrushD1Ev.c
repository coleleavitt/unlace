// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16840
// Name:            ._ZN2QT6QBrushD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16840 jmp     cs:off_4F408
//
// Resolved target: _ZN2QT6QBrushD1Ev
// Target address:  0x504F0
// GOT/IAT slot:    0x4F408
// Slot symbol:     off_4F408
// Target type:     void(QT::QBrush *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QBrushD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QBrushD1Ev via GOT/IAT indirection
    return _ZN2QT6QBrushD1Ev(/* forwarded args */);
}

