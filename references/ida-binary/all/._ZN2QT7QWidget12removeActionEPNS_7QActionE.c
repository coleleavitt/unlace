// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A640
// Name:            ._ZN2QT7QWidget12removeActionEPNS_7QActionE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A640 jmp     cs:_ZN2QT7QWidget12removeActionEPNS_7QActionE_ptr
//
// Resolved target: _ZN2QT7QWidget12removeActionEPNS_7QActionE
// Target address:  0x8D9008
// GOT/IAT slot:    0x8A3FC0
// Slot symbol:     _ZN2QT7QWidget12removeActionEPNS_7QActionE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QAction *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget12removeActionEPNS_7QActionE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget12removeActionEPNS_7QActionE via GOT/IAT indirection
    return _ZN2QT7QWidget12removeActionEPNS_7QActionE(/* forwarded args */);
}

