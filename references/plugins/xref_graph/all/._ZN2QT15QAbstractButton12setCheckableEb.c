// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16350
// Name:            ._ZN2QT15QAbstractButton12setCheckableEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16350 jmp     cs:off_4F190
//
// Resolved target: _ZN2QT15QAbstractButton12setCheckableEb
// Target address:  0x50080
// GOT/IAT slot:    0x4F190
// Slot symbol:     off_4F190
// Target type:     _QWORD(QT::QAbstractButton *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton12setCheckableEb(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton12setCheckableEb via GOT/IAT indirection
    return _ZN2QT15QAbstractButton12setCheckableEb(/* forwarded args */);
}

