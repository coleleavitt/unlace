// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16600
// Name:            ._ZN2QT15QTextCharFormatC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16600 jmp     cs:off_4F2E8
//
// Resolved target: _ZN2QT15QTextCharFormatC1Ev
// Target address:  0x502E8
// GOT/IAT slot:    0x4F2E8
// Slot symbol:     off_4F2E8
// Target type:     _QWORD(QT::QTextCharFormat *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QTextCharFormatC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT15QTextCharFormatC1Ev via GOT/IAT indirection
    return _ZN2QT15QTextCharFormatC1Ev(/* forwarded args */);
}

