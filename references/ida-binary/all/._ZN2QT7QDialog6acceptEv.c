// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1186F0
// Name:            ._ZN2QT7QDialog6acceptEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1186F0 jmp     cs:_ZN2QT7QDialog6acceptEv_ptr
//
// Resolved target: _ZN2QT7QDialog6acceptEv
// Target address:  0x8D7C48
// GOT/IAT slot:    0x8A3018
// Slot symbol:     _ZN2QT7QDialog6acceptEv_ptr
// Target type:     _QWORD(QT::QDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QDialog6acceptEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QDialog6acceptEv via GOT/IAT indirection
    return _ZN2QT7QDialog6acceptEv(/* forwarded args */);
}

