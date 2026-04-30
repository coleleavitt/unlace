// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114810
// Name:            ._ZN2QT19QAbstractScrollAreaD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114810 jmp     cs:_ZN2QT19QAbstractScrollAreaD2Ev_ptr
//
// Resolved target: _ZN2QT19QAbstractScrollAreaD2Ev
// Target address:  0x8D5480
// GOT/IAT slot:    0x8A10A8
// Slot symbol:     _ZN2QT19QAbstractScrollAreaD2Ev_ptr
// Target type:     void(QT::QAbstractScrollArea *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT19QAbstractScrollAreaD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT19QAbstractScrollAreaD2Ev via GOT/IAT indirection
    return _ZN2QT19QAbstractScrollAreaD2Ev(/* forwarded args */);
}

