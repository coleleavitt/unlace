__int64 __fastcall sub_46E7F0(__int64 *a1, __int64 *a2)
{
  __m128i v3; // xmm2
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 i; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdi
  __m128i si128; // xmm3
  __m128i v11; // xmm4
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 j; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __m128i v18; // xmm5
  __int64 v19; // rbp
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __m128i v22; // xmm6
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 k; // r12
  _QWORD *v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rdi
  __m128i v30; // xmm7
  __int64 result; // rax
  __m128i v32[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  v4 = *a2;
  *(_OWORD *)(a2 + 1) = 0;
  *a2 = 0;
  v5 = *a1;
  v32[0] = v3;
  if ( v5 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, (const char *)a2);
          v5 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v5, (const char *)a2);
  }
  si128 = _mm_load_si128(v32);
  *a1 = v4;
  *(__m128i *)(a1 + 1) = si128;
  v11 = _mm_loadu_si128((const __m128i *)a2 + 2);
  v12 = a2[3];
  *((_OWORD *)a2 + 2) = 0;
  a2[3] = 0;
  v13 = a1[3];
  v32[0] = v11;
  if ( v13 )
  {
    v14 = a1[4];
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = (__int64 *)(v13 + 24 * j);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, (const char *)a2);
          v13 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v13, (const char *)a2);
  }
  v18 = _mm_load_si128(v32);
  a1[3] = v12;
  *((__m128i *)a1 + 2) = v18;
  v19 = a2[6];
  v20 = _mm_loadu_si128((const __m128i *)(a2 + 7));
  a2[6] = 0;
  *(_OWORD *)(a2 + 7) = 0;
  v21 = a1[6];
  if ( v21 )
  {
    a1[7] = 0;
    v32[0] = v20;
    qfree(v21, (const char *)a2);
    v20 = _mm_load_si128(v32);
  }
  *(__m128i *)(a1 + 7) = v20;
  a1[6] = v19;
  v22 = _mm_loadu_si128((const __m128i *)a2 + 5);
  v23 = a2[9];
  *((_OWORD *)a2 + 5) = 0;
  a2[9] = 0;
  v24 = a1[9];
  v32[0] = v22;
  if ( v24 )
  {
    v25 = a1[10];
    if ( v25 )
    {
      for ( k = 0; k != v25; ++k )
      {
        v27 = (_QWORD *)(v24 + 80 * k);
        v28 = v27[4];
        if ( v28 )
        {
          v27[5] = 0;
          qfree(v28, (const char *)a2);
        }
        v29 = v27[1];
        if ( v29 )
        {
          v27[2] = 0;
          qfree(v29, (const char *)a2);
        }
        v24 = a1[9];
      }
    }
    a1[10] = 0;
    qfree(v24, (const char *)a2);
  }
  v30 = _mm_load_si128(v32);
  a1[9] = v23;
  *((__m128i *)a1 + 5) = v30;
  *((_BYTE *)a1 + 96) = *((_BYTE *)a2 + 96);
  *((_DWORD *)a1 + 25) = *((_DWORD *)a2 + 25);
  result = *((unsigned __int8 *)a2 + 104);
  *((_BYTE *)a1 + 104) = result;
  return result;
}
