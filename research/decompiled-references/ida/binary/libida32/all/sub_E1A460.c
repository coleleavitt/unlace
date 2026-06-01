__m128i *__fastcall sub_E1A460(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  double *v9; // rbp
  unsigned int v10; // eax
  __m128i *result; // rax
  __int64 v12; // rdx
  int v13; // r10d
  double *v14; // r11
  __m128i *v15; // rcx
  __m128i si128; // xmm0
  __m128i *v17; // rdx
  double *v18; // rsi
  int v19; // r12d
  double v20; // rcx
  double v21; // rdi
  __int8 *v22; // r14
  int v23; // r9d
  int i; // edx
  __int8 *v25; // r8
  __int64 v26; // r15
  int v27; // edx
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __m128i *j; // rdx
  int v31; // edx
  double v32[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(double **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (__m128i *)sub_220C370(24LL * v10, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = v12;
    *(_QWORD *)&v32[1] = 24 * v8;
    v14 = &v9[3 * v8];
    v15 = (__m128i *)((char *)result + 24 * v12);
    if ( result != v15 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      v17 = result;
      do
      {
        *v17 = si128;
        v17 = (__m128i *)((char *)v17 + 24);
      }
      while ( v15 != v17 );
    }
    v18 = v9;
    v19 = v13 - 1;
    if ( v14 != v9 )
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *(_QWORD *)v18 == -4096 )
        {
          if ( *((_QWORD *)v18 + 1) == -4096 )
            goto LABEL_20;
LABEL_10:
          if ( !v13 )
            goto LABEL_24;
LABEL_11:
          v21 = v18[1];
          v22 = nullptr;
          v23 = 1;
          for ( i = v19
                  & (((0xBF58476D1CE4E5B9LL
                     * ((LODWORD(v21) >> 9) ^ (LODWORD(v21) >> 4)
                      | ((unsigned __int64)((LODWORD(v20) >> 9) ^ (LODWORD(v20) >> 4)) << 32))) >> 31)
                   ^ (484763065 * ((LODWORD(v21) >> 9) ^ (LODWORD(v21) >> 4)))); ; i = v19 & v31 )
          {
            v25 = &result->m128i_i8[24 * i];
            v26 = *(_QWORD *)v25;
            if ( *(_QWORD *)&v20 == *(_QWORD *)v25 && *(_QWORD *)&v21 == *((_QWORD *)v25 + 1) )
              break;
            if ( v26 == -4096 )
            {
              if ( *((_QWORD *)v25 + 1) == -4096 )
              {
                if ( v22 )
                  v25 = v22;
                break;
              }
            }
            else if ( v26 == -8192 && *((_QWORD *)v25 + 1) == -8192 && !v22 )
            {
              v22 = &result->m128i_i8[24 * i];
            }
            v31 = v23 + i;
            ++v23;
          }
          v18 += 3;
          v32[0] = v21;
          *(__m128 *)v25 = _mm_loadh_ps(v32);
          v27 = *((_DWORD *)v18 - 2);
          ++*(_DWORD *)(a1 + 8);
          *((_DWORD *)v25 + 4) = v27;
          if ( v14 == v18 )
            return (__m128i *)operator delete();
        }
        else
        {
          if ( v20 != NAN )
            goto LABEL_10;
          if ( *((_QWORD *)v18 + 1) != -8192 )
          {
            if ( !v13 )
            {
LABEL_24:
              *(double *)&dword_0 = *v18;
              BUG();
            }
            goto LABEL_11;
          }
LABEL_20:
          v18 += 3;
          if ( v14 == v18 )
            return (__m128i *)operator delete();
        }
      }
    }
    return (__m128i *)operator delete();
  }
  else
  {
    v28 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v29 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
    for ( j = (__m128i *)((char *)result + 24 * v28); j != result; result = (__m128i *)((char *)result + 24) )
      *result = v29;
  }
  return result;
}

