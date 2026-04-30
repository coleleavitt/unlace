// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112180
// Name:            ._ZN2QT9QCheckBoxD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112180 jmp     cs:_ZN2QT9QCheckBoxD2Ev_ptr
//
// Resolved target: _ZN2QT9QCheckBoxD2Ev
// Target address:  0x8D3BB8
// GOT/IAT slot:    0x89FD60
// Slot symbol:     _ZN2QT9QCheckBoxD2Ev_ptr
// Target type:     void(QT::QCheckBox *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QCheckBoxD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QCheckBoxD2Ev via GOT/IAT indirection
    return _ZN2QT9QCheckBoxD2Ev(/* forwarded args */);
}

