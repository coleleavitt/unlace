__int64 __fastcall set_compiler_string(const char *src)
{
  size_t v1; // rax
  size_t v2; // r14
  size_t v3; // rbp
  unsigned __int64 v4; // r15
  char *v5; // rbp
  char *v6; // rax
  signed __int64 v7; // r14
  unsigned __int64 v8; // r8
  char *v9; // rbx
  unsigned __int64 v10; // r12
  const char **v11; // rbp
  char *v12; // r15
  const char **v13; // r13
  const char *v14; // rsi
  const char *v15; // rdi
  unsigned int v16; // eax
  unsigned int v17; // r12d
  __int64 v18; // r13
  __int64 v19; // rbp
  char *v20; // rax
  void *v21; // rdi
  unsigned __int64 v23; // [rsp+0h] [rbp-B8h]
  const char *v24; // [rsp+8h] [rbp-B0h]
  char *s; // [rsp+20h] [rbp-98h] BYREF
  __int128 v26; // [rsp+28h] [rbp-90h]
  void *v27; // [rsp+40h] [rbp-78h] BYREF
  __int128 v28; // [rsp+48h] [rbp-70h]
  void *v29; // [rsp+60h] [rbp-58h] BYREF
  __int128 v30; // [rsp+68h] [rbp-50h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v26 = 0;
  s = nullptr;
  if ( src
    && (v1 = strlen(src),
        v2 = v1 + 1,
        v3 = v1,
        s = (char *)qvector_reserve(&s, 0, v1 + 1, 1),
        *(_QWORD *)&v26 = v2,
        memmove(s, src, v3),
        s[v3] = 0,
        (v4 = v26) != 0)
    && (v5 = s, (v6 = strchr(s, 58)) != nullptr)
    && (v7 = v6 - v5, v6 - v5 != -1) )
  {
    v8 = v7 + 1;
    if ( v7 )
    {
      if ( v4 < v8 )
      {
        if ( *((_QWORD *)&v26 + 1) < v8 )
        {
          s = (char *)qvector_reserve(&s, v5, v7 + 1, 1);
          v4 = v26;
          v5 = s;
          v8 = v7 + 1;
        }
        v23 = v8;
        memset(&v5[v4], 0, v8 - v4);
        v8 = v23;
        *(_QWORD *)&v26 = v23;
        v6 = &s[v7];
      }
      else if ( v8 != v4 )
      {
        *(_QWORD *)&v26 = v7 + 1;
      }
      *v6 = 0;
      v24 = &src[v8];
    }
    else
    {
      if ( v5 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v5);
        s = nullptr;
        v8 = 1;
        *((_QWORD *)&v26 + 1) = 0;
      }
      v24 = &src[v8];
    }
  }
  else
  {
    v24 = nullptr;
  }
  v27 = nullptr;
  v29 = nullptr;
  v28 = 0;
  v30 = 0;
  get_compilers((int)&v27, 0, (int)&v29);
  v9 = (char *)v29;
  v10 = v26;
  v11 = (const char **)((char *)v29 + 24 * v30);
  if ( v29 == v11 )
    goto LABEL_33;
  v12 = s;
  v13 = (const char **)v29;
  while ( 1 )
  {
    if ( v13[1] )
    {
      v14 = *v13;
      v15 = haystack;
      if ( !v10 )
        goto LABEL_13;
      goto LABEL_18;
    }
    if ( !v10 )
      break;
    v14 = haystack;
LABEL_18:
    v15 = v12;
LABEL_13:
    if ( !strcmp(v15, v14) )
      break;
    v13 += 3;
    if ( v11 == v13 )
      goto LABEL_33;
  }
  if ( v11 != v13 )
    goto LABEL_20;
LABEL_33:
  if ( v24 && v10 <= 1 )
  {
LABEL_20:
    v16 = set_compiler();
    v9 = (char *)v29;
    v17 = v16;
  }
  else
  {
    v17 = 0;
  }
  if ( v9 )
  {
    v18 = v30;
    if ( (_QWORD)v30 )
    {
      v19 = 0;
      do
      {
        v20 = &v9[24 * v19];
        v21 = *(void **)v20;
        if ( *(_QWORD *)v20 )
        {
          *((_QWORD *)v20 + 1) = 0;
          qfree(v21);
        }
        ++v19;
        v9 = (char *)v29;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v9);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( s )
  {
    *(_QWORD *)&v26 = 0;
    qfree(s);
  }
  return v17;
}

