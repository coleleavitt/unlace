// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C890
// Name:            .netnode_check
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C890 jmp     cs:off_4EDC30
//
// Resolved target: netnode_check
// Target address:  0x4F1F68
// GOT/IAT slot:    0x4EDC30
// Slot symbol:     off_4EDC30
// Target type:     <no type info>
// ============================================================

void .netnode_check(/* see target signature */)
{
    // Tail-call to netnode_check via GOT/IAT indirection
    return netnode_check(/* forwarded args */);
}

