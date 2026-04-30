// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A2E0
// Name:            ._ZN2QT4QPen8setWidthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A2E0 jmp     cs:_ZN2QT4QPen8setWidthEi_ptr
//
// Resolved target: _ZN2QT4QPen8setWidthEi
// Target address:  0x8D8DB8
// GOT/IAT slot:    0x8A3E10
// Slot symbol:     _ZN2QT4QPen8setWidthEi_ptr
// Target type:     _QWORD(QT::QPen *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT4QPen8setWidthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT4QPen8setWidthEi via GOT/IAT indirection
    return _ZN2QT4QPen8setWidthEi(/* forwarded args */);
}

