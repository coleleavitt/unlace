// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117B90
// Name:            ._ZN2QT18QRegularExpressionC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117B90 jmp     cs:_ZN2QT18QRegularExpressionC1ERKS0__ptr
//
// Resolved target: _ZN2QT18QRegularExpressionC1ERKS0_
// Target address:  0x8D7530
// GOT/IAT slot:    0x8A2A68
// Slot symbol:     _ZN2QT18QRegularExpressionC1ERKS0__ptr
// Target type:     _QWORD(QT::QRegularExpression *__hidden this, const QT::QRegularExpression *)
// ============================================================

/* see target sig */ ._ZN2QT18QRegularExpressionC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT18QRegularExpressionC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT18QRegularExpressionC1ERKS0_(/* forwarded args */);
}

