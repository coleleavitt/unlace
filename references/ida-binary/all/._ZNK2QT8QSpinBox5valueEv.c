// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1177E0
// Name:            ._ZNK2QT8QSpinBox5valueEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1177E0 jmp     cs:_ZNK2QT8QSpinBox5valueEv_ptr
//
// Resolved target: _ZNK2QT8QSpinBox5valueEv
// Target address:  0x8D72E8
// GOT/IAT slot:    0x8A2890
// Slot symbol:     _ZNK2QT8QSpinBox5valueEv_ptr
// Target type:     _QWORD(QT::QSpinBox *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QSpinBox5valueEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QSpinBox5valueEv via GOT/IAT indirection
    return _ZNK2QT8QSpinBox5valueEv(/* forwarded args */);
}

