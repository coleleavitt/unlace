// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117A20
// Name:            ._ZN2QT7QWidget9addActionEPNS_7QActionE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117A20 jmp     cs:_ZN2QT7QWidget9addActionEPNS_7QActionE_ptr
//
// Resolved target: _ZN2QT7QWidget9addActionEPNS_7QActionE
// Target address:  0x8D7450
// GOT/IAT slot:    0x8A29B0
// Slot symbol:     _ZN2QT7QWidget9addActionEPNS_7QActionE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QAction *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget9addActionEPNS_7QActionE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget9addActionEPNS_7QActionE via GOT/IAT indirection
    return _ZN2QT7QWidget9addActionEPNS_7QActionE(/* forwarded args */);
}

