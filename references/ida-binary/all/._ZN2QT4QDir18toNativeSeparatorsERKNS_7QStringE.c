// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119E10
// Name:            ._ZN2QT4QDir18toNativeSeparatorsERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119E10 jmp     cs:_ZN2QT4QDir18toNativeSeparatorsERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT4QDir18toNativeSeparatorsERKNS_7QStringE
// Target address:  0x8D8AA8
// GOT/IAT slot:    0x8A3BA8
// Slot symbol:     _ZN2QT4QDir18toNativeSeparatorsERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QDir *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT4QDir18toNativeSeparatorsERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT4QDir18toNativeSeparatorsERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT4QDir18toNativeSeparatorsERKNS_7QStringE(/* forwarded args */);
}

