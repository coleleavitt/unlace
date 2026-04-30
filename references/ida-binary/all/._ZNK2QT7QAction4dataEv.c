// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113B30
// Name:            ._ZNK2QT7QAction4dataEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113B30 jmp     cs:_ZNK2QT7QAction4dataEv_ptr
//
// Resolved target: _ZNK2QT7QAction4dataEv
// Target address:  0x8D4C50
// GOT/IAT slot:    0x8A0A38
// Slot symbol:     _ZNK2QT7QAction4dataEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction4dataEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction4dataEv via GOT/IAT indirection
    return _ZNK2QT7QAction4dataEv(/* forwarded args */);
}

