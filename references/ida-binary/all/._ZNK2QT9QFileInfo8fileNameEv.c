// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111EB0
// Name:            ._ZNK2QT9QFileInfo8fileNameEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111EB0 jmp     cs:_ZNK2QT9QFileInfo8fileNameEv_ptr
//
// Resolved target: _ZNK2QT9QFileInfo8fileNameEv
// Target address:  0x8D39F8
// GOT/IAT slot:    0x89FBF8
// Slot symbol:     _ZNK2QT9QFileInfo8fileNameEv_ptr
// Target type:     _QWORD(QT::QFileInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFileInfo8fileNameEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFileInfo8fileNameEv via GOT/IAT indirection
    return _ZNK2QT9QFileInfo8fileNameEv(/* forwarded args */);
}

