// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8290
// Name:     vloader_failure
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to vloader_failure are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void vloader_failure(/* see import library declaration */);

