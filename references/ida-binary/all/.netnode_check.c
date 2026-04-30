// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119990
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119990 jmp     cs:netnode_check_ptr
//
// Resolved target: netnode_check
// Target address:  0x8D8810
// GOT/IAT slot:    0x8A3968
// Slot symbol:     netnode_check_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

