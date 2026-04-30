// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118960
// Name:            ._ZN2QT8QPainter6setPenERKNS_6QColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118960 jmp     cs:_ZN2QT8QPainter6setPenERKNS_6QColorE_ptr
//
// Resolved target: _ZN2QT8QPainter6setPenERKNS_6QColorE
// Target address:  0x8D7DC8
// GOT/IAT slot:    0x8A3150
// Slot symbol:     _ZN2QT8QPainter6setPenERKNS_6QColorE_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this, const QT::QColor *)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter6setPenERKNS_6QColorE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter6setPenERKNS_6QColorE via GOT/IAT indirection
    return _ZN2QT8QPainter6setPenERKNS_6QColorE(/* forwarded args */);
}

