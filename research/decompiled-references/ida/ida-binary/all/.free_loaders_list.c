// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113300
// Name:            .free_loaders_list
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113300 jmp     cs:free_loaders_list_ptr
//
// Resolved target: free_loaders_list
// Target address:  0x8D4720
// GOT/IAT slot:    0x8A0620
// Slot symbol:     free_loaders_list_ptr
// Target type:     <no type info>
// ============================================================

void .free_loaders_list(/* see target signature */)
{
    // Tail-call to free_loaders_list via GOT/IAT indirection
    return free_loaders_list(/* forwarded args */);
}

