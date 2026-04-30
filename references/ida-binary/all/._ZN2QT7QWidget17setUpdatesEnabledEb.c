// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AA10
// Name:            ._ZN2QT7QWidget17setUpdatesEnabledEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AA10 jmp     cs:_ZN2QT7QWidget17setUpdatesEnabledEb_ptr
//
// Resolved target: _ZN2QT7QWidget17setUpdatesEnabledEb
// Target address:  0x8D92A8
// GOT/IAT slot:    0x8A41A8
// Slot symbol:     _ZN2QT7QWidget17setUpdatesEnabledEb_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget17setUpdatesEnabledEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget17setUpdatesEnabledEb via GOT/IAT indirection
    return _ZN2QT7QWidget17setUpdatesEnabledEb(/* forwarded args */);
}

