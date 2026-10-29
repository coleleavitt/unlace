unsigned __int64 __fastcall sub_1B96690(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v9; // rbp
  __int64 *v10; // rax

  v7 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 1;
  v9 = v7;
  v10 = sub_1B90E50(a1, *(_QWORD *)(a2 + 24), a6, a7);
  if ( !v10 )
    return 1;
  else
    return sub_16CEEA0(
             *a1,
             v9 & 0xFFFFFFFFFFFFFFFELL,
             v10,
             *(_DWORD *)(a2 + 32),
             *(_DWORD *)(a2 + 36),
             *(double *)a6.m128_u64);
}
