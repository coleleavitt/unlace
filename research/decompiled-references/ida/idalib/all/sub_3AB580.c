_QWORD *__fastcall sub_3AB580(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // r12
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdx
  char *v8; // r15
  __m128i si128; // xmm0
  char *v10; // rdi
  _QWORD *result; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r14
  char *v15; // rdx
  __int64 v16; // r13
  size_t v17; // rax
  char *v18; // rsi
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  char *v21; // rbx
  size_t v22; // r14
  __int64 v23; // rax
  __m128i v24[4]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(qword_2CCB598 + 1576);
  v6 = sub_3A98A0(v5 + 72, a3, 0xFFFFFFFFFFFFFFFFLL);
  if ( v6 != (_QWORD *)(v5 + 80) )
  {
    v7 = v6[6];
    v8 = nullptr;
    si128 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
    if ( v7 )
    {
      v22 = 8 * v7;
      v24[0] = si128;
      v8 = (char *)qalloc_or_throw(8 * v7);
      memcpy(v8, (const void *)v6[5], v22);
      v10 = (char *)*a2;
      si128 = _mm_load_si128(v24);
      if ( !*a2 )
        goto LABEL_5;
    }
    else
    {
      v10 = (char *)*a2;
      if ( !*a2 )
      {
LABEL_5:
        *a2 = (__int64)v8;
        *(__m128i *)(a2 + 1) = si128;
        goto LABEL_6;
      }
    }
    a2[1] = 0;
    v24[0] = si128;
    qfree(v10);
    si128 = _mm_load_si128(v24);
    goto LABEL_5;
  }
LABEL_6:
  result = sub_3A98A0(v5 + 120, a3, 0xFFFFFFFFFFFFFFFFLL);
  v12 = result;
  if ( result != (_QWORD *)(v5 + 128) )
  {
    result = (_QWORD *)result[6];
    v13 = 8LL * (_QWORD)result;
    v14 = (8 * (__int64)result) >> 3;
    if ( v14 )
    {
      v15 = (char *)a2[1];
      v16 = v12[5];
      v17 = 0;
      v18 = (char *)*a2;
      v19 = 8LL * (_QWORD)v15;
      v20 = (unsigned __int64)&v15[v14];
      if ( a2[2] < v20 )
      {
        v23 = qvector_reserve(a2, v18, v20, 8);
        *a2 = v23;
        v18 = (char *)v23;
        v17 = 8 * a2[1] - v19;
      }
      v21 = &v18[v19];
      memmove(&v21[v13], v21, v17);
      result = nullptr;
      if ( v13 )
      {
        do
        {
          *(_QWORD *)((char *)result + (_QWORD)v21) = *(_QWORD *)((char *)result + v16);
          ++result;
        }
        while ( (_QWORD *)v13 != result );
      }
      a2[1] += v14;
    }
  }
  return result;
}
