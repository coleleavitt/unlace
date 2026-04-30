// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140D0
// Name:            ._ZN2QT9QMetaTypeC1Ei
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140D0 jmp     cs:_ZN2QT9QMetaTypeC1Ei_ptr
//
// Resolved target: _ZN2QT9QMetaTypeC1Ei
// Target address:  0x8D4FE8
// GOT/IAT slot:    0x8A0D08
// Slot symbol:     _ZN2QT9QMetaTypeC1Ei_ptr
// Target type:     _QWORD(QT::QMetaType *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT9QMetaTypeC1Ei(/* see target signature */)
{
    // Tail-call to _ZN2QT9QMetaTypeC1Ei via GOT/IAT indirection
    return _ZN2QT9QMetaTypeC1Ei(/* forwarded args */);
}

