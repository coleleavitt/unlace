// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A6D0
// Name:            ._ZNK2QT19QAbstractScrollArea19horizontalScrollBarEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A6D0 jmp     cs:_ZNK2QT19QAbstractScrollArea19horizontalScrollBarEv_ptr
//
// Resolved target: _ZNK2QT19QAbstractScrollArea19horizontalScrollBarEv
// Target address:  0x8D9058
// GOT/IAT slot:    0x8A4008
// Slot symbol:     _ZNK2QT19QAbstractScrollArea19horizontalScrollBarEv_ptr
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT19QAbstractScrollArea19horizontalScrollBarEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT19QAbstractScrollArea19horizontalScrollBarEv via GOT/IAT indirection
    return _ZNK2QT19QAbstractScrollArea19horizontalScrollBarEv(/* forwarded args */);
}

