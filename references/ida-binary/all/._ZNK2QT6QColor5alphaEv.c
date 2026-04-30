// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1186D0
// Name:            ._ZNK2QT6QColor5alphaEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1186D0 jmp     cs:_ZNK2QT6QColor5alphaEv_ptr
//
// Resolved target: _ZNK2QT6QColor5alphaEv
// Target address:  0x8D7C30
// GOT/IAT slot:    0x8A3008
// Slot symbol:     _ZNK2QT6QColor5alphaEv_ptr
// Target type:     _QWORD(QT::QColor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor5alphaEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor5alphaEv via GOT/IAT indirection
    return _ZNK2QT6QColor5alphaEv(/* forwarded args */);
}

