// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1187C0
// Name:            ._ZN2QT10QByteArray6resizeEx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1187C0 jmp     cs:_ZN2QT10QByteArray6resizeEx_ptr
//
// Resolved target: _ZN2QT10QByteArray6resizeEx
// Target address:  0x8D7CC8
// GOT/IAT slot:    0x8A3080
// Slot symbol:     _ZN2QT10QByteArray6resizeEx_ptr
// Target type:     _QWORD(QT::QByteArray *__hidden this, __int64)
// ============================================================

/* see target sig */ ._ZN2QT10QByteArray6resizeEx(/* see target signature */)
{
    // Tail-call to _ZN2QT10QByteArray6resizeEx via GOT/IAT indirection
    return _ZN2QT10QByteArray6resizeEx(/* forwarded args */);
}

