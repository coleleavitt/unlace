// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB690
// Name:            .netnode_get_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB690 jmp     cs:off_2C7B330
//
// Resolved target: netnode_get_name
// Target address:  0x7BF150
// GOT/IAT slot:    0x2C7B330
// Slot symbol:     off_2C7B330
// Target type:     <no type info>
// ============================================================

void .netnode_get_name(/* see target signature */)
{
    // Tail-call to netnode_get_name via GOT/IAT indirection
    return netnode_get_name(/* forwarded args */);
}

