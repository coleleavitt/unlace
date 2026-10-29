/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63494
// Address: 0x0000000000063494

//----- (0000000000063494) ----------------------------------------------------
__int64 __fastcall sub_63494(__int64 *a1)
{
  __int64 v2; // x10
  int v3; // w8
  void *ptr[4]; // [xsp+0h] [xbp-40h] BYREF

  ptr[3] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_635B0((__int64)a1, 2);
  v2 = a1[41];
  v3 = *(unsigned __int16 *)(a1[40] + 2 * (v2 - 1));
  if ( v2 )
    a1[41] = v2 - 1;
  *(_DWORD *)(*(_QWORD *)(a1[43] + 8 * a1[44] - 8) + 24LL) = v3;
  sub_637B8(a1 + 20, ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return 0;
}
