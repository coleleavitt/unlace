__int64 __fastcall sub_20D020(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  char *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r14
  char **v9; // rbx
  const char *v10; // r12
  unsigned int v11; // eax
  char *v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  size_t v15; // rax
  size_t v16; // rbx
  void *v17; // rdi
  size_t v18; // rbp
  __int64 v19; // rax
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __m128i v21; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v3 = *a2;
  v22 = __readfsqword(0x28u);
  s1 = nullptr;
  v21 = 0;
  if ( (v3 & 0x100) == 0 )
    return v2;
  v6 = s1;
  if ( !get_tinfo_pdata() || (v7 = v21.m128i_i64[0]) == 0 || v21.m128i_i32[0] - 1 <= 2 )
  {
    v2 = 0;
    goto LABEL_17;
  }
  v8 = v21.m128i_i64[0] - 2;
  if ( s1[v21.m128i_i64[0] - 2] == 116 && s1[v21.m128i_i32[0] - 3] == 95 )
  {
    if ( v8 > 1 )
    {
      if ( v21.m128i_i64[1] < (unsigned __int64)v8 )
      {
        s1 = (char *)qvector_reserve((__int64)&s1, (__int64)s1, v21.m128i_i64[0] - 2, 1);
        v6 = s1;
      }
      v21.m128i_i64[0] = v7 - 2;
      v6[v7 - 3] = 0;
    }
    v11 = validate_name();
    v6 = s1;
    v2 = v11;
    if ( (_BYTE)v11 && a1 )
    {
      v12 = *(char **)a1;
      v13 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)a1 = s1;
      v14 = _mm_loadu_si128(&v21);
      s1 = v12;
      v6 = v12;
      v21.m128i_i64[1] = v13;
      *(__m128i *)(a1 + 8) = v14;
    }
    goto LABEL_17;
  }
  v9 = off_4DF060;
  while ( 1 )
  {
    if ( stristr() )
    {
      v10 = *v9;
      if ( !strcmp(s1, *v9) )
        v10 = v9[1];
    }
    else
    {
      if ( !stristr() )
        goto LABEL_11;
      v10 = v9[1];
      if ( !strcmp(s1, v10) )
        v10 = *v9;
    }
    if ( v10 )
      break;
LABEL_11:
    v9 += 2;
    if ( algn_4DF0F0 == (_BYTE *)v9 )
    {
      v6 = s1;
      v2 = 0;
      goto LABEL_17;
    }
  }
  if ( a1 )
  {
    v15 = strlen(v10);
    v16 = v15;
    if ( !v15 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v6 = s1;
      v2 = 1;
      goto LABEL_17;
    }
    v17 = *(void **)a1;
    v18 = v15 + 1;
    if ( *(_QWORD *)(a1 + 16) < v15 + 1 )
    {
      v19 = qvector_reserve(a1, *(_QWORD *)a1, v15 + 1, 1);
      *(_QWORD *)a1 = v19;
      v17 = (void *)v19;
    }
    *(_QWORD *)(a1 + 8) = v18;
    memmove(v17, v10, v16);
    *(_BYTE *)(*(_QWORD *)a1 + v16) = 0;
  }
  v6 = s1;
  v2 = 1;
LABEL_17:
  if ( v6 )
  {
    v21.m128i_i64[0] = 0;
    qfree((__int64)v6);
  }
  return v2;
}
