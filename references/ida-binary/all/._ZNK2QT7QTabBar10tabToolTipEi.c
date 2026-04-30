// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B400
// Name:            ._ZNK2QT7QTabBar10tabToolTipEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B400 jmp     cs:_ZNK2QT7QTabBar10tabToolTipEi_ptr
//
// Resolved target: _ZNK2QT7QTabBar10tabToolTipEi
// Target address:  0x8D98D8
// GOT/IAT slot:    0x8A46A0
// Slot symbol:     _ZNK2QT7QTabBar10tabToolTipEi_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT7QTabBar10tabToolTipEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QTabBar10tabToolTipEi via GOT/IAT indirection
    return _ZNK2QT7QTabBar10tabToolTipEi(/* forwarded args */);
}

