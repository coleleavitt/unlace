__int64 __fastcall sub_2C3D50(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  int v13; // r15d
  __int64 *v14; // r12
  double v18; // xmm4_8
  double v19; // xmm5_8
  unsigned int v20; // eax
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 result; // rax
  __int64 v24; // rsi
  __m128i si128; // xmm0
  _BOOL8 v26; // rsi
  void (__fastcall *v27)(__int64, __int64, __int64); // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax

  if ( !*(_QWORD *)(a4 + 40)
    || (v13 = *(_DWORD *)(a4 + 32),
        v14 = a2,
        a2 = (__int64 *)a1,
        v13 != (unsigned int)sub_1EB540(*(_QWORD **)(a1 + 16), a1)) )
  {
    if ( !under_debugger )
      interr(40429, a2, a3, a4, a6);
    BUG();
  }
  v20 = sub_2C23F0((__m128i *)a1, a4, a5, a6, a7, a8, a9, v18, v19, a12, a13);
  if ( v20 > 2 )
  {
    v26 = v20 == 4;
    sub_2C33C0(a1, v26, a6, *(double *)a7.m128_u64, *(double *)a8.m128_u64, *(double *)a9.m128_u64, v21, v22, a12, a13);
    v27 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 112LL);
    v30 = sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, v26, v28, v29, a6);
    v27(a1, a3, v30);
    return 0;
  }
  else if ( v20 == 1 )
  {
    sub_169A50(
      v14,
      (__int64)"The graph is too big (more than %d nodes) to be displayed on the screen.\n"
               "Switching to text mode.\n"
               "(you can change this limit in the graph options dialog)",
      dword_8CCA94);
    return 2;
  }
  else if ( v20 == 2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, 0, 0);
    return 0;
  }
  else
  {
    result = 1;
    if ( BYTE1(a5) == 2 )
    {
      v24 = *v14;
      if ( (unsigned __int64)v14[2] <= 0xC5 )
      {
        v31 = qvector_reserve(v14, v24, 198, 1);
        *v14 = v31;
        v24 = v31;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC990);
      v14[1] = 198;
      *(__m128i *)v24 = si128;
      *(__m128i *)(v24 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DCCF0);
      *(__m128i *)(v24 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DCD00);
      *(__m128i *)(v24 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DCD10);
      *(__m128i *)(v24 + 64) = _mm_load_si128((const __m128i *)&xmmword_5DCD20);
      *(__m128i *)(v24 + 80) = _mm_load_si128((const __m128i *)&xmmword_5DCD30);
      *(__m128i *)(v24 + 96) = _mm_load_si128((const __m128i *)&xmmword_5DCD40);
      *(__m128i *)(v24 + 112) = _mm_load_si128((const __m128i *)&xmmword_5DCD50);
      *(__m128i *)(v24 + 128) = _mm_load_si128((const __m128i *)&xmmword_5DCD60);
      *(__m128i *)(v24 + 144) = _mm_load_si128((const __m128i *)&xmmword_5DCD70);
      *(__m128i *)(v24 + 160) = _mm_load_si128((const __m128i *)&xmmword_5DCD80);
      *(__m128i *)(v24 + 176) = _mm_load_si128((const __m128i *)&xmmword_5DCD90);
      *(_QWORD *)(v24 + 189) = 0x2E6E6F697461746ELL;
      *(_BYTE *)(*v14 + 197) = 0;
      return 3;
    }
  }
  return result;
}
