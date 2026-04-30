// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AEC0
// Name:            ._ZNK2QT15QAbstractButton9isCheckedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AEC0 jmp     cs:_ZNK2QT15QAbstractButton9isCheckedEv_ptr
//
// Resolved target: _ZNK2QT15QAbstractButton9isCheckedEv
// Target address:  0x8D9570
// GOT/IAT slot:    0x8A4400
// Slot symbol:     _ZNK2QT15QAbstractButton9isCheckedEv_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractButton9isCheckedEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractButton9isCheckedEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractButton9isCheckedEv(/* forwarded args */);
}

