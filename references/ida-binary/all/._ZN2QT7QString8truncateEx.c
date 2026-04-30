// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114200
// Name:            ._ZN2QT7QString8truncateEx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114200 jmp     cs:_ZN2QT7QString8truncateEx_ptr
//
// Resolved target: _ZN2QT7QString8truncateEx
// Target address:  0x8D5090
// GOT/IAT slot:    0x8A0DA0
// Slot symbol:     _ZN2QT7QString8truncateEx_ptr
// Target type:     _QWORD(QT::QString *__hidden this, __int64)
// ============================================================

/* see target sig */ ._ZN2QT7QString8truncateEx(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString8truncateEx via GOT/IAT indirection
    return _ZN2QT7QString8truncateEx(/* forwarded args */);
}

