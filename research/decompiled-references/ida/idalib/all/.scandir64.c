// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE60
// Name:            .scandir64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE60 jmp     cs:off_2C7AF18
//
// Resolved target: scandir64
// Target address:  0x2D11A70
// GOT/IAT slot:    0x2C7AF18
// Slot symbol:     off_2C7AF18
// Target type:     int(const char *dir, struct dirent64 ***namelist, int (*selector)(const struct dirent64 *), int (*cmp)(const struct dirent64 **, const struct dirent64 **))
// ============================================================

/* see target sig */ .scandir64(/* see target signature */)
{
    // Tail-call to scandir64 via GOT/IAT indirection
    return scandir64(/* forwarded args */);
}

