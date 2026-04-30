// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117AB0
// Name:            ._ZN2QT6QLabel17mouseReleaseEventEPNS_11QMouseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117AB0 jmp     cs:_ZN2QT6QLabel17mouseReleaseEventEPNS_11QMouseEventE_ptr
//
// Resolved target: _ZN2QT6QLabel17mouseReleaseEventEPNS_11QMouseEventE
// Target address:  0x8D74A0
// GOT/IAT slot:    0x8A29F8
// Slot symbol:     _ZN2QT6QLabel17mouseReleaseEventEPNS_11QMouseEventE_ptr
// Target type:     _QWORD(QT::QLabel *__hidden this, QT::QMouseEvent *)
// ============================================================

/* see target sig */ ._ZN2QT6QLabel17mouseReleaseEventEPNS_11QMouseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT6QLabel17mouseReleaseEventEPNS_11QMouseEventE via GOT/IAT indirection
    return _ZN2QT6QLabel17mouseReleaseEventEPNS_11QMouseEventE(/* forwarded args */);
}

