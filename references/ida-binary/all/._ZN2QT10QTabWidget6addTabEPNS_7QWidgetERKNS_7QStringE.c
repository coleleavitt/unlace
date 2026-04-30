// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B6C0
// Name:            ._ZN2QT10QTabWidget6addTabEPNS_7QWidgetERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B6C0 jmp     cs:_ZN2QT10QTabWidget6addTabEPNS_7QWidgetERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT10QTabWidget6addTabEPNS_7QWidgetERKNS_7QStringE
// Target address:  0x8D9A78
// GOT/IAT slot:    0x8A4800
// Slot symbol:     _ZN2QT10QTabWidget6addTabEPNS_7QWidgetERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this, QT::QWidget *, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT10QTabWidget6addTabEPNS_7QWidgetERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTabWidget6addTabEPNS_7QWidgetERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT10QTabWidget6addTabEPNS_7QWidgetERKNS_7QStringE(/* forwarded args */);
}

