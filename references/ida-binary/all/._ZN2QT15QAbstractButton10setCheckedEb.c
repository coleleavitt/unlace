// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119A30
// Name:            ._ZN2QT15QAbstractButton10setCheckedEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119A30 jmp     cs:_ZN2QT15QAbstractButton10setCheckedEb_ptr
//
// Resolved target: _ZN2QT15QAbstractButton10setCheckedEb
// Target address:  0x8D8878
// GOT/IAT slot:    0x8A39B8
// Slot symbol:     _ZN2QT15QAbstractButton10setCheckedEb_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT15QAbstractButton10setCheckedEb(/* see target signature */)
{
    // Tail-call to _ZN2QT15QAbstractButton10setCheckedEb via GOT/IAT indirection
    return _ZN2QT15QAbstractButton10setCheckedEb(/* forwarded args */);
}

