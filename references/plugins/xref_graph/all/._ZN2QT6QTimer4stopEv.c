// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17430
// Name:            ._ZN2QT6QTimer4stopEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17430 jmp     cs:off_4FA00
//
// Resolved target: _ZN2QT6QTimer4stopEv
// Target address:  0x50FD0
// GOT/IAT slot:    0x4FA00
// Slot symbol:     off_4FA00
// Target type:     _QWORD(QT::QTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QTimer4stopEv(/* see target signature */)
{
    // Tail-call to _ZN2QT6QTimer4stopEv via GOT/IAT indirection
    return _ZN2QT6QTimer4stopEv(/* forwarded args */);
}

