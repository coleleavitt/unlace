// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7360
// Name:            j_._ZN2QT7QWidget6updateEv
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2A7360 jmp     __ZN2QT7QWidget6updateEv
//
// Resolved target: ._ZN2QT7QWidget6updateEv
// Target address:  0x119C80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ j_._ZN2QT7QWidget6updateEv(/* see target signature */)
{
    // Tail-call to ._ZN2QT7QWidget6updateEv via direct jump indirection
    return ._ZN2QT7QWidget6updateEv(/* forwarded args */);
}

