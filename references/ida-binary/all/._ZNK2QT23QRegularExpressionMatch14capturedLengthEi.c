// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112980
// Name:            ._ZNK2QT23QRegularExpressionMatch14capturedLengthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112980 jmp     cs:_ZNK2QT23QRegularExpressionMatch14capturedLengthEi_ptr
//
// Resolved target: _ZNK2QT23QRegularExpressionMatch14capturedLengthEi
// Target address:  0x8D40E0
// GOT/IAT slot:    0x8A0160
// Slot symbol:     _ZNK2QT23QRegularExpressionMatch14capturedLengthEi_ptr
// Target type:     _QWORD(QT::QRegularExpressionMatch *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT23QRegularExpressionMatch14capturedLengthEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT23QRegularExpressionMatch14capturedLengthEi via GOT/IAT indirection
    return _ZNK2QT23QRegularExpressionMatch14capturedLengthEi(/* forwarded args */);
}

