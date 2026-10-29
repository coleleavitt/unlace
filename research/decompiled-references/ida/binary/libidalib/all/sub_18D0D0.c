TView *__fastcall sub_18D0D0(const char *src, int a2, const __m128i *a3)
{
  size_t v4; // rax
  size_t v5; // rbp
  size_t v6; // rbx
  const char *i; // rbx
  char *v8; // rbp
  char **v9; // r15
  char v10; // r13
  size_t v11; // rax
  char *v12; // rdi
  TView *v13; // rbx
  size_t v15; // rbp
  void *v16; // rdi
  size_t v17; // r12
  TGroup *v18; // rax
  __int64 *v19; // rbp
  size_t v20; // rax
  __int64 v21; // rax
  char *s; // [rsp+10h] [rbp-B8h]
  char *v24; // [rsp+30h] [rbp-98h] BYREF
  __int128 v25; // [rsp+38h] [rbp-90h]
  __int64 v26; // [rsp+48h] [rbp-80h]
  __int128 v27; // [rsp+50h] [rbp-78h]
  int v28; // [rsp+60h] [rbp-68h]
  __m128i v29; // [rsp+70h] [rbp-58h] BYREF
  __int64 v30; // [rsp+80h] [rbp-48h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( batch )
    return nullptr;
  s = nullptr;
  if ( src
    && (v4 = strlen(src), v5 = v4 + 1, v6 = v4, s = (char *)qvector_reserve(), memmove(s, src, v6), s[v6] = 0, v5) )
  {
    for ( i = s; *i == 36; ++i )
      ;
    v8 = strchr(i, 10);
  }
  else
  {
    i = s1;
    v8 = nullptr;
  }
  while ( 2 )
  {
    v9 = off_235DC0;
    v10 = 0;
    if ( strncmp("BUTTON", i, 6u) )
      goto LABEL_10;
    if ( !v8 )
    {
LABEL_13:
      v24 = nullptr;
      v25 = 0;
LABEL_14:
      v12 = (char *)s1;
      goto LABEL_15;
    }
LABEL_9:
    i = v8 + 1;
    v10 = 1;
    v8 = strchr(v8 + 1, 10);
LABEL_10:
    while ( ++v9 != (char **)&unk_235DE0 )
    {
      v11 = strlen(*v9);
      if ( !strncmp(*v9, i, v11) )
      {
        if ( v8 )
          goto LABEL_9;
        goto LABEL_13;
      }
    }
    if ( v10 )
      continue;
    break;
  }
  v24 = nullptr;
  v25 = 0;
  if ( v8 )
  {
    v15 = v8 - i;
    if ( !v15 )
      goto LABEL_14;
    v16 = nullptr;
    v17 = v15 + 1;
    if ( v15 == -1 )
      goto LABEL_27;
    v21 = qvector_reserve();
  }
  else
  {
    if ( !i )
      goto LABEL_14;
    v20 = strlen(i);
    v17 = v20 + 1;
    v15 = v20;
    v21 = qvector_reserve();
  }
  v24 = (char *)v21;
  v16 = (void *)v21;
LABEL_27:
  *(_QWORD *)&v25 = v17;
  memmove(v16, i, v15);
  v24[v15] = 0;
  if ( !(_QWORD)v25 )
    goto LABEL_14;
  v12 = v24;
LABEL_15:
  v13 = (TView *)sub_186290(v12, 0);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  if ( v13 )
  {
    sub_1758E0(TProgram::application + 136LL, v13, 1);
  }
  else
  {
    v18 = (TGroup *)sub_1861D0();
    v19 = (__int64 *)v18;
    if ( v18 )
    {
      v29 = _mm_loadu_si128(a3);
      v30 = a3[1].m128i_i64[0];
      if ( (unsigned __int8)sub_18AF20(v18, src, v29.m128i_i32) )
      {
        sub_185FD0(v19, 0xFFFFFFFF);
        v24 = nullptr;
        v28 = a2;
        v26 = 0;
        v25 = 0;
        v27 = 0;
        (*(void (__fastcall **)(__int64, __int64 *, char **))(*(_QWORD *)(TProgram::application + 136LL) + 120LL))(
          TProgram::application + 136LL,
          v19,
          &v24);
        if ( v26 )
        {
          *(_QWORD *)&v27 = 0;
          qfree();
        }
        if ( v24 )
        {
          *(_QWORD *)&v25 = 0;
          qfree();
        }
        v13 = (TView *)v19;
      }
    }
  }
  if ( s )
    qfree();
  return v13;
}

