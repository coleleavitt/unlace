// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119F90
// Name:            .rename_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119F90 jmp     cs:rename_regvar_ptr
//
// Resolved target: rename_regvar
// Target address:  0x8D8BC0
// GOT/IAT slot:    0x8A3C68
// Slot symbol:     rename_regvar_ptr
// Target type:     <no type info>
// ============================================================

void .rename_regvar(/* see target signature */)
{
    // Tail-call to rename_regvar via GOT/IAT indirection
    return rename_regvar(/* forwarded args */);
}

