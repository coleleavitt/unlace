// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0xB658
// Name:     disable_flags
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to disable_flags are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void disable_flags(/* see import library declaration */);

