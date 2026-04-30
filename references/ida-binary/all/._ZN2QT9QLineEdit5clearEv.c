// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C80
// Name:            ._ZN2QT9QLineEdit5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C80 jmp     cs:_ZN2QT9QLineEdit5clearEv_ptr
//
// Resolved target: _ZN2QT9QLineEdit5clearEv
// Target address:  0x8D75C8
// GOT/IAT slot:    0x8A2AE0
// Slot symbol:     _ZN2QT9QLineEdit5clearEv_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit5clearEv via GOT/IAT indirection
    return _ZN2QT9QLineEdit5clearEv(/* forwarded args */);
}

