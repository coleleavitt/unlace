/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_get_thread_area
// Address: 0x000000000003AAB0

//----- (000000000003AAB0) ----------------------------------------------------
__int64 __fastcall ps_get_thread_area(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // x0
  __int64 v7; // [xsp+0h] [xbp-40h] BYREF
  _QWORD v8[3]; // [xsp+8h] [xbp-38h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8[0] = &v7;
  v8[1] = 8;
  result = ptrace(PTRACE_GETREGSET, a2, 1025, v8);
  if ( result )
    return 1;
  *a4 = v7 - a3;
  return result;
}
