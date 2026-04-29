// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29B60
// Name:            .netnode_copy2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29B60 jmp     cs:off_4B9598
//
// Resolved target: netnode_copy2
// Target address:  0x4BBF88
// GOT/IAT slot:    0x4B9598
// Slot symbol:     off_4B9598
// Target type:     <no type info>
// ============================================================

void .netnode_copy2(/* see target signature */)
{
    // Tail-call to netnode_copy2 via GOT/IAT indirection
    return netnode_copy2(/* forwarded args */);
}

