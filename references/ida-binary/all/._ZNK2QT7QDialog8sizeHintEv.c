// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1131E0
// Name:            ._ZNK2QT7QDialog8sizeHintEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1131E0 jmp     cs:_ZNK2QT7QDialog8sizeHintEv_ptr
//
// Resolved target: _ZNK2QT7QDialog8sizeHintEv
// Target address:  0x8D4658
// GOT/IAT slot:    0x8A0590
// Slot symbol:     _ZNK2QT7QDialog8sizeHintEv_ptr
// Target type:     _QWORD(QT::QDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QDialog8sizeHintEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QDialog8sizeHintEv via GOT/IAT indirection
    return _ZNK2QT7QDialog8sizeHintEv(/* forwarded args */);
}

