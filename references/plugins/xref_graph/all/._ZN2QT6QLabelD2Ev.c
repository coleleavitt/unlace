// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C40
// Name:            ._ZN2QT6QLabelD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16C40 jmp     cs:off_4F608
//
// Resolved target: _ZN2QT6QLabelD2Ev
// Target address:  0x508A0
// GOT/IAT slot:    0x4F608
// Slot symbol:     off_4F608
// Target type:     void(QT::QLabel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QLabelD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT6QLabelD2Ev via GOT/IAT indirection
    return _ZN2QT6QLabelD2Ev(/* forwarded args */);
}

