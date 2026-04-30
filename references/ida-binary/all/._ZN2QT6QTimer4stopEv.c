// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ADB0
// Name:            ._ZN2QT6QTimer4stopEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ADB0 jmp     cs:_ZN2QT6QTimer4stopEv_ptr
//
// Resolved target: _ZN2QT6QTimer4stopEv
// Target address:  0x8D94C8
// GOT/IAT slot:    0x8A4378
// Slot symbol:     _ZN2QT6QTimer4stopEv_ptr
// Target type:     _QWORD(QT::QTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT6QTimer4stopEv(/* see target signature */)
{
    // Tail-call to _ZN2QT6QTimer4stopEv via GOT/IAT indirection
    return _ZN2QT6QTimer4stopEv(/* forwarded args */);
}

