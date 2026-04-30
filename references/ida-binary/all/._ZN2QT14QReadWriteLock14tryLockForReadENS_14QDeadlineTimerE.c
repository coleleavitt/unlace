// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111270
// Name:            ._ZN2QT14QReadWriteLock14tryLockForReadENS_14QDeadlineTimerE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111270 jmp     cs:_ZN2QT14QReadWriteLock14tryLockForReadENS_14QDeadlineTimerE_ptr
//
// Resolved target: _ZN2QT14QReadWriteLock14tryLockForReadENS_14QDeadlineTimerE
// Target address:  0x8D31E0
// GOT/IAT slot:    0x89F5D8
// Slot symbol:     _ZN2QT14QReadWriteLock14tryLockForReadENS_14QDeadlineTimerE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT14QReadWriteLock14tryLockForReadENS_14QDeadlineTimerE(/* see target signature */)
{
    // Tail-call to _ZN2QT14QReadWriteLock14tryLockForReadENS_14QDeadlineTimerE via GOT/IAT indirection
    return _ZN2QT14QReadWriteLock14tryLockForReadENS_14QDeadlineTimerE(/* forwarded args */);
}

