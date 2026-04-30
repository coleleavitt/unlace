// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110D0
// Name:            ._ZN2QT11QTextOptionC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110D0 jmp     cs:_ZN2QT11QTextOptionC1Ev_ptr
//
// Resolved target: _ZN2QT11QTextOptionC1Ev
// Target address:  0x8D3100
// GOT/IAT slot:    0x89F508
// Slot symbol:     _ZN2QT11QTextOptionC1Ev_ptr
// Target type:     _QWORD(QT::QTextOption *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextOptionC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextOptionC1Ev via GOT/IAT indirection
    return _ZN2QT11QTextOptionC1Ev(/* forwarded args */);
}

