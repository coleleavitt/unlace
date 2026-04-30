// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1174B0
// Name:            ._ZNK2QT11QFontDialog11currentFontEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1174B0 jmp     cs:_ZNK2QT11QFontDialog11currentFontEv_ptr
//
// Resolved target: _ZNK2QT11QFontDialog11currentFontEv
// Target address:  0x8D70F0
// GOT/IAT slot:    0x8A26F8
// Slot symbol:     _ZNK2QT11QFontDialog11currentFontEv_ptr
// Target type:     _QWORD(QT::QFontDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QFontDialog11currentFontEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QFontDialog11currentFontEv via GOT/IAT indirection
    return _ZNK2QT11QFontDialog11currentFontEv(/* forwarded args */);
}

