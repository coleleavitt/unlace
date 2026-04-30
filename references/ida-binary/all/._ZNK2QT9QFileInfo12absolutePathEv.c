// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1193B0
// Name:            ._ZNK2QT9QFileInfo12absolutePathEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1193B0 jmp     cs:_ZNK2QT9QFileInfo12absolutePathEv_ptr
//
// Resolved target: _ZNK2QT9QFileInfo12absolutePathEv
// Target address:  0x8D8428
// GOT/IAT slot:    0x8A3678
// Slot symbol:     _ZNK2QT9QFileInfo12absolutePathEv_ptr
// Target type:     _QWORD(QT::QFileInfo *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QFileInfo12absolutePathEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QFileInfo12absolutePathEv via GOT/IAT indirection
    return _ZNK2QT9QFileInfo12absolutePathEv(/* forwarded args */);
}

