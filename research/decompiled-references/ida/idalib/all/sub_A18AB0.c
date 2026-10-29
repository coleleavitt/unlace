__int64 __fastcall sub_A18AB0(__int64 a1, __int64 a2)
{
  const __m128i *v3; // rbp
  __m128i *v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r15
  int v8; // r14d
  const __m128i *v9; // rdx
  __int8 *v10; // rbx
  const __m128i *v11; // r15
  const __m128i *v12; // rbp
  __m128i v13; // xmm0
  __int64 m128i_i64; // rsi
  __int64 v15; // rdi
  const __m128i *v16; // rbx
  unsigned __int64 *v17; // rdi
  __m128i *v18; // rdi
  __m128i *v20; // rbp
  unsigned __int64 *v21; // rdi
  __m128i *v22; // rdi
  __m128i *v23; // rax
  __m128i *v24; // r15
  __int8 v25; // cl
  __int8 v26; // al
  __int64 *v27; // rsi
  __int64 v28; // rdi
  __int8 v29; // al
  __int8 v30; // al
  __int8 v31; // al
  __m128i *v32; // rbp
  unsigned __int64 *v33; // rdi
  __m128i *v34; // rdi
  const __m128i *v35; // rbp
  __int64 v36; // rbx
  void *v37; // rdi
  void *v38; // rdi
  __m128i *i; // rbp
  const __m128i *v40; // r15
  __int8 v41; // al
  __int64 v42; // rdi
  __int8 v43; // al
  __int8 v44; // al
  __int8 v45; // al
  __int8 v46; // al
  __int64 *v47; // rsi
  unsigned __int64 v48; // [rsp+0h] [rbp-48h]
  unsigned __int64 v49; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(const __m128i **)a2;
    v5 = *(__m128i **)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v7 = *(unsigned int *)(a2 + 8);
      v8 = *(_DWORD *)(a2 + 8);
      if ( v7 <= v6 )
      {
        v23 = *(__m128i **)a1;
        if ( *(_DWORD *)(a2 + 8) )
        {
          v24 = (__m128i *)((char *)v5 + 88 * v7);
          do
          {
            *v5 = _mm_loadu_si128(v3);
            sub_A0AAD0((__int64)v5[1].m128i_i64, (const __m128i *)v3[1].m128i_i64);
            v25 = v3[3].m128i_i8[0];
            v26 = v5[3].m128i_i8[0];
            v27 = &v3[3].m128i_i64[1];
            v28 = (__int64)&v5[3].m128i_i64[1];
            v5 = (__m128i *)((char *)v5 + 88);
            v3 = (const __m128i *)((char *)v3 + 88);
            v29 = v25 & 1 | v26 & 0xFE;
            v5[-3].m128i_i8[8] = v29;
            v30 = v3[-3].m128i_i8[8] & 2 | v29 & 0xFD;
            v5[-3].m128i_i8[8] = v30;
            v31 = v3[-3].m128i_i8[8] & 4 | v30 & 0xFB;
            v5[-3].m128i_i8[8] = v31;
            v5[-3].m128i_i8[8] = v3[-3].m128i_i8[8] & 8 | v31 & 0xF7;
            sub_A0AAD0(v28, v27);
          }
          while ( v24 != v5 );
          v23 = *(__m128i **)a1;
          v6 = *(unsigned int *)(a1 + 8);
        }
        v32 = (__m128i *)((char *)v23 + 88 * v6);
        while ( v5 != v32 )
        {
          while ( 1 )
          {
            v32 = (__m128i *)((char *)v32 - 88);
            v33 = (unsigned __int64 *)v32[3].m128i_i64[1];
            if ( v33 != &v32[4].m128i_u64[1] )
              operator delete(v33);
            v34 = (__m128i *)v32[1].m128i_i64[0];
            if ( v34 == &v32[2] )
              break;
            operator delete(v34);
            if ( v5 == v32 )
              goto LABEL_39;
          }
        }
LABEL_39:
        *(_DWORD *)(a1 + 8) = v8;
        v35 = *(const __m128i **)a2;
        v36 = *(_QWORD *)a2 + 88LL * *(unsigned int *)(a2 + 8);
        if ( *(_QWORD *)a2 != v36 )
        {
          do
          {
            while ( 1 )
            {
              v36 -= 88;
              v37 = *(void **)(v36 + 56);
              if ( v37 != (void *)(v36 + 72) )
                operator delete(v37);
              v38 = *(void **)(v36 + 16);
              if ( v38 == (void *)(v36 + 32) )
                break;
              operator delete(v38);
              if ( v35 == (const __m128i *)v36 )
                goto LABEL_16;
            }
          }
          while ( v35 != (const __m128i *)v36 );
        }
      }
      else
      {
        if ( v7 > *(unsigned int *)(a1 + 12) )
        {
          for ( i = (__m128i *)((char *)v5 + 88 * v6); v5 != i; sub_A09C30((__int64)i[1].m128i_i64) )
            i = (__m128i *)((char *)i - 88);
          *(_DWORD *)(a1 + 8) = 0;
          sub_A188C0(a1, v7);
          v3 = *(const __m128i **)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v6 = 0;
          v5 = *(__m128i **)a1;
          v9 = *(const __m128i **)a2;
        }
        else
        {
          v9 = *(const __m128i **)a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v6 *= 88LL;
            v49 = v6;
            v40 = (const __m128i *)((char *)v3 + v6);
            do
            {
              v48 = v6;
              *v5 = _mm_loadu_si128(v3);
              sub_A0AAD0((__int64)v5[1].m128i_i64, (const __m128i *)v3[1].m128i_i64);
              v41 = v5[3].m128i_i8[0];
              v42 = (__int64)&v5[3].m128i_i64[1];
              v5 = (__m128i *)((char *)v5 + 88);
              v43 = v3[3].m128i_i8[0] & 1 | v41 & 0xFE;
              v5[-3].m128i_i8[8] = v43;
              v44 = v3[3].m128i_i8[0] & 2 | v43 & 0xFD;
              v5[-3].m128i_i8[8] = v44;
              v45 = v3[3].m128i_i8[0] & 4 | v44 & 0xFB;
              v5[-3].m128i_i8[8] = v45;
              v46 = v3[3].m128i_i8[0] & 8 | v45 & 0xF7;
              v47 = &v3[3].m128i_i64[1];
              v3 = (const __m128i *)((char *)v3 + 88);
              v5[-3].m128i_i8[8] = v46;
              sub_A0AAD0(v42, v47);
              v6 = v48;
            }
            while ( v3 != v40 );
            v3 = *(const __m128i **)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = *(__m128i **)a1;
            v9 = (const __m128i *)(*(_QWORD *)a2 + v49);
          }
        }
        v10 = &v5->m128i_i8[v6];
        v11 = (const __m128i *)((char *)v3 + 88 * v7);
        if ( v11 != v9 )
        {
          v12 = v9;
          do
          {
            v13 = _mm_loadu_si128(v12);
            m128i_i64 = (__int64)v12[1].m128i_i64;
            v15 = (__int64)(v10 + 16);
            v12 = (const __m128i *)((char *)v12 + 88);
            v10 += 88;
            *(__m128i *)(v10 - 88) = v13;
            sub_A09F20(v15, m128i_i64);
          }
          while ( v11 != v12 );
          v3 = *(const __m128i **)a2;
        }
        *(_DWORD *)(a1 + 8) = v8;
        v16 = (const __m128i *)((char *)v3 + 88 * *(unsigned int *)(a2 + 8));
        while ( v16 != v3 )
        {
          while ( 1 )
          {
            v16 = (const __m128i *)((char *)v16 - 88);
            v17 = (unsigned __int64 *)v16[3].m128i_i64[1];
            if ( v17 != &v16[4].m128i_u64[1] )
              operator delete(v17);
            v18 = (__m128i *)v16[1].m128i_i64[0];
            if ( v18 == &v16[2] )
              break;
            operator delete(v18);
            if ( v16 == v3 )
              goto LABEL_16;
          }
        }
      }
LABEL_16:
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v20 = (__m128i *)((char *)v5 + 88 * v6);
      if ( v5 != v20 )
      {
        do
        {
          while ( 1 )
          {
            v20 = (__m128i *)((char *)v20 - 88);
            v21 = (unsigned __int64 *)v20[3].m128i_i64[1];
            if ( v21 != &v20[4].m128i_u64[1] )
              operator delete(v21);
            v22 = (__m128i *)v20[1].m128i_i64[0];
            if ( v22 == &v20[2] )
              break;
            operator delete(v22);
            if ( v5 == v20 )
              goto LABEL_23;
          }
        }
        while ( v5 != v20 );
LABEL_23:
        v20 = *(__m128i **)a1;
      }
      if ( v20 != (__m128i *)(a1 + 16) )
        free(v20);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
