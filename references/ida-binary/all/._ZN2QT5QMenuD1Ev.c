// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A5F0
// Name:            ._ZN2QT5QMenuD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A5F0 jmp     cs:_ZN2QT5QMenuD1Ev_ptr
//
// Resolved target: _ZN2QT5QMenuD1Ev
// Target address:  0x8D8FD0
// GOT/IAT slot:    0x8A3F98
// Slot symbol:     _ZN2QT5QMenuD1Ev_ptr
// Target type:     void(QT::QMenu *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QMenuD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT5QMenuD1Ev via GOT/IAT indirection
    return _ZN2QT5QMenuD1Ev(/* forwarded args */);
}

