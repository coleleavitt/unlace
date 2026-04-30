// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118260
// Name:            ._ZN2QT8QPainter6setPenERKNS_4QPenE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118260 jmp     cs:_ZN2QT8QPainter6setPenERKNS_4QPenE_ptr
//
// Resolved target: _ZN2QT8QPainter6setPenERKNS_4QPenE
// Target address:  0x8D7990
// GOT/IAT slot:    0x8A2DD0
// Slot symbol:     _ZN2QT8QPainter6setPenERKNS_4QPenE_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this, const QT::QPen *)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter6setPenERKNS_4QPenE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter6setPenERKNS_4QPenE via GOT/IAT indirection
    return _ZN2QT8QPainter6setPenERKNS_4QPenE(/* forwarded args */);
}

