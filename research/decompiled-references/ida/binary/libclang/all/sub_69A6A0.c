// write access to const memory has been detected, the output may be wrong!
__m128 *__fastcall sub_69A6A0(__m128 **a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 *v4; // rbp
  unsigned int v5; // eax
  __m128 *result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __m128 *v9; // rdx
  __int64 *v10; // r9
  __m128 v11; // rcx
  __int64 *v12; // r13
  __int64 *v13; // r15
  __m128 **v14; // r8
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // r10
  unsigned int v18; // r14d
  __m128 *v19; // rbp
  int v20; // eax
  __m128 *v21; // r11
  int v22; // esi
  unsigned int i; // edx
  unsigned int v24; // edx
  __m128 *v25; // rax
  int v26; // ecx
  __m128 v27; // rcx
  int v28; // [rsp+Ch] [rbp-FCh]
  __int64 v29; // [rsp+10h] [rbp-F8h]
  __m128 **v30; // [rsp+18h] [rbp-F0h]
  __m128 v31; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-A8h]
  int v33; // [rsp+68h] [rbp-A0h]
  char v34[156]; // [rsp+6Ch] [rbp-9Ch] BYREF

  v2 = (unsigned int)(a2 - 1);
  v3 = *((unsigned int *)a1 + 4);
  v4 = (__int64 *)*a1;
  v5 = (((((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
        | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
        | ((v2 | (v2 >> 1)) >> 2)
        | v2
        | (v2 >> 1)) >> 16)
      | ((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
      | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
      | ((v2 | (v2 >> 1)) >> 2)
      | v2
      | (v2 >> 1))
     + 1;
  if ( v5 < 0x40 )
    v5 = 64;
  *((_DWORD *)a1 + 4) = v5;
  result = (__m128 *)sub_25CC9C0(32LL * v5, 8);
  v7 = *((unsigned int *)a1 + 4);
  *a1 = result;
  v8 = 2 * v7;
  v9 = &result[v8];
  if ( v4 )
  {
    a1[1] = nullptr;
    v31.m128_i32[2] = -1;
    v10 = &v4[4 * v3];
    v31.m128_u64[0] = 0;
    if ( v8 * 16 )
    {
      v11 = v31;
      do
      {
        result->m128_u64[0] = 0;
        result += 2;
        result[-2].m128_u64[1] = 0;
        result[-1] = v11;
      }
      while ( result != v9 );
    }
    v12 = v4;
    if ( v10 != v4 )
    {
      v13 = v10;
      v14 = a1;
      do
      {
        v15 = *v12;
        if ( *v12 || v12[1] || *((_DWORD *)v12 + 6) < 0xFFFFFFFE || v12[2] )
        {
          v28 = *((_DWORD *)v14 + 4);
          if ( !v28 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128((const __m128i *)v12);
            *(__m128i *)&byte_9[3] = _mm_loadu_si128((const __m128i *)((char *)v12 + 12));
            BUG();
          }
          v16 = v12[1];
          v17 = v12[2];
          v30 = v14;
          v18 = *((_DWORD *)v12 + 6);
          v19 = *v14;
          v29 = v17;
          v33 = HIDWORD(v17);
          v31 = _mm_shuffle_ps(
                  (__m128)_mm_unpacklo_epi64((__m128i)v16, (__m128i)HIDWORD(v16)),
                  (__m128)_mm_unpacklo_epi64((__m128i)v15, (__m128i)HIDWORD(v15)),
                  136);
          v32 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v17)).m128i_u64[0];
          v20 = sub_6999F0(&v31, (__int64)v34);
          v21 = nullptr;
          v14 = v30;
          v22 = 1;
          for ( i = (v28 - 1) & v20; ; i = (v28 - 1) & v24 )
          {
            v25 = &v19[2 * i];
            if ( v15 == v25->m128_u64[0]
              && v25->m128_u64[1] == v16
              && v25[1].m128_i32[2] == v18
              && v25[1].m128_u64[0] == v29 )
            {
              break;
            }
            if ( !v25->m128_u64[0] && !v25->m128_u64[1] )
            {
              v26 = v25[1].m128_i32[2];
              if ( v26 == -1 )
              {
                if ( !v25[1].m128_u64[0] )
                {
                  if ( v21 )
                    v25 = v21;
                  break;
                }
              }
              else if ( v26 == -2 && !(v25[1].m128_u64[0] | (unsigned __int64)v21) )
              {
                v21 = &v19[2 * i];
              }
            }
            v24 = v22 + i;
            ++v22;
          }
          *(__m128i *)v25 = _mm_loadu_si128((const __m128i *)v12);
          *(__m128i *)((char *)v25 + 12) = _mm_loadu_si128((const __m128i *)((char *)v12 + 12));
          ++*((_DWORD *)v30 + 2);
        }
        v12 += 4;
      }
      while ( v13 != v12 );
    }
    return (__m128 *)operator delete();
  }
  else
  {
    a1[1] = nullptr;
    v31.m128_u64[0] = 0;
    v31.m128_i32[2] = -1;
    if ( result != v9 )
    {
      v27 = v31;
      do
      {
        result->m128_u64[0] = 0;
        result += 2;
        result[-2].m128_u64[1] = 0;
        result[-1] = v27;
      }
      while ( result != v9 );
    }
  }
  return result;
}

