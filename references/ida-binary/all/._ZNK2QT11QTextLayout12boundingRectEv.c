// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112820
// Name:            ._ZNK2QT11QTextLayout12boundingRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112820 jmp     cs:_ZNK2QT11QTextLayout12boundingRectEv_ptr
//
// Resolved target: _ZNK2QT11QTextLayout12boundingRectEv
// Target address:  0x8D4010
// GOT/IAT slot:    0x8A00B0
// Slot symbol:     _ZNK2QT11QTextLayout12boundingRectEv_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTextLayout12boundingRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTextLayout12boundingRectEv via GOT/IAT indirection
    return _ZNK2QT11QTextLayout12boundingRectEv(/* forwarded args */);
}

