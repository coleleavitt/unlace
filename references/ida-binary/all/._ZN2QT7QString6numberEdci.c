// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114B10
// Name:            ._ZN2QT7QString6numberEdci
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114B10 jmp     cs:_ZN2QT7QString6numberEdci_ptr
//
// Resolved target: _ZN2QT7QString6numberEdci
// Target address:  0x8D56C8
// GOT/IAT slot:    0x8A1228
// Slot symbol:     _ZN2QT7QString6numberEdci_ptr
// Target type:     _QWORD(QT::QString *__hidden this, double, char, int)
// ============================================================

/* see target sig */ ._ZN2QT7QString6numberEdci(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString6numberEdci via GOT/IAT indirection
    return _ZN2QT7QString6numberEdci(/* forwarded args */);
}

