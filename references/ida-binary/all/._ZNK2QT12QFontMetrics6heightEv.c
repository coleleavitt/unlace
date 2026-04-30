// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A510
// Name:            ._ZNK2QT12QFontMetrics6heightEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A510 jmp     cs:_ZNK2QT12QFontMetrics6heightEv_ptr
//
// Resolved target: _ZNK2QT12QFontMetrics6heightEv
// Target address:  0x8D8F40
// GOT/IAT slot:    0x8A3F28
// Slot symbol:     _ZNK2QT12QFontMetrics6heightEv_ptr
// Target type:     _QWORD(QT::QFontMetrics *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QFontMetrics6heightEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QFontMetrics6heightEv via GOT/IAT indirection
    return _ZNK2QT12QFontMetrics6heightEv(/* forwarded args */);
}

