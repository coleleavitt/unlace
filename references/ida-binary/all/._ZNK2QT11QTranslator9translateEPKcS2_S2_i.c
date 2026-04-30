// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1163F0
// Name:            ._ZNK2QT11QTranslator9translateEPKcS2_S2_i
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1163F0 jmp     cs:_ZNK2QT11QTranslator9translateEPKcS2_S2_i_ptr
//
// Resolved target: _ZNK2QT11QTranslator9translateEPKcS2_S2_i
// Target address:  0x8D6640
// GOT/IAT slot:    0x8A1E98
// Slot symbol:     _ZNK2QT11QTranslator9translateEPKcS2_S2_i_ptr
// Target type:     _QWORD(QT::QTranslator *__hidden this, const char *, const char *, const char *, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QTranslator9translateEPKcS2_S2_i(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTranslator9translateEPKcS2_S2_i via GOT/IAT indirection
    return _ZNK2QT11QTranslator9translateEPKcS2_S2_i(/* forwarded args */);
}

