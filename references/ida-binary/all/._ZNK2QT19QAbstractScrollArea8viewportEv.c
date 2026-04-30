// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113710
// Name:            ._ZNK2QT19QAbstractScrollArea8viewportEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113710 jmp     cs:_ZNK2QT19QAbstractScrollArea8viewportEv_ptr
//
// Resolved target: _ZNK2QT19QAbstractScrollArea8viewportEv
// Target address:  0x8D49A0
// GOT/IAT slot:    0x8A0828
// Slot symbol:     _ZNK2QT19QAbstractScrollArea8viewportEv_ptr
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT19QAbstractScrollArea8viewportEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT19QAbstractScrollArea8viewportEv via GOT/IAT indirection
    return _ZNK2QT19QAbstractScrollArea8viewportEv(/* forwarded args */);
}

