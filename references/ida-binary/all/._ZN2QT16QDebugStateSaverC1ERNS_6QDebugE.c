// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115F70
// Name:            ._ZN2QT16QDebugStateSaverC1ERNS_6QDebugE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115F70 jmp     cs:_ZN2QT16QDebugStateSaverC1ERNS_6QDebugE_ptr
//
// Resolved target: _ZN2QT16QDebugStateSaverC1ERNS_6QDebugE
// Target address:  0x8D6378
// GOT/IAT slot:    0x8A1C58
// Slot symbol:     _ZN2QT16QDebugStateSaverC1ERNS_6QDebugE_ptr
// Target type:     _QWORD(QT::QDebugStateSaver *__hidden this, QT::QDebug *)
// ============================================================

/* see target sig */ ._ZN2QT16QDebugStateSaverC1ERNS_6QDebugE(/* see target signature */)
{
    // Tail-call to _ZN2QT16QDebugStateSaverC1ERNS_6QDebugE via GOT/IAT indirection
    return _ZN2QT16QDebugStateSaverC1ERNS_6QDebugE(/* forwarded args */);
}

