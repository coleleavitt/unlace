/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lgetfpregs
// Address: 0x000000000040AD30

//----- (000000000040AD30) ----------------------------------------------------
bool __fastcall ps_lgetfpregs(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [xsp+18h] [xbp-18h] BYREF

  v4[0] = a3;
  v4[1] = 528;
  return ptrace(PTRACE_GETREGSET, a2, 2, v4, 0) != 0;
}
