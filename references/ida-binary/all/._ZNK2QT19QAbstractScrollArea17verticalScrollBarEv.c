// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BA50
// Name:            ._ZNK2QT19QAbstractScrollArea17verticalScrollBarEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BA50 jmp     cs:_ZNK2QT19QAbstractScrollArea17verticalScrollBarEv_ptr
//
// Resolved target: _ZNK2QT19QAbstractScrollArea17verticalScrollBarEv
// Target address:  0x8D9CB0
// GOT/IAT slot:    0x8A49C8
// Slot symbol:     _ZNK2QT19QAbstractScrollArea17verticalScrollBarEv_ptr
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT19QAbstractScrollArea17verticalScrollBarEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT19QAbstractScrollArea17verticalScrollBarEv via GOT/IAT indirection
    return _ZNK2QT19QAbstractScrollArea17verticalScrollBarEv(/* forwarded args */);
}

