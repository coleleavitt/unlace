// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113970
// Name:            ._ZN2QT5QFileD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113970 jmp     cs:_ZN2QT5QFileD1Ev_ptr
//
// Resolved target: _ZN2QT5QFileD1Ev
// Target address:  0x8D4B38
// GOT/IAT slot:    0x8A0958
// Slot symbol:     _ZN2QT5QFileD1Ev_ptr
// Target type:     void(QT::QFile *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QFileD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFileD1Ev via GOT/IAT indirection
    return _ZN2QT5QFileD1Ev(/* forwarded args */);
}

