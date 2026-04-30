// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118350
// Name:            ._ZNK2QT10QCompleter15maxVisibleItemsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118350 jmp     cs:_ZNK2QT10QCompleter15maxVisibleItemsEv_ptr
//
// Resolved target: _ZNK2QT10QCompleter15maxVisibleItemsEv
// Target address:  0x8D7A18
// GOT/IAT slot:    0x8A2E48
// Slot symbol:     _ZNK2QT10QCompleter15maxVisibleItemsEv_ptr
// Target type:     _QWORD(QT::QCompleter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT10QCompleter15maxVisibleItemsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT10QCompleter15maxVisibleItemsEv via GOT/IAT indirection
    return _ZNK2QT10QCompleter15maxVisibleItemsEv(/* forwarded args */);
}

