// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BC0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BC0 jmp     cs:off_755C8
//
// Resolved target: get_ph
// Target address:  0x75E30
// GOT/IAT slot:    0x755C8
// Slot symbol:     off_755C8
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}

