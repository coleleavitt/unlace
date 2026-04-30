// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A5C0
// Name:            ._ZNK2QT9QFontInfo6italicEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A5C0 jmp     cs:_ZNK2QT9QFontInfo6italicEv_ptr
//
// Resolved target: _ZNK2QT9QFontInfo6italicEv
// Target address:  0x8D8FB8
// GOT/IAT slot:    0x8A3F80
// Slot symbol:     _ZNK2QT9QFontInfo6italicEv_ptr
// Target type:     _QWORD(QT::QFontInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFontInfo6italicEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFontInfo6italicEv via GOT/IAT indirection
    return _ZNK2QT9QFontInfo6italicEv(/* forwarded args */);
}

