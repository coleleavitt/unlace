// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118C50
// Name:            ._ZN2QT7QDialog8setModalEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118C50 jmp     cs:_ZN2QT7QDialog8setModalEb_ptr
//
// Resolved target: _ZN2QT7QDialog8setModalEb
// Target address:  0x8D7F70
// GOT/IAT slot:    0x8A32C8
// Slot symbol:     _ZN2QT7QDialog8setModalEb_ptr
// Target type:     _QWORD(QT::QDialog *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QDialog8setModalEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QDialog8setModalEb via GOT/IAT indirection
    return _ZN2QT7QDialog8setModalEb(/* forwarded args */);
}

