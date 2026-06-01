// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46C650
// Name:            j_._ZNK2QT7QWidget11minimumSizeEv
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x46C650 jmp     __ZNK2QT7QWidget11minimumSizeEv
//
// Resolved target: ._ZNK2QT7QWidget11minimumSizeEv
// Target address:  0x114DE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ j_._ZNK2QT7QWidget11minimumSizeEv(/* see target signature */)
{
    // Tail-call to ._ZNK2QT7QWidget11minimumSizeEv via direct jump indirection
    return ._ZNK2QT7QWidget11minimumSizeEv(/* forwarded args */);
}

