// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE40
// Name:            .dbg_appcall
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE40 jmp     cs:off_2C7BF08
//
// Resolved target: dbg_appcall
// Target address:  0x58D970
// GOT/IAT slot:    0x2C7BF08
// Slot symbol:     off_2C7BF08
// Target type:     <no type info>
// ============================================================

void .dbg_appcall(/* see target signature */)
{
    // Tail-call to dbg_appcall via GOT/IAT indirection
    return dbg_appcall(/* forwarded args */);
}

