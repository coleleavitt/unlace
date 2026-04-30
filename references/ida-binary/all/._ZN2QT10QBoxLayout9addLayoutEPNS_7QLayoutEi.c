// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115D50
// Name:            ._ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115D50 jmp     cs:_ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi_ptr
//
// Resolved target: _ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi
// Target address:  0x8D6210
// GOT/IAT slot:    0x8A1B48
// Slot symbol:     _ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi_ptr
// Target type:     _QWORD(QT::QBoxLayout *__hidden this, QT::QLayout *, int)
// ============================================================

/* see target sig */ ._ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi(/* see target signature */)
{
    // Tail-call to _ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi via GOT/IAT indirection
    return _ZN2QT10QBoxLayout9addLayoutEPNS_7QLayoutEi(/* forwarded args */);
}

