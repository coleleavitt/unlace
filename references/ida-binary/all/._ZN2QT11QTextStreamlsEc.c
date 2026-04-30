// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111FD0
// Name:            ._ZN2QT11QTextStreamlsEc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111FD0 jmp     cs:_ZN2QT11QTextStreamlsEc_ptr
//
// Resolved target: _ZN2QT11QTextStreamlsEc
// Target address:  0x8D3AA8
// GOT/IAT slot:    0x89FC88
// Slot symbol:     _ZN2QT11QTextStreamlsEc_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QTextStreamlsEc(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextStreamlsEc via GOT/IAT indirection
    return _ZN2QT11QTextStreamlsEc(/* forwarded args */);
}

