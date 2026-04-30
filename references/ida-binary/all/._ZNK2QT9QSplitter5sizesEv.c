// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114A00
// Name:            ._ZNK2QT9QSplitter5sizesEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114A00 jmp     cs:_ZNK2QT9QSplitter5sizesEv_ptr
//
// Resolved target: _ZNK2QT9QSplitter5sizesEv
// Target address:  0x8D5608
// GOT/IAT slot:    0x8A11A0
// Slot symbol:     _ZNK2QT9QSplitter5sizesEv_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QSplitter5sizesEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QSplitter5sizesEv via GOT/IAT indirection
    return _ZNK2QT9QSplitter5sizesEv(/* forwarded args */);
}

