// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1176D0
// Name:            ._ZNK2QT19QAbstractProxyModel11sourceModelEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1176D0 jmp     cs:_ZNK2QT19QAbstractProxyModel11sourceModelEv_ptr
//
// Resolved target: _ZNK2QT19QAbstractProxyModel11sourceModelEv
// Target address:  0x8D7240
// GOT/IAT slot:    0x8A2808
// Slot symbol:     _ZNK2QT19QAbstractProxyModel11sourceModelEv_ptr
// Target type:     _QWORD(QT::QAbstractProxyModel *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT19QAbstractProxyModel11sourceModelEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT19QAbstractProxyModel11sourceModelEv via GOT/IAT indirection
    return _ZNK2QT19QAbstractProxyModel11sourceModelEv(/* forwarded args */);
}

