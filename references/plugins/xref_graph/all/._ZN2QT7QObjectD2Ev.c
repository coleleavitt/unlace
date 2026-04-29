// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16370
// Name:            ._ZN2QT7QObjectD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16370 jmp     cs:off_4F1A0
//
// Resolved target: _ZN2QT7QObjectD2Ev
// Target address:  0x50090
// GOT/IAT slot:    0x4F1A0
// Slot symbol:     off_4F1A0
// Target type:     void(QT::QObject *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QObjectD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObjectD2Ev via GOT/IAT indirection
    return _ZN2QT7QObjectD2Ev(/* forwarded args */);
}

