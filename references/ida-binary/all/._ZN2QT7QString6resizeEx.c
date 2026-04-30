// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B8A0
// Name:            ._ZN2QT7QString6resizeEx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B8A0 jmp     cs:_ZN2QT7QString6resizeEx_ptr
//
// Resolved target: _ZN2QT7QString6resizeEx
// Target address:  0x8D9BA8
// GOT/IAT slot:    0x8A48F0
// Slot symbol:     _ZN2QT7QString6resizeEx_ptr
// Target type:     _QWORD(QT::QString *__hidden this, __int64)
// ============================================================

/* see target sig */ ._ZN2QT7QString6resizeEx(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString6resizeEx via GOT/IAT indirection
    return _ZN2QT7QString6resizeEx(/* forwarded args */);
}

