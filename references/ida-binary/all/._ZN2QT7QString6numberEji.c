// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A860
// Name:            ._ZN2QT7QString6numberEji
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A860 jmp     cs:_ZN2QT7QString6numberEji_ptr
//
// Resolved target: _ZN2QT7QString6numberEji
// Target address:  0x8D9190
// GOT/IAT slot:    0x8A40D0
// Slot symbol:     _ZN2QT7QString6numberEji_ptr
// Target type:     _QWORD(QT::QString *__hidden this, unsigned int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QString6numberEji(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString6numberEji via GOT/IAT indirection
    return _ZN2QT7QString6numberEji(/* forwarded args */);
}

