// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114DD0
// Name:            ._ZN2QT6QEventD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114DD0 jmp     cs:_ZN2QT6QEventD1Ev_ptr
//
// Resolved target: _ZN2QT6QEventD1Ev
// Target address:  0x8D5888
// GOT/IAT slot:    0x8A1388
// Slot symbol:     _ZN2QT6QEventD1Ev_ptr
// Target type:     void(QT::QEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QEventD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QEventD1Ev via GOT/IAT indirection
    return _ZN2QT6QEventD1Ev(/* forwarded args */);
}

