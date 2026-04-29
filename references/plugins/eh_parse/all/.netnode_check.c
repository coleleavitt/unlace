// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6720
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6720 jmp     cs:off_2F378
//
// Resolved target: netnode_check
// Target address:  0x2F9F0
// GOT/IAT slot:    0x2F378
// Slot symbol:     off_2F378
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

