__m128i *__fastcall sub_C9FA0(__m128i *a1, const __m128i *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbp
  size_t v6; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  size_t v12; // r13
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // rax
  __m128i v17; // xmm0
  void *v18; // rax
  void *v19; // rax

  if ( a1 == a2 )
    return a1;
  sub_C9E30((__int64)a1);
  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2] = _mm_loadu_si128(a2 + 2);
  a1[3].m128i_i64[0] = a2[3].m128i_i64[0];
  v2 = a2->m128i_u32[2];
  if ( v2 == 1118 )
    goto LABEL_20;
  if ( v2 <= 0x45E )
  {
    if ( v2 > 0x3EE )
    {
      if ( v2 - 1093 <= 1 )
      {
        a1[1].m128i_i64[1] = qstrdup();
        v3 = operator new(0x20u);
        v4 = a1[2].m128i_i64[0];
        *(_DWORD *)v3 = -2;
        v5 = v3;
        *(_QWORD *)(v3 + 24) = 0;
        *(_OWORD *)(v3 + 8) = 0;
        if ( v4 != v3 )
        {
          if ( *(int *)v4 < -1 )
          {
            *(_QWORD *)(v3 + 8) = *(_QWORD *)(v4 + 8);
          }
          else
          {
            *(_QWORD *)(v3 + 8) = 0;
            *(_OWORD *)(v3 + 16) = 0;
            v6 = *(_QWORD *)(v4 + 16);
            if ( v6 )
            {
              v18 = (void *)qalloc_or_throw();
              *(_QWORD *)(v5 + 8) = v18;
              *(_QWORD *)(v5 + 24) = v6;
              memcpy(v18, *(const void **)(v4 + 8), v6);
              *(_QWORD *)(v5 + 16) = v6;
            }
          }
          *(_DWORD *)v5 = *(_DWORD *)v4;
        }
        a1[2].m128i_i64[0] = v5;
      }
      return a1;
    }
    if ( v2 > 0x3EC )
    {
      a1[1].m128i_i64[1] = qstrdup();
      a1[2].m128i_i64[0] = qstrdup();
      a1[3].m128i_i64[0] = qstrdup();
      return a1;
    }
    return a1;
  }
  if ( v2 == 1120 )
  {
LABEL_20:
    v16 = (_OWORD *)operator new(0x10u);
    v17 = _mm_loadu_si128((const __m128i *)a2[1].m128i_i64[1]);
    a1[1].m128i_i64[1] = (__int64)v16;
    *v16 = v17;
    return a1;
  }
  else
  {
    if ( v2 != 1145 )
      return a1;
    v8 = operator new(0x60u);
    v9 = a2[2].m128i_i64[0];
    v10 = v8;
    v11 = *(_QWORD *)v9;
    *(_OWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)v10 = v11;
    v12 = *(_QWORD *)(v9 + 16);
    if ( v12 )
    {
      v19 = (void *)qalloc_or_throw();
      *(_QWORD *)(v10 + 8) = v19;
      *(_QWORD *)(v10 + 24) = v12;
      memcpy(v19, *(const void **)(v9 + 8), v12);
      *(_QWORD *)(v10 + 16) = v12;
    }
    v13 = _mm_loadu_si128((const __m128i *)(v9 + 32));
    *(_QWORD *)(v10 + 48) = *(_QWORD *)(v9 + 48);
    v14 = *(_QWORD *)(v9 + 56);
    *(__m128i *)(v10 + 32) = v13;
    *(_QWORD *)(v10 + 56) = v14;
    *(_QWORD *)(v10 + 64) = *(_QWORD *)(v9 + 64);
    *(_QWORD *)(v10 + 72) = *(_QWORD *)(v9 + 72);
    *(_QWORD *)(v10 + 80) = *(_QWORD *)(v9 + 80);
    v15 = *(_QWORD *)(v9 + 88);
    a1[2].m128i_i64[0] = v10;
    *(_QWORD *)(v10 + 88) = v15;
    return a1;
  }
}

