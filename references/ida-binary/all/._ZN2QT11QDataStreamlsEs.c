// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113F10
// Name:            ._ZN2QT11QDataStreamlsEs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113F10 jmp     cs:_ZN2QT11QDataStreamlsEs_ptr
//
// Resolved target: _ZN2QT11QDataStreamlsEs
// Target address:  0x8D4EE8
// GOT/IAT slot:    0x8A0C28
// Slot symbol:     _ZN2QT11QDataStreamlsEs_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QDataStreamlsEs(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDataStreamlsEs via GOT/IAT indirection
    return _ZN2QT11QDataStreamlsEs(/* forwarded args */);
}

