// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B080
// Name:            ._ZN2QT9QComboBox5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B080 jmp     cs:_ZN2QT9QComboBox5clearEv_ptr
//
// Resolved target: _ZN2QT9QComboBox5clearEv
// Target address:  0x8D9678
// GOT/IAT slot:    0x8A44E0
// Slot symbol:     _ZN2QT9QComboBox5clearEv_ptr
// Target type:     _QWORD(QT::QComboBox *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QComboBox5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QComboBox5clearEv via GOT/IAT indirection
    return _ZN2QT9QComboBox5clearEv(/* forwarded args */);
}

