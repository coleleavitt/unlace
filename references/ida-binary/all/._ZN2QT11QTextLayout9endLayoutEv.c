// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113E60
// Name:            ._ZN2QT11QTextLayout9endLayoutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113E60 jmp     cs:_ZN2QT11QTextLayout9endLayoutEv_ptr
//
// Resolved target: _ZN2QT11QTextLayout9endLayoutEv
// Target address:  0x8D4E78
// GOT/IAT slot:    0x8A0BD0
// Slot symbol:     _ZN2QT11QTextLayout9endLayoutEv_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayout9endLayoutEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayout9endLayoutEv via GOT/IAT indirection
    return _ZN2QT11QTextLayout9endLayoutEv(/* forwarded args */);
}

