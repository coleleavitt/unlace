// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1142C0
// Name:            ._ZNK2QT7QAction7toolTipEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1142C0 jmp     cs:_ZNK2QT7QAction7toolTipEv_ptr
//
// Resolved target: _ZNK2QT7QAction7toolTipEv
// Target address:  0x8D5110
// GOT/IAT slot:    0x8A0E00
// Slot symbol:     _ZNK2QT7QAction7toolTipEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction7toolTipEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction7toolTipEv via GOT/IAT indirection
    return _ZNK2QT7QAction7toolTipEv(/* forwarded args */);
}

