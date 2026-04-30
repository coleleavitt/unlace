// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114F50
// Name:            ._ZN2QT10QStatusBar18setSizeGripEnabledEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114F50 jmp     cs:_ZN2QT10QStatusBar18setSizeGripEnabledEb_ptr
//
// Resolved target: _ZN2QT10QStatusBar18setSizeGripEnabledEb
// Target address:  0x8D5968
// GOT/IAT slot:    0x8A1448
// Slot symbol:     _ZN2QT10QStatusBar18setSizeGripEnabledEb_ptr
// Target type:     _QWORD(QT::QStatusBar *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT10QStatusBar18setSizeGripEnabledEb(/* see target signature */)
{
    // Tail-call to _ZN2QT10QStatusBar18setSizeGripEnabledEb via GOT/IAT indirection
    return _ZN2QT10QStatusBar18setSizeGripEnabledEb(/* forwarded args */);
}

