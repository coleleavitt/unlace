// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16F40
// Name:            ._ZN2QT11QScrollArea9setWidgetEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16F40 jmp     cs:off_4F788
//
// Resolved target: _ZN2QT11QScrollArea9setWidgetEPNS_7QWidgetE
// Target address:  0x50B68
// GOT/IAT slot:    0x4F788
// Slot symbol:     off_4F788
// Target type:     _QWORD(QT::QScrollArea *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QScrollArea9setWidgetEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QScrollArea9setWidgetEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QScrollArea9setWidgetEPNS_7QWidgetE(/* forwarded args */);
}

