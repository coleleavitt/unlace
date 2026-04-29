// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16AD0
// Name:            ._ZNK2QT6QRectF10normalizedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16AD0 jmp     cs:off_4F550
//
// Resolved target: _ZNK2QT6QRectF10normalizedEv
// Target address:  0x50780
// GOT/IAT slot:    0x4F550
// Slot symbol:     off_4F550
// Target type:     _QWORD(QT::QRectF *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QRectF10normalizedEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QRectF10normalizedEv via GOT/IAT indirection
    return _ZNK2QT6QRectF10normalizedEv(/* forwarded args */);
}

