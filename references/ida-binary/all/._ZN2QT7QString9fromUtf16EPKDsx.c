// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1123E0
// Name:            ._ZN2QT7QString9fromUtf16EPKDsx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1123E0 jmp     cs:_ZN2QT7QString9fromUtf16EPKDsx_ptr
//
// Resolved target: _ZN2QT7QString9fromUtf16EPKDsx
// Target address:  0x8D3D40
// GOT/IAT slot:    0x89FE90
// Slot symbol:     _ZN2QT7QString9fromUtf16EPKDsx_ptr
// Target type:     _QWORD(QT::QString *__hidden this, const char16_t *, __int64)
// ============================================================

/* see target sig */ ._ZN2QT7QString9fromUtf16EPKDsx(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString9fromUtf16EPKDsx via GOT/IAT indirection
    return _ZN2QT7QString9fromUtf16EPKDsx(/* forwarded args */);
}

