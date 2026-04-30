// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1156A0
// Name:            ._ZN2QT7QString6appendENS_5QCharE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1156A0 jmp     cs:_ZN2QT7QString6appendENS_5QCharE_ptr
//
// Resolved target: _ZN2QT7QString6appendENS_5QCharE
// Target address:  0x8D5DD8
// GOT/IAT slot:    0x8A17F0
// Slot symbol:     _ZN2QT7QString6appendENS_5QCharE_ptr
// Target type:     _QWORD __high(QT::QChar)
// ============================================================

/* see target sig */ ._ZN2QT7QString6appendENS_5QCharE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString6appendENS_5QCharE via GOT/IAT indirection
    return _ZN2QT7QString6appendENS_5QCharE(/* forwarded args */);
}

