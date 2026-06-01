signed __int64 __fastcall sub_2A4B10(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6)
{
  signed __int64 result; // rax
  __int64 v7; // r14
  __m128i *i; // r13
  const __m128i *v10; // rbx
  __m128i *v11; // r15
  __int8 *v12; // rsi
  __m128i v13; // xmm0
  __int32 v14; // eax
  __m128i *j; // r15
  __m128i v16; // xmm0
  __int32 v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int32 v20; // eax
  __int128 v21; // xmm0
  int v22; // eax
  __m128i v23; // xmm1
  int v24; // edx
  char v25; // al
  __m128i v26; // xmm0
  __int32 v27; // edx
  char v28; // al
  __m128i v29; // xmm1
  int v30; // eax
  __int8 *v31; // [rsp+28h] [rbp-60h]

  result = (signed __int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 > 320 )
  {
    v7 = a3;
    for ( i = a2; v7; i = (__m128i *)v10 )
    {
      v10 = (const __m128i *)(a1 + 20);
      --v7;
      v11 = (__m128i *)(a1 + 20 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (result >> 2)) >> 1));
      v31 = &i[-2].m128i_i8[12];
      v12 = &i[-2].m128i_i8[12];
      if ( (unsigned __int8)a4(a1 + 20, (__int64)v11) )
      {
        if ( !(unsigned __int8)a4((__int64)v11, (__int64)v12) )
        {
          v25 = a4(a1 + 20, (__int64)v31);
          v26 = _mm_loadu_si128((const __m128i *)a1);
          v27 = *(_DWORD *)(a1 + 16);
          if ( !v25 )
          {
            v29 = _mm_loadu_si128((const __m128i *)(a1 + 20));
            v30 = *(_DWORD *)(a1 + 36);
            *(__m128i *)(a1 + 20) = v26;
            *(_DWORD *)(a1 + 36) = v27;
            *(_DWORD *)(a1 + 16) = v30;
            *(__m128i *)a1 = v29;
            goto LABEL_6;
          }
LABEL_20:
          *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)i - 20));
          *(_DWORD *)(a1 + 16) = i[-1].m128i_i32[3];
          i[-1].m128i_i32[3] = v27;
          *(__m128i *)((char *)i - 20) = v26;
          goto LABEL_6;
        }
        v13 = _mm_loadu_si128((const __m128i *)a1);
        v14 = *(_DWORD *)(a1 + 16);
        *(__m128i *)a1 = _mm_loadu_si128(v11);
        *(_DWORD *)(a1 + 16) = v11[1].m128i_i32[0];
        v11[1].m128i_i32[0] = v14;
        *v11 = v13;
      }
      else
      {
        if ( !(unsigned __int8)a4(a1 + 20, (__int64)v12) )
        {
          v28 = a4((__int64)v11, (__int64)v31);
          v26 = _mm_loadu_si128((const __m128i *)a1);
          v27 = *(_DWORD *)(a1 + 16);
          if ( !v28 )
          {
            *(__m128i *)a1 = _mm_loadu_si128(v11);
            *(_DWORD *)(a1 + 16) = v11[1].m128i_i32[0];
            v11[1].m128i_i32[0] = v27;
            *v11 = v26;
            goto LABEL_6;
          }
          goto LABEL_20;
        }
        v22 = *(_DWORD *)(a1 + 16);
        v23 = _mm_loadu_si128((const __m128i *)(a1 + 20));
        v24 = *(_DWORD *)(a1 + 36);
        *(__m128i *)(a1 + 20) = _mm_loadu_si128((const __m128i *)a1);
        *(_DWORD *)(a1 + 16) = v24;
        *(_DWORD *)(a1 + 36) = v22;
        *(__m128i *)a1 = v23;
      }
LABEL_6:
      for ( j = i; ; *j = v16 )
      {
        while ( (unsigned __int8)a4((__int64)v10, a1) )
          v10 = (const __m128i *)((char *)v10 + 20);
        do
          j = (__m128i *)((char *)j - 20);
        while ( (unsigned __int8)a4(a1, (__int64)j) );
        if ( v10 >= j )
          break;
        v16 = _mm_loadu_si128(v10);
        v10 = (const __m128i *)((char *)v10 + 20);
        v17 = v10[-1].m128i_i32[3];
        *(const __m128i *)((char *)&v10[-2] + 12) = _mm_loadu_si128(j);
        v10[-1].m128i_i32[3] = j[1].m128i_i32[0];
        j[1].m128i_i32[0] = v17;
      }
      sub_2A4B10(v10, i, v7, a4);
      result = (signed __int64)v10->m128i_i64 - a1;
      if ( (__int64)v10->m128i_i64 - a1 <= 320 )
        return result;
    }
    sub_2A49E0((const __m128i *)a1, i, (unsigned __int64)i, a4, a5, a6);
    for ( result = (signed __int64)i->m128i_i64 - a1;
          (__int64)i->m128i_i64 - a1 > 20;
          result = sub_2A47D0(a1, 0, 0xCCCCCCCCCCCCCCCDLL * (((__int64)i->m128i_i64 - a1) >> 2), a4, v18, v19, v21, v20) )
    {
      i = (__m128i *)((char *)i - 20);
      v20 = i[1].m128i_i32[0];
      v21 = (__int128)_mm_loadu_si128(i);
      *i = _mm_loadu_si128((const __m128i *)a1);
      i[1].m128i_i32[0] = *(_DWORD *)(a1 + 16);
    }
  }
  return result;
}
