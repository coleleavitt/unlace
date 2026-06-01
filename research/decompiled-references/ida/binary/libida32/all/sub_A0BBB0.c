__int64 __fastcall sub_A0BBB0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rdx
  __int64 v6; // rbx
  int v7; // r13d
  unsigned __int64 v8; // rdx
  __int64 i; // rbp
  __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r14
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // rbp
  __int64 v21; // rbx
  unsigned __int64 v22; // r14
  __m128i v23; // xmm2
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r14
  __m128i v29; // xmm1
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rbp
  unsigned __int64 v33; // [rsp+8h] [rbp-40h]
  unsigned __int64 v34; // [rsp+8h] [rbp-40h]

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
        v10 = *a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v4 <<= 7;
          v20 = v10 + 16;
          v21 = v6 + 16;
          v22 = v20 + v4;
          do
          {
            v23 = _mm_loadu_si128((const __m128i *)(v20 - 16));
            v24 = v20;
            v25 = v21;
            v20 += 128;
            v33 = v4;
            v21 += 128;
            *(__m128i *)(v21 - 144) = v23;
            sub_A0B930(v25, v24);
            v4 = v33;
          }
          while ( v20 != v22 );
          v3 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD *)a1;
          v10 = *a2;
        }
      }
      else
      {
        v8 = v4 << 7;
        for ( i = v6 + v8; i != v6; sub_9E5FA0(i + 16) )
          i -= 128;
        *(_DWORD *)(a1 + 8) = 0;
        sub_9F3D50(a1, v3);
        v3 = *((unsigned int *)a2 + 2);
        v6 = *(_QWORD *)a1;
        v4 = 0;
        v10 = *a2;
      }
      v11 = v3 << 7;
      v12 = v10 + v4;
      v13 = v4 + v6;
      if ( v10 + v4 != v11 + v10 )
      {
        v14 = v12 + 16;
        v15 = v12 + v11 - v4 + 16;
        do
        {
          v16 = _mm_loadu_si128((const __m128i *)(v14 - 16));
          v17 = v13 + 16;
          v18 = v14;
          v14 += 128;
          v13 += 128;
          *(__m128i *)(v13 - 128) = v16;
          sub_9EDF30(v17, v18);
        }
        while ( v15 != v14 );
      }
LABEL_10:
      *(_DWORD *)(a1 + 8) = v7;
      return a1;
    }
    v26 = *(_QWORD *)a1;
    if ( *((_DWORD *)a2 + 2) )
    {
      v27 = v6 + 16;
      v34 = v3 << 7;
      v28 = *a2 + 16;
      do
      {
        v29 = _mm_loadu_si128((const __m128i *)(v28 - 16));
        v30 = v28;
        v31 = v27;
        v27 += 128;
        v28 += 128;
        *(__m128i *)(v27 - 144) = v29;
        sub_A0B930(v31, v30);
      }
      while ( v6 + 16 + v34 != v27 );
      v26 = *(_QWORD *)a1;
      v4 = *(unsigned int *)(a1 + 8);
      v6 += v34;
    }
    v32 = v26 + (v4 << 7);
    if ( v6 == v32 )
      goto LABEL_10;
    do
    {
      v32 -= 128;
      sub_9E5FA0(v32 + 16);
    }
    while ( v6 != v32 );
    *(_DWORD *)(a1 + 8) = v7;
  }
  return a1;
}

