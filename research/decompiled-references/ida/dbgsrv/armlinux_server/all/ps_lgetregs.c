/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lgetregs
// Address: 0x000000000040AC80

//----- (000000000040AC80) ----------------------------------------------------
bool __fastcall ps_lgetregs(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [xsp+18h] [xbp-18h] BYREF

  v4[0] = a3;
  v4[1] = 8;
  return ptrace(PTRACE_GETREGSET, a2, 1, v4, 0) != 0;
}
