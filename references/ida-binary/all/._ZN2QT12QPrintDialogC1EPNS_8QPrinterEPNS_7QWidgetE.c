// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119CE0
// Name:            ._ZN2QT12QPrintDialogC1EPNS_8QPrinterEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119CE0 jmp     cs:_ZN2QT12QPrintDialogC1EPNS_8QPrinterEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT12QPrintDialogC1EPNS_8QPrinterEPNS_7QWidgetE
// Target address:  0x8D8A08
// GOT/IAT slot:    0x8A3B10
// Slot symbol:     _ZN2QT12QPrintDialogC1EPNS_8QPrinterEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QPrintDialog *__hidden this, QT::QPrinter *, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT12QPrintDialogC1EPNS_8QPrinterEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPrintDialogC1EPNS_8QPrinterEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT12QPrintDialogC1EPNS_8QPrinterEPNS_7QWidgetE(/* forwarded args */);
}

