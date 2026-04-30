// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113E50
// Name:            ._ZN2QT9QLineEdit9selectAllEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113E50 jmp     cs:_ZN2QT9QLineEdit9selectAllEv_ptr
//
// Resolved target: _ZN2QT9QLineEdit9selectAllEv
// Target address:  0x8D4E70
// GOT/IAT slot:    0x8A0BC8
// Slot symbol:     _ZN2QT9QLineEdit9selectAllEv_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit9selectAllEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit9selectAllEv via GOT/IAT indirection
    return _ZN2QT9QLineEdit9selectAllEv(/* forwarded args */);
}

