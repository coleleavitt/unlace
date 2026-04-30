// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AB50
// Name:            ._ZNK2QT9QSplitter5countEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AB50 jmp     cs:_ZNK2QT9QSplitter5countEv_ptr
//
// Resolved target: _ZNK2QT9QSplitter5countEv
// Target address:  0x8D9358
// GOT/IAT slot:    0x8A4248
// Slot symbol:     _ZNK2QT9QSplitter5countEv_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QSplitter5countEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QSplitter5countEv via GOT/IAT indirection
    return _ZNK2QT9QSplitter5countEv(/* forwarded args */);
}

