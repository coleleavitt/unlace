__int64 __fastcall sub_A30390(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rdx
  __int64 v6; // rbp
  int v7; // r13d
  __int64 i; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  const __m128i *v11; // r14
  const __m128i *v12; // rbx
  __m128i v13; // xmm0
  __int64 m128i_i64; // rsi
  __int64 v15; // rdi
  __int64 v17; // rbx
  __int64 v18; // rbp
  unsigned __int64 v19; // r14
  __m128i v20; // xmm2
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r15
  __m128i v28; // xmm1
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rbx
  unsigned __int64 v32; // [rsp+8h] [rbp-40h]
  __int64 v33; // [rsp+8h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    v7 = *((_DWORD *)a2 + 2);
    if ( v3 > v4 )
    {
      if ( v3 <= *(unsigned int *)(a1 + 12) )
      {
        v9 = *a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v17 = v9 + 16;
          v18 = v6 + 16;
          v4 *= 192LL;
          v19 = v17 + v4;
          do
          {
            v20 = _mm_loadu_si128((const __m128i *)(v17 - 16));
            v21 = v17;
            v22 = v18;
            v32 = v4;
            v17 += 192;
            v18 += 192;
            *(__m128i *)(v18 - 208) = v20;
            sub_A302B0(v22, v21);
            v4 = v32;
          }
          while ( v19 != v17 );
          v3 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD *)a1;
          v9 = *a2;
        }
      }
      else
      {
        for ( i = v6 + 192 * v4; i != v6; sub_A09D30(i + 16) )
          i -= 192;
        *(_DWORD *)(a1 + 8) = 0;
        sub_A185A0((__int64 *)a1, v3);
        v3 = *((unsigned int *)a2 + 2);
        v6 = *(_QWORD *)a1;
        v4 = 0;
        v9 = *a2;
      }
      v10 = v4 + v6;
      v11 = (const __m128i *)(v9 + 192 * v3);
      v12 = (const __m128i *)(v4 + v9);
      while ( v12 != v11 )
      {
        v13 = _mm_loadu_si128(v12);
        m128i_i64 = (__int64)v12[1].m128i_i64;
        v15 = v10 + 16;
        v12 += 12;
        v10 += 192LL;
        *(__m128i *)(v10 - 192) = v13;
        sub_A13DB0(v15, m128i_i64);
      }
LABEL_9:
      *(_DWORD *)(a1 + 8) = v7;
      return a1;
    }
    v23 = *(_QWORD *)a1;
    if ( *((_DWORD *)a2 + 2) )
    {
      v24 = v6 + 16;
      v25 = 192 * v3;
      v26 = *a2 + 16;
      v33 = v25;
      v27 = v6 + 16 + v25;
      do
      {
        v28 = _mm_loadu_si128((const __m128i *)(v26 - 16));
        v29 = v26;
        v30 = v24;
        v24 += 192;
        v26 += 192;
        *(__m128i *)(v24 - 208) = v28;
        sub_A302B0(v30, v29);
      }
      while ( v27 != v24 );
      v23 = *(_QWORD *)a1;
      v4 = *(unsigned int *)(a1 + 8);
      v6 += v33;
    }
    v31 = v23 + 192 * v4;
    if ( v6 == v31 )
      goto LABEL_9;
    do
    {
      v31 -= 192;
      sub_A09D30(v31 + 16);
    }
    while ( v6 != v31 );
    *(_DWORD *)(a1 + 8) = v7;
  }
  return a1;
}
