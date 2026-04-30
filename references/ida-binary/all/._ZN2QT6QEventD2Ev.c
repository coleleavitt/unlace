// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B660
// Name:            ._ZN2QT6QEventD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B660 jmp     cs:_ZN2QT6QEventD2Ev_ptr
//
// Resolved target: _ZN2QT6QEventD2Ev
// Target address:  0x8D9A38
// GOT/IAT slot:    0x8A47D0
// Slot symbol:     _ZN2QT6QEventD2Ev_ptr
// Target type:     void(QT::QEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QEventD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QEventD2Ev via GOT/IAT indirection
    return _ZN2QT6QEventD2Ev(/* forwarded args */);
}

