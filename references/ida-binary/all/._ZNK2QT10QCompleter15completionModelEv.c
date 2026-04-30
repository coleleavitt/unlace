// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B460
// Name:            ._ZNK2QT10QCompleter15completionModelEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B460 jmp     cs:_ZNK2QT10QCompleter15completionModelEv_ptr
//
// Resolved target: _ZNK2QT10QCompleter15completionModelEv
// Target address:  0x8D9918
// GOT/IAT slot:    0x8A46D0
// Slot symbol:     _ZNK2QT10QCompleter15completionModelEv_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QCompleter15completionModelEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QCompleter15completionModelEv via GOT/IAT indirection
    return _ZNK2QT10QCompleter15completionModelEv(/* forwarded args */);
}

