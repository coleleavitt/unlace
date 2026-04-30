// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114C30
// Name:            ._ZN2QT9QLineEdit18setPlaceholderTextERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114C30 jmp     cs:_ZN2QT9QLineEdit18setPlaceholderTextERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT9QLineEdit18setPlaceholderTextERKNS_7QStringE
// Target address:  0x8D5788
// GOT/IAT slot:    0x8A12B8
// Slot symbol:     _ZN2QT9QLineEdit18setPlaceholderTextERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit18setPlaceholderTextERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit18setPlaceholderTextERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT9QLineEdit18setPlaceholderTextERKNS_7QStringE(/* forwarded args */);
}

