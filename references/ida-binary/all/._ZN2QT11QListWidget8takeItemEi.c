// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114250
// Name:            ._ZN2QT11QListWidget8takeItemEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114250 jmp     cs:_ZN2QT11QListWidget8takeItemEi_ptr
//
// Resolved target: _ZN2QT11QListWidget8takeItemEi
// Target address:  0x8D50D0
// GOT/IAT slot:    0x8A0DC8
// Slot symbol:     _ZN2QT11QListWidget8takeItemEi_ptr
// Target type:     _QWORD(QT::QListWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT11QListWidget8takeItemEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QListWidget8takeItemEi via GOT/IAT indirection
    return _ZN2QT11QListWidget8takeItemEi(/* forwarded args */);
}

