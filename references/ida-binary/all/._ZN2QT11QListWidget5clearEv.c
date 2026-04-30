// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116E60
// Name:            ._ZN2QT11QListWidget5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116E60 jmp     cs:_ZN2QT11QListWidget5clearEv_ptr
//
// Resolved target: _ZN2QT11QListWidget5clearEv
// Target address:  0x8D6CC8
// GOT/IAT slot:    0x8A23D0
// Slot symbol:     _ZN2QT11QListWidget5clearEv_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QListWidget5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidget5clearEv via GOT/IAT indirection
    return _ZN2QT11QListWidget5clearEv(/* forwarded args */);
}

