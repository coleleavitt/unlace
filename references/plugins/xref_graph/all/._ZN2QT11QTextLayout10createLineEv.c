// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x169A0
// Name:            ._ZN2QT11QTextLayout10createLineEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x169A0 jmp     cs:off_4F4B8
//
// Resolved target: _ZN2QT11QTextLayout10createLineEv
// Target address:  0x50678
// GOT/IAT slot:    0x4F4B8
// Slot symbol:     off_4F4B8
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayout10createLineEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayout10createLineEv via GOT/IAT indirection
    return _ZN2QT11QTextLayout10createLineEv(/* forwarded args */);
}

