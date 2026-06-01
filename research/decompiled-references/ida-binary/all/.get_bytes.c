// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116080
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116080 jmp     cs:get_bytes_ptr
//
// Resolved target: get_bytes
// Target address:  0x8D6438
// GOT/IAT slot:    0x8A1CE0
// Slot symbol:     get_bytes_ptr
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

