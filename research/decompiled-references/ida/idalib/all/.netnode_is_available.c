// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD270
// Name:            .netnode_is_available
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD270 jmp     cs:off_2C7C120
//
// Resolved target: netnode_is_available
// Target address:  0x7AF730
// GOT/IAT slot:    0x2C7C120
// Slot symbol:     off_2C7C120
// Target type:     <no type info>
// ============================================================

void .netnode_is_available(/* see target signature */)
{
    // Tail-call to netnode_is_available via GOT/IAT indirection
    return netnode_is_available(/* forwarded args */);
}

