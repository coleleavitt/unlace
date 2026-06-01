/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68A04
// Address: 0x0000000000068A04

//----- (0000000000068A04) ----------------------------------------------------
__int64 __fastcall sub_68A04(const char *a1, __int64 a2, const char *a3, __int64 a4)
{
  char v4; // w0
  _QWORD v6[3]; // [xsp+8h] [xbp-28h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 )
  {
    v6[0] = &off_15D6D0;
    v6[1] = a2;
    v4 = compile_idc_snippet(a1, a3, a4, (__int64)v6, 0);
  }
  else
  {
    v4 = 0;
  }
  return v4 & 1;
}
// 15D6D0: using guessed type __int64 (__fastcall *off_15D6D0)();
