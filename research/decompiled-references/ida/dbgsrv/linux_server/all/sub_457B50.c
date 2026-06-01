/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457B50
// Address: 0x0000000000457B50

//----- (0000000000457B50) ----------------------------------------------------
bool __fastcall sub_457B50(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 v13; // r13
  _QWORD *v15; // r14
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
    return 0;
  v13 = *(_QWORD *)(a2 + 32);
  if ( v13 == -1 )
  {
    v13 = *(_QWORD *)(a2 + 24);
    if ( v13 == -1 )
      v13 = *(_QWORD *)(a2 + 8);
  }
  v15 = sub_4571E0(a1, *(_DWORD *)(a2 + 4), v13, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( !v15 )
    return 0;
  sub_4563D0(a1, "%a: bptcnd yielded false\n", a4);
  *(_BYTE *)(a2 + 16) = 1;
  v16 = *(_QWORD **)(a1 + 432);
  v17 = &v16[*(_QWORD *)(a1 + 440)];
  if ( v16 != v17 )
  {
    while ( v13 != *v16 )
    {
      if ( v17 == ++v16 )
        return sub_4576C0((unsigned __int64 **)a1, v15, a2, a3, a4);
    }
    if ( v17 != v16 )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(617);
      BUG();
    }
  }
  return sub_4576C0((unsigned __int64 **)a1, v15, a2, a3, a4);
}
// 4C94E1: using guessed type char byte_4C94E1;
