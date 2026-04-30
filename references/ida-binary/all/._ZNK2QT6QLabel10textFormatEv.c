// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111AD0
// Name:            ._ZNK2QT6QLabel10textFormatEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111AD0 jmp     cs:_ZNK2QT6QLabel10textFormatEv_ptr
//
// Resolved target: _ZNK2QT6QLabel10textFormatEv
// Target address:  0x8D3780
// GOT/IAT slot:    0x89FA08
// Slot symbol:     _ZNK2QT6QLabel10textFormatEv_ptr
// Target type:     _QWORD(QT::QLabel *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QLabel10textFormatEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QLabel10textFormatEv via GOT/IAT indirection
    return _ZNK2QT6QLabel10textFormatEv(/* forwarded args */);
}

