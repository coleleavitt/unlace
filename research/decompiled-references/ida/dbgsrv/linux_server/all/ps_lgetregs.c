/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lgetregs
// Address: 0x0000000000412960

//----- (0000000000412960) ----------------------------------------------------
_BOOL8 __fastcall ps_lgetregs(__int64 a1, __int64 a2, __int64 a3)
{
  return ptrace(PTRACE_GETREGS, a2, 0, a3) != 0;
}
