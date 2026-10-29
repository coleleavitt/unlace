void __fastcall sub_2237950(__int64 a1)
{
  __m128i *v1; // r12
  size_t v2; // rax
  __m128i *v3; // rbp
  __m128i *v4; // rax
  __m128i *v5; // rbx
  __int64 v6; // rdx
  __m128i *v7; // rbx
  unsigned __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  size_t v11; // r14
  size_t v12; // r15
  size_t v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // eax
  _OWORD *v16; // rsi
  size_t v17; // rdx
  __int64 v18; // rdx
  size_t v19; // rdx
  signed __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-70h] BYREF
  __m128i v22; // [rsp+10h] [rbp-68h] BYREF
  void *s1; // [rsp+20h] [rbp-58h]
  size_t n; // [rsp+28h] [rbp-50h]
  _OWORD v25[4]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (__m128i *)(a1 + 32);
  v22 = _mm_loadu_si128((const __m128i *)a1);
  s1 = v25;
  if ( *(_QWORD *)(a1 + 16) == a1 + 32 )
  {
    v25[0] = _mm_loadu_si128((const __m128i *)(a1 + 32));
  }
  else
  {
    s1 = *(void **)(a1 + 16);
    *(_QWORD *)&v25[0] = *(_QWORD *)(a1 + 32);
  }
  v2 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = v1;
  v3 = (__m128i *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = 0;
  n = v2;
  *(_BYTE *)(a1 + 32) = 0;
  while ( 1 )
  {
    v7 = v3 - 2;
    v8 = v3[-5].m128i_u64[0];
    v9 = v22.m128i_i64[0] < v8;
    if ( v22.m128i_i64[0] != v8 || (v10 = v3[-5].m128i_u64[1], v9 = v22.m128i_i64[1] < v10, v22.m128i_i64[1] != v10) )
    {
      if ( !v9 )
        goto LABEL_18;
      goto LABEL_5;
    }
    v11 = n;
    v12 = v3[-4].m128i_u64[1];
    v13 = v12;
    if ( n <= v12 )
      v13 = n;
    if ( v13 )
    {
      v14 = memcmp(s1, (const void *)v3[-4].m128i_i64[0], v13);
      if ( v14 )
      {
        v15 = v14 >> 31;
        goto LABEL_17;
      }
    }
    v20 = n - v12;
    if ( (__int64)(n - v12) > 0x7FFFFFFF )
      goto LABEL_19;
    if ( v20 >= (__int64)0xFFFFFFFF80000000LL )
      break;
LABEL_5:
    v4 = (__m128i *)v3[-4].m128i_i64[0];
    v5 = v3 - 3;
    v3[-2] = _mm_loadu_si128(v3 - 5);
    if ( &v3[-3] == v4 )
    {
      v19 = v3[-4].m128i_u64[1];
      if ( v19 )
      {
        if ( v19 == 1 )
          v1->m128i_i8[0] = v5->m128i_i8[0];
        else
          memcpy(v1, &v3[-3], v19);
        v19 = v3[-4].m128i_u64[1];
        v1 = (__m128i *)v5[2].m128i_i64[0];
      }
      v5[2].m128i_i64[1] = v19;
      v1->m128i_i8[v19] = 0;
      v1 = (__m128i *)v3[-4].m128i_i64[0];
    }
    else
    {
      if ( v3 == v1 )
      {
        v5[2].m128i_i64[0] = (__int64)v4;
        v3[-1].m128i_i64[1] = v3[-4].m128i_i64[1];
        v3->m128i_i64[0] = v3[-3].m128i_i64[0];
      }
      else
      {
        v5[2].m128i_i64[0] = (__int64)v4;
        v6 = v3->m128i_i64[0];
        v3[-1].m128i_i64[1] = v3[-4].m128i_i64[1];
        v3->m128i_i64[0] = v3[-3].m128i_i64[0];
        if ( v1 )
        {
          v3[-4].m128i_i64[0] = (__int64)v1;
          v5->m128i_i64[0] = v6;
          goto LABEL_9;
        }
      }
      v3[-4].m128i_i64[0] = (__int64)v3[-3].m128i_i64;
      v1 = v3 - 3;
    }
LABEL_9:
    v3[-4].m128i_i64[1] = 0;
    v3 -= 3;
    v1->m128i_i8[0] = 0;
    v1 = (__m128i *)v5[-1].m128i_i64[0];
  }
  v15 = (unsigned int)v20 >> 31;
LABEL_17:
  if ( (_BYTE)v15 )
    goto LABEL_5;
LABEL_18:
  v11 = n;
LABEL_19:
  v16 = s1;
  v17 = v11;
  *v7 = _mm_load_si128(&v22);
  if ( v16 == v25 )
  {
    if ( v11 )
    {
      if ( v11 == 1 )
        v1->m128i_i8[0] = v25[0];
      else
        memcpy(v1, v16, v11);
      v17 = n;
      v1 = (__m128i *)v7[1].m128i_i64[0];
    }
    v7[1].m128i_i64[1] = v17;
    v1->m128i_i8[v17] = 0;
    v1 = (__m128i *)s1;
  }
  else
  {
    if ( v3 == v1 )
    {
      v21 = *(_QWORD *)&v25[0];
      v7[1].m128i_i64[0] = (__int64)v16;
      *(__m128 *)((char *)&v7[1] + 8) = _mm_loadh_ps((const double *)&v21);
    }
    else
    {
      v21 = *(_QWORD *)&v25[0];
      v18 = v3->m128i_i64[0];
      v7[1].m128i_i64[0] = (__int64)v16;
      *(__m128 *)((char *)&v7[1] + 8) = _mm_loadh_ps((const double *)&v21);
      if ( v1 )
      {
        s1 = v1;
        *(_QWORD *)&v25[0] = v18;
        goto LABEL_23;
      }
    }
    v1 = (__m128i *)v25;
    s1 = v25;
  }
LABEL_23:
  n = 0;
  v1->m128i_i8[0] = 0;
  if ( s1 != v25 )
    operator delete(s1);
}
