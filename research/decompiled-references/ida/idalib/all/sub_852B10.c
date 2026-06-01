unsigned __int64 __fastcall sub_852B10(__int64 a1, int a2, void *a3, unsigned int a4)
{
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // r15
  char *v10; // rcx
  _QWORD *v11; // r14
  __int64 v12; // r13
  char *v13; // rbp
  char *v14; // rdx
  _QWORD *v15; // rbx
  char *v16; // r12
  const char *v17; // rdi
  _QWORD *v18; // r15
  const char *v19; // rsi
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rdi
  const char *v25; // rax
  int v26; // eax
  _DWORD *v27; // r15
  __int64 v28; // r15
  char *v29; // r12
  _QWORD *v30; // r13
  __int64 v31; // r14
  _QWORD *v32; // rbp
  char *v33; // rcx
  char *v34; // r15
  _QWORD *v35; // r12
  const char *v36; // rsi
  const char *v37; // rdi
  int v38; // eax
  _QWORD *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  char *v42; // rdx
  _QWORD *v43; // rdi
  const char *v44; // rax
  const char *v45; // rdi
  int v46; // eax
  _QWORD *v47; // rax
  _QWORD *v48; // r15
  char *v50; // [rsp+0h] [rbp-A8h]
  char *v51; // [rsp+0h] [rbp-A8h]
  char *s1a; // [rsp+10h] [rbp-98h]
  char *s1; // [rsp+10h] [rbp-98h]
  char *v55; // [rsp+20h] [rbp-88h]
  __int64 v56; // [rsp+20h] [rbp-88h]
  _QWORD *v57; // [rsp+28h] [rbp-80h]
  _QWORD *v58; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-78h]
  _DWORD n[3]; // [rsp+3Ch] [rbp-6Ch] BYREF
  char **p_s2; // [rsp+48h] [rbp-60h] BYREF
  char *s2; // [rsp+50h] [rbp-58h] BYREF
  __int128 v63; // [rsp+58h] [rbp-50h]
  unsigned __int64 v64; // [rsp+68h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 5128) )
    return v64 - __readfsqword(0x28u);
  s2 = nullptr;
  v63 = 0;
  v7 = strlen((const char *)(a1 + 5128));
  v8 = v7 + 1;
  v9 = v7;
  s2 = (char *)qvector_reserve(&s2, 0, v7 + 1, 1);
  *(_QWORD *)&v63 = v8;
  memmove(s2, (const void *)(a1 + 5128), v9);
  s2[v9] = 0;
  v10 = *(char **)(a1 + 5720);
  v11 = v10 + 8;
  if ( !*((_QWORD *)v10 + 2) )
    goto LABEL_23;
  v12 = v63;
  v13 = s2;
  src = a3;
  v14 = (char *)haystack;
  n[0] = a4;
  v15 = *((_QWORD **)v10 + 2);
  if ( (_QWORD)v63 )
    v14 = s2;
  v55 = *(char **)(a1 + 5720);
  v57 = v10 + 8;
  v16 = v14;
  while ( 1 )
  {
    v22 = v15[5];
    if ( !v12 )
      break;
    if ( v22 )
      goto LABEL_16;
    v17 = haystack;
    v18 = v15;
    v19 = v13;
LABEL_9:
    v20 = strcmp(v17, v19);
    v21 = (_QWORD *)v15[2];
    v15 = (_QWORD *)v15[3];
    if ( v20 >= 0 )
    {
      v11 = v18;
      v15 = v21;
    }
    if ( !v15 )
    {
      v10 = v55;
      v24 = v57;
      a3 = src;
      a4 = n[0];
      goto LABEL_18;
    }
  }
  if ( v22 )
  {
LABEL_16:
    v17 = (const char *)v15[4];
    v18 = v15;
    v19 = v16;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v23 = v15[2];
    if ( !v23 )
      break;
    v11 = v15;
    v15 = (_QWORD *)v15[2];
    if ( *(_QWORD *)(v23 + 40) )
      goto LABEL_16;
  }
  v48 = v15;
  v10 = v55;
  v24 = v57;
  a3 = src;
  a4 = n[0];
  v11 = v48;
LABEL_18:
  if ( v24 == v11 )
    goto LABEL_23;
  if ( v11[5] )
  {
    v25 = (const char *)v11[4];
    if ( !v12 )
      v13 = (char *)haystack;
LABEL_22:
    s1a = v10;
    v26 = strcmp(v13, v25);
    v10 = s1a;
    if ( v26 < 0 )
    {
LABEL_23:
      *(_QWORD *)&n[1] = &s2;
      v11 = sub_852680(v10, v11, (__int64 *)&n[1]);
    }
  }
  else
  {
    v25 = haystack;
    if ( v12 )
      goto LABEL_22;
  }
  v27 = (_DWORD *)v11[7];
  if ( v27 )
  {
    if ( *((unsigned __int8 *)v27 + 4) == a2 && *v27 == a4 && !memcmp((char *)v27 + 5, a3, a4) )
    {
      if ( s2 )
      {
        *(_QWORD *)&v63 = 0;
        qfree(s2);
      }
      return v64 - __readfsqword(0x28u);
    }
    qfree(v27);
  }
  v28 = qalloc(a4 + 5LL);
  if ( !v28 )
    sub_850D50();
  *(_DWORD *)v28 = a4;
  *(_BYTE *)(v28 + 4) = a2;
  memcpy((void *)(v28 + 5), a3, a4);
  v29 = *(char **)(a1 + 5720);
  v30 = *((_QWORD **)v29 + 2);
  if ( !v30 )
  {
    v32 = v29 + 8;
    goto LABEL_50;
  }
  v31 = v63;
  v56 = v28;
  v32 = v29 + 8;
  s1 = *(char **)(a1 + 5720);
  v33 = (char *)haystack;
  v58 = v29 + 8;
  if ( (_QWORD)v63 )
    v33 = s2;
  v34 = s2;
  v50 = v33;
  while ( 2 )
  {
    v40 = v30[5];
    if ( v31 )
    {
      v35 = v30;
      if ( !v40 )
      {
        v36 = v34;
        v37 = haystack;
        goto LABEL_35;
      }
LABEL_43:
      v37 = (const char *)v30[4];
      v36 = v50;
LABEL_35:
      v38 = strcmp(v37, v36);
      v39 = (_QWORD *)v30[2];
      v30 = (_QWORD *)v30[3];
      if ( v38 >= 0 )
      {
        v32 = v35;
        v30 = v39;
      }
      if ( !v30 )
      {
        v42 = v34;
        v29 = s1;
        v43 = v58;
        v28 = v56;
        goto LABEL_45;
      }
      continue;
    }
    break;
  }
  if ( v40 )
  {
LABEL_42:
    v35 = v30;
    goto LABEL_43;
  }
  while ( 1 )
  {
    v41 = v30[2];
    if ( !v41 )
      break;
    v32 = v30;
    v30 = (_QWORD *)v30[2];
    if ( *(_QWORD *)(v41 + 40) )
      goto LABEL_42;
  }
  v42 = v34;
  v29 = s1;
  v43 = v58;
  v32 = v30;
  v28 = v56;
LABEL_45:
  if ( v43 == v32 )
    goto LABEL_50;
  if ( v32[5] )
  {
    v44 = (const char *)v32[4];
    v45 = haystack;
    if ( v31 )
      goto LABEL_48;
LABEL_49:
    v51 = v42;
    v46 = strcmp(v45, v44);
    v42 = v51;
    if ( v46 < 0 )
    {
LABEL_50:
      p_s2 = &s2;
      v47 = sub_852680(v29, v32, (__int64 *)&p_s2);
      v42 = s2;
      v32 = v47;
    }
  }
  else
  {
    v44 = haystack;
    if ( v31 )
    {
LABEL_48:
      v45 = v42;
      goto LABEL_49;
    }
  }
  v32[7] = v28;
  *(_BYTE *)(a1 + 5640) = 1;
  if ( v42 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v42);
  }
  return v64 - __readfsqword(0x28u);
}
