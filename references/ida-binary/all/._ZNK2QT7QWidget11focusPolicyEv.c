// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118880
// Name:            ._ZNK2QT7QWidget11focusPolicyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118880 jmp     cs:_ZNK2QT7QWidget11focusPolicyEv_ptr
//
// Resolved target: _ZNK2QT7QWidget11focusPolicyEv
// Target address:  0x8D7D38
// GOT/IAT slot:    0x8A30E0
// Slot symbol:     _ZNK2QT7QWidget11focusPolicyEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QWidget11focusPolicyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QWidget11focusPolicyEv via GOT/IAT indirection
    return _ZNK2QT7QWidget11focusPolicyEv(/* forwarded args */);
}

