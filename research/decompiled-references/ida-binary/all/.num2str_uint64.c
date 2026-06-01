// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115220
// Name:            .num2str_uint64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115220 jmp     cs:num2str_uint64_ptr
//
// Resolved target: num2str_uint64
// Target address:  0x8D5B48
// GOT/IAT slot:    0x8A15B0
// Slot symbol:     num2str_uint64_ptr
// Target type:     <no type info>
// ============================================================

void .num2str_uint64(/* see target signature */)
{
    // Tail-call to num2str_uint64 via GOT/IAT indirection
    return num2str_uint64(/* forwarded args */);
}

