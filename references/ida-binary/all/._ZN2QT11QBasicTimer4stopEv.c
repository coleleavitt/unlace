// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116D40
// Name:            ._ZN2QT11QBasicTimer4stopEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116D40 jmp     cs:_ZN2QT11QBasicTimer4stopEv_ptr
//
// Resolved target: _ZN2QT11QBasicTimer4stopEv
// Target address:  0x8D6C28
// GOT/IAT slot:    0x8A2340
// Slot symbol:     _ZN2QT11QBasicTimer4stopEv_ptr
// Target type:     _QWORD(QT::QBasicTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QBasicTimer4stopEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QBasicTimer4stopEv via GOT/IAT indirection
    return _ZN2QT11QBasicTimer4stopEv(/* forwarded args */);
}

