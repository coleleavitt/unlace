// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114410
// Name:            ._ZNK2QT14QMessageLogger5debugEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114410 jmp     cs:_ZNK2QT14QMessageLogger5debugEv_ptr
//
// Resolved target: _ZNK2QT14QMessageLogger5debugEv
// Target address:  0x8D51E0
// GOT/IAT slot:    0x8A0EA8
// Slot symbol:     _ZNK2QT14QMessageLogger5debugEv_ptr
// Target type:     _QWORD(QT::QMessageLogger *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QMessageLogger5debugEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QMessageLogger5debugEv via GOT/IAT indirection
    return _ZNK2QT14QMessageLogger5debugEv(/* forwarded args */);
}

