// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17470
// Name:            ._ZNK2QT15QAbstractButton9isCheckedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17470 jmp     cs:off_4FA20
//
// Resolved target: _ZNK2QT15QAbstractButton9isCheckedEv
// Target address:  0x50FF8
// GOT/IAT slot:    0x4FA20
// Slot symbol:     off_4FA20
// Target type:     _QWORD(QT::QAbstractButton *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractButton9isCheckedEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractButton9isCheckedEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractButton9isCheckedEv(/* forwarded args */);
}

