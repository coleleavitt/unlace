// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1166B0
// Name:            ._ZNK2QT13QElapsedTimer7isValidEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1166B0 jmp     cs:_ZNK2QT13QElapsedTimer7isValidEv_ptr
//
// Resolved target: _ZNK2QT13QElapsedTimer7isValidEv
// Target address:  0x8D67F0
// GOT/IAT slot:    0x8A1FF8
// Slot symbol:     _ZNK2QT13QElapsedTimer7isValidEv_ptr
// Target type:     _QWORD(QT::QElapsedTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QElapsedTimer7isValidEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QElapsedTimer7isValidEv via GOT/IAT indirection
    return _ZNK2QT13QElapsedTimer7isValidEv(/* forwarded args */);
}

