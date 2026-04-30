// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1126D0
// Name:            ._ZN2QT7QTabBar7moveTabEii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1126D0 jmp     cs:_ZN2QT7QTabBar7moveTabEii_ptr
//
// Resolved target: _ZN2QT7QTabBar7moveTabEii
// Target address:  0x8D3F40
// GOT/IAT slot:    0x8A0008
// Slot symbol:     _ZN2QT7QTabBar7moveTabEii_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, int, int)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar7moveTabEii(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar7moveTabEii via GOT/IAT indirection
    return _ZN2QT7QTabBar7moveTabEii(/* forwarded args */);
}

