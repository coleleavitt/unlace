// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117AC0
// Name:            ._ZNK2QT11QDataStream5atEndEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117AC0 jmp     cs:_ZNK2QT11QDataStream5atEndEv_ptr
//
// Resolved target: _ZNK2QT11QDataStream5atEndEv
// Target address:  0x8D74A8
// GOT/IAT slot:    0x8A2A00
// Slot symbol:     _ZNK2QT11QDataStream5atEndEv_ptr
// Target type:     _QWORD(QT::QDataStream *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QDataStream5atEndEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QDataStream5atEndEv via GOT/IAT indirection
    return _ZNK2QT11QDataStream5atEndEv(/* forwarded args */);
}

