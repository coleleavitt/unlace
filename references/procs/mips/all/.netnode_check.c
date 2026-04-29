// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19990
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19990 jmp     cs:off_754B0
//
// Resolved target: netnode_check
// Target address:  0x75D08
// GOT/IAT slot:    0x754B0
// Slot symbol:     off_754B0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

