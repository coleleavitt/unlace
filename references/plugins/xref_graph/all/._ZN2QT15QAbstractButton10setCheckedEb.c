// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x171B0
// Name:            ._ZN2QT15QAbstractButton10setCheckedEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x171B0 jmp     cs:off_4F8C0
//
// Resolved target: _ZN2QT15QAbstractButton10setCheckedEb
// Target address:  0x50D90
// GOT/IAT slot:    0x4F8C0
// Slot symbol:     off_4F8C0
// Target type:     _QWORD(QT::QAbstractButton *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton10setCheckedEb(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton10setCheckedEb via GOT/IAT indirection
    return _ZN2QT15QAbstractButton10setCheckedEb(/* forwarded args */);
}

