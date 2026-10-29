/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000D968
// Address: 0x000000010000D968

//----- (000000010000D968) ----------------------------------------------------
double __fastcall sub_10000D968(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  double result; // d0
  __int64 _38; // [xsp+38h] [xbp+8h]

  result = sub_10000D880(a1, a2, a3, a4);
  if ( *(_QWORD *)a5 <= *(_QWORD *)a4 && (*(_QWORD *)a5 < *(_QWORD *)a4 || *(_QWORD *)(a5 + 8) < *(_QWORD *)(a4 + 8)) )
  {
    *(_QWORD *)&result = sub_10000D6E8((__int128 *)a4, (__int128 *)a5).n128_u64[0];
    if ( *(_QWORD *)a4 <= *(_QWORD *)a3 && (*(_QWORD *)a4 < *(_QWORD *)a3 || *(_QWORD *)(a4 + 8) < *(_QWORD *)(a3 + 8)) )
    {
      *(_QWORD *)&result = sub_10000D6E8((__int128 *)a3, (__int128 *)a4).n128_u64[0];
      if ( *(_QWORD *)a3 <= *a2 && (*(_QWORD *)a3 < *a2 || *(_QWORD *)(a3 + 8) < a2[1]) )
      {
        *(_QWORD *)&result = sub_10000D6E8((__int128 *)a2, (__int128 *)a3).n128_u64[0];
        if ( *a2 <= *(_QWORD *)a1 && (*a2 < *(_QWORD *)a1 || a2[1] < *(_QWORD *)(a1 + 8)) )
        {
          if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          *(_QWORD *)&result = sub_10000D6E8((__int128 *)a1, (__int128 *)a2).n128_u64[0];
        }
      }
    }
  }
  return result;
}
// 10000DA80: variable '_38' is possibly undefined
