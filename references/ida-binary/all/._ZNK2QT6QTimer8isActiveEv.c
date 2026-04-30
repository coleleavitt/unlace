// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1119E0
// Name:            ._ZNK2QT6QTimer8isActiveEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1119E0 jmp     cs:_ZNK2QT6QTimer8isActiveEv_ptr
//
// Resolved target: _ZNK2QT6QTimer8isActiveEv
// Target address:  0x8D36F0
// GOT/IAT slot:    0x89F990
// Slot symbol:     _ZNK2QT6QTimer8isActiveEv_ptr
// Target type:     _QWORD(QT::QTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QTimer8isActiveEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QTimer8isActiveEv via GOT/IAT indirection
    return _ZNK2QT6QTimer8isActiveEv(/* forwarded args */);
}

