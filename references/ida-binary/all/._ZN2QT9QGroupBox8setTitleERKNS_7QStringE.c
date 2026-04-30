// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115370
// Name:            ._ZN2QT9QGroupBox8setTitleERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115370 jmp     cs:_ZN2QT9QGroupBox8setTitleERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT9QGroupBox8setTitleERKNS_7QStringE
// Target address:  0x8D5C08
// GOT/IAT slot:    0x8A1658
// Slot symbol:     _ZN2QT9QGroupBox8setTitleERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QGroupBox *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT9QGroupBox8setTitleERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QGroupBox8setTitleERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT9QGroupBox8setTitleERKNS_7QStringE(/* forwarded args */);
}

