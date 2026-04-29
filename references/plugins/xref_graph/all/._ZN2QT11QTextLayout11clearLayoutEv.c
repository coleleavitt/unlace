// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16630
// Name:            ._ZN2QT11QTextLayout11clearLayoutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16630 jmp     cs:off_4F300
//
// Resolved target: _ZN2QT11QTextLayout11clearLayoutEv
// Target address:  0x50308
// GOT/IAT slot:    0x4F300
// Slot symbol:     off_4F300
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayout11clearLayoutEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayout11clearLayoutEv via GOT/IAT indirection
    return _ZN2QT11QTextLayout11clearLayoutEv(/* forwarded args */);
}

