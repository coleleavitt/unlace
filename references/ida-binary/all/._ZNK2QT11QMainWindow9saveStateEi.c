// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111E20
// Name:            ._ZNK2QT11QMainWindow9saveStateEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111E20 jmp     cs:_ZNK2QT11QMainWindow9saveStateEi_ptr
//
// Resolved target: _ZNK2QT11QMainWindow9saveStateEi
// Target address:  0x8D39B0
// GOT/IAT slot:    0x89FBB0
// Slot symbol:     _ZNK2QT11QMainWindow9saveStateEi_ptr
// Target type:     _QWORD(QT::QMainWindow *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QMainWindow9saveStateEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMainWindow9saveStateEi via GOT/IAT indirection
    return _ZNK2QT11QMainWindow9saveStateEi(/* forwarded args */);
}

