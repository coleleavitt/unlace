// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B730
// Name:            .get_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B730 jmp     cs:off_4CDB80
//
// Resolved target: get_numbered_type
// Target address:  0x4D05A8
// GOT/IAT slot:    0x4CDB80
// Slot symbol:     off_4CDB80
// Target type:     <no type info>
// ============================================================

void .get_numbered_type(/* see target signature */)
{
    // Tail-call to get_numbered_type via GOT/IAT indirection
    return get_numbered_type(/* forwarded args */);
}

