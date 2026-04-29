// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D730
// Name:            .check_process_exit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D730 jmp     cs:off_4E9380
//
// Resolved target: check_process_exit
// Target address:  0x4EBD70
// GOT/IAT slot:    0x4E9380
// Slot symbol:     off_4E9380
// Target type:     <no type info>
// ============================================================

void .check_process_exit(/* see target signature */)
{
    // Tail-call to check_process_exit via GOT/IAT indirection
    return check_process_exit(/* forwarded args */);
}

