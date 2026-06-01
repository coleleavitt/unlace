// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE00
// Name:            .is_valid_typename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE00 jmp     cs:off_2C7B6E8
//
// Resolved target: is_valid_typename
// Target address:  0x4CDB70
// GOT/IAT slot:    0x2C7B6E8
// Slot symbol:     off_2C7B6E8
// Target type:     __int64 __usercall@<rax>(void *src@<rdi>, __int64, int, int, int, int, int, int, int, __int64)
// ============================================================

/* see target sig */ .is_valid_typename(/* see target signature */)
{
    // Tail-call to is_valid_typename via GOT/IAT indirection
    return is_valid_typename(/* forwarded args */);
}

