// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1182B0
// Name:            ._ZNK2QT9QFontInfo6familyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1182B0 jmp     cs:_ZNK2QT9QFontInfo6familyEv_ptr
//
// Resolved target: _ZNK2QT9QFontInfo6familyEv
// Target address:  0x8D79C8
// GOT/IAT slot:    0x8A2DF8
// Slot symbol:     _ZNK2QT9QFontInfo6familyEv_ptr
// Target type:     _QWORD(QT::QFontInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFontInfo6familyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFontInfo6familyEv via GOT/IAT indirection
    return _ZNK2QT9QFontInfo6familyEv(/* forwarded args */);
}

