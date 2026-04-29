// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_B0E8
//
// Resolved target: netnode_supval
// Target address:  0xB580
// GOT/IAT slot:    0xB0E8
// Slot symbol:     off_B0E8
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}

