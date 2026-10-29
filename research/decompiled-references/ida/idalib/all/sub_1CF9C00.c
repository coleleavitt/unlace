unsigned __int64 __fastcall sub_1CF9C00(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v10; // rbp
  __int64 *v11; // rax
  unsigned __int64 v12; // rsi

  v8 = sub_1CE88F0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v8 == 1 )
    return 1;
  v10 = v8;
  v11 = sub_1CF6590((__int64)a1, *(_QWORD *)(a2 + 24), a6, a7);
  if ( !v11 )
    return 1;
  v12 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) && v11 == *(__int64 **)(a2 + 24) && *(_QWORD *)(a2 + 16) == v12 )
    return a2;
  else
    return sub_16CEEA0(*a1, v12, v11, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36), *(double *)a6.m128_u64);
}
