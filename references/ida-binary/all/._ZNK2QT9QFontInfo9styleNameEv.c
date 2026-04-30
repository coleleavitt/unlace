// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118BC0
// Name:            ._ZNK2QT9QFontInfo9styleNameEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118BC0 jmp     cs:_ZNK2QT9QFontInfo9styleNameEv_ptr
//
// Resolved target: _ZNK2QT9QFontInfo9styleNameEv
// Target address:  0x8D7F28
// GOT/IAT slot:    0x8A3280
// Slot symbol:     _ZNK2QT9QFontInfo9styleNameEv_ptr
// Target type:     _QWORD(QT::QFontInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFontInfo9styleNameEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFontInfo9styleNameEv via GOT/IAT indirection
    return _ZNK2QT9QFontInfo9styleNameEv(/* forwarded args */);
}

