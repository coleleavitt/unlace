// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16900
// Name:            ._ZN2QT8QPainter8fillRectERKNS_6QRectFERKNS_6QColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16900 jmp     cs:off_4F468
//
// Resolved target: _ZN2QT8QPainter8fillRectERKNS_6QRectFERKNS_6QColorE
// Target address:  0x505C0
// GOT/IAT slot:    0x4F468
// Slot symbol:     off_4F468
// Target type:     _QWORD(QT::QPainter *__hidden this, const QT::QRectF *, const QT::QColor *)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter8fillRectERKNS_6QRectFERKNS_6QColorE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter8fillRectERKNS_6QRectFERKNS_6QColorE via GOT/IAT indirection
    return _ZN2QT8QPainter8fillRectERKNS_6QRectFERKNS_6QColorE(/* forwarded args */);
}

