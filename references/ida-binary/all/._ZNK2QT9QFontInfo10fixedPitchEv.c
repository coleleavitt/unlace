// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1156E0
// Name:            ._ZNK2QT9QFontInfo10fixedPitchEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1156E0 jmp     cs:_ZNK2QT9QFontInfo10fixedPitchEv_ptr
//
// Resolved target: _ZNK2QT9QFontInfo10fixedPitchEv
// Target address:  0x8D5DF8
// GOT/IAT slot:    0x8A1810
// Slot symbol:     _ZNK2QT9QFontInfo10fixedPitchEv_ptr
// Target type:     _QWORD(QT::QFontInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFontInfo10fixedPitchEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFontInfo10fixedPitchEv via GOT/IAT indirection
    return _ZNK2QT9QFontInfo10fixedPitchEv(/* forwarded args */);
}

