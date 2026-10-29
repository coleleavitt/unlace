// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C80
// Name:            .check_process_exit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C80 jmp     cs:off_2C79E28
//
// Resolved target: check_process_exit
// Target address:  0x843450
// GOT/IAT slot:    0x2C79E28
// Slot symbol:     off_2C79E28
// Target type:     <no type info>
// ============================================================

void .check_process_exit(/* see target signature */)
{
    // Tail-call to check_process_exit via GOT/IAT indirection
    return check_process_exit(/* forwarded args */);
}

