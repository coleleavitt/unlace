// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E20
// Name:            ._ZNK2QT5QIcon8cacheKeyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E20 jmp     cs:_ZNK2QT5QIcon8cacheKeyEv_ptr
//
// Resolved target: _ZNK2QT5QIcon8cacheKeyEv
// Target address:  0x8D58B0
// GOT/IAT slot:    0x8A13B0
// Slot symbol:     _ZNK2QT5QIcon8cacheKeyEv_ptr
// Target type:     _QWORD(QT::QIcon *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT5QIcon8cacheKeyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT5QIcon8cacheKeyEv via GOT/IAT indirection
    return _ZNK2QT5QIcon8cacheKeyEv(/* forwarded args */);
}

