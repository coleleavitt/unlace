__int64 __fastcall sub_2B9200(__int64 a1, __m128d *a2, char a3, int *a4)
{
  __int64 v4; // rax
  __int64 v7; // rax
  __m128i v8; // xmm0
  int v9; // eax
  int v10; // edx
  __int64 v11; // rdi
  __m128 v12; // xmm0
  double v14; // xmm0_8
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 440);
  if ( !v4 || !*(_QWORD *)(v4 + 8) )
    return 0;
  v7 = *(_QWORD *)(QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 16)) + 32LL);
  v15 = 0x200000002LL;
  v8 = _mm_sub_epi32(
         _mm_add_epi32(
           _mm_loadl_epi64((const __m128i *)(v7 + 28)),
           _mm_loadl_epi64((const __m128i *)(&xmmword_5DC310 + 2))),
         _mm_loadl_epi64((const __m128i *)(v7 + 20)));
  v9 = _mm_cvtsi128_si32(v8);
  v16 = v8.m128i_i64[0];
  v10 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229));
  if ( v9 <= 1 )
  {
    LODWORD(v16) = 2;
    v9 = 2;
    LODWORD(v15) = _mm_cvtsi128_si32(v8);
  }
  if ( v10 <= 1 )
  {
    HIDWORD(v15) = v10;
    HIDWORD(v16) = 2;
  }
  if ( (int)v15 >= v9 || SHIDWORD(v15) >= SHIDWORD(v16) )
    return 0;
  v11 = *(_QWORD *)(a1 + 440);
  if ( a4 )
  {
    if ( v11 )
      v11 = *(_QWORD *)(v11 + 8);
    v12 = (__m128)0x40C3880000000000uLL;
    if ( a3 )
      v12 = (__m128)0x3FF0000000000000uLL;
    sub_29A020(v12, v11, (int *)&v15, a4, a2);
    return 1;
  }
  else
  {
    if ( v11 )
      v11 = *(_QWORD *)(v11 + 8);
    v14 = 10000.0;
    if ( a3 )
      v14 = 1.0;
    return sub_29A130(v11, (int *)&v15, a2, v14);
  }
}
