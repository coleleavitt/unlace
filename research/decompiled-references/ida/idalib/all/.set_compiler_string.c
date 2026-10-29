// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC1E0
// Name:            .set_compiler_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC1E0 jmp     cs:off_2C7B8D8
//
// Resolved target: set_compiler_string
// Target address:  0x609D80
// GOT/IAT slot:    0x2C7B8D8
// Slot symbol:     off_2C7B8D8
// Target type:     __int64 __usercall@<rax>(void *src@<rdi>, int, int, int, void *, __int64, int, int, void *ptr, __int64, int, int, void *, __int64, int, __int64)
// ============================================================

/* see target sig */ .set_compiler_string(/* see target signature */)
{
    // Tail-call to set_compiler_string via GOT/IAT indirection
    return set_compiler_string(/* forwarded args */);
}

