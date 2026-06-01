_QWORD *__fastcall sub_5CFF70(__int64 *a1)
{
  _QWORD *v1; // rax
  size_t v2; // r12
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int32 v7; // r13d
  __m128i *v8; // rax
  __int64 v9; // rcx
  __m128i si128; // xmm1
  __int32 v11; // edx
  __m128i *v12; // rdx
  void *v14; // rax
  const void *v15; // rsi

  v1 = (_QWORD *)operator new(0x98u);
  v2 = a1[2];
  v3 = v1;
  *v1 = &off_2B26160;
  v4 = *a1;
  v3[2] = 0;
  v3[1] = v4;
  *(_OWORD *)(v3 + 3) = 0;
  if ( v2 )
  {
    v14 = (void *)qalloc_or_throw(v2);
    v3[2] = v14;
    v15 = (const void *)a1[1];
    v3[4] = v2;
    memcpy(v14, v15, v2);
    v3[3] = v2;
  }
  v5 = a1[4];
  v3[15] = -1;
  v3[5] = v5;
  LODWORD(v5) = *((_DWORD *)a1 + 10);
  v3[16] = -1;
  *((_DWORD *)v3 + 12) = v5;
  v3[17] = -1;
  v3[18] = 0;
  *(_OWORD *)(v3 + 7) = 0;
  *(_OWORD *)(v3 + 9) = 0;
  *(_OWORD *)(v3 + 11) = 0;
  *(_OWORD *)(v3 + 13) = 0;
  merge_handler_ctr(v3, 0);
  v3[9] = 0;
  *v3 = &off_2B2FB40;
  if ( *(int *)(v3[1] + 28LL) > 0 )
  {
    v6 = 0;
    do
    {
      v7 = v6;
      v8 = (__m128i *)operator new(0xA0u);
      v9 = v3[1];
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v11 = *(_DWORD *)(v9 + 4LL * (int)v6 + 16);
      v8[2].m128i_i64[0] = v9;
      v8->m128i_i64[0] = (__int64)off_2B2FA88;
      v8->m128i_i32[2] = v11;
      v12 = (__m128i *)((char *)v8 + 40);
      v8[1] = si128;
      do
      {
        v12->m128i_i64[0] = 0;
        v12 = (__m128i *)((char *)v12 + 40);
        v12[-2] = 0;
        v12[-1].m128i_i64[0] = 0;
        v12[-1].m128i_i32[2] = -1;
      }
      while ( &v8[10] != v12 );
      v3[v6++ + 7] = v8;
      v8->m128i_i32[3] = v7;
    }
    while ( *(_DWORD *)(v9 + 28) > (int)v6 );
  }
  return v3;
}
