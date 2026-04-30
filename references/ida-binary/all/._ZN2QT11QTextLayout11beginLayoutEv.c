// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113AD0
// Name:            ._ZN2QT11QTextLayout11beginLayoutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113AD0 jmp     cs:_ZN2QT11QTextLayout11beginLayoutEv_ptr
//
// Resolved target: _ZN2QT11QTextLayout11beginLayoutEv
// Target address:  0x8D4C10
// GOT/IAT slot:    0x8A0A08
// Slot symbol:     _ZN2QT11QTextLayout11beginLayoutEv_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayout11beginLayoutEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayout11beginLayoutEv via GOT/IAT indirection
    return _ZN2QT11QTextLayout11beginLayoutEv(/* forwarded args */);
}

