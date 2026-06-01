/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001DE20
// Address: 0x000000014001DE20

//----- (000000014001DE20) ----------------------------------------------------
bool __fastcall sub_14001DE20(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  int v4; // r9d
  _QWORD *i; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  if ( !v3 )
    return 0;
  for ( i = *(_QWORD **)a1; *i != a3; i += 3 )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  if ( a2 )
    *a2 = i[2];
  v9 = *(_QWORD *)a1 + 24LL * v4;
  memcpy(
    (void *)v9,
    (const void *)(v9 + 24),
    24
  * (((__int64)((unsigned __int128)((*(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8) - v9) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2)
   - 1
   + ((unsigned __int64)((unsigned __int128)((*(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8) - v9)
                                           * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63)));
  v10 = *(_QWORD *)(a1 + 24);
  --*(_QWORD *)(a1 + 8);
  return (a3 & *(_QWORD *)(v10 + 16)) != a3;
}
