// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119A40
// Name:            ._ZNK2QT9QTextLine15naturalTextRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119A40 jmp     cs:_ZNK2QT9QTextLine15naturalTextRectEv_ptr
//
// Resolved target: _ZNK2QT9QTextLine15naturalTextRectEv
// Target address:  0x8D8880
// GOT/IAT slot:    0x8A39C0
// Slot symbol:     _ZNK2QT9QTextLine15naturalTextRectEv_ptr
// Target type:     _QWORD(QT::QTextLine *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTextLine15naturalTextRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTextLine15naturalTextRectEv via GOT/IAT indirection
    return _ZNK2QT9QTextLine15naturalTextRectEv(/* forwarded args */);
}

