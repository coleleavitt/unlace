// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1157F0
// Name:            ._ZNK2QT9QFontInfo9styleHintEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1157F0 jmp     cs:_ZNK2QT9QFontInfo9styleHintEv_ptr
//
// Resolved target: _ZNK2QT9QFontInfo9styleHintEv
// Target address:  0x8D5EA8
// GOT/IAT slot:    0x8A1898
// Slot symbol:     _ZNK2QT9QFontInfo9styleHintEv_ptr
// Target type:     _QWORD(QT::QFontInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFontInfo9styleHintEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFontInfo9styleHintEv via GOT/IAT indirection
    return _ZNK2QT9QFontInfo9styleHintEv(/* forwarded args */);
}

