const __m128i *__fastcall sub_6025D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __m128i v5; // xmm0
  bool v6; // zf
  const __m128i *result; // rax
  __int64 *v8; // rbx
  __int64 v9; // r13
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 i; // rdx
  __m128i v16; // xmm3
  __m128i v17; // xmm2
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm3
  __m128i v21; // xmm3
  __m128i v22; // xmm3
  __m128i v23; // xmm0
  __int64 v24; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v25; // [rsp+8h] [rbp-B0h] BYREF
  const __m128i *v26; // [rsp+18h] [rbp-A0h]
  __m128i v27[2]; // [rsp+20h] [rbp-98h] BYREF
  const __m128i *v28; // [rsp+40h] [rbp-78h]
  __m128i v29; // [rsp+50h] [rbp-68h]
  __m128i v30; // [rsp+60h] [rbp-58h]
  _OWORD v31[4]; // [rsp+70h] [rbp-48h] BYREF

  sub_638F70(&v24, a3, a1[4], *a1);
  v5 = _mm_loadu_si128(&v25);
  v27[0].m128i_i64[0] = a2;
  v6 = *(_WORD *)(a3 + 32) == 86;
  v27[0].m128i_i64[1] = v24;
  result = v26;
  v27[1] = v5;
  v28 = v26;
  if ( v6 )
  {
    v8 = *(__int64 **)(a3 + 56);
    result = (const __m128i *)*(unsigned int *)(a3 + 48);
    v9 = *(unsigned int *)(a2 + 8);
    v10 = &v8[(_QWORD)result];
    if ( v8 != v10 )
    {
      do
      {
        v11 = *v8++;
        result = sub_5F9AA0(v27, v11);
      }
      while ( v10 != v8 );
      v12 = *(unsigned int *)(a2 + 8);
      if ( (_DWORD)v9 != (_DWORD)v12 )
      {
        v13 = v9 << 6;
        v14 = v12 << 6;
        result = (const __m128i *)(*(_QWORD *)a2 + v13);
        if ( v13 != v14 )
        {
          for ( i = *(_QWORD *)a2 + v14 - 64; (unsigned __int64)result < i; *(__m128i *)(i + 108) = v23 )
          {
            v16 = _mm_loadu_si128(result + 3);
            v17 = _mm_loadu_si128(result);
            i -= 64LL;
            result += 4;
            v18 = _mm_loadu_si128(result - 3);
            v19 = _mm_loadu_si128(result - 2);
            v31[1] = v16;
            v20 = _mm_loadu_si128((const __m128i *)(i + 64));
            v31[0] = v19;
            result[-4] = v20;
            v21 = _mm_loadu_si128((const __m128i *)(i + 80));
            v29 = v17;
            result[-3] = v21;
            v22 = _mm_loadu_si128((const __m128i *)(i + 96));
            v30 = v18;
            result[-2] = v22;
            *(const __m128i *)((char *)&result[-2] + 12) = _mm_loadu_si128((const __m128i *)(i + 108));
            *(__m128i *)(i + 96) = v19;
            v23 = _mm_loadu_si128((const __m128i *)((char *)v31 + 12));
            *(__m128i *)(i + 64) = v17;
            *(__m128i *)(i + 80) = v18;
          }
        }
      }
    }
  }
  return result;
}

