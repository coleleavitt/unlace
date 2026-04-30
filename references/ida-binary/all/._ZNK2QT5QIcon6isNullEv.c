// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116E80
// Name:            ._ZNK2QT5QIcon6isNullEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116E80 jmp     cs:_ZNK2QT5QIcon6isNullEv_ptr
//
// Resolved target: _ZNK2QT5QIcon6isNullEv
// Target address:  0x8D6CE0
// GOT/IAT slot:    0x8A23E0
// Slot symbol:     _ZNK2QT5QIcon6isNullEv_ptr
// Target type:     _QWORD(QT::QIcon *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QIcon6isNullEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QIcon6isNullEv via GOT/IAT indirection
    return _ZNK2QT5QIcon6isNullEv(/* forwarded args */);
}

