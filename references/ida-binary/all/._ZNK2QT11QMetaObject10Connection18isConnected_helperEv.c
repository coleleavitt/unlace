// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119FE0
// Name:            ._ZNK2QT11QMetaObject10Connection18isConnected_helperEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119FE0 jmp     cs:_ZNK2QT11QMetaObject10Connection18isConnected_helperEv_ptr
//
// Resolved target: _ZNK2QT11QMetaObject10Connection18isConnected_helperEv
// Target address:  0x8D8BF8
// GOT/IAT slot:    0x8A3C90
// Slot symbol:     _ZNK2QT11QMetaObject10Connection18isConnected_helperEv_ptr
// Target type:     _QWORD(QT::QMetaObject::Connection *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QMetaObject10Connection18isConnected_helperEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMetaObject10Connection18isConnected_helperEv via GOT/IAT indirection
    return _ZNK2QT11QMetaObject10Connection18isConnected_helperEv(/* forwarded args */);
}

