// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1155B0
// Name:            ._ZN2QT16QCoreApplication4exitEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1155B0 jmp     cs:_ZN2QT16QCoreApplication4exitEi_ptr
//
// Resolved target: _ZN2QT16QCoreApplication4exitEi
// Target address:  0x8D5D58
// GOT/IAT slot:    0x8A1778
// Slot symbol:     _ZN2QT16QCoreApplication4exitEi_ptr
// Target type:     _QWORD(QT::QCoreApplication *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT16QCoreApplication4exitEi(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication4exitEi via GOT/IAT indirection
    return _ZN2QT16QCoreApplication4exitEi(/* forwarded args */);
}

