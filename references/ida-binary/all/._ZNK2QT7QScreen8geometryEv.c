// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1135A0
// Name:            ._ZNK2QT7QScreen8geometryEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1135A0 jmp     cs:_ZNK2QT7QScreen8geometryEv_ptr
//
// Resolved target: _ZNK2QT7QScreen8geometryEv
// Target address:  0x8D48C0
// GOT/IAT slot:    0x8A0770
// Slot symbol:     _ZNK2QT7QScreen8geometryEv_ptr
// Target type:     _QWORD(QT::QScreen *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QScreen8geometryEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QScreen8geometryEv via GOT/IAT indirection
    return _ZNK2QT7QScreen8geometryEv(/* forwarded args */);
}

