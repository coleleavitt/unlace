// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9300
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9300 jmp     cs:off_26168
//
// Resolved target: netnode_check
// Target address:  0x26480
// GOT/IAT slot:    0x26168
// Slot symbol:     off_26168
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

