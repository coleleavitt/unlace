// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8250
// Name:     vadd_extra_line
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to vadd_extra_line are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void vadd_extra_line(/* see import library declaration */);

