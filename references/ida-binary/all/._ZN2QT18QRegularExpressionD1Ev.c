// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112020
// Name:            ._ZN2QT18QRegularExpressionD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112020 jmp     cs:_ZN2QT18QRegularExpressionD1Ev_ptr
//
// Resolved target: _ZN2QT18QRegularExpressionD1Ev
// Target address:  0x8D3AE0
// GOT/IAT slot:    0x89FCB0
// Slot symbol:     _ZN2QT18QRegularExpressionD1Ev_ptr
// Target type:     void(QT::QRegularExpression *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QRegularExpressionD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT18QRegularExpressionD1Ev via GOT/IAT indirection
    return _ZN2QT18QRegularExpressionD1Ev(/* forwarded args */);
}

