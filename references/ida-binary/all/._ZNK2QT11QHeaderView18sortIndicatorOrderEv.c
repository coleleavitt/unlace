// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1191B0
// Name:            ._ZNK2QT11QHeaderView18sortIndicatorOrderEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1191B0 jmp     cs:_ZNK2QT11QHeaderView18sortIndicatorOrderEv_ptr
//
// Resolved target: _ZNK2QT11QHeaderView18sortIndicatorOrderEv
// Target address:  0x8D82E0
// GOT/IAT slot:    0x8A3578
// Slot symbol:     _ZNK2QT11QHeaderView18sortIndicatorOrderEv_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView18sortIndicatorOrderEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView18sortIndicatorOrderEv via GOT/IAT indirection
    return _ZNK2QT11QHeaderView18sortIndicatorOrderEv(/* forwarded args */);
}

