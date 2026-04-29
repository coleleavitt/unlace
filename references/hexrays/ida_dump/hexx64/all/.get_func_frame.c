// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCE0
// Name:            .get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCE0 jmp     cs:off_4ED658
//
// Resolved target: get_func_frame
// Target address:  0x4F1968
// GOT/IAT slot:    0x4ED658
// Slot symbol:     off_4ED658
// Target type:     <no type info>
// ============================================================

void .get_func_frame(/* see target signature */)
{
    // Tail-call to get_func_frame via GOT/IAT indirection
    return get_func_frame(/* forwarded args */);
}

