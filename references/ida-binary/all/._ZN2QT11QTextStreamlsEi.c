// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1137D0
// Name:            ._ZN2QT11QTextStreamlsEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1137D0 jmp     cs:_ZN2QT11QTextStreamlsEi_ptr
//
// Resolved target: _ZN2QT11QTextStreamlsEi
// Target address:  0x8D4A20
// GOT/IAT slot:    0x8A0888
// Slot symbol:     _ZN2QT11QTextStreamlsEi_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QTextStreamlsEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextStreamlsEi via GOT/IAT indirection
    return _ZN2QT11QTextStreamlsEi(/* forwarded args */);
}

