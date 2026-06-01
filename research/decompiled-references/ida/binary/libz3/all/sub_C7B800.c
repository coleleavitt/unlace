void __fastcall sub_C7B800(unsigned int *a1, unsigned int *a2, void **a3)
{
  unsigned int *v5; // r15
  unsigned int v6; // r9d
  unsigned int v7; // esi
  unsigned int *v8; // r13
  __int64 v9; // rax
  unsigned int v10; // edx
  _BYTE *v11; // rdi
  __int64 v12; // rax
  _BYTE *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rbp
  size_t v16; // rdx
  __int64 v17; // rax
  signed __int64 v18; // rdx
  _BYTE *v19; // rax
  unsigned int *v20; // rax
  __m128i v21; // xmm0
  char v22; // r10
  bool v23; // al
  unsigned int *v24; // rdi
  unsigned __int64 v25; // xmm1_8
  unsigned __int64 v26; // r8
  unsigned int *v27; // rax
  __m128d v28; // xmm0
  unsigned __int64 v29; // r8
  unsigned int *i; // rax
  char v31; // r10
  bool v32; // r11
  __m128i v33; // xmm0
  unsigned int v34; // edx
  unsigned __int64 v35; // [rsp+8h] [rbp-50h]
  __int64 size; // [rsp+18h] [rbp-40h]

  if ( a1 != a2 && a2 != a1 + 2 )
  {
    v5 = a1 + 2;
    while ( 1 )
    {
      v6 = v5[1];
      v7 = *v5;
      v8 = v5;
      v9 = *a1;
      v10 = a1[1];
      if ( v6 )
      {
        v11 = *a3;
        if ( v10 )
        {
          v22 = v11[v7];
          v23 = v11[v9] != 0;
          if ( !v22 && v23 )
            goto LABEL_26;
          if ( (v22 != 0) == v23 && v6 < v10 )
            goto LABEL_26;
        }
        if ( !v11 )
        {
          v15 = 0;
          goto LABEL_39;
        }
LABEL_7:
        v35 = *((_QWORD *)v11 - 1);
        size = (unsigned int)_mm_cvtsi128_si32((__m128i)v35) + 8LL;
        v12 = sub_186B270(size);
        v13 = *a3;
        v14 = v12;
        v15 = v12 + 8;
        *(_QWORD *)v12 = v35;
        if ( v13 )
        {
          v16 = *((unsigned int *)v13 - 1);
          if ( v16 <= 1 )
          {
            if ( v16 == 1 )
              *(_BYTE *)(v12 + 8) = *v13;
          }
          else
          {
            memmove((void *)(v12 + 8), v13, v16);
          }
        }
        v17 = sub_186B270(size);
        v18 = *(unsigned int *)(v14 + 4);
        v11 = (_BYTE *)(v17 + 8);
        *(_QWORD *)v17 = v35;
        if ( v18 <= 1 )
        {
          if ( v18 == 1 )
            *(_BYTE *)(v17 + 8) = *(_BYTE *)(v14 + 8);
          v6 = v5[1];
          v7 = *v5;
        }
        else
        {
          v19 = memcpy(v11, (const void *)(v14 + 8), v18);
          v6 = v5[1];
          v7 = *v5;
          v11 = v19;
        }
        v20 = v5 - 2;
        if ( !v6 )
          goto LABEL_13;
LABEL_39:
        for ( i = v5; ; i -= 2 )
        {
          v33 = _mm_loadl_epi64((const __m128i *)(i - 2));
          v8 = i;
          v34 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v33, 229));
          if ( !v34 )
            break;
          v31 = v11[v7];
          v32 = v11[_mm_cvtsi128_si32(v33)] != 0;
          if ( (v31 || !v32) && ((v31 != 0) != v32 || v6 >= v34) )
            break;
          *(_QWORD *)i = v33.m128i_i64[0];
        }
LABEL_17:
        *v8 = v7;
        v8[1] = v6;
        if ( v11 )
          sub_186B220(v11 - 8);
        if ( v15 )
          sub_186B220((void *)(v15 - 8));
        v5 += 2;
        if ( a2 == v5 )
          return;
      }
      else
      {
        if ( v7 >= __PAIR64__(v10, v9) )
        {
          v11 = *a3;
          if ( !*a3 )
          {
            v20 = v5 - 2;
            v15 = 0;
LABEL_13:
            v21 = _mm_loadl_epi64((const __m128i *)(v5 - 2));
            if ( !_mm_cvtsi128_si32(_mm_shuffle_epi32(v21, 229)) )
              goto LABEL_15;
            while ( 1 )
            {
              do
              {
                *((_QWORD *)v20 + 1) = v21.m128i_i64[0];
                v8 = v20;
                v21 = _mm_loadl_epi64((const __m128i *)(v20 - 2));
                v20 -= 2;
              }
              while ( _mm_cvtsi128_si32(_mm_shuffle_epi32(v21, 229)) );
LABEL_15:
              if ( v7 >= _mm_cvtsi128_si32(v21) )
              {
                v6 = 0;
                goto LABEL_17;
              }
            }
          }
          goto LABEL_7;
        }
LABEL_26:
        v24 = v5 + 2;
        v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v6)).m128i_u64[0];
        v26 = ((char *)v5 - (char *)a1) >> 3;
        if ( (char *)v5 - (char *)a1 > 0 )
        {
          if ( (char *)v5 - (char *)a1 <= 8 )
          {
            v29 = 0;
          }
          else
          {
            v27 = v5;
            do
            {
              v27 -= 4;
              v28 = (__m128d)_mm_loadh_ps((const double *)v27);
              *(__m128d *)(v27 + 2) = _mm_shuffle_pd(v28, v28, 1);
            }
            while ( &v5[-4 * (v26 >> 1)] != v27 );
            if ( (v26 & 1) == 0 )
              goto LABEL_33;
            v29 = v26 & 0xFFFFFFFFFFFFFFFELL;
          }
          *(_QWORD *)&v5[2 * ~v29 + 2] = *(_QWORD *)&v5[2 * ~v29];
        }
LABEL_33:
        *(_QWORD *)a1 = v25;
        v5 += 2;
        if ( a2 == v24 )
          return;
      }
    }
  }
}

