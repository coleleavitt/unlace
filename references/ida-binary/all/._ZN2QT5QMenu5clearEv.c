// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1123C0
// Name:            ._ZN2QT5QMenu5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1123C0 jmp     cs:_ZN2QT5QMenu5clearEv_ptr
//
// Resolved target: _ZN2QT5QMenu5clearEv
// Target address:  0x8D3D28
// GOT/IAT slot:    0x89FE80
// Slot symbol:     _ZN2QT5QMenu5clearEv_ptr
// Target type:     _QWORD(QT::QMenu *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QMenu5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT5QMenu5clearEv via GOT/IAT indirection
    return _ZN2QT5QMenu5clearEv(/* forwarded args */);
}

