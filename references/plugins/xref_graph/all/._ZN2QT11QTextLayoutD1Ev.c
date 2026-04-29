// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16BE0
// Name:            ._ZN2QT11QTextLayoutD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16BE0 jmp     cs:off_4F5D8
//
// Resolved target: _ZN2QT11QTextLayoutD1Ev
// Target address:  0x50848
// GOT/IAT slot:    0x4F5D8
// Slot symbol:     off_4F5D8
// Target type:     void(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayoutD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayoutD1Ev via GOT/IAT indirection
    return _ZN2QT11QTextLayoutD1Ev(/* forwarded args */);
}

