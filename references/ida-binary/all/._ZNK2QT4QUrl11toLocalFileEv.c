// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117B50
// Name:            ._ZNK2QT4QUrl11toLocalFileEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117B50 jmp     cs:_ZNK2QT4QUrl11toLocalFileEv_ptr
//
// Resolved target: _ZNK2QT4QUrl11toLocalFileEv
// Target address:  0x8D7508
// GOT/IAT slot:    0x8A2A48
// Slot symbol:     _ZNK2QT4QUrl11toLocalFileEv_ptr
// Target type:     _QWORD(QT::QUrl *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT4QUrl11toLocalFileEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT4QUrl11toLocalFileEv via GOT/IAT indirection
    return _ZNK2QT4QUrl11toLocalFileEv(/* forwarded args */);
}

