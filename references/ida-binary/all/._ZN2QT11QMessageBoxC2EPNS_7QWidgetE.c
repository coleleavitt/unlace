// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111970
// Name:            ._ZN2QT11QMessageBoxC2EPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111970 jmp     cs:_ZN2QT11QMessageBoxC2EPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT11QMessageBoxC2EPNS_7QWidgetE
// Target address:  0x8D36B0
// GOT/IAT slot:    0x89F958
// Slot symbol:     _ZN2QT11QMessageBoxC2EPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QMessageBox *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT11QMessageBoxC2EPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMessageBoxC2EPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT11QMessageBoxC2EPNS_7QWidgetE(/* forwarded args */);
}

