// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B910
// Name:            ._ZN2QT11QTreeWidget5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B910 jmp     cs:_ZN2QT11QTreeWidget5clearEv_ptr
//
// Resolved target: _ZN2QT11QTreeWidget5clearEv
// Target address:  0x8D9BE8
// GOT/IAT slot:    0x8A4928
// Slot symbol:     _ZN2QT11QTreeWidget5clearEv_ptr
// Target type:     _QWORD(QT::QTreeWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTreeWidget5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTreeWidget5clearEv via GOT/IAT indirection
    return _ZN2QT11QTreeWidget5clearEv(/* forwarded args */);
}

