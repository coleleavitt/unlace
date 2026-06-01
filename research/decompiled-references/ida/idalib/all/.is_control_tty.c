// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC880
// Name:            .is_control_tty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC880 jmp     cs:off_2C7BC28
//
// Resolved target: is_control_tty
// Target address:  0x842220
// GOT/IAT slot:    0x2C7BC28
// Slot symbol:     off_2C7BC28
// Target type:     __int64 __fastcall(int fd)
// ============================================================

/* see target sig */ .is_control_tty(/* see target signature */)
{
    // Tail-call to is_control_tty via GOT/IAT indirection
    return is_control_tty(/* forwarded args */);
}

