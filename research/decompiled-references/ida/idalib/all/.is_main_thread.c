// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA290
// Name:            .is_main_thread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA290 jmp     cs:off_2C7A930
//
// Resolved target: is_main_thread
// Target address:  0x842BF0
// GOT/IAT slot:    0x2C7A930
// Slot symbol:     off_2C7A930
// Target type:     <no type info>
// ============================================================

void .is_main_thread(/* see target signature */)
{
    // Tail-call to is_main_thread via GOT/IAT indirection
    return is_main_thread(/* forwarded args */);
}

