// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1161A0
// Name:            ._ZN2QT11QTextStreamD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1161A0 jmp     cs:_ZN2QT11QTextStreamD1Ev_ptr
//
// Resolved target: _ZN2QT11QTextStreamD1Ev
// Target address:  0x8D64D8
// GOT/IAT slot:    0x8A1D70
// Slot symbol:     _ZN2QT11QTextStreamD1Ev_ptr
// Target type:     void(QT::QTextStream *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextStreamD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextStreamD1Ev via GOT/IAT indirection
    return _ZN2QT11QTextStreamD1Ev(/* forwarded args */);
}

