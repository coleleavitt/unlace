/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465D08
// Address: 0x0000000000465D08

//----- (0000000000465D08) ----------------------------------------------------
__int64 __fastcall sub_465D08(__int64 a1, unsigned int a2)
{
  unsigned int v3; // w21
  int v5; // w0
  unsigned int v6; // w0
  void *v7; // x0
  void *ptr[3]; // [xsp+30h] [xbp-20h] BYREF

  v3 = 0;
  if ( !*(_BYTE *)(a1 + 288) )
  {
    *(_BYTE *)(a1 + 289) = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 440) + 136LL))(
           *(_QWORD *)(a1 + 440),
           a1 + 368,
           a2);
    *(_BYTE *)(a1 + 288) = v5 > 0;
    if ( v5 <= 0 )
    {
      *(_BYTE *)(a1 + 289) = 1;
    }
    else
    {
      sub_479010(4, (__int64 *)ptr);
      sub_470FA8((__int64)ptr, a1 + 368);
      v6 = sub_477C00(a1 + 192, (__int64 *)ptr);
      v3 = v6;
      v7 = ptr[0];
      *(_BYTE *)(a1 + 288) = 0;
      if ( v7 )
      {
        ptr[1] = nullptr;
        j__free(v7);
      }
    }
  }
  return v3;
}
