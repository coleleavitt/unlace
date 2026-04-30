// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118A30
// Name:            ._ZNK2QT10QCompleter16completionPrefixEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118A30 jmp     cs:_ZNK2QT10QCompleter16completionPrefixEv_ptr
//
// Resolved target: _ZNK2QT10QCompleter16completionPrefixEv
// Target address:  0x8D7E50
// GOT/IAT slot:    0x8A31B8
// Slot symbol:     _ZNK2QT10QCompleter16completionPrefixEv_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QCompleter16completionPrefixEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QCompleter16completionPrefixEv via GOT/IAT indirection
    return _ZNK2QT10QCompleter16completionPrefixEv(/* forwarded args */);
}

