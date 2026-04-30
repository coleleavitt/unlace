// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117610
// Name:            ._ZNK2QT14QMessageLogger7warningEPKcz
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117610 jmp     cs:_ZNK2QT14QMessageLogger7warningEPKcz_ptr
//
// Resolved target: _ZNK2QT14QMessageLogger7warningEPKcz
// Target address:  0x8D71C8
// GOT/IAT slot:    0x8A27A8
// Slot symbol:     _ZNK2QT14QMessageLogger7warningEPKcz_ptr
// Target type:     _QWORD(QT::QMessageLogger *__hidden this, const char *, ...)
// ============================================================

/* see target sig */ ._ZNK2QT14QMessageLogger7warningEPKcz(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QMessageLogger7warningEPKcz via GOT/IAT indirection
    return _ZNK2QT14QMessageLogger7warningEPKcz(/* forwarded args */);
}

