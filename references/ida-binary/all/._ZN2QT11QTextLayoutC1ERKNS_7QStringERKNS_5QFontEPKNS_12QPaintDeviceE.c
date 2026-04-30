// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1145E0
// Name:            ._ZN2QT11QTextLayoutC1ERKNS_7QStringERKNS_5QFontEPKNS_12QPaintDeviceE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1145E0 jmp     cs:_ZN2QT11QTextLayoutC1ERKNS_7QStringERKNS_5QFontEPKNS_12QPaintDeviceE_ptr
//
// Resolved target: _ZN2QT11QTextLayoutC1ERKNS_7QStringERKNS_5QFontEPKNS_12QPaintDeviceE
// Target address:  0x8D5330
// GOT/IAT slot:    0x8A0F90
// Slot symbol:     _ZN2QT11QTextLayoutC1ERKNS_7QStringERKNS_5QFontEPKNS_12QPaintDeviceE_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this, const QT::QString *, const QT::QFont *, const QT::QPaintDevice *)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayoutC1ERKNS_7QStringERKNS_5QFontEPKNS_12QPaintDeviceE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayoutC1ERKNS_7QStringERKNS_5QFontEPKNS_12QPaintDeviceE via GOT/IAT indirection
    return _ZN2QT11QTextLayoutC1ERKNS_7QStringERKNS_5QFontEPKNS_12QPaintDeviceE(/* forwarded args */);
}

