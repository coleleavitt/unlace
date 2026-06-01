/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lsetregs
// Address: 0x000000000040ACD8

//----- (000000000040ACD8) ----------------------------------------------------
bool __fastcall ps_lsetregs(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [xsp+18h] [xbp-18h] BYREF

  v4[0] = a3;
  v4[1] = 8;
  return ptrace(PTRACE_SETREGSET, a2, 1, v4, 0) != 0;
}
