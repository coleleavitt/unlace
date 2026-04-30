// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114190
// Name:            ._ZN2QT11QListWidget13setCurrentRowEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114190 jmp     cs:_ZN2QT11QListWidget13setCurrentRowEi_ptr
//
// Resolved target: _ZN2QT11QListWidget13setCurrentRowEi
// Target address:  0x8D5048
// GOT/IAT slot:    0x8A0D68
// Slot symbol:     _ZN2QT11QListWidget13setCurrentRowEi_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT11QListWidget13setCurrentRowEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidget13setCurrentRowEi via GOT/IAT indirection
    return _ZN2QT11QListWidget13setCurrentRowEi(/* forwarded args */);
}

