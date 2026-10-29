unsigned __int16 *__fastcall sub_1C1A050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rbp
  __int64 v12; // rax

  if ( *(_QWORD *)(a1 + 104) || (sub_1C19F70((_QWORD *)a1, a2, a3, a4, a5, a6), *(_QWORD *)(a1 + 104)) )
  {
    v8 = *(_QWORD *)(a1 + 88);
    if ( v8 )
      *(_QWORD *)(v8 + 24) |= 2uLL;
    v9 = sub_C9AA20(*(_QWORD *)(a1 + 80), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), a3, a4, a5, a6);
    v10 = *(_QWORD *)(a1 + 104);
    v11 = v9;
    if ( (*(_BYTE *)(v10 + 29) & 2) == 0 )
    {
      sub_18F5260(
        *(_QWORD *)(a1 + 8),
        *(_QWORD *)(a1 + 104),
        (int *)(a1 + 20),
        1u,
        0,
        1u,
        (__m128i)a7,
        *(double *)a8.m128_u64,
        0,
        0,
        0);
      v10 = *(_QWORD *)(a1 + 104);
    }
    v12 = (*(__int64 *)(*(_QWORD *)(a1 + 80) + 40LL) >> 1) & 3;
    if ( (*(_BYTE *)(v10 + 58) & 2) != 0 )
    {
      if ( v12 != 2 )
        return sub_19E1580(
                 *(__int64 **)(*(_QWORD *)(a1 + 8) + 736LL),
                 *(_QWORD *)(a1 + 96),
                 v11,
                 *(_DWORD *)(a1 + 20),
                 *(_QWORD **)(v10 + 40),
                 v10,
                 a7,
                 a8,
                 nullptr,
                 0);
    }
    else if ( !v12 )
    {
      return sub_19E1580(
               *(__int64 **)(*(_QWORD *)(a1 + 8) + 736LL),
               *(_QWORD *)(a1 + 96),
               v11,
               *(_DWORD *)(a1 + 20),
               *(_QWORD **)(v10 + 40),
               v10,
               a7,
               a8,
               nullptr,
               0);
    }
    return sub_19E2120(
             *(__int64 **)(*(_QWORD *)(a1 + 8) + 736LL),
             v11,
             (_DWORD)v12 == 1,
             *(_DWORD *)(a1 + 20),
             *(_QWORD *)(v10 + 40),
             v10,
             a7,
             a8,
             nullptr,
             0);
  }
  sub_1C15580((__int64 *)(a1 + 8), a1 + 80);
  return (_WORD *)(&dword_0 + 1);
}
