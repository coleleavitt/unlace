// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116DD0
// Name:            ._ZN2QT11QDataStreamlsEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116DD0 jmp     cs:_ZN2QT11QDataStreamlsEi_ptr
//
// Resolved target: _ZN2QT11QDataStreamlsEi
// Target address:  0x8D6C70
// GOT/IAT slot:    0x8A2388
// Slot symbol:     _ZN2QT11QDataStreamlsEi_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QDataStreamlsEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QDataStreamlsEi via GOT/IAT indirection
    return _ZN2QT11QDataStreamlsEi(/* forwarded args */);
}

