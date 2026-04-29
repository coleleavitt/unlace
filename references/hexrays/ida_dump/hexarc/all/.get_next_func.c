// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29A60
// Name:            .get_next_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29A60 jmp     cs:off_4B9518
//
// Resolved target: get_next_func
// Target address:  0x4BBF00
// GOT/IAT slot:    0x4B9518
// Slot symbol:     off_4B9518
// Target type:     <no type info>
// ============================================================

void .get_next_func(/* see target signature */)
{
    // Tail-call to get_next_func via GOT/IAT indirection
    return get_next_func(/* forwarded args */);
}

