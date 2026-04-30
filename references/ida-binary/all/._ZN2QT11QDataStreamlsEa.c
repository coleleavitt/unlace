// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113760
// Name:            ._ZN2QT11QDataStreamlsEa
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113760 jmp     cs:_ZN2QT11QDataStreamlsEa_ptr
//
// Resolved target: _ZN2QT11QDataStreamlsEa
// Target address:  0x8D49E8
// GOT/IAT slot:    0x8A0850
// Slot symbol:     _ZN2QT11QDataStreamlsEa_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QDataStreamlsEa(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDataStreamlsEa via GOT/IAT indirection
    return _ZN2QT11QDataStreamlsEa(/* forwarded args */);
}

