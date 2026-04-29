// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16A30
// Name:            ._ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16A30 jmp     cs:off_4F500
//
// Resolved target: _ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi
// Target address:  0x50728
// GOT/IAT slot:    0x4F500
// Slot symbol:     off_4F500
// Target type:     _QWORD(QT::QBoxLayout *__hidden this, QT::QLayout *, int)
// ============================================================

/* see target sig */ ._ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi via GOT/IAT indirection
    return _ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi(/* forwarded args */);
}

