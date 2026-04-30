// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ABA0
// Name:            ._ZN2QT16QDialogButtonBox5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ABA0 jmp     cs:_ZN2QT16QDialogButtonBox5clearEv_ptr
//
// Resolved target: _ZN2QT16QDialogButtonBox5clearEv
// Target address:  0x8D9380
// GOT/IAT slot:    0x8A4270
// Slot symbol:     _ZN2QT16QDialogButtonBox5clearEv_ptr
// Target type:     _QWORD(QT::QDialogButtonBox *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT16QDialogButtonBox5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT16QDialogButtonBox5clearEv via GOT/IAT indirection
    return _ZN2QT16QDialogButtonBox5clearEv(/* forwarded args */);
}

