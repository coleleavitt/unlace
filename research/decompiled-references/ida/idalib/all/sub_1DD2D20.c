unsigned __int64 __fastcall sub_1DD2D20(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v9; // rax
  unsigned __int16 *v11; // rbp
  __int64 *v12; // rax
  unsigned __int64 v13; // rsi

  v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v11 = v9;
  v12 = sub_1DD1930((__int64)a1, *(_QWORD *)(a2 + 24), a7, a8);
  if ( !v12 )
    return 1;
  v13 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) && v12 == *(__int64 **)(a2 + 24) && *(_QWORD *)(a2 + 16) == v13 )
    return a2;
  else
    return sub_16CEEA0(*a1, v13, v12, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36), *(double *)a7.m128_u64);
}
