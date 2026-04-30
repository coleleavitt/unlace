__int64 __fastcall sub_3CA330(__int64 a1, __int64 *a2)
{
  unsigned int tinfo_size; // eax
  bool v5; // zf
  unsigned int v6; // r13d
  __int64 v7; // r14
  const char *v8; // rdi
  int v9; // r15d
  const char *v10; // rdi
  int v11; // r14d
  const char *v12; // rdi
  int v13; // ebx
  __int64 v14; // rbx
  unsigned __int64 v16; // r12
  const char *v17; // rsi
  unsigned __int64 v18; // r12
  size_t v19; // r14
  __int64 v20; // r13
  size_t v21; // r15
  __int64 v22; // rsi
  unsigned __int64 v23; // r12
  size_t v24; // r14
  __int64 v25; // r13
  size_t v26; // r15
  __int64 v27; // rsi
  size_t v28; // rax
  size_t v29; // rbx
  __int64 v30; // rbx
  void *v31; // rdi
  size_t v32; // r12
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  const void *v36; // r14
  void *v37; // rdi
  __int64 v38; // rax
  void *src; // [rsp+0h] [rbp-468h] BYREF
  __int128 v40; // [rsp+8h] [rbp-460h]
  char s[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v42; // [rsp+428h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( *(_BYTE *)(a1 + 403) )
  {
    if ( *(_QWORD *)(a1 + 320) <= 1u )
      goto LABEL_40;
    if ( *(_BYTE *)(a1 + 404) )
    {
LABEL_5:
      if ( *(_QWORD *)(a1 + 344) > 1u )
        goto LABEL_6;
LABEL_20:
      if ( a2 != (__int64 *)(a1 + 336) )
      {
        v16 = *(_QWORD *)(a1 + 344);
        if ( v16 > 1 )
        {
          v36 = *(const void **)(a1 + 336);
          v37 = (void *)*a2;
          if ( a2[2] < v16 )
          {
            v38 = qvector_reserve(a2, *a2, *(_QWORD *)(a1 + 344), 1);
            *a2 = v38;
            v37 = (void *)v38;
          }
          a2[1] = v16;
          memmove(v37, v36, v16 - 1);
          *(_BYTE *)(*a2 + v16 - 1) = 0;
        }
        else
        {
          a2[1] = 0;
        }
      }
      v17 = nullptr;
      src = nullptr;
      v40 = 0;
      src = (void *)qvector_reserve(&src, 0, 2, 1);
      *(_QWORD *)&v40 = 2;
      *(_BYTE *)src = 58;
      *((_BYTE *)src + 1) = 0;
      v18 = v40;
      if ( (_QWORD)v40 )
      {
        v19 = v40 - 1;
        if ( (_QWORD)v40 != 1 )
        {
          v20 = a2[1];
          v21 = v40 - 1;
          if ( v20 )
          {
            --v20;
            v21 = v19 + v20;
            v18 = v40 + v20;
          }
          v22 = *a2;
          if ( a2[2] < v18 )
          {
            v34 = qvector_reserve(a2, v22, v18, 1);
            *a2 = v34;
            v22 = v34;
          }
          a2[1] = v18;
          *(_BYTE *)(v22 + v21) = 0;
          v17 = (const char *)src;
          memcpy((void *)(v20 + *a2), src, v19);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v40 = 0;
        qfree(src, v17);
      }
      v23 = *(_QWORD *)(a1 + 320);
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v23 != 1 )
        {
          v25 = a2[1];
          v26 = v23 - 1;
          if ( v25 )
          {
            --v25;
            v26 = v24 + v25;
            v23 += v25;
          }
          v27 = *a2;
          if ( a2[2] < v23 )
          {
            v35 = qvector_reserve(a2, v27, v23, 1);
            *a2 = v35;
            v27 = v35;
          }
          a2[1] = v23;
          *(_BYTE *)(v27 + v26) = 0;
          memcpy((void *)(v25 + *a2), *(const void **)(a1 + 312), v24);
        }
      }
      return 1;
    }
  }
  else if ( *(_BYTE *)(a1 + 404) )
  {
    if ( *(_QWORD *)(a1 + 320) <= 1u )
      goto LABEL_20;
    goto LABEL_5;
  }
LABEL_6:
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 304), 0);
  v5 = *(_BYTE *)(a1 + 403) == 0;
  LODWORD(src) = 0;
  *(_QWORD *)&v40 = 0;
  v6 = tinfo_size;
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 360);
    v8 = &s1;
    if ( *(_QWORD *)(a1 + 320) )
      v8 = *(const char **)(a1 + 312);
    v9 = str2reg(v8);
    cleanup_argloc(&src);
    LODWORD(src) = 3;
    LODWORD(v40) = v9 | ((_DWORD)v7 << 16);
  }
  if ( *(_BYTE *)(a1 + 404) )
  {
    v10 = &s1;
    if ( *(_QWORD *)(a1 + 344) )
      v10 = *(const char **)(a1 + 336);
    v11 = str2reg(v10);
    v12 = &s1;
    if ( *(_QWORD *)(a1 + 320) )
      v12 = *(const char **)(a1 + 312);
    v13 = str2reg(v12);
    cleanup_argloc(&src);
    LODWORD(src) = 4;
    LODWORD(v40) = v13 | (v11 << 16);
  }
  else if ( *(_BYTE *)(a1 + 401) )
  {
    v30 = *(_QWORD *)(a1 + 360);
    cleanup_argloc(&src);
    LODWORD(src) = 1;
    *(_QWORD *)&v40 = v30;
  }
  v14 = ((__int64 (__fastcall *)(char *, __int64, void **, _QWORD, __int64))print_argloc)(s, 1024, &src, v6, 2);
  cleanup_argloc(&src);
  if ( !v14 )
    return 0;
  v28 = strlen(s);
  v29 = v28;
  if ( v28 )
  {
    v31 = (void *)*a2;
    v32 = v28 + 1;
    if ( a2[2] < v28 + 1 )
    {
      v33 = qvector_reserve(a2, *a2, v28 + 1, 1);
      *a2 = v33;
      v31 = (void *)v33;
    }
    a2[1] = v32;
    memmove(v31, s, v29);
    *(_BYTE *)(*a2 + v29) = 0;
    return 1;
  }
LABEL_40:
  a2[1] = 0;
  return 1;
}
