// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112DC0
// Name:            ._ZNK2QT7QAction4textEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112DC0 jmp     cs:_ZNK2QT7QAction4textEv_ptr
//
// Resolved target: _ZNK2QT7QAction4textEv
// Target address:  0x8D4398
// GOT/IAT slot:    0x8A0380
// Slot symbol:     _ZNK2QT7QAction4textEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction4textEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction4textEv via GOT/IAT indirection
    return _ZNK2QT7QAction4textEv(/* forwarded args */);
}

