/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005930
// Address: 0x0000000100005930

//----- (0000000100005930) ----------------------------------------------------
char __fastcall sub_100005930(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  _BYTE *v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 *range; // rax
  const char *v8; // rdx
  __int64 v10; // rdx
  const char *v11; // rsi

  v5 = (_BYTE *)(a1 + 864);
  v6 = *a3;
  if ( *(_QWORD *)(a1 + 920) == *a3
    || *(_QWORD *)(a1 + 1016) && (range = rangeset_t_find_range(a1 + 1008, v6), v6 = *a3, range) )
  {
    if ( a3[3] )
      v8 = (const char *)a3[2];
    else
      v8 = _s1;
    if ( (unsigned __int8)sub_10001AFD0(v5, v6, (__int64)v8, (__int64)(a3 + 5), (__int64)a2) )
      return 1;
  }
  else
  {
    v10 = v6;
    if ( a3[3] )
      v11 = (const char *)a3[2];
    else
      v11 = _s1;
    if ( (unsigned __int8)sub_1000180B0((__int64)v5, v11, v10, (__int64)a2, (__int64)(a3 + 5)) )
      return 1;
  }
  return sub_10001AE50((__int64)v5, *a3, a2, 0);
}
