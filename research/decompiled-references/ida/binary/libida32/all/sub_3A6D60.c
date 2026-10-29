__int64 __fastcall sub_3A6D60(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  char *v12; // r15
  __m128i si128; // xmm0
  char *v14; // rdi
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r14
  char *v19; // rdx
  __int64 v20; // r13
  size_t v21; // rax
  char *v22; // rsi
  __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  char *v25; // rbx
  size_t v26; // r14
  __int64 v27; // rax
  __m128i v28[4]; // [rsp+0h] [rbp-48h] BYREF

  v5 = a3;
  v6 = *(_QWORD *)(qword_2CA1698 + 1384);
  v8 = sub_3A5200(v6 + 72, a3, 0xFFFFFFFF);
  if ( v8 != v6 + 80 )
  {
    v11 = *(_QWORD *)(v8 + 48);
    v12 = nullptr;
    si128 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
    if ( v11 )
    {
      v26 = 8 * v11;
      v28[0] = si128;
      v12 = (char *)qalloc_or_throw(8 * v11, v5, v11, v7, v9, v10);
      memcpy(v12, *(const void **)(v8 + 40), v26);
      v14 = (char *)*a2;
      si128 = _mm_load_si128(v28);
      if ( !*a2 )
        goto LABEL_5;
    }
    else
    {
      v14 = (char *)*a2;
      if ( !*a2 )
      {
LABEL_5:
        *a2 = (__int64)v12;
        *(__m128i *)(a2 + 1) = si128;
        goto LABEL_6;
      }
    }
    a2[1] = 0;
    v28[0] = si128;
    qfree(v14);
    si128 = _mm_load_si128(v28);
    goto LABEL_5;
  }
LABEL_6:
  result = sub_3A5200(v6 + 120, a3, 0xFFFFFFFF);
  v16 = result;
  if ( result != v6 + 128 )
  {
    result = *(_QWORD *)(result + 48);
    v17 = 8 * result;
    v18 = (8 * result) >> 3;
    if ( v18 )
    {
      v19 = (char *)a2[1];
      v20 = *(_QWORD *)(v16 + 40);
      v21 = 0;
      v22 = (char *)*a2;
      v23 = 8LL * (_QWORD)v19;
      v24 = (unsigned __int64)&v19[v18];
      if ( a2[2] < v24 )
      {
        v27 = qvector_reserve(a2, v22, v24, 8);
        *a2 = v27;
        v22 = (char *)v27;
        v21 = 8 * a2[1] - v23;
      }
      v25 = &v22[v23];
      memmove(&v25[v17], v25, v21);
      result = 0;
      if ( v17 )
      {
        do
        {
          *(_QWORD *)&v25[result] = *(_QWORD *)(v20 + result);
          result += 8;
        }
        while ( v17 != result );
      }
      a2[1] += v18;
    }
  }
  return result;
}

