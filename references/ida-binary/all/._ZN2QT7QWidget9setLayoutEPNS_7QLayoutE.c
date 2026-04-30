// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115530
// Name:            ._ZN2QT7QWidget9setLayoutEPNS_7QLayoutE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115530 jmp     cs:_ZN2QT7QWidget9setLayoutEPNS_7QLayoutE_ptr
//
// Resolved target: _ZN2QT7QWidget9setLayoutEPNS_7QLayoutE
// Target address:  0x8D5D10
// GOT/IAT slot:    0x8A1738
// Slot symbol:     _ZN2QT7QWidget9setLayoutEPNS_7QLayoutE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QLayout *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget9setLayoutEPNS_7QLayoutE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget9setLayoutEPNS_7QLayoutE via GOT/IAT indirection
    return _ZN2QT7QWidget9setLayoutEPNS_7QLayoutE(/* forwarded args */);
}

