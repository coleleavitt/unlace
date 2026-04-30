// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115C20
// Name:            ._ZN2QT11QTextStreamlsEPKv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115C20 jmp     cs:_ZN2QT11QTextStreamlsEPKv_ptr
//
// Resolved target: _ZN2QT11QTextStreamlsEPKv
// Target address:  0x8D6160
// GOT/IAT slot:    0x8A1AB0
// Slot symbol:     _ZN2QT11QTextStreamlsEPKv_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QTextStreamlsEPKv(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextStreamlsEPKv via GOT/IAT indirection
    return _ZN2QT11QTextStreamlsEPKv(/* forwarded args */);
}

