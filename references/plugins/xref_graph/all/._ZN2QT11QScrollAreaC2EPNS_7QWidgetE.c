// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16920
// Name:            ._ZN2QT11QScrollAreaC2EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16920 jmp     cs:off_4F478
//
// Resolved target: _ZN2QT11QScrollAreaC2EPNS_7QWidgetE
// Target address:  0x50618
// GOT/IAT slot:    0x4F478
// Slot symbol:     off_4F478
// Target type:     _QWORD(QT::QScrollArea *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QScrollAreaC2EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QScrollAreaC2EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QScrollAreaC2EPNS_7QWidgetE(/* forwarded args */);
}

