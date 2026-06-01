__m128i *__fastcall sub_2387F0(__m128i *a1, const __m128i *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  size_t v7; // r13
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rax
  size_t v13; // r13
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  __m128i *v21; // rax
  __m128i v22; // xmm0
  void *v23; // rax
  void *v24; // rax

  if ( a1 == a2 )
    return a1;
  sub_238680((__int64)a1, a2->m128i_i8);
  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2] = _mm_loadu_si128(a2 + 2);
  a1[3].m128i_i64[0] = a2[3].m128i_i64[0];
  v3 = a2->m128i_u32[2];
  if ( v3 == 1118 )
    goto LABEL_20;
  if ( v3 <= 0x45E )
  {
    if ( v3 > 0x3EE )
    {
      if ( v3 - 1093 <= 1 )
      {
        a1[1].m128i_i64[1] = qstrdup(a1[1].m128i_i64[1]);
        v4 = operator new(0x20u);
        v5 = a1[2].m128i_i64[0];
        *(_DWORD *)v4 = -2;
        v6 = v4;
        *(_QWORD *)(v4 + 24) = 0;
        *(_OWORD *)(v4 + 8) = 0;
        if ( v5 != v4 )
        {
          if ( *(int *)v5 < -1 )
          {
            *(_QWORD *)(v4 + 8) = *(_QWORD *)(v5 + 8);
          }
          else
          {
            *(_QWORD *)(v4 + 8) = 0;
            *(_OWORD *)(v4 + 16) = 0;
            v7 = *(_QWORD *)(v5 + 16);
            if ( v7 )
            {
              v23 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 16));
              *(_QWORD *)(v6 + 8) = v23;
              *(_QWORD *)(v6 + 24) = v7;
              memcpy(v23, *(const void **)(v5 + 8), v7);
              *(_QWORD *)(v6 + 16) = v7;
            }
          }
          *(_DWORD *)v6 = *(_DWORD *)v5;
        }
        a1[2].m128i_i64[0] = v6;
      }
      return a1;
    }
    if ( v3 > 0x3EC )
    {
      v17 = qstrdup(a1[1].m128i_i64[1]);
      v18 = a1[2].m128i_i64[0];
      a1[1].m128i_i64[1] = v17;
      v19 = qstrdup(v18);
      v20 = a1[3].m128i_i64[0];
      a1[2].m128i_i64[0] = v19;
      a1[3].m128i_i64[0] = qstrdup(v20);
      return a1;
    }
    return a1;
  }
  if ( v3 == 1120 )
  {
LABEL_20:
    v21 = (__m128i *)operator new(0x10u);
    v22 = _mm_loadu_si128((const __m128i *)a2[1].m128i_i64[1]);
    a1[1].m128i_i64[1] = (__int64)v21;
    *v21 = v22;
    return a1;
  }
  else
  {
    if ( v3 != 1145 )
      return a1;
    v9 = operator new(0x60u);
    v10 = a2[2].m128i_i64[0];
    v11 = v9;
    v12 = *(_QWORD *)v10;
    *(_OWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)v11 = v12;
    v13 = *(_QWORD *)(v10 + 16);
    if ( v13 )
    {
      v24 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 16));
      *(_QWORD *)(v11 + 8) = v24;
      *(_QWORD *)(v11 + 24) = v13;
      memcpy(v24, *(const void **)(v10 + 8), v13);
      *(_QWORD *)(v11 + 16) = v13;
    }
    v14 = _mm_loadu_si128((const __m128i *)(v10 + 32));
    *(_QWORD *)(v11 + 48) = *(_QWORD *)(v10 + 48);
    v15 = *(_QWORD *)(v10 + 56);
    *(__m128i *)(v11 + 32) = v14;
    *(_QWORD *)(v11 + 56) = v15;
    *(_QWORD *)(v11 + 64) = *(_QWORD *)(v10 + 64);
    *(_QWORD *)(v11 + 72) = *(_QWORD *)(v10 + 72);
    *(_QWORD *)(v11 + 80) = *(_QWORD *)(v10 + 80);
    v16 = *(_QWORD *)(v10 + 88);
    a1[2].m128i_i64[0] = v11;
    *(_QWORD *)(v11 + 88) = v16;
    return a1;
  }
}
