void __fastcall sub_392D80(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __m128i v8; // xmm0
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __m128i v16; // xmm0
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  __m128i si128; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = 0x2AAAAAAAAAAAAAALL;
  *a1 = a3;
  a1[1] = 0;
  if ( a3 <= 0x2AAAAAAAAAAAAAALL )
    v3 = a3;
  a1[2] = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v5 = 48 * v3;
      v6 = operator new(48 * v3, (const std::nothrow_t *)&std::nothrow);
      v7 = v6;
      if ( v6 )
        break;
      if ( v3 == 1 )
        return;
      v3 = (v3 + 1) >> 1;
    }
    v8 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    v9 = v6 + v5;
    v10 = *a2;
    *a2 = 0;
    *(__m128i *)(v7 + 8) = v8;
    *(_OWORD *)(a2 + 1) = 0;
    *(_QWORD *)v7 = v10;
    v11 = _mm_loadu_si128((const __m128i *)a2 + 2);
    *(_QWORD *)(v7 + 24) = a2[3];
    v12 = v7 + 48;
    *(__m128i *)(v7 + 32) = v11;
    if ( v5 == 48 )
    {
      v17 = v7;
    }
    else
    {
      do
      {
        v13 = *(_QWORD *)(v12 - 48);
        v14 = _mm_loadu_si128((const __m128i *)(v12 - 40));
        *(_OWORD *)(v12 - 40) = 0;
        v12 += 48LL;
        *(_QWORD *)(v12 - 96) = 0;
        *(_QWORD *)(v12 - 48) = v13;
        v15 = *(_QWORD *)(v12 - 72);
        *(__m128i *)(v12 - 40) = v14;
        v16 = _mm_loadu_si128((const __m128i *)(v12 - 64));
        *(_QWORD *)(v12 - 24) = v15;
        *(__m128i *)(v12 - 16) = v16;
      }
      while ( v9 != v12 );
      v17 = ((v9 - v7 - 96) & 0xFFFFFFFFFFFFFFF0LL) + v7 + 48;
    }
    v18 = *(_QWORD *)v17;
    si128 = _mm_loadu_si128((const __m128i *)(v17 + 8));
    *(_QWORD *)v17 = 0;
    *(_OWORD *)(v17 + 8) = 0;
    v20 = *a2;
    if ( *a2 )
    {
      a2[1] = 0;
      v23[0] = si128;
      qfree(v20, (const char *)&std::nothrow);
      si128 = _mm_load_si128(v23);
    }
    *a2 = v18;
    *(__m128i *)(a2 + 1) = si128;
    v21 = *(_QWORD *)(v17 + 24);
    a1[2] = v7;
    a2[3] = v21;
    v22 = *(_QWORD *)(v17 + 32);
    a1[1] = v3;
    a2[4] = v22;
    a2[5] = *(_QWORD *)(v17 + 40);
  }
}
