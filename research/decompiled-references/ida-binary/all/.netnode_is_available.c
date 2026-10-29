// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AD30
// Name:            .netnode_is_available
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AD30 jmp     cs:netnode_is_available_ptr
//
// Resolved target: netnode_is_available
// Target address:  0x8D9488
// GOT/IAT slot:    0x8A4338
// Slot symbol:     netnode_is_available_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_is_available(/* see target signature */)
{
    // Tail-call to netnode_is_available via GOT/IAT indirection
    return netnode_is_available(/* forwarded args */);
}

