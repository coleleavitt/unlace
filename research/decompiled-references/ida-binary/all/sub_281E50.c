void __fastcall sub_281E50(
        const __m128i *a1,
        double a2,
        double a3,
        double a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  void *v10; // r13
  __int64 *v11; // rbx
  __m128 v12; // xmm2
  __int64 v13; // rbp
  unsigned __int64 v14; // xmm3_8
  __m128i *v15; // r14
  int v16; // eax
  __m128i v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-38h] BYREF

  v10 = nullptr;
  v11 = (__int64 *)a1;
  v12 = (__m128)_mm_loadu_si128(a1);
  v13 = a1[1].m128i_i64[0];
  *a1 = 0;
  a1[1].m128i_i64[0] = 0;
  v14 = _mm_movehl_ps(a5, v12).m128_u64[0];
  v22 = (__m128i)v12;
  while ( 1 )
  {
    v15 = (__m128i *)v11;
    v16 = QT::QtPrivate::compareStrings(v13, v14, *(v11 - 1), *(v11 - 2), 1, a10, v22.m128i_i64[0], v22.m128i_i64[1]);
    if ( !v16 )
      break;
    v11 -= 3;
    if ( v16 >= 0 )
      break;
    v18 = v11[1];
    v10 = (void *)v11[3];
    v11[3] = *v11;
    v19 = v11[4];
    v11[4] = v18;
    v20 = v11[2];
    v11[1] = v19;
    v21 = v11[5];
    *v11 = (__int64)v10;
    v11[5] = v20;
    v11[2] = v21;
  }
  v17 = _mm_load_si128(&v22);
  v15[1].m128i_i64[0] = v13;
  *v15 = v17;
  if ( v10 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v10, 1u) )
      free(v10);
  }
}
