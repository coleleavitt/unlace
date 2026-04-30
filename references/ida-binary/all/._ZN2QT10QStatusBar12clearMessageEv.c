// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1118B0
// Name:            ._ZN2QT10QStatusBar12clearMessageEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1118B0 jmp     cs:_ZN2QT10QStatusBar12clearMessageEv_ptr
//
// Resolved target: _ZN2QT10QStatusBar12clearMessageEv
// Target address:  0x8D3638
// GOT/IAT slot:    0x89F8F8
// Slot symbol:     _ZN2QT10QStatusBar12clearMessageEv_ptr
// Target type:     _QWORD(QT::QStatusBar *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT10QStatusBar12clearMessageEv(/* see target signature */)
{
    // Tail-call to _ZN2QT10QStatusBar12clearMessageEv via GOT/IAT indirection
    return _ZN2QT10QStatusBar12clearMessageEv(/* forwarded args */);
}

