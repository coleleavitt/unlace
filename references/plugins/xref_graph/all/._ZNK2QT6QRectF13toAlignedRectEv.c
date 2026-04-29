// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16720
// Name:            ._ZNK2QT6QRectF13toAlignedRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16720 jmp     cs:off_4F378
//
// Resolved target: _ZNK2QT6QRectF13toAlignedRectEv
// Target address:  0x503C8
// GOT/IAT slot:    0x4F378
// Slot symbol:     off_4F378
// Target type:     _QWORD(QT::QRectF *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QRectF13toAlignedRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QRectF13toAlignedRectEv via GOT/IAT indirection
    return _ZNK2QT6QRectF13toAlignedRectEv(/* forwarded args */);
}

