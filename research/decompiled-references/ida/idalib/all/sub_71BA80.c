__int64 __fastcall sub_71BA80(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 *v16; // rax
  unsigned __int32 v18; // r12d
  const __m128i *v19; // rax
  __int64 v20; // rdx

  v10 = *(_QWORD *)(a2 + 56);
  if ( (v10 & 4) != 0 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (const __m128i *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18 >= v19[1].m128i_i32[0] )
        break;
      v20 = v18++;
      sub_7154D0(a1, *(_QWORD *)(v19[1].m128i_i64[1] + 8 * v20), a3, a4, a5, a6, a7, a8, a9, a10);
      v10 = *(_QWORD *)(a2 + 56);
      if ( (v10 & 4) == 0 )
        goto LABEL_2;
    }
    a4 = _mm_loadu_si128(v19);
    v11 = sub_718340(a1, a4.m128i_i64[0], a4.m128i_i64[1], a3, a4, a5, a6, a7, a8, a9, a10);
  }
  else
  {
LABEL_2:
    a3 = 0.0;
    v11 = sub_718340(a1, 0, 0, 0.0, a4, a5, a6, a7, a8, a9, a10);
  }
  if ( !v11 )
    return 0;
  v16 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v16 = (__int64 *)v16[4];
  if ( v16 )
    return sub_717AC0(a1, *v16, (__int64)(v16 + 1), *v16, v13, a3, a4, a5, a6, v14, v15, a9, a10);
  else
    return sub_70EBE0(a1, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56) & 4LL, v12, v13, a3, a4, a5, a6, v14, v15, a9, a10);
}
