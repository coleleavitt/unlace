// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20760
// Name:            .netnode_altadjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20760 jmp     cs:off_95398
//
// Resolved target: netnode_altadjust
// Target address:  0x95DD0
// GOT/IAT slot:    0x95398
// Slot symbol:     off_95398
// Target type:     <no type info>
// ============================================================

void .netnode_altadjust(/* see target signature */)
{
    // Tail-call to netnode_altadjust via GOT/IAT indirection
    return netnode_altadjust(/* forwarded args */);
}

