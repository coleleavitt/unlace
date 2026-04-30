// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1195C0
// Name:            ._ZNK2QT10QCompleter15completionCountEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1195C0 jmp     cs:_ZNK2QT10QCompleter15completionCountEv_ptr
//
// Resolved target: _ZNK2QT10QCompleter15completionCountEv
// Target address:  0x8D8580
// GOT/IAT slot:    0x8A3780
// Slot symbol:     _ZNK2QT10QCompleter15completionCountEv_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QCompleter15completionCountEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QCompleter15completionCountEv via GOT/IAT indirection
    return _ZNK2QT10QCompleter15completionCountEv(/* forwarded args */);
}

