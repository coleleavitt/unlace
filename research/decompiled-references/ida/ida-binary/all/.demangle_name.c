// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119F20
// Name:            .demangle_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119F20 jmp     cs:demangle_name_ptr
//
// Resolved target: demangle_name
// Target address:  0x8D8B70
// GOT/IAT slot:    0x8A3C30
// Slot symbol:     demangle_name_ptr
// Target type:     <no type info>
// ============================================================

void .demangle_name(/* see target signature */)
{
    // Tail-call to demangle_name via GOT/IAT indirection
    return demangle_name(/* forwarded args */);
}

