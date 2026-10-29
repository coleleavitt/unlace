__int64 __fastcall set_compiler_string(const char *src, unsigned __int8 a2)
{
  size_t v2; // rax
  size_t v3; // r14
  size_t v4; // rbp
  unsigned __int64 v5; // r15
  char *v6; // rbp
  char *v7; // rax
  signed __int64 v8; // r14
  unsigned __int64 v9; // r8
  _BYTE *v10; // rbx
  unsigned __int64 v11; // r12
  const char **v12; // rbp
  char *v13; // r15
  const char **v14; // r13
  const char *v15; // rsi
  const char *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // r13
  __int64 v20; // rbp
  char *v21; // rax
  void *v22; // rdi
  int v24; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v25; // [rsp+0h] [rbp-B8h]
  const char *v26; // [rsp+8h] [rbp-B0h]
  __m128i v27; // [rsp+10h] [rbp-A8h] BYREF
  char *s; // [rsp+20h] [rbp-98h] BYREF
  __int128 v29; // [rsp+28h] [rbp-90h]
  void *v30; // [rsp+40h] [rbp-78h] BYREF
  __int128 v31; // [rsp+48h] [rbp-70h]
  void *v32; // [rsp+60h] [rbp-58h] BYREF
  __int128 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v29 = 0;
  s = nullptr;
  if ( src
    && (v2 = strlen(src),
        v3 = v2 + 1,
        v4 = v2,
        s = (char *)qvector_reserve(&s, 0, v2 + 1, 1),
        *(_QWORD *)&v29 = v3,
        memmove(s, src, v4),
        s[v4] = 0,
        (v5 = v29) != 0)
    && (v6 = s, (v7 = strchr(s, 58)) != nullptr)
    && (v8 = v7 - v6, v7 - v6 != -1) )
  {
    v9 = v8 + 1;
    if ( v8 )
    {
      if ( v5 < v9 )
      {
        if ( *((_QWORD *)&v29 + 1) < v9 )
        {
          s = (char *)qvector_reserve(&s, v6, v8 + 1, 1);
          v5 = v29;
          v6 = s;
          v9 = v8 + 1;
        }
        v25 = v9;
        memset(&v6[v5], 0, v9 - v5);
        v9 = v25;
        *(_QWORD *)&v29 = v25;
        v7 = &s[v8];
      }
      else if ( v9 != v5 )
      {
        *(_QWORD *)&v29 = v8 + 1;
      }
      *v7 = 0;
      v26 = &src[v9];
    }
    else
    {
      if ( v6 )
      {
        *(_QWORD *)&v29 = 0;
        qfree(v6);
        s = nullptr;
        v9 = 1;
        *((_QWORD *)&v29 + 1) = 0;
      }
      v26 = &src[v9];
    }
  }
  else
  {
    v26 = nullptr;
  }
  v27 = 0;
  v24 = 8 * a2;
  v30 = nullptr;
  v32 = nullptr;
  v31 = 0;
  v33 = 0;
  get_compilers((__int64 *)&v30, nullptr, (__int64 *)&v32);
  v10 = v32;
  v11 = v29;
  v12 = (const char **)((char *)v32 + 24 * v33);
  if ( v32 == v12 )
    goto LABEL_34;
  v13 = s;
  v14 = (const char **)v32;
  while ( 1 )
  {
    if ( v14[1] )
    {
      v15 = *v14;
      v16 = haystack;
      if ( !v11 )
        goto LABEL_13;
      goto LABEL_18;
    }
    if ( !v11 )
      break;
    v15 = haystack;
LABEL_18:
    v16 = v13;
LABEL_13:
    if ( !strcmp(v16, v15) )
      break;
    v14 += 3;
    if ( v12 == v14 )
      goto LABEL_34;
  }
  if ( v12 != v14 )
  {
    v27.m128i_i8[0] = *((char *)v30 - 0x5555555555555555LL * (((char *)v14 - v10) >> 3));
    goto LABEL_21;
  }
LABEL_34:
  v27.m128i_i8[0] = 0;
  if ( v26 && v11 <= 1 )
  {
    v24 |= 4u;
LABEL_21:
    v17 = set_compiler(&v27, (const char *)(v24 | 3u), v26);
    v10 = v32;
    v18 = v17;
  }
  else
  {
    v18 = 0;
  }
  if ( v10 )
  {
    v19 = v33;
    if ( (_QWORD)v33 )
    {
      v20 = 0;
      do
      {
        v21 = &v10[24 * v20];
        v22 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v22);
        }
        ++v20;
        v10 = v32;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v10);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( s )
  {
    *(_QWORD *)&v29 = 0;
    qfree(s);
  }
  return v18;
}
