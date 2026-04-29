__int64 __fastcall sub_205CA0(_QWORD *a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 tinfo_pdata; // rax
  char *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r14
  char **v10; // rbx
  const char *v11; // r12
  unsigned int v12; // eax
  char *v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  size_t v16; // rax
  size_t v17; // rbx
  void *v18; // rdi
  size_t v19; // rbp
  __int64 v20; // rax
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __m128i v22; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v3 = *a2;
  v23 = __readfsqword(0x28u);
  s1 = nullptr;
  v22 = 0;
  if ( (v3 & 0x100) == 0 )
    return v2;
  tinfo_pdata = get_tinfo_pdata(&s1, v3, 2);
  v7 = s1;
  if ( !tinfo_pdata || (v8 = v22.m128i_i64[0]) == 0 || v22.m128i_i32[0] - 1 <= 2 )
  {
    v2 = 0;
    goto LABEL_17;
  }
  v9 = v22.m128i_i64[0] - 2;
  if ( s1[v22.m128i_i64[0] - 2] == 116 && s1[v22.m128i_i32[0] - 3] == 95 )
  {
    if ( v9 <= 1 )
    {
      if ( s1 )
      {
        v22.m128i_i64[0] = 0;
        qfree(s1);
        s1 = nullptr;
        v22.m128i_i64[1] = 0;
      }
    }
    else
    {
      if ( v22.m128i_i64[1] < (unsigned __int64)v9 )
      {
        s1 = (char *)qvector_reserve(&s1, s1, v22.m128i_i64[0] - 2, 1);
        v7 = s1;
      }
      v22.m128i_i64[0] = v8 - 2;
      v7[v8 - 3] = 0;
    }
    v12 = validate_name(&s1, 6, 1);
    v7 = s1;
    v2 = v12;
    if ( (_BYTE)v12 && a1 )
    {
      v13 = (char *)*a1;
      v14 = a1[2];
      *a1 = s1;
      v15 = _mm_loadu_si128(&v22);
      s1 = v13;
      v7 = v13;
      v22.m128i_i64[1] = v14;
      *(__m128i *)(a1 + 1) = v15;
    }
    goto LABEL_17;
  }
  v10 = off_4AB860;
  while ( 1 )
  {
    if ( stristr(v7, *v10) )
    {
      v11 = *v10;
      if ( !strcmp(v7, *v10) )
        v11 = v10[1];
    }
    else
    {
      if ( !stristr(v7, v10[1]) )
        goto LABEL_11;
      v11 = v10[1];
      if ( !strcmp(v7, v11) )
        v11 = *v10;
    }
    if ( v11 )
      break;
LABEL_11:
    v10 += 2;
    if ( algn_4AB8F0 == (_BYTE *)v10 )
    {
      v7 = s1;
      v2 = 0;
      goto LABEL_17;
    }
  }
  if ( a1 )
  {
    v16 = strlen(v11);
    v17 = v16;
    if ( !v16 )
    {
      a1[1] = 0;
      v7 = s1;
      v2 = 1;
      goto LABEL_17;
    }
    v18 = (void *)*a1;
    v19 = v16 + 1;
    if ( a1[2] < v16 + 1 )
    {
      v20 = qvector_reserve(a1, *a1, v16 + 1, 1);
      *a1 = v20;
      v18 = (void *)v20;
    }
    a1[1] = v19;
    memmove(v18, v11, v17);
    *(_BYTE *)(*a1 + v17) = 0;
  }
  v7 = s1;
  v2 = 1;
LABEL_17:
  if ( v7 )
  {
    v22.m128i_i64[0] = 0;
    qfree(v7);
  }
  return v2;
}
