// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116FA0
// Name:            ._ZN2QT18QRegularExpressionC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116FA0 jmp     cs:_ZN2QT18QRegularExpressionC1Ev_ptr
//
// Resolved target: _ZN2QT18QRegularExpressionC1Ev
// Target address:  0x8D6D90
// GOT/IAT slot:    0x8A2470
// Slot symbol:     _ZN2QT18QRegularExpressionC1Ev_ptr
// Target type:     _QWORD(QT::QRegularExpression *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QRegularExpressionC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT18QRegularExpressionC1Ev via GOT/IAT indirection
    return _ZN2QT18QRegularExpressionC1Ev(/* forwarded args */);
}

