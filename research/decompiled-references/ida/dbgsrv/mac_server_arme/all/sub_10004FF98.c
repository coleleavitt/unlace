/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004FF98
// Address: 0x000000010004FF98

//----- (000000010004FF98) ----------------------------------------------------
__int64 __fastcall sub_10004FF98(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v4; // w0
  __int64 v5; // x19
  void *v6[3]; // [xsp+0h] [xbp-30h] BYREF

  if ( (*(_BYTE *)(a1 + 288) & 1) != 0 )
    return 0;
  *(_BYTE *)(a1 + 289) = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 440) + 136LL))(
         *(_QWORD *)(a1 + 440),
         a1 + 368,
         a2);
  *(_BYTE *)(a1 + 288) = v4 > 0;
  if ( v4 < 1 )
  {
    *(_BYTE *)(a1 + 289) = 1;
    return 0;
  }
  else
  {
    sub_100063440(4, (__int64 *)v6);
    sub_10005EEE0((_QWORD **)v6, a1 + 368);
    result = sub_100062C38(a1 + 192, (__int64 *)v6);
    *(_BYTE *)(a1 + 288) = 0;
    if ( v6[0] )
    {
      v6[1] = nullptr;
      v5 = result;
      qfree(v6[0]);
      return v5;
    }
  }
  return result;
}
