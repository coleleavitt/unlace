// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1126F0
// Name:            ._ZN2QT7QCursor3posEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1126F0 jmp     cs:_ZN2QT7QCursor3posEv_ptr
//
// Resolved target: _ZN2QT7QCursor3posEv
// Target address:  0x8D3F50
// GOT/IAT slot:    0x8A0018
// Slot symbol:     _ZN2QT7QCursor3posEv_ptr
// Target type:     _QWORD(QT::QCursor *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QCursor3posEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QCursor3posEv via GOT/IAT indirection
    return _ZN2QT7QCursor3posEv(/* forwarded args */);
}

