// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16210
// Name:            ._ZN2QT15QAbstractButton5clickEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16210 jmp     cs:off_4F0F0
//
// Resolved target: _ZN2QT15QAbstractButton5clickEv
// Target address:  0x4FF78
// GOT/IAT slot:    0x4F0F0
// Slot symbol:     off_4F0F0
// Target type:     _QWORD(QT::QAbstractButton *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton5clickEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton5clickEv via GOT/IAT indirection
    return _ZN2QT15QAbstractButton5clickEv(/* forwarded args */);
}

