// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111A20
// Name:            ._ZNK2QT11QObjectData17dynamicMetaObjectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111A20 jmp     cs:_ZNK2QT11QObjectData17dynamicMetaObjectEv_ptr
//
// Resolved target: _ZNK2QT11QObjectData17dynamicMetaObjectEv
// Target address:  0x8D3720
// GOT/IAT slot:    0x89F9B0
// Slot symbol:     _ZNK2QT11QObjectData17dynamicMetaObjectEv_ptr
// Target type:     _QWORD(QT::QObjectData *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QObjectData17dynamicMetaObjectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QObjectData17dynamicMetaObjectEv via GOT/IAT indirection
    return _ZNK2QT11QObjectData17dynamicMetaObjectEv(/* forwarded args */);
}

