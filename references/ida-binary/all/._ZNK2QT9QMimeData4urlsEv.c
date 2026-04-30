// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1199A0
// Name:            ._ZNK2QT9QMimeData4urlsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1199A0 jmp     cs:_ZNK2QT9QMimeData4urlsEv_ptr
//
// Resolved target: _ZNK2QT9QMimeData4urlsEv
// Target address:  0x8D8818
// GOT/IAT slot:    0x8A3970
// Slot symbol:     _ZNK2QT9QMimeData4urlsEv_ptr
// Target type:     _QWORD(QT::QMimeData *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QMimeData4urlsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QMimeData4urlsEv via GOT/IAT indirection
    return _ZNK2QT9QMimeData4urlsEv(/* forwarded args */);
}

