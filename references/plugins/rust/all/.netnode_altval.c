// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .netnode_altval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_A0A8
//
// Resolved target: netnode_altval
// Target address:  0xB378
// GOT/IAT slot:    0xA0A8
// Slot symbol:     off_A0A8
// Target type:     <no type info>
// ============================================================

void .netnode_altval(/* see target signature */)
{
    // Tail-call to netnode_altval via GOT/IAT indirection
    return netnode_altval(/* forwarded args */);
}

