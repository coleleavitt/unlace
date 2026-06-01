/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lsetregs
// Address: 0x0000000000412990

//----- (0000000000412990) ----------------------------------------------------
_BOOL8 __fastcall ps_lsetregs(__int64 a1, __int64 a2, __int64 a3)
{
  return ptrace(PTRACE_SETREGS, a2, 0, a3) != 0;
}
