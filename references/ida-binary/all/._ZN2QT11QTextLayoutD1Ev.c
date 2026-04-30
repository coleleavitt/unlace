// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116720
// Name:            ._ZN2QT11QTextLayoutD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116720 jmp     cs:_ZN2QT11QTextLayoutD1Ev_ptr
//
// Resolved target: _ZN2QT11QTextLayoutD1Ev
// Target address:  0x8D6840
// GOT/IAT slot:    0x8A2030
// Slot symbol:     _ZN2QT11QTextLayoutD1Ev_ptr
// Target type:     void(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayoutD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayoutD1Ev via GOT/IAT indirection
    return _ZN2QT11QTextLayoutD1Ev(/* forwarded args */);
}

