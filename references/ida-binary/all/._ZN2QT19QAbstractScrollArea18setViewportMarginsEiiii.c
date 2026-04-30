// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A280
// Name:            ._ZN2QT19QAbstractScrollArea18setViewportMarginsEiiii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A280 jmp     cs:_ZN2QT19QAbstractScrollArea18setViewportMarginsEiiii_ptr
//
// Resolved target: _ZN2QT19QAbstractScrollArea18setViewportMarginsEiiii
// Target address:  0x8D8D88
// GOT/IAT slot:    0x8A3DE0
// Slot symbol:     _ZN2QT19QAbstractScrollArea18setViewportMarginsEiiii_ptr
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this, int, int, int, int)
// ============================================================

/* see target sig */ ._ZN2QT19QAbstractScrollArea18setViewportMarginsEiiii(/* see target signature */)
{
    // Tail-call to _ZN2QT19QAbstractScrollArea18setViewportMarginsEiiii via GOT/IAT indirection
    return _ZN2QT19QAbstractScrollArea18setViewportMarginsEiiii(/* forwarded args */);
}

