// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117580
// Name:            ._ZNK2QT7QAction10menuObjectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117580 jmp     cs:_ZNK2QT7QAction10menuObjectEv_ptr
//
// Resolved target: _ZNK2QT7QAction10menuObjectEv
// Target address:  0x8D7178
// GOT/IAT slot:    0x8A2760
// Slot symbol:     _ZNK2QT7QAction10menuObjectEv_ptr
// Target type:     _QWORD(QT::QAction *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QAction10menuObjectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QAction10menuObjectEv via GOT/IAT indirection
    return _ZNK2QT7QAction10menuObjectEv(/* forwarded args */);
}

