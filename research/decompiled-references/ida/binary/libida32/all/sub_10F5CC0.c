void __fastcall sub_10F5CC0(__int64 a1)
{
  char *v2; // rbp
  __int64 i; // rbx
  _BYTE *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rdx
  _BYTE *v9; // r13
  __m128i *v10; // rax
  _BYTE *v11; // rdi
  __int64 v12; // rdx
  void *v13; // rdi
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  size_t v16; // rdx
  size_t v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-70h] BYREF
  void *v19[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v20[16]; // [rsp+20h] [rbp-58h] BYREF
  void *src; // [rsp+30h] [rbp-48h] BYREF
  size_t n; // [rsp+38h] [rbp-40h]
  _OWORD v23[3]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(char **)a1;
  for ( i = *(_QWORD *)(a1 + 8); ; i = v6 )
  {
    v4 = (_BYTE *)sub_2266D20(v2, i, 0);
    if ( v5 != 1 || *v4 != 46 )
      break;
    v2 = (char *)sub_2266770(v2, i, 0);
  }
  if ( !i || (v7 = *v2, i == 1) && v7 == 47 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    **(_BYTE **)a1 = 0;
    return;
  }
  v8 = (__int64)&v2[i];
  v9 = (_BYTE *)(a1 + 16);
  if ( v7 != 47 )
  {
    v19[0] = v20;
    sub_10F3F00(v19, v2, v8);
    v10 = (__m128i *)sub_978080(v19, 0, 0, "/", 1u);
    src = v23;
    if ( (__m128i *)v10->m128i_i64[0] == &v10[1] )
    {
      v23[0] = _mm_loadu_si128(v10 + 1);
    }
    else
    {
      src = (void *)v10->m128i_i64[0];
      *(_QWORD *)&v23[0] = v10[1].m128i_i64[0];
    }
    n = v10->m128i_u64[1];
    v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
    v10->m128i_i64[1] = 0;
    v10[1].m128i_i8[0] = 0;
    v11 = *(_BYTE **)a1;
    if ( src == v23 )
    {
      v16 = n;
      if ( n )
      {
        if ( n == 1 )
          *v11 = v23[0];
        else
          memcpy(v11, src, n);
        v16 = n;
        v11 = *(_BYTE **)a1;
      }
      *(_QWORD *)(a1 + 8) = v16;
      v11[v16] = 0;
      v11 = src;
    }
    else
    {
      if ( v11 == v9 )
      {
        v18 = *(_QWORD *)&v23[0];
        *(_QWORD *)a1 = src;
        *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v18);
      }
      else
      {
        v18 = *(_QWORD *)&v23[0];
        v12 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)a1 = src;
        *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v18);
        if ( v11 )
        {
          src = v11;
          *(_QWORD *)&v23[0] = v12;
          goto LABEL_17;
        }
      }
      v11 = v23;
      src = v23;
    }
LABEL_17:
    n = 0;
    *v11 = 0;
    if ( src != v23 )
      operator delete(src);
    v13 = v19[0];
    if ( v19[0] != v20 )
      goto LABEL_20;
    return;
  }
  src = v23;
  sub_10F3F00(&src, v2, v8);
  v14 = *(_BYTE **)a1;
  if ( src == v23 )
  {
    v17 = n;
    if ( n )
    {
      if ( n == 1 )
        *v14 = v23[0];
      else
        memcpy(v14, src, n);
      v17 = n;
      v14 = *(_BYTE **)a1;
    }
    *(_QWORD *)(a1 + 8) = v17;
    v14[v17] = 0;
    v14 = src;
  }
  else
  {
    if ( v9 == v14 )
    {
      v18 = *(_QWORD *)&v23[0];
      *(_QWORD *)a1 = src;
      *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v18);
    }
    else
    {
      v18 = *(_QWORD *)&v23[0];
      v15 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)a1 = src;
      *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v18);
      if ( v14 )
      {
        src = v14;
        *(_QWORD *)&v23[0] = v15;
        goto LABEL_26;
      }
    }
    v14 = v23;
    src = v23;
  }
LABEL_26:
  n = 0;
  *v14 = 0;
  v13 = src;
  if ( src != v23 )
LABEL_20:
    operator delete(v13);
}

