// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A060
// Name:            ._ZN2QT7QTabBar14mouseMoveEventEPNS_11QMouseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A060 jmp     cs:_ZN2QT7QTabBar14mouseMoveEventEPNS_11QMouseEventE_ptr
//
// Resolved target: _ZN2QT7QTabBar14mouseMoveEventEPNS_11QMouseEventE
// Target address:  0x8D8C48
// GOT/IAT slot:    0x8A3CD0
// Slot symbol:     _ZN2QT7QTabBar14mouseMoveEventEPNS_11QMouseEventE_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, QT::QMouseEvent *)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar14mouseMoveEventEPNS_11QMouseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar14mouseMoveEventEPNS_11QMouseEventE via GOT/IAT indirection
    return _ZN2QT7QTabBar14mouseMoveEventEPNS_11QMouseEventE(/* forwarded args */);
}

