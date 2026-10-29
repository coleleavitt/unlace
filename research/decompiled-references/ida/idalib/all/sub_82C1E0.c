iconv_t __fastcall sub_82C1E0(__int64 *a1, const char *a2, const char *a3)
{
  const char *v5; // rdi
  bool v6; // zf
  void *v8; // rdi
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // rax
  size_t v12; // r13
  iconv_t v13; // rax
  iconv_t v14; // r13
  __int64 v16; // r15
  size_t v17; // rax
  size_t v18; // r8
  size_t v19; // r9
  _BYTE *v20; // rsi
  size_t v21; // rdx
  const char *v22; // rsi
  iconv_t v23; // rax
  void *v24; // rdi
  const char **v25; // r15
  __int64 v26; // r14
  const char *v27; // rsi
  iconv_t v28; // rax
  void *v29; // rdi
  size_t v30; // r14
  void *v31; // rdi
  size_t v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  size_t v35; // [rsp+8h] [rbp-70h]
  size_t v36; // [rsp+10h] [rbp-68h]
  size_t v37; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v39; // [rsp+28h] [rbp-50h]
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v5 = haystack;
  v6 = a1[1] == 0;
  v40 = __readfsqword(0x28u);
  if ( !v6 )
    v5 = (const char *)*a1;
  if ( !strcmp(v5, a2) )
  {
    if ( !a1[4] )
    {
      if ( strcmp(haystack, a3) )
        goto LABEL_6;
      return (iconv_t)a1[6];
    }
    if ( !strcmp((const char *)a1[3], a3) )
      return (iconv_t)a1[6];
  }
LABEL_6:
  v8 = (void *)a1[6];
  if ( v8 != (void *)-1LL )
  {
    iconv_close(v8);
    a1[6] = -1;
  }
  if ( a2 && (v9 = strlen(a2), (v10 = v9) != 0) )
  {
    v31 = (void *)*a1;
    v32 = v9 + 1;
    if ( a1[2] < v9 + 1 )
    {
      v34 = qvector_reserve(a1, *a1, v9 + 1, 1);
      *a1 = v34;
      v31 = (void *)v34;
    }
    a1[1] = v32;
    memmove(v31, a2, v10);
    *(_BYTE *)(*a1 + v10) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  if ( a3 && (v11 = strlen(a3), (v12 = v11) != 0) )
  {
    v29 = (void *)a1[3];
    v30 = v11 + 1;
    if ( a1[5] < v11 + 1 )
    {
      v33 = qvector_reserve(a1 + 3, a1[3], v30, 1);
      a1[3] = v33;
      v29 = (void *)v33;
    }
    a1[4] = v30;
    memmove(v29, a3, v12);
    *(_BYTE *)(a1[3] + v12) = 0;
  }
  else
  {
    a1[4] = 0;
  }
  v13 = iconv_open(a3, a2);
  a1[6] = (__int64)v13;
  v14 = v13;
  if ( v13 == (iconv_t)-1LL )
  {
    if ( (unsigned __int8)(*a2 - 48) > 9u )
      goto LABEL_30;
    v39 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 3, 1);
    *(_QWORD *)&v39 = 3;
    strcpy((char *)ptr, "CP");
    if ( a2 )
    {
      v16 = v39;
      v17 = strlen(a2);
      v18 = v17;
      v19 = v17;
      if ( v16 )
      {
        --v16;
        v19 = v17 + v16;
      }
      v20 = ptr;
      v21 = v19 + 1;
      if ( *((_QWORD *)&v39 + 1) < v19 + 1 )
      {
        v37 = v17;
        v36 = v19;
        v35 = v19 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
        v18 = v37;
        v20 = ptr;
        v19 = v36;
        v21 = v35;
      }
      *(_QWORD *)&v39 = v21;
      v20[v19] = 0;
      memmove((char *)ptr + v16, a2, v18);
    }
    v22 = haystack;
    if ( (_QWORD)v39 )
      v22 = (const char *)ptr;
    v23 = iconv_open(a3, v22);
    v24 = ptr;
    a1[6] = (__int64)v23;
    if ( v24 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v24);
      v23 = (iconv_t)a1[6];
    }
    if ( v23 == (iconv_t)-1LL )
    {
LABEL_30:
      v25 = (const char **)off_2B3C9E0;
      v26 = 0;
      while ( strcmp(a2, *v25) )
      {
        ++v26;
        v25 += 2;
        if ( v26 == 10 )
          return v14;
      }
      v27 = off_2B3C9E0[2 * v26 + 1];
      if ( v27 )
      {
        v28 = iconv_open(a3, v27);
        a1[6] = (__int64)v28;
        return v28;
      }
    }
    else
    {
      return v23;
    }
  }
  return v14;
}
