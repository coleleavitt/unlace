// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1117B0
// Name:            ._ZN2QT9QFileInfoD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1117B0 jmp     cs:_ZN2QT9QFileInfoD1Ev_ptr
//
// Resolved target: _ZN2QT9QFileInfoD1Ev
// Target address:  0x8D35A0
// GOT/IAT slot:    0x89F878
// Slot symbol:     _ZN2QT9QFileInfoD1Ev_ptr
// Target type:     void(QT::QFileInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QFileInfoD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QFileInfoD1Ev via GOT/IAT indirection
    return _ZN2QT9QFileInfoD1Ev(/* forwarded args */);
}

