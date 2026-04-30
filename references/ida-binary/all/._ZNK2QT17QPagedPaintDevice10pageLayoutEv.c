// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114680
// Name:            ._ZNK2QT17QPagedPaintDevice10pageLayoutEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114680 jmp     cs:_ZNK2QT17QPagedPaintDevice10pageLayoutEv_ptr
//
// Resolved target: _ZNK2QT17QPagedPaintDevice10pageLayoutEv
// Target address:  0x8D5380
// GOT/IAT slot:    0x8A0FE0
// Slot symbol:     _ZNK2QT17QPagedPaintDevice10pageLayoutEv_ptr
// Target type:     _QWORD(QT::QPagedPaintDevice *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QPagedPaintDevice10pageLayoutEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QPagedPaintDevice10pageLayoutEv via GOT/IAT indirection
    return _ZNK2QT17QPagedPaintDevice10pageLayoutEv(/* forwarded args */);
}

