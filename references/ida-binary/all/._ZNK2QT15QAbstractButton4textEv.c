// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114EB0
// Name:            ._ZNK2QT15QAbstractButton4textEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114EB0 jmp     cs:_ZNK2QT15QAbstractButton4textEv_ptr
//
// Resolved target: _ZNK2QT15QAbstractButton4textEv
// Target address:  0x8D5908
// GOT/IAT slot:    0x8A13F8
// Slot symbol:     _ZNK2QT15QAbstractButton4textEv_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractButton4textEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractButton4textEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractButton4textEv(/* forwarded args */);
}

