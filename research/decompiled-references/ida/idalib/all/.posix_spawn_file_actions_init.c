// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8930
// Name:            .posix_spawn_file_actions_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8930 jmp     cs:off_2C79C80
//
// Resolved target: posix_spawn_file_actions_init
// Target address:  0x2D11628
// GOT/IAT slot:    0x2C79C80
// Slot symbol:     off_2C79C80
// Target type:     int(posix_spawn_file_actions_t *file_actions)
// ============================================================

/* see target sig */ .posix_spawn_file_actions_init(/* see target signature */)
{
    // Tail-call to posix_spawn_file_actions_init via GOT/IAT indirection
    return posix_spawn_file_actions_init(/* forwarded args */);
}

