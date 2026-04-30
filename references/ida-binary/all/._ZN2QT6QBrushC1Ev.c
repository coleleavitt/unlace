// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111310
// Name:            ._ZN2QT6QBrushC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111310 jmp     cs:_ZN2QT6QBrushC1Ev_ptr
//
// Resolved target: _ZN2QT6QBrushC1Ev
// Target address:  0x8D3250
// GOT/IAT slot:    0x89F628
// Slot symbol:     _ZN2QT6QBrushC1Ev_ptr
// Target type:     _QWORD(QT::QBrush *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QBrushC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QBrushC1Ev via GOT/IAT indirection
    return _ZN2QT6QBrushC1Ev(/* forwarded args */);
}

