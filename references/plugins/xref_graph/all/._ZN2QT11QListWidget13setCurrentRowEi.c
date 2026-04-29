// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16770
// Name:            ._ZN2QT11QListWidget13setCurrentRowEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16770 jmp     cs:off_4F3A0
//
// Resolved target: _ZN2QT11QListWidget13setCurrentRowEi
// Target address:  0x503F8
// GOT/IAT slot:    0x4F3A0
// Slot symbol:     off_4F3A0
// Target type:     _QWORD(QT::QListWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT11QListWidget13setCurrentRowEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidget13setCurrentRowEi via GOT/IAT indirection
    return _ZN2QT11QListWidget13setCurrentRowEi(/* forwarded args */);
}

