// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111B60
// Name:            .del_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111B60 jmp     cs:del_regvar_ptr
//
// Resolved target: del_regvar
// Target address:  0x8D37D8
// GOT/IAT slot:    0x89FA50
// Slot symbol:     del_regvar_ptr
// Target type:     <no type info>
// ============================================================

void .del_regvar(/* see target signature */)
{
    // Tail-call to del_regvar via GOT/IAT indirection
    return del_regvar(/* forwarded args */);
}

