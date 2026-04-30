// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118620
// Name:            ._ZN2QT9QGroupBoxD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118620 jmp     cs:_ZN2QT9QGroupBoxD2Ev_ptr
//
// Resolved target: _ZN2QT9QGroupBoxD2Ev
// Target address:  0x8D7BD0
// GOT/IAT slot:    0x8A2FB0
// Slot symbol:     _ZN2QT9QGroupBoxD2Ev_ptr
// Target type:     void(QT::QGroupBox *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QGroupBoxD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QGroupBoxD2Ev via GOT/IAT indirection
    return _ZN2QT9QGroupBoxD2Ev(/* forwarded args */);
}

