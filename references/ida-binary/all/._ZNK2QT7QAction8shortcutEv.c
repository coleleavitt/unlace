// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AB80
// Name:            ._ZNK2QT7QAction8shortcutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AB80 jmp     cs:_ZNK2QT7QAction8shortcutEv_ptr
//
// Resolved target: _ZNK2QT7QAction8shortcutEv
// Target address:  0x8D9370
// GOT/IAT slot:    0x8A4260
// Slot symbol:     _ZNK2QT7QAction8shortcutEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction8shortcutEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction8shortcutEv via GOT/IAT indirection
    return _ZNK2QT7QAction8shortcutEv(/* forwarded args */);
}

