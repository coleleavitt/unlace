// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB670
// Name:            .netnode_charval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB670 jmp     cs:off_2C7B320
//
// Resolved target: netnode_charval
// Target address:  0x7B4690
// GOT/IAT slot:    0x2C7B320
// Slot symbol:     off_2C7B320
// Target type:     <no type info>
// ============================================================

void .netnode_charval(/* see target signature */)
{
    // Tail-call to netnode_charval via GOT/IAT indirection
    return netnode_charval(/* forwarded args */);
}

