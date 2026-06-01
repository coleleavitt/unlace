__int64 __fastcall sub_600350(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  const char *file_ext; // rax
  const char *v9; // rbx
  size_t v11; // rax
  __int64 v12; // rbp
  size_t v13; // rbx
  _QWORD *v14; // rdx
  _QWORD *v15; // r15
  __int64 v16; // rbx
  char *v17; // rbp
  const char *v18; // rsi
  const char *v19; // rdi
  int v20; // eax
  int v21; // eax
  __int64 v22; // r14
  _QWORD *v23; // rbp
  __int64 v24; // rax
  char *v25; // rsi
  const char *v26; // rdi
  __int64 v27; // rsi
  char *v28; // rax
  __m128i v29; // xmm0
  const char *v30; // rsi
  char *v31; // rdi
  _QWORD *v32; // [rsp+8h] [rbp-1070h]
  char *s1; // [rsp+10h] [rbp-1068h] BYREF
  __m128i v34; // [rsp+18h] [rbp-1060h] BYREF
  char s[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v36; // [rsp+1038h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  file_ext = (const char *)get_file_ext(a7);
  if ( !file_ext )
    return 0;
  v9 = file_ext;
  if ( strlen(file_ext) != 3
    || strncasecmp(v9, "id", 2u)
    || (unsigned __int8)(tolower(*((unsigned __int8 *)v9 + 2)) - 115) > 1u )
  {
    return 0;
  }
  qstrncpy(s, a7, 4096);
  qstrupr(s);
  s1 = nullptr;
  v34 = 0;
  v11 = strlen(s);
  v12 = v11 + 1;
  v13 = v11;
  s1 = (char *)qvector_reserve(&s1, 0, v11 + 1, 1);
  v34.m128i_i64[0] = v12;
  memmove(s1, s, v13);
  s1[v13] = 0;
  v14 = (_QWORD *)a1[5];
  v32 = a1 + 4;
  v15 = a1 + 4;
  if ( !v14 )
  {
LABEL_19:
    v23 = (_QWORD *)a1[6];
    if ( v15 != v23 )
    {
      v23 = v15;
      v24 = std::_Rb_tree_decrement();
      v16 = v34.m128i_i64[0];
      v22 = *(_QWORD *)(v24 + 40);
      v15 = (_QWORD *)v24;
      goto LABEL_21;
    }
    goto LABEL_25;
  }
  v16 = v34.m128i_i64[0];
  v17 = s1;
  do
  {
    v22 = v14[5];
    if ( v22 )
    {
      v18 = (const char *)v14[4];
      v15 = v14;
      v19 = haystack;
      if ( !v16 )
        goto LABEL_10;
    }
    else
    {
      v18 = haystack;
      if ( !v16 )
      {
        while ( 1 )
        {
          v15 = (_QWORD *)v14[3];
          if ( !v15 )
            goto LABEL_28;
          v22 = v15[5];
          if ( v22 )
          {
            v18 = (const char *)v15[4];
            v19 = haystack;
            goto LABEL_10;
          }
          v14 = (_QWORD *)v14[3];
        }
      }
    }
    v15 = v14;
    v19 = v17;
LABEL_10:
    v20 = strcmp(v19, v18);
    v14 = (_QWORD *)v15[3];
    if ( v20 < 0 )
      v14 = (_QWORD *)v15[2];
    v21 = (v20 >> 31) & 1;
  }
  while ( v14 );
  if ( (_BYTE)v21 )
    goto LABEL_19;
  v23 = v15;
LABEL_21:
  if ( v16 )
  {
    v25 = s1;
    v26 = haystack;
    if ( v22 )
      goto LABEL_23;
    goto LABEL_24;
  }
  if ( v22 )
  {
    v25 = (char *)haystack;
LABEL_23:
    v26 = (const char *)v15[4];
LABEL_24:
    if ( strcmp(v26, v25) < 0 )
    {
LABEL_25:
      if ( v32 != v23 )
      {
        v30 = haystack;
        if ( v23[5] )
          v30 = (const char *)v23[4];
        v31 = (char *)haystack;
        if ( v34.m128i_i64[0] )
          v31 = s1;
        strcmp(v31, v30);
      }
      v27 = operator new(0x38u);
      v28 = s1;
      v29 = _mm_loadu_si128(&v34);
      s1 = nullptr;
      *(_QWORD *)(v27 + 32) = v28;
      *(__m128i *)(v27 + 40) = v29;
      v34 = 0;
      std::_Rb_tree_insert_and_rebalance();
      ++a1[8];
    }
  }
  v17 = s1;
LABEL_28:
  if ( v17 )
  {
    v34.m128i_i64[0] = 0;
    qfree(v17);
  }
  return 0;
}

