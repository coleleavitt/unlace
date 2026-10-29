// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113B20
// Name:            .check_process_exit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113B20 jmp     cs:check_process_exit_ptr
//
// Resolved target: check_process_exit
// Target address:  0x8D4C40
// GOT/IAT slot:    0x8A0A30
// Slot symbol:     check_process_exit_ptr
// Target type:     <no type info>
// ============================================================

void .check_process_exit(/* see target signature */)
{
    // Tail-call to check_process_exit via GOT/IAT indirection
    return check_process_exit(/* forwarded args */);
}

