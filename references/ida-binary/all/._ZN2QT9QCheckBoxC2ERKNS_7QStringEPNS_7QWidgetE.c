// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BC80
// Name:            ._ZN2QT9QCheckBoxC2ERKNS_7QStringEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BC80 jmp     cs:_ZN2QT9QCheckBoxC2ERKNS_7QStringEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT9QCheckBoxC2ERKNS_7QStringEPNS_7QWidgetE
// Target address:  0x8D9E08
// GOT/IAT slot:    0x8A4AE0
// Slot symbol:     _ZN2QT9QCheckBoxC2ERKNS_7QStringEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QCheckBox *__hidden this, const QT::QString *, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT9QCheckBoxC2ERKNS_7QStringEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QCheckBoxC2ERKNS_7QStringEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT9QCheckBoxC2ERKNS_7QStringEPNS_7QWidgetE(/* forwarded args */);
}

