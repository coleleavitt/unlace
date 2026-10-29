__int64 __fastcall sub_71EBB0(
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
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned __int32 v18; // ebp
  const __m128i *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rsi
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r13

  v11 = *(_QWORD *)(a2 + 120);
  if ( (v11 & 4) != 0 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (const __m128i *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18 >= v19[1].m128i_i32[0] )
        break;
      v20 = v18++;
      sub_7154D0(a1, *(_QWORD *)(v19[1].m128i_i64[1] + 8 * v20), a3, a4, a5, a6, a7, a8, a9, a10);
      v11 = *(_QWORD *)(a2 + 120);
      if ( (v11 & 4) == 0 )
        goto LABEL_2;
    }
    a4 = _mm_loadu_si128(v19);
    v12 = sub_718340(a1, a4.m128i_i64[0], a4.m128i_i64[1], a3, a4, a5, a6, a7, a8, a9, a10);
  }
  else
  {
LABEL_2:
    a3 = 0.0;
    v12 = sub_718340(a1, 0, 0, 0.0, a4, a5, a6, a7, a8, a9, a10);
  }
  if ( !v12 )
    return 0;
  v21 = *(_QWORD *)(a2 + 128);
  if ( v21 )
  {
    if ( (v21 & 4) != 0 )
    {
      v22 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v22 )
      {
        if ( !(unsigned __int8)sub_717AC0(a1, *v22, (__int64)(v22 + 1), v13, v14, a3, a4, a5, a6, v15, v16, a9, a10) )
          return 0;
      }
    }
  }
  v23 = a2 + 64;
  if ( !a2 )
    v23 = 0;
  if ( !(unsigned __int8)sub_70A970(a1, v23, a3, a4, a5, a6, v15, v16, a9, a10) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v26 = nullptr;
    v27 = sub_B8C3D0(a2);
    v30 = *(unsigned int *)(v27 + 8);
    v31 = *(_QWORD *)v27 + 8 * v30;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v26 = *(__int64 **)sub_B8C3D0(a2);
    if ( (__int64 *)v31 != v26 )
    {
      while ( (unsigned __int8)sub_71D160(a1, *v26, a3, a4, a5, a6, v24, v25, a9, a10, v30, v28, v29) )
      {
        if ( (__int64 *)v31 == ++v26 )
          return sub_6E1F80((_QWORD *)*a1, nullptr, a2, a3, a4, a5, a6, v24, v25, a9, a10);
      }
      return 0;
    }
  }
  return sub_6E1F80((_QWORD *)*a1, nullptr, a2, a3, a4, a5, a6, v24, v25, a9, a10);
}
