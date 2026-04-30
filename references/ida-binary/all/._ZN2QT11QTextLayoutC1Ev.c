// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B1F0
// Name:            ._ZN2QT11QTextLayoutC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B1F0 jmp     cs:_ZN2QT11QTextLayoutC1Ev_ptr
//
// Resolved target: _ZN2QT11QTextLayoutC1Ev
// Target address:  0x8D9740
// GOT/IAT slot:    0x8A4598
// Slot symbol:     _ZN2QT11QTextLayoutC1Ev_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayoutC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayoutC1Ev via GOT/IAT indirection
    return _ZN2QT11QTextLayoutC1Ev(/* forwarded args */);
}

