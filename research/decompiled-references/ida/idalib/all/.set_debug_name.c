// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC310
// Name:            .set_debug_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC310 jmp     cs:off_2C7B970
//
// Resolved target: set_debug_name
// Target address:  0x4DCFB0
// GOT/IAT slot:    0x2C7B970
// Slot symbol:     off_2C7B970
// Target type:     <no type info>
// ============================================================

void .set_debug_name(/* see target signature */)
{
    // Tail-call to set_debug_name via GOT/IAT indirection
    return set_debug_name(/* forwarded args */);
}

