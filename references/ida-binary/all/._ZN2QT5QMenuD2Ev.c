// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114EF0
// Name:            ._ZN2QT5QMenuD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114EF0 jmp     cs:_ZN2QT5QMenuD2Ev_ptr
//
// Resolved target: _ZN2QT5QMenuD2Ev
// Target address:  0x8D5938
// GOT/IAT slot:    0x8A1418
// Slot symbol:     _ZN2QT5QMenuD2Ev_ptr
// Target type:     void(QT::QMenu *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QMenuD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT5QMenuD2Ev via GOT/IAT indirection
    return _ZN2QT5QMenuD2Ev(/* forwarded args */);
}

