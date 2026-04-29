// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16700
// Name:            ._ZN2QT11QTextLayout9endLayoutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16700 jmp     cs:off_4F368
//
// Resolved target: _ZN2QT11QTextLayout9endLayoutEv
// Target address:  0x503B8
// GOT/IAT slot:    0x4F368
// Slot symbol:     off_4F368
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayout9endLayoutEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayout9endLayoutEv via GOT/IAT indirection
    return _ZN2QT11QTextLayout9endLayoutEv(/* forwarded args */);
}

