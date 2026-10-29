__int64 __fastcall sub_6FF320(
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
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  double v14; // xmm4_8
  double v15; // xmm5_8
  unsigned int v16; // r12d
  __int64 v18; // rdx
  __int64 *v19; // rax
  __m128i v20; // xmm0
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 *v31; // rax
  __int64 *v32; // rbx
  __m128i v33; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v34; // [rsp+30h] [rbp-38h]

  v11 = *(_QWORD *)(a2 + 64);
  if ( !(unsigned __int8)sub_6F7D60(a1, v11, *(_QWORD *)(a2 + 72), a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v18 = *(unsigned int *)(a2 + 24);
  v19 = *(__int64 **)(a2 + 80);
  v33.m128i_i64[0] = *(_QWORD *)(a2 + 40);
  v33.m128i_i32[2] = v18;
  v34 = v19;
  v20 = _mm_load_si128(&v33);
  if ( !(unsigned __int8)sub_6F8B90(
                           a1,
                           *(double *)v20.m128i_i64,
                           a4,
                           a5,
                           a6,
                           v14,
                           v15,
                           a9,
                           a10,
                           v11,
                           v18,
                           v33.m128i_i64[0],
                           v12,
                           v13,
                           v20.m128i_i64[0],
                           v20.m128i_i32[2],
                           v19) )
    return 0;
  v23 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v23 = sub_B69600(a2, 0);
  v16 = sub_6EA390(a1, v23, *(double *)v20.m128i_i64, a4, a5, a6, v21, v22, a9, a10);
  if ( !(_BYTE)v16 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v24 = sub_B68690(a2);
    v29 = *(unsigned int *)(v24 + 8);
    v30 = *(_QWORD *)v24 + 8 * v29;
    v31 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v31 = *(__int64 **)sub_B68690(a2);
    if ( (__int64 *)v30 != v31 )
    {
      v32 = v31;
      while ( (unsigned __int8)sub_6FCB80(
                                 a1,
                                 *v32,
                                 *(double *)v20.m128i_i64,
                                 a4,
                                 a5,
                                 a6,
                                 v27,
                                 v28,
                                 a9,
                                 a10,
                                 v29,
                                 v25,
                                 v26) )
      {
        if ( (__int64 *)v30 == ++v32 )
          return v16;
      }
      return 0;
    }
  }
  return v16;
}

