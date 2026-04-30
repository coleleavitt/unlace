// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1133C0
// Name:            ._ZNK2QT15QAbstractButton5groupEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1133C0 jmp     cs:_ZNK2QT15QAbstractButton5groupEv_ptr
//
// Resolved target: _ZNK2QT15QAbstractButton5groupEv
// Target address:  0x8D47A8
// GOT/IAT slot:    0x8A0680
// Slot symbol:     _ZNK2QT15QAbstractButton5groupEv_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractButton5groupEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractButton5groupEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractButton5groupEv(/* forwarded args */);
}

