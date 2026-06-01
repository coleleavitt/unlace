void __fastcall sub_E73C80(unsigned int *a1, unsigned int *a2, char **a3)
{
  unsigned int *i; // r15
  unsigned int v7; // r8d
  unsigned int v8; // esi
  unsigned int *v9; // r14
  __int64 v10; // rax
  unsigned int v11; // edx
  char *v12; // rdi
  _BYTE *v13; // rbx
  __int64 v14; // rax
  size_t v15; // rdx
  char *v16; // rax
  unsigned int *v17; // rax
  __m128i v18; // xmm0
  char v19; // r9
  bool v20; // al
  unsigned int *v21; // rcx
  unsigned __int64 v22; // xmm1_8
  unsigned __int64 v23; // rdi
  unsigned int *v24; // rax
  __m128d v25; // xmm0
  unsigned __int64 v26; // rdi
  unsigned int *j; // rax
  char v28; // r9
  bool v29; // r10
  __m128i v30; // xmm0
  unsigned int v31; // edx
  unsigned int v32; // [rsp+0h] [rbp-58h]
  unsigned int v33; // [rsp+4h] [rbp-54h]
  void *src; // [rsp+18h] [rbp-40h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; a2 != i; i += 2 )
    {
      while ( 1 )
      {
        v7 = i[1];
        v8 = *i;
        v9 = i;
        v10 = *a1;
        v11 = a1[1];
        if ( !v7 )
          break;
        v12 = *a3;
        if ( !v11 || ((v19 = v12[v8], v20 = v12[v10] != 0, v19) || !v20) && ((v19 != 0) != v20 || v7 >= v11) )
        {
          v13 = nullptr;
          if ( !v12 )
            goto LABEL_35;
          goto LABEL_6;
        }
LABEL_23:
        v21 = i + 2;
        v22 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(v7)).m128i_u64[0];
        v23 = ((char *)i - (char *)a1) >> 3;
        if ( (char *)i - (char *)a1 > 0 )
        {
          if ( (char *)i - (char *)a1 <= 8 )
          {
            v26 = 0;
          }
          else
          {
            v24 = i;
            do
            {
              v24 -= 4;
              v25 = (__m128d)_mm_loadh_ps((const double *)v24);
              *(__m128d *)(v24 + 2) = _mm_shuffle_pd(v25, v25, 1);
            }
            while ( v24 != &i[-4 * (v23 >> 1)] );
            if ( (v23 & 1) == 0 )
              goto LABEL_30;
            v26 = v23 & 0xFFFFFFFFFFFFFFFELL;
          }
          *(_QWORD *)&i[2 * ~v26 + 2] = *(_QWORD *)&i[2 * ~v26];
        }
LABEL_30:
        *(_QWORD *)a1 = v22;
        i += 2;
        if ( a2 == v21 )
          return;
      }
      if ( v8 < __PAIR64__(v11, v10) )
        goto LABEL_23;
      v12 = *a3;
      if ( !*a3 )
      {
        v17 = i - 2;
        v13 = nullptr;
LABEL_10:
        v18 = _mm_loadl_epi64((const __m128i *)(i - 2));
        if ( !_mm_cvtsi128_si32(_mm_shuffle_epi32(v18, 229)) )
          goto LABEL_12;
        while ( 1 )
        {
          do
          {
            *((_QWORD *)v17 + 1) = v18.m128i_i64[0];
            v9 = v17;
            v18 = _mm_loadl_epi64((const __m128i *)(v17 - 2));
            v17 -= 2;
          }
          while ( _mm_cvtsi128_si32(_mm_shuffle_epi32(v18, 229)) );
LABEL_12:
          if ( v8 >= _mm_cvtsi128_si32(v18) )
          {
            v7 = 0;
            goto LABEL_14;
          }
        }
      }
LABEL_6:
      src = nullptr;
      sub_C7B020(&src, a3);
      v13 = src;
      if ( src )
      {
        v32 = *((_DWORD *)src - 2);
        v33 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*((_DWORD *)src - 1)));
        v14 = sub_186B270(v32 + 8LL);
        v12 = (char *)(v14 + 8);
        *(_QWORD *)v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v32), _mm_cvtsi32_si128(v33)).m128i_u64[0];
        v15 = *((unsigned int *)v13 - 1);
        if ( v15 <= 1 )
        {
          if ( v15 == 1 )
            *(_BYTE *)(v14 + 8) = *v13;
          v7 = i[1];
          v8 = *i;
        }
        else
        {
          v16 = (char *)memmove(v12, v13, v15);
          v7 = i[1];
          v8 = *i;
          v12 = v16;
        }
      }
      else
      {
        v7 = i[1];
        v8 = *i;
        v12 = nullptr;
      }
      v17 = i - 2;
      if ( !v7 )
        goto LABEL_10;
LABEL_35:
      for ( j = i; ; j -= 2 )
      {
        v30 = _mm_loadl_epi64((const __m128i *)(j - 2));
        v9 = j;
        v31 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v30, 229));
        if ( !v31 )
          break;
        v28 = v12[v8];
        v29 = v12[_mm_cvtsi128_si32(v30)] != 0;
        if ( (v28 || !v29) && ((v28 != 0) != v29 || v7 >= v31) )
          break;
        *(_QWORD *)j = v30.m128i_i64[0];
      }
LABEL_14:
      *v9 = v8;
      v9[1] = v7;
      if ( v12 )
        sub_186B220(v12 - 8);
      if ( v13 )
        sub_186B220(v13 - 8);
    }
  }
}

