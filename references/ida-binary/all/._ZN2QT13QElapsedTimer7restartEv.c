// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1128E0
// Name:            ._ZN2QT13QElapsedTimer7restartEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1128E0 jmp     cs:_ZN2QT13QElapsedTimer7restartEv_ptr
//
// Resolved target: _ZN2QT13QElapsedTimer7restartEv
// Target address:  0x8D4080
// GOT/IAT slot:    0x8A0110
// Slot symbol:     _ZN2QT13QElapsedTimer7restartEv_ptr
// Target type:     _QWORD(QT::QElapsedTimer *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QElapsedTimer7restartEv(/* see target signature */)
{
    // Tail-call to _ZN2QT13QElapsedTimer7restartEv via GOT/IAT indirection
    return _ZN2QT13QElapsedTimer7restartEv(/* forwarded args */);
}

