// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116B70
// Name:            ._ZNK2QT9QFileInfo16absoluteFilePathEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116B70 jmp     cs:_ZNK2QT9QFileInfo16absoluteFilePathEv_ptr
//
// Resolved target: _ZNK2QT9QFileInfo16absoluteFilePathEv
// Target address:  0x8D6B10
// GOT/IAT slot:    0x8A2258
// Slot symbol:     _ZNK2QT9QFileInfo16absoluteFilePathEv_ptr
// Target type:     _QWORD(QT::QFileInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFileInfo16absoluteFilePathEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFileInfo16absoluteFilePathEv via GOT/IAT indirection
    return _ZNK2QT9QFileInfo16absoluteFilePathEv(/* forwarded args */);
}

