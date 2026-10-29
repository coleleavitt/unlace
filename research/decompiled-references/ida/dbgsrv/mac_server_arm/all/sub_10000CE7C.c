/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000CE7C
// Address: 0x000000010000CE7C

//----- (000000010000CE7C) ----------------------------------------------------
double __fastcall sub_10000CE7C(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  double result; // d0

  sub_10000C214(a1, a2, a3);
  if ( *(_QWORD *)a4 <= *(_QWORD *)a3 && (*(_QWORD *)a4 < *(_QWORD *)a3 || *(_QWORD *)(a4 + 8) < *(_QWORD *)(a3 + 8)) )
  {
    *(_QWORD *)&result = sub_10000CCE8((__int128 *)a3, (__int128 *)a4).n128_u64[0];
    if ( *(_QWORD *)a3 <= *a2 && (*(_QWORD *)a3 < *a2 || *(_QWORD *)(a3 + 8) < a2[1]) )
    {
      *(_QWORD *)&result = sub_10000CCE8((__int128 *)a2, (__int128 *)a3).n128_u64[0];
      if ( *a2 <= *(_QWORD *)a1 && (*a2 < *(_QWORD *)a1 || a2[1] < *(_QWORD *)(a1 + 8)) )
        *(_QWORD *)&result = sub_10000CCE8((__int128 *)a1, (__int128 *)a2).n128_u64[0];
    }
  }
  return result;
}
