// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117FC0
// Name:            ._ZNK2QT17QAbstractItemView18verticalScrollModeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117FC0 jmp     cs:_ZNK2QT17QAbstractItemView18verticalScrollModeEv_ptr
//
// Resolved target: _ZNK2QT17QAbstractItemView18verticalScrollModeEv
// Target address:  0x8D77F8
// GOT/IAT slot:    0x8A2C80
// Slot symbol:     _ZNK2QT17QAbstractItemView18verticalScrollModeEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAbstractItemView18verticalScrollModeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAbstractItemView18verticalScrollModeEv via GOT/IAT indirection
    return _ZNK2QT17QAbstractItemView18verticalScrollModeEv(/* forwarded args */);
}

