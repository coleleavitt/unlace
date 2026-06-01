// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA8E0
// Name:            .str2ea_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA8E0 jmp     cs:off_2C7AC58
//
// Resolved target: str2ea_ex
// Target address:  0x39FB20
// GOT/IAT slot:    0x2C7AC58
// Slot symbol:     off_2C7AC58
// Target type:     <no type info>
// ============================================================

void .str2ea_ex(/* see target signature */)
{
    // Tail-call to str2ea_ex via GOT/IAT indirection
    return str2ea_ex(/* forwarded args */);
}

