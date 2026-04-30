// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116450
// Name:            ._ZN2QT4QDir11currentPathEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116450 jmp     cs:_ZN2QT4QDir11currentPathEv_ptr
//
// Resolved target: _ZN2QT4QDir11currentPathEv
// Target address:  0x8D6678
// GOT/IAT slot:    0x8A1EC8
// Slot symbol:     _ZN2QT4QDir11currentPathEv_ptr
// Target type:     _QWORD(QT::QDir *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT4QDir11currentPathEv(/* see target signature */)
{
    // Tail-call to _ZN2QT4QDir11currentPathEv via GOT/IAT indirection
    return _ZN2QT4QDir11currentPathEv(/* forwarded args */);
}

