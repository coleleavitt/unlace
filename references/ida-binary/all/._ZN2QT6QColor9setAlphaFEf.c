// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1199C0
// Name:            ._ZN2QT6QColor9setAlphaFEf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1199C0 jmp     cs:_ZN2QT6QColor9setAlphaFEf_ptr
//
// Resolved target: _ZN2QT6QColor9setAlphaFEf
// Target address:  0x8D8830
// GOT/IAT slot:    0x8A3980
// Slot symbol:     _ZN2QT6QColor9setAlphaFEf_ptr
// Target type:     _QWORD(QT::QColor *__hidden this, float)
// ============================================================

/* see target sig */ ._ZN2QT6QColor9setAlphaFEf(/* see target signature */)
{
    // Tail-call to _ZN2QT6QColor9setAlphaFEf via GOT/IAT indirection
    return _ZN2QT6QColor9setAlphaFEf(/* forwarded args */);
}

