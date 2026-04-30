// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113210
// Name:            ._ZN2QT7QString6numberEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113210 jmp     cs:_ZN2QT7QString6numberEii_ptr
//
// Resolved target: _ZN2QT7QString6numberEii
// Target address:  0x8D4678
// GOT/IAT slot:    0x8A05A8
// Slot symbol:     _ZN2QT7QString6numberEii_ptr
// Target type:     _QWORD(QT::QString *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QString6numberEii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString6numberEii via GOT/IAT indirection
    return _ZN2QT7QString6numberEii(/* forwarded args */);
}

