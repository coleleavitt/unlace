/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005398
// Address: 0x0000000100005398

//----- (0000000100005398) ----------------------------------------------------
__int64 __fastcall sub_100005398(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v11; // x1
  unsigned __int64 *range; // x0
  const char *v13; // x2
  const char *v15; // x8
  unsigned __int64 v16; // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  v11 = *a3;
  if ( *(_QWORD *)(a1 + 1616) == *a3
    || *(_QWORD *)(a1 + 1712) && (range = rangeset_t_find_range(a1 + 1704, v11), v11 = *a3, range) )
  {
    if ( a3[3] )
      v13 = (const char *)a3[2];
    else
      v13 = &byte_10007AE40;
    if ( (sub_100019D04((_BYTE *)(a1 + 1560), v11, v13, a3 + 5, a2, a6, a7, a8) & 1) != 0 )
      return 1;
  }
  else
  {
    if ( a3[3] )
      v15 = (const char *)a3[2];
    else
      v15 = &byte_10007AE40;
    if ( (sub_100016DBC(a1 + 1560, v15, v11, a2, a3 + 5) & 1) != 0 )
      return 1;
  }
  v16 = *a3;
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100019BA0(a1 + 1560, v16, a2, 0);
}
// 100005400: variable 'a6' is possibly undefined
// 100005400: variable 'a7' is possibly undefined
// 100005400: variable 'a8' is possibly undefined
// 10000546C: variable '_28' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
