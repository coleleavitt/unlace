// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119EF0
// Name:            ._ZN2QT14QReadWriteLock6unlockEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119EF0 jmp     cs:_ZN2QT14QReadWriteLock6unlockEv_ptr
//
// Resolved target: _ZN2QT14QReadWriteLock6unlockEv
// Target address:  0x8D8B58
// GOT/IAT slot:    0x8A3C18
// Slot symbol:     _ZN2QT14QReadWriteLock6unlockEv_ptr
// Target type:     _QWORD(QT::QReadWriteLock *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QReadWriteLock6unlockEv(/* see target signature */)
{
    // Tail-call to _ZN2QT14QReadWriteLock6unlockEv via GOT/IAT indirection
    return _ZN2QT14QReadWriteLock6unlockEv(/* forwarded args */);
}

