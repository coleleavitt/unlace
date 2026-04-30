// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115960
// Name:            ._ZN2QT11QTextLayout10createLineEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115960 jmp     cs:_ZN2QT11QTextLayout10createLineEv_ptr
//
// Resolved target: _ZN2QT11QTextLayout10createLineEv
// Target address:  0x8D5F98
// GOT/IAT slot:    0x8A1950
// Slot symbol:     _ZN2QT11QTextLayout10createLineEv_ptr
// Target type:     _QWORD(QT::QTextLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextLayout10createLineEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextLayout10createLineEv via GOT/IAT indirection
    return _ZN2QT11QTextLayout10createLineEv(/* forwarded args */);
}

