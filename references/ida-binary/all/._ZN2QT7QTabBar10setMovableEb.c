// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114170
// Name:            ._ZN2QT7QTabBar10setMovableEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114170 jmp     cs:_ZN2QT7QTabBar10setMovableEb_ptr
//
// Resolved target: _ZN2QT7QTabBar10setMovableEb
// Target address:  0x8D5038
// GOT/IAT slot:    0x8A0D58
// Slot symbol:     _ZN2QT7QTabBar10setMovableEb_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar10setMovableEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar10setMovableEb via GOT/IAT indirection
    return _ZN2QT7QTabBar10setMovableEb(/* forwarded args */);
}

