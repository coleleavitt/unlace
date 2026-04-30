// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112580
// Name:            ._ZN2QT12QStyleOption8initFromEPKNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112580 jmp     cs:_ZN2QT12QStyleOption8initFromEPKNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT12QStyleOption8initFromEPKNS_7QWidgetE
// Target address:  0x8D3E60
// GOT/IAT slot:    0x89FF60
// Slot symbol:     _ZN2QT12QStyleOption8initFromEPKNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QStyleOption *__hidden this, const QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT12QStyleOption8initFromEPKNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QStyleOption8initFromEPKNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT12QStyleOption8initFromEPKNS_7QWidgetE(/* forwarded args */);
}

