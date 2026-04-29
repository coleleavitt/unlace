// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2300
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2300 jmp     cs:off_B168
//
// Resolved target: netnode_check
// Target address:  0xB408
// GOT/IAT slot:    0xB168
// Slot symbol:     off_B168
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

