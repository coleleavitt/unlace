// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x165F0
// Name:            ._ZNK2QT19QAbstractScrollArea8viewportEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x165F0 jmp     cs:off_4F2E0
//
// Resolved target: _ZNK2QT19QAbstractScrollArea8viewportEv
// Target address:  0x502D8
// GOT/IAT slot:    0x4F2E0
// Slot symbol:     off_4F2E0
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT19QAbstractScrollArea8viewportEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT19QAbstractScrollArea8viewportEv via GOT/IAT indirection
    return _ZNK2QT19QAbstractScrollArea8viewportEv(/* forwarded args */);
}

