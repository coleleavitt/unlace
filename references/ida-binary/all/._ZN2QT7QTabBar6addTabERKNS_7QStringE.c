// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111E30
// Name:            ._ZN2QT7QTabBar6addTabERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111E30 jmp     cs:_ZN2QT7QTabBar6addTabERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT7QTabBar6addTabERKNS_7QStringE
// Target address:  0x8D39B8
// GOT/IAT slot:    0x89FBB8
// Slot symbol:     _ZN2QT7QTabBar6addTabERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar6addTabERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar6addTabERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT7QTabBar6addTabERKNS_7QStringE(/* forwarded args */);
}

