// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115980
// Name:            ._ZN2QT12QButtonGroup9addButtonEPNS_15QAbstractButtonEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115980 jmp     cs:_ZN2QT12QButtonGroup9addButtonEPNS_15QAbstractButtonEi_ptr
//
// Resolved target: _ZN2QT12QButtonGroup9addButtonEPNS_15QAbstractButtonEi
// Target address:  0x8D5FB0
// GOT/IAT slot:    0x8A1960
// Slot symbol:     _ZN2QT12QButtonGroup9addButtonEPNS_15QAbstractButtonEi_ptr
// Target type:     _QWORD(QT::QButtonGroup *__hidden this, QT::QAbstractButton *, int)
// ============================================================

/* see target sig */ ._ZN2QT12QButtonGroup9addButtonEPNS_15QAbstractButtonEi(/* see target signature */)
{
    // Tail-call to _ZN2QT12QButtonGroup9addButtonEPNS_15QAbstractButtonEi via GOT/IAT indirection
    return _ZN2QT12QButtonGroup9addButtonEPNS_15QAbstractButtonEi(/* forwarded args */);
}

