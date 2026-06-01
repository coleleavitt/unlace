// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115F90
// Name:            .is_main_thread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115F90 jmp     cs:is_main_thread_ptr
//
// Resolved target: is_main_thread
// Target address:  0x8D6390
// GOT/IAT slot:    0x8A1C68
// Slot symbol:     is_main_thread_ptr
// Target type:     <no type info>
// ============================================================

void .is_main_thread(/* see target signature */)
{
    // Tail-call to is_main_thread via GOT/IAT indirection
    return is_main_thread(/* forwarded args */);
}

