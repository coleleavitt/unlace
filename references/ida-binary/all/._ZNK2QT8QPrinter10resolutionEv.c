// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117840
// Name:            ._ZNK2QT8QPrinter10resolutionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117840 jmp     cs:_ZNK2QT8QPrinter10resolutionEv_ptr
//
// Resolved target: _ZNK2QT8QPrinter10resolutionEv
// Target address:  0x8D7328
// GOT/IAT slot:    0x8A28C0
// Slot symbol:     _ZNK2QT8QPrinter10resolutionEv_ptr
// Target type:     _QWORD(QT::QPrinter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QPrinter10resolutionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QPrinter10resolutionEv via GOT/IAT indirection
    return _ZNK2QT8QPrinter10resolutionEv(/* forwarded args */);
}

