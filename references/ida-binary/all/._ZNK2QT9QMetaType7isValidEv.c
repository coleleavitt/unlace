// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A50
// Name:            ._ZNK2QT9QMetaType7isValidEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A50 jmp     cs:_ZNK2QT9QMetaType7isValidEv_ptr
//
// Resolved target: _ZNK2QT9QMetaType7isValidEv
// Target address:  0x8D4BC0
// GOT/IAT slot:    0x8A09C8
// Slot symbol:     _ZNK2QT9QMetaType7isValidEv_ptr
// Target type:     _QWORD(QT::QMetaType *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QMetaType7isValidEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QMetaType7isValidEv via GOT/IAT indirection
    return _ZNK2QT9QMetaType7isValidEv(/* forwarded args */);
}

