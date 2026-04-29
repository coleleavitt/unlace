// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16690
// Name:            ._ZN2QT11QTextLayout11beginLayoutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16690 jmp     cs:off_4F330
//
// Resolved target: _ZN2QT11QTextLayout11beginLayoutEv
// Target address:  0x50358
// GOT/IAT slot:    0x4F330
// Slot symbol:     off_4F330
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayout11beginLayoutEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayout11beginLayoutEv via GOT/IAT indirection
    return _ZN2QT11QTextLayout11beginLayoutEv(/* forwarded args */);
}

