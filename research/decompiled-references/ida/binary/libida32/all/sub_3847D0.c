unsigned __int64 __fastcall sub_3847D0(__int64 a1, __int64 *a2, _BYTE *a3, char *a4, __int64 a5, char a6)
{
  char *v9; // rbx
  const char *v11; // rsi
  __int64 v12; // rax
  const char *v13; // rax
  int v14; // r9d
  const char *v15; // rbp
  size_t v16; // rax
  size_t v17; // r13
  const char *v18; // rcx
  size_t v19; // rax
  size_t v20; // rbx
  const char *v22; // rax
  const char *v23; // r14
  size_t v24; // rax
  size_t v25; // r8
  void *v26; // rdi
  size_t v27; // rbp
  const char *v28; // rax
  const char *v29; // rbx
  size_t v30; // rax
  size_t v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rbx
  void *v34; // r13
  void *v35; // rdi
  void *v36; // rdi
  size_t v37; // r14
  void *v38; // rdi
  size_t v39; // rdx
  void *v40; // rdi
  size_t v41; // r13
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // [rsp+0h] [rbp-1078h]
  size_t v45; // [rsp+0h] [rbp-1078h]
  size_t v46; // [rsp+8h] [rbp-1070h]
  void *src; // [rsp+10h] [rbp-1068h] BYREF
  __int128 v48; // [rsp+18h] [rbp-1060h]
  char s[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v50; // [rsp+1038h] [rbp-40h]

  v9 = a4;
  v50 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( !a4 || (unsigned __int8)qisdir(a4) )
  {
    v11 = haystack;
    if ( *(_QWORD *)(a5 + 8) )
      v11 = *(const char **)a5;
    v12 = sub_384780(a1, (__int64)v11);
    src = nullptr;
    v48 = 0;
    if ( a6 )
    {
      qtmpnam(s);
      v22 = (const char *)qbasename(s);
      v23 = v22;
      if ( v22 && (v24 = strlen(v22), (v25 = v24) != 0) )
      {
        v38 = src;
        v39 = v24 + 1;
        if ( *((_QWORD *)&v48 + 1) < v24 + 1 )
        {
          v46 = v24;
          v45 = v24 + 1;
          src = (void *)qvector_reserve(&src, src, v39, 1);
          v25 = v46;
          v38 = src;
          v39 = v45;
        }
        *(_QWORD *)&v48 = v39;
        v44 = v25;
        memmove(v38, v23, v25);
        *((_BYTE *)src + v44) = 0;
      }
      else
      {
        *(_QWORD *)&v48 = 0;
      }
      if ( a3 )
        *a3 = 1;
    }
    else
    {
      v13 = (const char *)qbasename(v12);
      v15 = v13;
      if ( !v13 || (v16 = strlen(v13), (v17 = v16) == 0) )
      {
        *(_QWORD *)&v48 = 0;
        v18 = haystack;
        if ( v9 )
          goto LABEL_11;
        goto LABEL_30;
      }
      v36 = src;
      v37 = v16 + 1;
      if ( *((_QWORD *)&v48 + 1) < v16 + 1 )
      {
        src = (void *)qvector_reserve(&src, src, v37, 1);
        v36 = src;
      }
      *(_QWORD *)&v48 = v37;
      memmove(v36, v15, v17);
      *((_BYTE *)src + v17) = 0;
    }
    if ( v9 )
    {
LABEL_22:
      v18 = haystack;
      if ( (_QWORD)v48 )
        LODWORD(v18) = (_DWORD)src;
LABEL_11:
      qmakepath((int)s, 4096, (int)v9, (int)v18, 0, v14, v44);
      v19 = strlen(s);
      v20 = v19;
      if ( v19 )
      {
        v26 = (void *)*a2;
        v27 = v19 + 1;
        if ( a2[2] < v19 + 1 )
        {
          v32 = qvector_reserve(a2, *a2, v19 + 1, 1);
          *a2 = v32;
          v26 = (void *)v32;
        }
        a2[1] = v27;
        memmove(v26, s, v20);
        *(_BYTE *)(*a2 + v20) = 0;
        goto LABEL_13;
      }
LABEL_12:
      a2[1] = 0;
LABEL_13:
      if ( src )
      {
        *(_QWORD *)&v48 = 0;
        qfree(src);
      }
      return v50 - __readfsqword(0x28u);
    }
LABEL_30:
    v9 = s;
    if ( !(unsigned __int8)qdirname(s) )
    {
      v33 = v48;
      if ( (unsigned __int64)v48 >= 2 )
      {
        v34 = src;
        v35 = (void *)*a2;
        if ( a2[2] < (unsigned __int64)v48 )
        {
          v43 = qvector_reserve(a2, *a2, v48, 1);
          *a2 = v43;
          v35 = (void *)v43;
        }
        a2[1] = v33;
        memmove(v35, v34, v33 - 1);
        *(_BYTE *)(*a2 + v33 - 1) = 0;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    goto LABEL_22;
  }
  v28 = (const char *)qmake_full_path(s, 4096, v9);
  v29 = v28;
  if ( v28 && (v30 = strlen(v28), (v31 = v30) != 0) )
  {
    v40 = (void *)*a2;
    v41 = v30 + 1;
    if ( a2[2] < v30 + 1 )
    {
      v42 = qvector_reserve(a2, *a2, v30 + 1, 1);
      *a2 = v42;
      v40 = (void *)v42;
    }
    a2[1] = v41;
    memmove(v40, v29, v31);
    *(_BYTE *)(*a2 + v31) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  return v50 - __readfsqword(0x28u);
}

