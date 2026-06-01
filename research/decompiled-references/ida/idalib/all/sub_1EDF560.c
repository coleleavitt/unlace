void __fastcall sub_1EDF560(char ***a1)
{
  char **v1; // r8
  char *v2; // r13
  __int64 v3; // r12
  const __m128i *v4; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  char *v8; // rdi
  __int64 v9; // r9
  const __m128i *i; // rdx
  unsigned __int64 v11; // rax
  const __m128i *v12; // rcx
  __int32 v13; // esi
  const __m128i *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r10
  const __m128i *v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int32 *v27; // rbx
  __int32 *v28; // rax
  const __m128i *v29; // r11
  unsigned int v30; // esi
  unsigned int v31; // edx
  __int32 *v32; // rax
  __int32 v33; // edi
  __int32 v34; // eax
  __m128i *v35; // rax

  v1 = *a1;
  v2 = **a1;
  v3 = 8LL * *((unsigned int *)*a1 + 2);
  v4 = (const __m128i *)&v2[v3];
  if ( v2 == &v2[v3] )
  {
    v8 = &v2[v3];
  }
  else
  {
    _BitScanReverse64(&v6, v3 >> 3);
    sub_1EDF3B0(**a1, &v2[v3], 2LL * (int)(63 - (v6 ^ 0x3F)));
    if ( (unsigned __int64)v3 > 0x80 )
    {
      sub_1EA8740(v2, v2 + 128);
      for ( ; v4 != v29; v32[1] = v33 )
      {
        while ( 1 )
        {
          v30 = v29->m128i_i32[0];
          v31 = v29[-1].m128i_u32[2];
          v32 = &v29[-1].m128i_i32[2];
          v33 = v29->m128i_i32[1];
          if ( v29->m128i_i32[0] < v31 )
            break;
          v35 = (__m128i *)v29;
          v29 = (const __m128i *)((char *)v29 + 8);
          v35->m128i_i32[0] = v30;
          v35->m128i_i32[1] = v33;
          if ( v4 == v29 )
            goto LABEL_4;
        }
        while ( 1 )
        {
          v32[2] = v31;
          v32[3] = v32[1];
          v31 = *(v32 - 2);
          if ( v30 >= v31 )
            break;
          v32 -= 2;
        }
        v29 = (const __m128i *)((char *)v29 + 8);
        *v32 = v30;
      }
    }
    else
    {
      sub_1EA8740(v2, &v2[v3]);
    }
LABEL_4:
    v1 = *a1;
    v7 = *((unsigned int *)*a1 + 2);
    v8 = **a1;
    v9 = 8 * v7;
    v4 = (const __m128i *)&v8[8 * v7];
    if ( v8 != (char *)v4 )
    {
      for ( i = (const __m128i *)**a1; ; i = (const __m128i *)((char *)i + 8) )
      {
        v11 = (unsigned __int64)&i->m128i_u64[1];
        if ( &i->m128i_u64[1] == (unsigned __int64 *)v4 )
          break;
        if ( i->m128i_i32[0] == i->m128i_i32[2] && i->m128i_i32[1] == i->m128i_i32[3] )
        {
          if ( i == v4 )
            break;
          v12 = i + 1;
          if ( v4 != &i[1] )
          {
            do
            {
              while ( i->m128i_i32[0] != v12->m128i_i32[0] || i->m128i_i32[1] != v12->m128i_i32[1] )
              {
                i->m128i_i32[2] = v12->m128i_i32[0];
                v13 = v12->m128i_i32[1];
                v12 = (const __m128i *)((char *)v12 + 8);
                i->m128i_i32[3] = v13;
                i = (const __m128i *)v11;
                v11 += 8LL;
                if ( v12 == v4 )
                  goto LABEL_17;
              }
              v12 = (const __m128i *)((char *)v12 + 8);
            }
            while ( v12 != v4 );
LABEL_17:
            v7 = *((unsigned int *)v1 + 2);
          }
          v14 = (const __m128i *)v11;
          v15 = 8 * v7 - v9;
          v16 = v15 >> 3;
          v17 = v15 >> 3;
          if ( v15 > 0 )
          {
            if ( (v11 >= (unsigned __int64)&v4[1].m128i_u64[1] + 4 || &i[2].m128i_u64[1] <= (unsigned __int64 *)v4)
              && (v11 >= (unsigned __int64)&v4[2]
               || &i[2].m128i_u64[1] <= (unsigned __int64 *)((char *)v4->m128i_i64 + 4))
              && v15 > 96 )
            {
              v18 = v16 - 1;
              v19 = v4;
              v20 = v11;
              do
              {
                v21 = _mm_loadu_si128(v19);
                v22 = _mm_loadu_si128(v19 + 1);
                v19 += 2;
                v20 += 32LL;
                *(_DWORD *)(v20 - 32) = _mm_cvtsi128_si32(v21);
                *(_DWORD *)(v20 - 16) = _mm_cvtsi128_si32(v22);
                *(_DWORD *)(v20 - 24) = _mm_cvtsi128_si32(_mm_unpackhi_epi32(v21, v21));
                *(_DWORD *)(v20 - 8) = _mm_cvtsi128_si32(_mm_unpackhi_epi32(v22, v22));
                v23 = _mm_loadu_si128((const __m128i *)((char *)v19 - 28));
                v24 = _mm_loadu_si128((const __m128i *)((char *)v19 - 12));
                *(_DWORD *)(v20 - 28) = _mm_cvtsi128_si32(v23);
                *(_DWORD *)(v20 - 12) = _mm_cvtsi128_si32(v24);
                *(_DWORD *)(v20 - 20) = _mm_cvtsi128_si32(_mm_unpackhi_epi32(v23, v23));
                *(_DWORD *)(v20 - 4) = _mm_cvtsi128_si32(_mm_unpackhi_epi32(v24, v24));
              }
              while ( v19 != &v4[2 * ((unsigned __int64)(v16 - 1) >> 2)] );
              v25 = v16 - (v18 & 0xFFFFFFFFFFFFFFFCLL);
              v26 = 2 * (v18 & 0xFFFFFFFFFFFFFFFCLL);
              v27 = &v4->m128i_i32[v26];
              v28 = (__int32 *)(v26 * 4 + v11);
              v14 = (const __m128i *)(v28 + 2);
              *v28 = *v27;
              v28[1] = v27[1];
              if ( v25 != 1 )
              {
                v14 = (const __m128i *)(v28 + 4);
                v28[2] = v27[2];
                v28[3] = v27[3];
                if ( v25 != 2 )
                {
                  v14 = (const __m128i *)(v28 + 6);
                  v28[4] = v27[4];
                  v28[5] = v27[5];
                  if ( v25 != 3 )
                  {
                    v14 = (const __m128i *)(v28 + 8);
                    v28[6] = v27[6];
                    v28[7] = v27[7];
                  }
                }
              }
            }
            else
            {
              do
              {
                v34 = v4->m128i_i32[0];
                v14 = (const __m128i *)((char *)v14 + 8);
                v4 = (const __m128i *)((char *)v4 + 8);
                v14[-1].m128i_i32[2] = v34;
                v14[-1].m128i_i32[3] = v4[-1].m128i_i32[3];
                --v17;
              }
              while ( v17 );
            }
          }
          goto LABEL_27;
        }
      }
    }
  }
  v14 = v4;
LABEL_27:
  *((_DWORD *)v1 + 2) = ((char *)v14 - v8) >> 3;
}
