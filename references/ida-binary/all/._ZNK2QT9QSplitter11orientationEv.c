// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113770
// Name:            ._ZNK2QT9QSplitter11orientationEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113770 jmp     cs:_ZNK2QT9QSplitter11orientationEv_ptr
//
// Resolved target: _ZNK2QT9QSplitter11orientationEv
// Target address:  0x8D49F0
// GOT/IAT slot:    0x8A0858
// Slot symbol:     _ZNK2QT9QSplitter11orientationEv_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QSplitter11orientationEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QSplitter11orientationEv via GOT/IAT indirection
    return _ZNK2QT9QSplitter11orientationEv(/* forwarded args */);
}

