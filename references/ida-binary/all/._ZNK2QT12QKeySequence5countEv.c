// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ACC0
// Name:            ._ZNK2QT12QKeySequence5countEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ACC0 jmp     cs:_ZNK2QT12QKeySequence5countEv_ptr
//
// Resolved target: _ZNK2QT12QKeySequence5countEv
// Target address:  0x8D9440
// GOT/IAT slot:    0x8A4300
// Slot symbol:     _ZNK2QT12QKeySequence5countEv_ptr
// Target type:     _QWORD(QT::QKeySequence *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QKeySequence5countEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QKeySequence5countEv via GOT/IAT indirection
    return _ZNK2QT12QKeySequence5countEv(/* forwarded args */);
}

