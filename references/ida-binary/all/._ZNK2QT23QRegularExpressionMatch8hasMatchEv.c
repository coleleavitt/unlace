// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A90
// Name:            ._ZNK2QT23QRegularExpressionMatch8hasMatchEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A90 jmp     cs:_ZNK2QT23QRegularExpressionMatch8hasMatchEv_ptr
//
// Resolved target: _ZNK2QT23QRegularExpressionMatch8hasMatchEv
// Target address:  0x8D4BE0
// GOT/IAT slot:    0x8A09E8
// Slot symbol:     _ZNK2QT23QRegularExpressionMatch8hasMatchEv_ptr
// Target type:     _QWORD(QT::QRegularExpressionMatch *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT23QRegularExpressionMatch8hasMatchEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT23QRegularExpressionMatch8hasMatchEv via GOT/IAT indirection
    return _ZNK2QT23QRegularExpressionMatch8hasMatchEv(/* forwarded args */);
}

