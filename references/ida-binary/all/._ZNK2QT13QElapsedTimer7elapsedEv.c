// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E70
// Name:            ._ZNK2QT13QElapsedTimer7elapsedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E70 jmp     cs:_ZNK2QT13QElapsedTimer7elapsedEv_ptr
//
// Resolved target: _ZNK2QT13QElapsedTimer7elapsedEv
// Target address:  0x8D58E8
// GOT/IAT slot:    0x8A13D8
// Slot symbol:     _ZNK2QT13QElapsedTimer7elapsedEv_ptr
// Target type:     _QWORD(QT::QElapsedTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QElapsedTimer7elapsedEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QElapsedTimer7elapsedEv via GOT/IAT indirection
    return _ZNK2QT13QElapsedTimer7elapsedEv(/* forwarded args */);
}

