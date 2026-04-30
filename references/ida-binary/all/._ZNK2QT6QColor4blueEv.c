// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E30
// Name:            ._ZNK2QT6QColor4blueEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E30 jmp     cs:_ZNK2QT6QColor4blueEv_ptr
//
// Resolved target: _ZNK2QT6QColor4blueEv
// Target address:  0x8D58C0
// GOT/IAT slot:    0x8A13B8
// Slot symbol:     _ZNK2QT6QColor4blueEv_ptr
// Target type:     _QWORD(QT::QColor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor4blueEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor4blueEv via GOT/IAT indirection
    return _ZNK2QT6QColor4blueEv(/* forwarded args */);
}

