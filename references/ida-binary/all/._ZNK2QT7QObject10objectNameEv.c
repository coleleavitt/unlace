// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130F0
// Name:            ._ZNK2QT7QObject10objectNameEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130F0 jmp     cs:_ZNK2QT7QObject10objectNameEv_ptr
//
// Resolved target: _ZNK2QT7QObject10objectNameEv
// Target address:  0x8D45C0
// GOT/IAT slot:    0x8A0518
// Slot symbol:     _ZNK2QT7QObject10objectNameEv_ptr
// Target type:     _QWORD(QT::QObject *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QObject10objectNameEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QObject10objectNameEv via GOT/IAT indirection
    return _ZNK2QT7QObject10objectNameEv(/* forwarded args */);
}

