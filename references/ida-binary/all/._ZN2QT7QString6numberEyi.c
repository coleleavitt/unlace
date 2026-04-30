// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AF30
// Name:            ._ZN2QT7QString6numberEyi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AF30 jmp     cs:_ZN2QT7QString6numberEyi_ptr
//
// Resolved target: _ZN2QT7QString6numberEyi
// Target address:  0x8D95B8
// GOT/IAT slot:    0x8A4438
// Slot symbol:     _ZN2QT7QString6numberEyi_ptr
// Target type:     _QWORD(QT::QString *__hidden this, unsigned __int64, int)
// ============================================================

/* see target sig */ ._ZN2QT7QString6numberEyi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString6numberEyi via GOT/IAT indirection
    return _ZN2QT7QString6numberEyi(/* forwarded args */);
}

