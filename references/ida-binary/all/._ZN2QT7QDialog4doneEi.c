// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118B70
// Name:            ._ZN2QT7QDialog4doneEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118B70 jmp     cs:_ZN2QT7QDialog4doneEi_ptr
//
// Resolved target: _ZN2QT7QDialog4doneEi
// Target address:  0x8D7F00
// GOT/IAT slot:    0x8A3258
// Slot symbol:     _ZN2QT7QDialog4doneEi_ptr
// Target type:     _QWORD(QT::QDialog *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QDialog4doneEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QDialog4doneEi via GOT/IAT indirection
    return _ZN2QT7QDialog4doneEi(/* forwarded args */);
}

