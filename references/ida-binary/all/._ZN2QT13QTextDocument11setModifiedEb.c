// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A3B0
// Name:            ._ZN2QT13QTextDocument11setModifiedEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A3B0 jmp     cs:_ZN2QT13QTextDocument11setModifiedEb_ptr
//
// Resolved target: _ZN2QT13QTextDocument11setModifiedEb
// Target address:  0x8D8E70
// GOT/IAT slot:    0x8A3E78
// Slot symbol:     _ZN2QT13QTextDocument11setModifiedEb_ptr
// Target type:     _QWORD(QT::QTextDocument *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT13QTextDocument11setModifiedEb(/* see target signature */)
{
    // Tail-call to _ZN2QT13QTextDocument11setModifiedEb via GOT/IAT indirection
    return _ZN2QT13QTextDocument11setModifiedEb(/* forwarded args */);
}

