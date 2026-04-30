// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114920
// Name:            ._ZN2QT7QTabBar15setCurrentIndexEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114920 jmp     cs:_ZN2QT7QTabBar15setCurrentIndexEi_ptr
//
// Resolved target: _ZN2QT7QTabBar15setCurrentIndexEi
// Target address:  0x8D5568
// GOT/IAT slot:    0x8A1130
// Slot symbol:     _ZN2QT7QTabBar15setCurrentIndexEi_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar15setCurrentIndexEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar15setCurrentIndexEi via GOT/IAT indirection
    return _ZN2QT7QTabBar15setCurrentIndexEi(/* forwarded args */);
}

