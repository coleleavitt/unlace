// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114D10
// Name:            ._ZN2QT16QCoreApplication9translateEPKcS2_S2_i
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114D10 jmp     cs:_ZN2QT16QCoreApplication9translateEPKcS2_S2_i_ptr
//
// Resolved target: _ZN2QT16QCoreApplication9translateEPKcS2_S2_i
// Target address:  0x8D5818
// GOT/IAT slot:    0x8A1328
// Slot symbol:     _ZN2QT16QCoreApplication9translateEPKcS2_S2_i_ptr
// Target type:     _QWORD(QT::QCoreApplication *__hidden this, const char *, const char *, const char *, int)
// ============================================================

/* see target sig */ ._ZN2QT16QCoreApplication9translateEPKcS2_S2_i(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication9translateEPKcS2_S2_i via GOT/IAT indirection
    return _ZN2QT16QCoreApplication9translateEPKcS2_S2_i(/* forwarded args */);
}

