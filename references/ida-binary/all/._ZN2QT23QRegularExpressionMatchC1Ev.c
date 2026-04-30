// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1185F0
// Name:            ._ZN2QT23QRegularExpressionMatchC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1185F0 jmp     cs:_ZN2QT23QRegularExpressionMatchC1Ev_ptr
//
// Resolved target: _ZN2QT23QRegularExpressionMatchC1Ev
// Target address:  0x8D7BB8
// GOT/IAT slot:    0x8A2F98
// Slot symbol:     _ZN2QT23QRegularExpressionMatchC1Ev_ptr
// Target type:     _QWORD(QT::QRegularExpressionMatch *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT23QRegularExpressionMatchC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT23QRegularExpressionMatchC1Ev via GOT/IAT indirection
    return _ZN2QT23QRegularExpressionMatchC1Ev(/* forwarded args */);
}

