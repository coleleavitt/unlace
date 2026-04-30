// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118C70
// Name:            ._ZNK2QT9QFontInfo9pointSizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118C70 jmp     cs:_ZNK2QT9QFontInfo9pointSizeEv_ptr
//
// Resolved target: _ZNK2QT9QFontInfo9pointSizeEv
// Target address:  0x8D7F88
// GOT/IAT slot:    0x8A32D8
// Slot symbol:     _ZNK2QT9QFontInfo9pointSizeEv_ptr
// Target type:     _QWORD(QT::QFontInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFontInfo9pointSizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFontInfo9pointSizeEv via GOT/IAT indirection
    return _ZNK2QT9QFontInfo9pointSizeEv(/* forwarded args */);
}

