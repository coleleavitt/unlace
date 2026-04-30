// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111070
// Name:            ._ZNK2QT8QPrinter7isValidEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111070 jmp     cs:_ZNK2QT8QPrinter7isValidEv_ptr
//
// Resolved target: _ZNK2QT8QPrinter7isValidEv
// Target address:  0x8D30C8
// GOT/IAT slot:    0x89F4D8
// Slot symbol:     _ZNK2QT8QPrinter7isValidEv_ptr
// Target type:     _QWORD(QT::QPrinter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QPrinter7isValidEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QPrinter7isValidEv via GOT/IAT indirection
    return _ZNK2QT8QPrinter7isValidEv(/* forwarded args */);
}

