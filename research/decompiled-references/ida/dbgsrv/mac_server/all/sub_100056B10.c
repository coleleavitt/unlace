/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056B10
// Address: 0x0000000100056B10

//----- (0000000100056B10) ----------------------------------------------------
__int64 __fastcall sub_100056B10(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  int v3; // eax
  void *v5[3]; // [rsp+8h] [rbp-38h] BYREF

  v2 = 0;
  if ( !*(_BYTE *)(a1 + 288) )
  {
    *(_BYTE *)(a1 + 289) = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 440) + 136LL))(
           *(_QWORD *)(a1 + 440),
           a1 + 368,
           a2);
    *(_BYTE *)(a1 + 288) = v3 > 0;
    if ( v3 <= 0 )
    {
      *(_BYTE *)(a1 + 289) = 1;
    }
    else
    {
      sub_10006B790((__int64)v5, 4);
      sub_100066550(v5, a1 + 368);
      v2 = sub_10006B030(a1 + 192, (__int64 *)v5);
      *(_BYTE *)(a1 + 288) = 0;
      if ( v5[0] )
      {
        v5[1] = nullptr;
        qfree(v5[0]);
      }
    }
  }
  return v2;
}
