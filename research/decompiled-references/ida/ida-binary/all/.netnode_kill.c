// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116FC0
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116FC0 jmp     cs:netnode_kill_ptr
//
// Resolved target: netnode_kill
// Target address:  0x8D6DA8
// GOT/IAT slot:    0x8A2480
// Slot symbol:     netnode_kill_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}

