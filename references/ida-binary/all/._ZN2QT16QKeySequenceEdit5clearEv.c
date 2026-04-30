// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118910
// Name:            ._ZN2QT16QKeySequenceEdit5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118910 jmp     cs:_ZN2QT16QKeySequenceEdit5clearEv_ptr
//
// Resolved target: _ZN2QT16QKeySequenceEdit5clearEv
// Target address:  0x8D7D88
// GOT/IAT slot:    0x8A3128
// Slot symbol:     _ZN2QT16QKeySequenceEdit5clearEv_ptr
// Target type:     _QWORD(QT::QKeySequenceEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT16QKeySequenceEdit5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT16QKeySequenceEdit5clearEv via GOT/IAT indirection
    return _ZN2QT16QKeySequenceEdit5clearEv(/* forwarded args */);
}

