// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AAB0
// Name:            ._ZNK2QT5QDate5monthEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AAB0 jmp     cs:_ZNK2QT5QDate5monthEv_ptr
//
// Resolved target: _ZNK2QT5QDate5monthEv
// Target address:  0x8D92F8
// GOT/IAT slot:    0x8A41F8
// Slot symbol:     _ZNK2QT5QDate5monthEv_ptr
// Target type:     _QWORD(QT::QDate *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QDate5monthEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QDate5monthEv via GOT/IAT indirection
    return _ZNK2QT5QDate5monthEv(/* forwarded args */);
}

