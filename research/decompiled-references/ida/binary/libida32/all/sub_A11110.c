__int64 __fastcall sub_A11110(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  __m128i *v5; // r13
  __int64 v6; // r14
  __m128i *v7; // rbp
  unsigned int *v8; // rsi
  __m128i v9; // xmm0
  __m128i *v10; // rbp
  __m128i *v11; // r12
  unsigned __int32 v12; // r10d
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  char v16; // al
  unsigned int v17; // eax
  __int64 v18; // rcx
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  char v21; // al
  __m128i v22; // xmm0
  char v23; // al
  __m128i v24; // xmm5
  unsigned int *v25; // [rsp+0h] [rbp-68h]
  unsigned __int32 v26; // [rsp+Ch] [rbp-5Ch]
  __m128i *v27; // [rsp+10h] [rbp-58h]
  __int64 v28; // [rsp+18h] [rbp-50h]
  __int64 v29; // [rsp+28h] [rbp-40h]

  result = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 > 5248 )
  {
    v4 = a3;
    v5 = a2;
    if ( !a3 )
    {
      v11 = a2;
      goto LABEL_21;
    }
    v25 = (unsigned int *)(a1 + 328);
    v29 = a1 + 16;
    while ( 1 )
    {
      v6 = v4 - 1;
      v7 = (__m128i *)(a1 + 328 * ((__int64)(0x8F9C18F9C18F9C19LL * (result >> 3)) >> 1));
      v8 = &v5[-21].m128i_u32[2];
      if ( (unsigned __int8)sub_9E60E0(v25, (unsigned int *)v7) )
      {
        if ( !(unsigned __int8)sub_9E60E0((unsigned int *)v7, v8) )
        {
          v21 = sub_9E60E0(v25, &v5[-21].m128i_u32[2]);
          v22 = _mm_loadu_si128((const __m128i *)a1);
          if ( !v21 )
          {
            v24 = _mm_loadu_si128((const __m128i *)(a1 + 328));
            *(__m128i *)(a1 + 328) = v22;
            *(__m128i *)a1 = v24;
            sub_A11090(v29, a1 + 344);
            goto LABEL_7;
          }
LABEL_27:
          *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v5 - 328));
          *(__m128i *)((char *)v5 - 328) = v22;
          sub_A11090(v29, (__int64)&v5[-20].m128i_i64[1]);
          goto LABEL_7;
        }
        v9 = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)a1 = _mm_loadu_si128(v7);
        *v7 = v9;
        sub_A11090(v29, (__int64)v7[1].m128i_i64);
      }
      else
      {
        if ( !(unsigned __int8)sub_9E60E0(v25, v8) )
        {
          v23 = sub_9E60E0((unsigned int *)v7, &v5[-21].m128i_u32[2]);
          v22 = _mm_loadu_si128((const __m128i *)a1);
          if ( !v23 )
          {
            *(__m128i *)a1 = _mm_loadu_si128(v7);
            *v7 = v22;
            sub_A11090(v29, (__int64)v7[1].m128i_i64);
            goto LABEL_7;
          }
          goto LABEL_27;
        }
        v20 = _mm_loadu_si128((const __m128i *)a1);
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)(a1 + 328));
        *(__m128i *)(a1 + 328) = v20;
        sub_A11090(v29, a1 + 344);
      }
LABEL_7:
      v10 = v5;
      v27 = v5;
      v28 = v6;
      v11 = (__m128i *)(a1 + 328);
      v12 = *(_DWORD *)a1;
      v13 = *(_DWORD *)(a1 + 12) & 0x7FFFFFFF;
      v14 = *(_DWORD *)(a1 + 8) & 0x7FFFFFFF;
      v15 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
      while ( 1 )
      {
        v26 = v12;
        v16 = sub_9E60E0((unsigned int *)v11, (unsigned int *)a1);
        v12 = v26;
        if ( v16 )
          goto LABEL_8;
        do
        {
          do
            v10 = (__m128i *)((char *)v10 - 328);
          while ( v10->m128i_i32[0] > v26 );
          v17 = v10->m128i_i32[2] & 0x7FFFFFFF;
          v18 = v10->m128i_i32[1] & 0x7FFFFFFF;
        }
        while ( v10->m128i_i32[0] == v26
             && ((unsigned int)v18 > v15
              || (_DWORD)v18 == v15 && (v17 > v14 || (v10->m128i_i32[3] & 0x7FFFFFFFu) > v13 && v17 == v14)) );
        if ( v11 >= v10 )
          break;
        v19 = _mm_loadu_si128(v11);
        *v11 = _mm_loadu_si128(v10);
        *v10 = v19;
        sub_A11090((__int64)v11[1].m128i_i64, (__int64)v10[1].m128i_i64);
        v12 = *(_DWORD *)a1;
        v13 = *(_DWORD *)(a1 + 12) & 0x7FFFFFFF;
        v14 = *(_DWORD *)(a1 + 8) & 0x7FFFFFFF;
        v15 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
LABEL_8:
        v11 = (__m128i *)((char *)v11 + 328);
      }
      v4 = v28;
      sub_A11110(v11, v27, v28, v18);
      result = (__int64)v11->m128i_i64 - a1;
      if ( (__int64)v11->m128i_i64 - a1 <= 5248 )
        return result;
      v5 = v11;
      if ( !v28 )
      {
LABEL_21:
        sub_A09BF0(a1, (__int64)v11);
        do
        {
          v11 = (__m128i *)((char *)v11 - 328);
          sub_A09D70((const __m128i *)a1, (__int64)v11, v11);
          result = (__int64)v11->m128i_i64 - a1;
        }
        while ( (__int64)v11->m128i_i64 - a1 > 328 );
        return result;
      }
    }
  }
  return result;
}

