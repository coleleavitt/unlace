void __fastcall sub_7D1C50(unsigned int *a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int *v10; // rax
  const __m128i *v11; // r10
  const __m128i *v12; // r9
  const __m128i *v13; // r14
  __int64 v14; // r13
  __int64 v15; // rsi
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  const __m128i *v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v7 = a4;
    v8 = a5;
    if ( a4 )
    {
      if ( a4 + a5 == 2 )
      {
LABEL_9:
        v15 = *(_QWORD *)a1;
        if ( a2->m128i_u32[1] + ((unsigned __int64)a2->m128i_u32[0] << 32) < a1[1] + ((unsigned __int64)*a1 << 32) )
        {
          v16 = _mm_loadu_si128((const __m128i *)(a1 + 2));
          v17 = _mm_loadu_si128((const __m128i *)(a1 + 6));
          *(__m128i *)a1 = _mm_loadu_si128(a2);
          *((__m128i *)a1 + 1) = _mm_loadu_si128(a2 + 1);
          *((_QWORD *)a1 + 4) = a2[2].m128i_i64[0];
          a2->m128i_i64[0] = v15;
          *(__m128i *)((char *)a2 + 8) = v16;
          *(__m128i *)((char *)a2 + 24) = v17;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v7 <= v8 )
          {
            v14 = v8 / 2;
            v13 = (__m128i *)((char *)a2 + 40 * (v8 / 2));
            v12 = (const __m128i *)sub_7D11E0(a1, (__int64)a2, v13->m128i_u32[0], v13->m128i_u32[1]);
            v9 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v12 - (char *)a1) >> 3);
          }
          else
          {
            v9 = v7 / 2;
            v10 = sub_7D1260((unsigned int *)a2, a3, a1[10 * (v7 / 2)], a1[10 * (v7 / 2) + 1]);
            v12 = (const __m128i *)&a1[10 * (v7 / 2)];
            v13 = (const __m128i *)v10;
            v14 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v10 - (char *)v11) >> 3);
          }
          v18 = v12;
          v19 = sub_7D0B00(v12, v11, v13);
          v8 -= v14;
          sub_7D1C50(a1, v18, v19, v9, v14);
          v7 -= v9;
          if ( !v7 || !v8 )
            break;
          a1 = (unsigned int *)v19;
          a2 = (__m128i *)v13;
          if ( v7 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}

