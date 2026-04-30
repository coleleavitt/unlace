// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A3F0
// Name:            ._ZNK2QT9QFontInfo6weightEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A3F0 jmp     cs:_ZNK2QT9QFontInfo6weightEv_ptr
//
// Resolved target: _ZNK2QT9QFontInfo6weightEv
// Target address:  0x8D8E98
// GOT/IAT slot:    0x8A3E98
// Slot symbol:     _ZNK2QT9QFontInfo6weightEv_ptr
// Target type:     _QWORD(QT::QFontInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFontInfo6weightEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFontInfo6weightEv via GOT/IAT indirection
    return _ZNK2QT9QFontInfo6weightEv(/* forwarded args */);
}

