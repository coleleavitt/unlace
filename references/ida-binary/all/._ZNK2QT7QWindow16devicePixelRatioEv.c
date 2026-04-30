// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111A30
// Name:            ._ZNK2QT7QWindow16devicePixelRatioEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111A30 jmp     cs:_ZNK2QT7QWindow16devicePixelRatioEv_ptr
//
// Resolved target: _ZNK2QT7QWindow16devicePixelRatioEv
// Target address:  0x8D3730
// GOT/IAT slot:    0x89F9B8
// Slot symbol:     _ZNK2QT7QWindow16devicePixelRatioEv_ptr
// Target type:     _QWORD(QT::QWindow *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWindow16devicePixelRatioEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWindow16devicePixelRatioEv via GOT/IAT indirection
    return _ZNK2QT7QWindow16devicePixelRatioEv(/* forwarded args */);
}

