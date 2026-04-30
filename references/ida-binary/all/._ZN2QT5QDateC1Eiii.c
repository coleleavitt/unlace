// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BD20
// Name:            ._ZN2QT5QDateC1Eiii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BD20 jmp     cs:_ZN2QT5QDateC1Eiii_ptr
//
// Resolved target: _ZN2QT5QDateC1Eiii
// Target address:  0x8D9E68
// GOT/IAT slot:    0x8A4B30
// Slot symbol:     _ZN2QT5QDateC1Eiii_ptr
// Target type:     _QWORD(QT::QDate *__hidden this, int, int, int)
// ============================================================

/* see target sig */ ._ZN2QT5QDateC1Eiii(/* see target signature */)
{
    // Tail-call to _ZN2QT5QDateC1Eiii via GOT/IAT indirection
    return _ZN2QT5QDateC1Eiii(/* forwarded args */);
}

