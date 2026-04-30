// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118DE0
// Name:            ._ZNK2QT9QMimeData7hasUrlsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118DE0 jmp     cs:_ZNK2QT9QMimeData7hasUrlsEv_ptr
//
// Resolved target: _ZNK2QT9QMimeData7hasUrlsEv
// Target address:  0x8D8060
// GOT/IAT slot:    0x8A3390
// Slot symbol:     _ZNK2QT9QMimeData7hasUrlsEv_ptr
// Target type:     _QWORD(QT::QMimeData *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QMimeData7hasUrlsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QMimeData7hasUrlsEv via GOT/IAT indirection
    return _ZNK2QT9QMimeData7hasUrlsEv(/* forwarded args */);
}

