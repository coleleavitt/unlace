// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C80
// Name:            ._ZN2QT11QListWidget5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16C80 jmp     cs:off_4F628
//
// Resolved target: _ZN2QT11QListWidget5clearEv
// Target address:  0x508E0
// GOT/IAT slot:    0x4F628
// Slot symbol:     off_4F628
// Target type:     _QWORD(QT::QListWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QListWidget5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidget5clearEv via GOT/IAT indirection
    return _ZN2QT11QListWidget5clearEv(/* forwarded args */);
}

