// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111670
// Name:            ._ZNK2QT14QStackedWidget5countEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111670 jmp     cs:_ZNK2QT14QStackedWidget5countEv_ptr
//
// Resolved target: _ZNK2QT14QStackedWidget5countEv
// Target address:  0x8D34B0
// GOT/IAT slot:    0x89F7D8
// Slot symbol:     _ZNK2QT14QStackedWidget5countEv_ptr
// Target type:     _QWORD(QT::QStackedWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QStackedWidget5countEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QStackedWidget5countEv via GOT/IAT indirection
    return _ZNK2QT14QStackedWidget5countEv(/* forwarded args */);
}

