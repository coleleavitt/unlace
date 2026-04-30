// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116CA0
// Name:            .find_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116CA0 jmp     cs:find_regvar_ptr
//
// Resolved target: find_regvar
// Target address:  0x8D6BC0
// GOT/IAT slot:    0x8A22F0
// Slot symbol:     find_regvar_ptr
// Target type:     <no type info>
// ============================================================

void .find_regvar(/* see target signature */)
{
    // Tail-call to find_regvar via GOT/IAT indirection
    return find_regvar(/* forwarded args */);
}

