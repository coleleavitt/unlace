// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116800
// Name:            .add_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116800 jmp     cs:add_regvar_ptr
//
// Resolved target: add_regvar
// Target address:  0x8D68F8
// GOT/IAT slot:    0x8A20A0
// Slot symbol:     add_regvar_ptr
// Target type:     <no type info>
// ============================================================

void .add_regvar(/* see target signature */)
{
    // Tail-call to add_regvar via GOT/IAT indirection
    return add_regvar(/* forwarded args */);
}

