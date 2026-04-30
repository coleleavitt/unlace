// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x478350
// Name:            j_._ZN2QT12QApplication12activeWindowEv
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x478350 jmp     __ZN2QT12QApplication12activeWindowEv
//
// Resolved target: ._ZN2QT12QApplication12activeWindowEv
// Target address:  0x11A470
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ j_._ZN2QT12QApplication12activeWindowEv(/* see target signature */)
{
    // Tail-call to ._ZN2QT12QApplication12activeWindowEv via direct jump indirection
    return ._ZN2QT12QApplication12activeWindowEv(/* forwarded args */);
}

