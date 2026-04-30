// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111CD0
// Name:            ._ZNK2QT6QColor4rgbaEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111CD0 jmp     cs:_ZNK2QT6QColor4rgbaEv_ptr
//
// Resolved target: _ZNK2QT6QColor4rgbaEv
// Target address:  0x8D38D0
// GOT/IAT slot:    0x89FB08
// Slot symbol:     _ZNK2QT6QColor4rgbaEv_ptr
// Target type:     _QWORD(QT::QColor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor4rgbaEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor4rgbaEv via GOT/IAT indirection
    return _ZNK2QT6QColor4rgbaEv(/* forwarded args */);
}

