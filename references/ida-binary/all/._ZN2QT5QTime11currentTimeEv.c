// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111D30
// Name:            ._ZN2QT5QTime11currentTimeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111D30 jmp     cs:_ZN2QT5QTime11currentTimeEv_ptr
//
// Resolved target: _ZN2QT5QTime11currentTimeEv
// Target address:  0x8D3908
// GOT/IAT slot:    0x89FB38
// Slot symbol:     _ZN2QT5QTime11currentTimeEv_ptr
// Target type:     _QWORD(QT::QTime *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT5QTime11currentTimeEv(/* see target signature */)
{
    // Tail-call to _ZN2QT5QTime11currentTimeEv via GOT/IAT indirection
    return _ZN2QT5QTime11currentTimeEv(/* forwarded args */);
}

