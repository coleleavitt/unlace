// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116D10
// Name:            ._ZN2QT11QTextOptionD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116D10 jmp     cs:_ZN2QT11QTextOptionD1Ev_ptr
//
// Resolved target: _ZN2QT11QTextOptionD1Ev
// Target address:  0x8D6C10
// GOT/IAT slot:    0x8A2328
// Slot symbol:     _ZN2QT11QTextOptionD1Ev_ptr
// Target type:     void(QT::QTextOption *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextOptionD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextOptionD1Ev via GOT/IAT indirection
    return _ZN2QT11QTextOptionD1Ev(/* forwarded args */);
}

