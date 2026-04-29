// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45B0
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45B0 jmp     cs:off_232C0
//
// Resolved target: netnode_check
// Target address:  0x236E8
// GOT/IAT slot:    0x232C0
// Slot symbol:     off_232C0
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

