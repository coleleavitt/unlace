// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC8B0
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC8B0 jmp     cs:off_2C7BC40
//
// Resolved target: demangle_name
// Target address:  0x754DE0
// GOT/IAT slot:    0x2C7BC40
// Slot symbol:     off_2C7BC40
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

