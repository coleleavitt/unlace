// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B130
// Name:            ._ZN2QT9QSplitter9addWidgetEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B130 jmp     cs:_ZN2QT9QSplitter9addWidgetEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT9QSplitter9addWidgetEPNS_7QWidgetE
// Target address:  0x8D96D8
// GOT/IAT slot:    0x8A4538
// Slot symbol:     _ZN2QT9QSplitter9addWidgetEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT9QSplitter9addWidgetEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QSplitter9addWidgetEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT9QSplitter9addWidgetEPNS_7QWidgetE(/* forwarded args */);
}

