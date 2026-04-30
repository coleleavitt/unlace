// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114480
// Name:            ._ZN2QT4QDirD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114480 jmp     cs:_ZN2QT4QDirD1Ev_ptr
//
// Resolved target: _ZN2QT4QDirD1Ev
// Target address:  0x8D5218
// GOT/IAT slot:    0x8A0EE0
// Slot symbol:     _ZN2QT4QDirD1Ev_ptr
// Target type:     void(QT::QDir *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT4QDirD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT4QDirD1Ev via GOT/IAT indirection
    return _ZN2QT4QDirD1Ev(/* forwarded args */);
}

