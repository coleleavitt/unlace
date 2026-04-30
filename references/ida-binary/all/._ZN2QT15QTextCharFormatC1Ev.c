// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1137B0
// Name:            ._ZN2QT15QTextCharFormatC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1137B0 jmp     cs:_ZN2QT15QTextCharFormatC1Ev_ptr
//
// Resolved target: _ZN2QT15QTextCharFormatC1Ev
// Target address:  0x8D4A10
// GOT/IAT slot:    0x8A0878
// Slot symbol:     _ZN2QT15QTextCharFormatC1Ev_ptr
// Target type:     _QWORD(QT::QTextCharFormat *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QTextCharFormatC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT15QTextCharFormatC1Ev via GOT/IAT indirection
    return _ZN2QT15QTextCharFormatC1Ev(/* forwarded args */);
}

