// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A6B0
// Name:            ._ZNK2QT7QDialog15minimumSizeHintEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A6B0 jmp     cs:_ZNK2QT7QDialog15minimumSizeHintEv_ptr
//
// Resolved target: _ZNK2QT7QDialog15minimumSizeHintEv
// Target address:  0x8D9048
// GOT/IAT slot:    0x8A3FF8
// Slot symbol:     _ZNK2QT7QDialog15minimumSizeHintEv_ptr
// Target type:     _QWORD(QT::QDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QDialog15minimumSizeHintEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QDialog15minimumSizeHintEv via GOT/IAT indirection
    return _ZNK2QT7QDialog15minimumSizeHintEv(/* forwarded args */);
}

