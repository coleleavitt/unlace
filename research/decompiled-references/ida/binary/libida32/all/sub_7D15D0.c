void __fastcall sub_7D15D0(unsigned int *a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  signed __int64 v7; // rbx
  signed __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int *v10; // r9
  unsigned int *v11; // rax
  const __m128i *v12; // r10
  const __m128i *v13; // r9
  const __m128i *v14; // r14
  __int64 v15; // r13
  __int64 v16; // rsi
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
        v16 = *(_QWORD *)a1;
        if ( a2->m128i_u32[1] + ((unsigned __int64)a2->m128i_u32[0] << 32) < a1[1] + ((unsigned __int64)*a1 << 32) )
        {
          v17 = _mm_loadu_si128((const __m128i *)(a1 + 2));
          *(__m128i *)a1 = _mm_loadu_si128(a2);
          *((_QWORD *)a1 + 2) = a2[1].m128i_i64[0];
          a2->m128i_i64[0] = v16;
          *(__m128i *)((char *)a2 + 8) = v17;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v7 <= v8 )
          {
            v15 = v8 / 2;
            v14 = (__m128i *)((char *)a2
                            + 8 * (v8 / 2)
                            + 8 * ((v8 + ((unsigned __int64)v8 >> 63)) & 0xFFFFFFFFFFFFFFFELL));
            v13 = (const __m128i *)sub_7D0F40(a1, (__int64)a2, v14->m128i_u32[0], v14->m128i_u32[1]);
            v9 = 0xAAAAAAAAAAAAAAABLL * (((char *)v13 - (char *)a1) >> 3);
          }
          else
          {
            v9 = v7 / 2;
            v10 = &a1[2 * (v7 / 2) + 2 * ((v7 + ((unsigned __int64)v7 >> 63)) & 0xFFFFFFFFFFFFFFFELL)];
            v11 = sub_7D0FB0((unsigned int *)a2, a3, *v10, v10[1]);
            v13 = (const __m128i *)&a1[2 * (v7 / 2) + 2 * ((v7 + ((unsigned __int64)v7 >> 63)) & 0xFFFFFFFFFFFFFFFELL)];
            v14 = (const __m128i *)v11;
            v15 = 0xAAAAAAAAAAAAAAABLL * (((char *)v11 - (char *)v12) >> 3);
          }
          v18 = v13;
          v19 = sub_7D0500(v13, v12, v14);
          v8 -= v15;
          sub_7D15D0(a1, v18, v19, v9, v15);
          v7 -= v9;
          if ( !v7 || !v8 )
            break;
          a1 = (unsigned int *)v19;
          a2 = (__m128i *)v14;
          if ( v7 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}

