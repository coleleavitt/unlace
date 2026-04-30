// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115400
// Name:            ._ZNK2QT15QAbstractButton8shortcutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115400 jmp     cs:_ZNK2QT15QAbstractButton8shortcutEv_ptr
//
// Resolved target: _ZNK2QT15QAbstractButton8shortcutEv
// Target address:  0x8D5C58
// GOT/IAT slot:    0x8A16A0
// Slot symbol:     _ZNK2QT15QAbstractButton8shortcutEv_ptr
// Target type:     _QWORD(QT::QAbstractButton *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QAbstractButton8shortcutEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QAbstractButton8shortcutEv via GOT/IAT indirection
    return _ZNK2QT15QAbstractButton8shortcutEv(/* forwarded args */);
}

