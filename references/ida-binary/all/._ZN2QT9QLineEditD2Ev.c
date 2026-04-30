// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BC70
// Name:            ._ZN2QT9QLineEditD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BC70 jmp     cs:_ZN2QT9QLineEditD2Ev_ptr
//
// Resolved target: _ZN2QT9QLineEditD2Ev
// Target address:  0x8D9E00
// GOT/IAT slot:    0x8A4AD8
// Slot symbol:     _ZN2QT9QLineEditD2Ev_ptr
// Target type:     void(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEditD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEditD2Ev via GOT/IAT indirection
    return _ZN2QT9QLineEditD2Ev(/* forwarded args */);
}

