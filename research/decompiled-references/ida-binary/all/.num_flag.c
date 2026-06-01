// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112CE0
// Name:            .num_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112CE0 jmp     cs:num_flag_ptr
//
// Resolved target: num_flag
// Target address:  0x8D4320
// GOT/IAT slot:    0x8A0310
// Slot symbol:     num_flag_ptr
// Target type:     <no type info>
// ============================================================

void .num_flag(/* see target signature */)
{
    // Tail-call to num_flag via GOT/IAT indirection
    return num_flag(/* forwarded args */);
}

