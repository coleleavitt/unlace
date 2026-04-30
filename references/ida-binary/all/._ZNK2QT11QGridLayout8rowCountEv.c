// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1161C0
// Name:            ._ZNK2QT11QGridLayout8rowCountEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1161C0 jmp     cs:_ZNK2QT11QGridLayout8rowCountEv_ptr
//
// Resolved target: _ZNK2QT11QGridLayout8rowCountEv
// Target address:  0x8D64E8
// GOT/IAT slot:    0x8A1D80
// Slot symbol:     _ZNK2QT11QGridLayout8rowCountEv_ptr
// Target type:     _QWORD(QT::QGridLayout *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QGridLayout8rowCountEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QGridLayout8rowCountEv via GOT/IAT indirection
    return _ZNK2QT11QGridLayout8rowCountEv(/* forwarded args */);
}

