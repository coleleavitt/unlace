// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D010
// Name:            .Clp_chgColumnUpper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D010 jmp     cs:off_4EDFF0
//
// Resolved target: Clp_chgColumnUpper
// Target address:  0x4F2340
// GOT/IAT slot:    0x4EDFF0
// Slot symbol:     off_4EDFF0
// Target type:     <no type info>
// ============================================================

void .Clp_chgColumnUpper(/* see target signature */)
{
    // Tail-call to Clp_chgColumnUpper via GOT/IAT indirection
    return Clp_chgColumnUpper(/* forwarded args */);
}

