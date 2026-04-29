// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CE10
// Name:            .Clp_chgColumnLower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CE10 jmp     cs:off_4EDEF0
//
// Resolved target: Clp_chgColumnLower
// Target address:  0x4F2240
// GOT/IAT slot:    0x4EDEF0
// Slot symbol:     off_4EDEF0
// Target type:     <no type info>
// ============================================================

void .Clp_chgColumnLower(/* see target signature */)
{
    // Tail-call to Clp_chgColumnLower via GOT/IAT indirection
    return Clp_chgColumnLower(/* forwarded args */);
}

