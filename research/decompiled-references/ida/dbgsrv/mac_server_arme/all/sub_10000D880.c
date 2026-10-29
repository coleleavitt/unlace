/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000D880
// Address: 0x000000010000D880

//----- (000000010000D880) ----------------------------------------------------
double __fastcall sub_10000D880(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  double result; // d0
  __int64 _28; // [xsp+28h] [xbp+8h]

  sub_10000CC04(a1, a2, a3);
  if ( *(_QWORD *)a4 <= *(_QWORD *)a3 && (*(_QWORD *)a4 < *(_QWORD *)a3 || *(_QWORD *)(a4 + 8) < *(_QWORD *)(a3 + 8)) )
  {
    *(_QWORD *)&result = sub_10000D6E8((__int128 *)a3, (__int128 *)a4).n128_u64[0];
    if ( *(_QWORD *)a3 <= *a2 && (*(_QWORD *)a3 < *a2 || *(_QWORD *)(a3 + 8) < a2[1]) )
    {
      *(_QWORD *)&result = sub_10000D6E8((__int128 *)a2, (__int128 *)a3).n128_u64[0];
      if ( *a2 <= *(_QWORD *)a1 && (*a2 < *(_QWORD *)a1 || a2[1] < *(_QWORD *)(a1 + 8)) )
      {
        if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        *(_QWORD *)&result = sub_10000D6E8((__int128 *)a1, (__int128 *)a2).n128_u64[0];
      }
    }
  }
  return result;
}
// 10000D958: variable '_28' is possibly undefined
