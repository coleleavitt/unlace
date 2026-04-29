// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A720
// Name:            .check_process_exit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A720 jmp     cs:off_4BF378
//
// Resolved target: check_process_exit
// Target address:  0x4C2840
// GOT/IAT slot:    0x4BF378
// Slot symbol:     off_4BF378
// Target type:     <no type info>
// ============================================================

void .check_process_exit(/* see target signature */)
{
    // Tail-call to check_process_exit via GOT/IAT indirection
    return check_process_exit(/* forwarded args */);
}

