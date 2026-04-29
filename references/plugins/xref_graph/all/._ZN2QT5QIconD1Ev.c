// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17040
// Name:            ._ZN2QT5QIconD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17040 jmp     cs:off_4F808
//
// Resolved target: _ZN2QT5QIconD1Ev
// Target address:  0x50C40
// GOT/IAT slot:    0x4F808
// Slot symbol:     off_4F808
// Target type:     void(QT::QIcon *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QIconD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT5QIconD1Ev via GOT/IAT indirection
    return _ZN2QT5QIconD1Ev(/* forwarded args */);
}

