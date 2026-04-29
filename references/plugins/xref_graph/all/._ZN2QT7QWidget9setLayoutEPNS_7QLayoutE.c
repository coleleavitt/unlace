// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16940
// Name:            ._ZN2QT7QWidget9setLayoutEPNS_7QLayoutE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16940 jmp     cs:off_4F488
//
// Resolved target: _ZN2QT7QWidget9setLayoutEPNS_7QLayoutE
// Target address:  0x50630
// GOT/IAT slot:    0x4F488
// Slot symbol:     off_4F488
// Target type:     _QWORD(QT::QWidget *__hidden this, QT::QLayout *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget9setLayoutEPNS_7QLayoutE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget9setLayoutEPNS_7QLayoutE via GOT/IAT indirection
    return _ZN2QT7QWidget9setLayoutEPNS_7QLayoutE(/* forwarded args */);
}

