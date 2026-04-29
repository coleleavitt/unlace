// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x161C0
// Name:            ._ZNK2QT11QObjectData17dynamicMetaObjectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x161C0 jmp     cs:off_4F0C8
//
// Resolved target: _ZNK2QT11QObjectData17dynamicMetaObjectEv
// Target address:  0x4FF40
// GOT/IAT slot:    0x4F0C8
// Slot symbol:     off_4F0C8
// Target type:     _QWORD(QT::QObjectData *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QObjectData17dynamicMetaObjectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QObjectData17dynamicMetaObjectEv via GOT/IAT indirection
    return _ZNK2QT11QObjectData17dynamicMetaObjectEv(/* forwarded args */);
}

