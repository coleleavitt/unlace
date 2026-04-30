// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x483310
// Name:            j_._ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x483310 jmp     __ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE
//
// Resolved target: ._ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE
// Target address:  0x112510
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(QT::QApplication *__hidden this, QT::QObject *, QT::QEvent *)
// ============================================================

/* see target sig */ j_._ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE(/* see target signature */)
{
    // Tail-call to ._ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE via direct jump indirection
    return ._ZN2QT12QApplication6notifyEPNS_7QObjectEPNS_6QEventE(/* forwarded args */);
}

