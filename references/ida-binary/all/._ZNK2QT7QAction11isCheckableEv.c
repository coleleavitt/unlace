// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A4A0
// Name:            ._ZNK2QT7QAction11isCheckableEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A4A0 jmp     cs:_ZNK2QT7QAction11isCheckableEv_ptr
//
// Resolved target: _ZNK2QT7QAction11isCheckableEv
// Target address:  0x8D8F08
// GOT/IAT slot:    0x8A3EF0
// Slot symbol:     _ZNK2QT7QAction11isCheckableEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction11isCheckableEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction11isCheckableEv via GOT/IAT indirection
    return _ZNK2QT7QAction11isCheckableEv(/* forwarded args */);
}

