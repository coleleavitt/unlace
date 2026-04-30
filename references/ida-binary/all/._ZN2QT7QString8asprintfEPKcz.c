// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1112B0
// Name:            ._ZN2QT7QString8asprintfEPKcz
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1112B0 jmp     cs:_ZN2QT7QString8asprintfEPKcz_ptr
//
// Resolved target: _ZN2QT7QString8asprintfEPKcz
// Target address:  0x8D3220
// GOT/IAT slot:    0x89F5F8
// Slot symbol:     _ZN2QT7QString8asprintfEPKcz_ptr
// Target type:     _QWORD(QT::QString *__hidden this, const char *, ...)
// ============================================================

/* see target sig */ ._ZN2QT7QString8asprintfEPKcz(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString8asprintfEPKcz via GOT/IAT indirection
    return _ZN2QT7QString8asprintfEPKcz(/* forwarded args */);
}

