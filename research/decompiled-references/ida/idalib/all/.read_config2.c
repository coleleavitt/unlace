// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8050
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8050 jmp     cs:off_2C79810
//
// Resolved target: read_config2
// Target address:  0x74A470
// GOT/IAT slot:    0x2C79810
// Slot symbol:     off_2C79810
// Target type:     __int64 __usercall@<rax>(void *src@<rdi>, __int64, int)
// ============================================================

/* see target sig */ .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}

