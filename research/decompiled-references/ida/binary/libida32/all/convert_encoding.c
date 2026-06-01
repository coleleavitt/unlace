__int64 __fastcall convert_encoding(char **a1, const char *a2, const char *a3, char *a4, size_t a5, unsigned int a6)
{
  unsigned __int64 v10; // rcx
  char *v11; // rax
  int v12; // ecx
  __int64 result; // rax
  size_t v14; // rdx
  size_t v15; // rbp
  char *v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  iconv_t cd; // [rsp+0h] [rbp-98h]
  __int64 v27; // [rsp+20h] [rbp-78h]
  char *v28; // [rsp+28h] [rbp-70h]
  char *inbuf; // [rsp+38h] [rbp-60h] BYREF
  size_t v30; // [rsp+40h] [rbp-58h] BYREF
  char *i; // [rsp+48h] [rbp-50h] BYREF
  size_t v32[9]; // [rsp+50h] [rbp-48h] BYREF

  v32[1] = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( *a2 == 77 )
    {
      if ( !strcmp(a2, "MUTF-8") )
      {
        if ( a3 && *a3 == 85 && !strcmp(a3, "UTF-8") )
          return sub_816150(a1, a4, a5);
        else
          return sub_815B80(a1, a3, a4, a5, a6);
      }
    }
    else if ( *a2 == 85 && !strcmp(a2, "UTF-8") && a3 && *a3 == 77 && !strcmp(a3, "MUTF-8") )
    {
      return sub_815DE0(a1, a4, a5);
    }
  }
  cd = sub_808E80(&qword_2CAAF20, a2, a3);
  if ( cd != (iconv_t)-1LL )
  {
    iconv(cd, nullptr, nullptr, nullptr, nullptr);
    v10 = (unsigned __int64)a1[1];
    inbuf = a4;
    v30 = a5;
    if ( v10 <= 0x3FF )
    {
      v16 = *a1;
      if ( (unsigned __int64)a1[2] <= 0x3FF )
      {
        v23 = qvector_reserve(a1, v16, 1024, 1);
        v10 = (unsigned __int64)a1[1];
        *a1 = (char *)v23;
        v16 = (char *)v23;
      }
      memset(&v16[v10], 0, 1024 - v10);
      a1[1] = (_BYTE *)(elf_gnu_hash_indexes + 344);
    }
    else if ( v10 != 1024 )
    {
      a1[1] = (_BYTE *)(elf_gnu_hash_indexes + 344);
    }
    v11 = *a1;
    v32[0] = 1024;
    v27 = 1024;
    for ( i = v11; iconv(cd, &inbuf, &v30, &i, v32) == -1; i = &(*a1)[v22 - v21] )
    {
      v12 = *__errno_location();
      if ( v12 != 7 )
      {
        if ( v12 == 84 )
        {
          if ( *(int *)&debug < 0 )
            sub_383DA0();
        }
        else if ( v12 == 22 )
        {
          if ( *(int *)&debug < 0 )
            sub_383DA0();
        }
        else if ( *(int *)&debug < 0 )
        {
          sub_383DA0();
        }
        result = -1;
        if ( (a6 & 1) != 0 )
          return result;
LABEL_27:
        v14 = (size_t)a1[1];
        v15 = v27 - v32[0];
        if ( v14 < v27 - v32[0] )
        {
          v17 = (__int64)*a1;
          if ( (unsigned __int64)a1[2] < v15 )
          {
            v18 = qvector_reserve(a1, v17, v27 - v32[0], 1);
            v14 = (size_t)a1[1];
            *a1 = (char *)v18;
            v17 = v18;
          }
          memset((void *)(v17 + v14), 0, v15 - v14);
          a1[1] = (char *)v15;
        }
        else if ( v15 != v14 )
        {
          a1[1] = (char *)v15;
        }
        return a5 - v30;
      }
      v19 = (unsigned __int64)a1[1];
      v20 = v27 + 1024;
      if ( v19 < v27 + 1024 )
      {
        v24 = (__int64)*a1;
        if ( (unsigned __int64)a1[2] < v20 )
        {
          v25 = qvector_reserve(a1, v24, v27 + 1024, 1);
          v19 = (unsigned __int64)a1[1];
          v20 = v27 + 1024;
          *a1 = (char *)v25;
          v24 = v25;
        }
        v28 = (char *)v20;
        memset((void *)(v24 + v19), 0, v20 - v19);
        v20 = (unsigned __int64)v28;
        a1[1] = v28;
      }
      else if ( v20 != v19 )
      {
        a1[1] = (char *)v20;
      }
      v21 = v32[0];
      v32[0] += 1024LL;
      v22 = v27;
      v27 = v20;
    }
    if ( v30 )
    {
      if ( !under_debugger )
        interr(17);
      BUG();
    }
    goto LABEL_27;
  }
  if ( *(int *)&debug < 0 )
    sub_383DA0();
  return -1;
}

