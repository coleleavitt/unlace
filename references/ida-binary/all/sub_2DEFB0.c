__int64 __fastcall sub_2DEFB0(__int64 *a1, char a2)
{
  __int64 v4; // rax
  const char *v5; // r12
  __int64 v6; // rax
  size_t v7; // rax
  size_t v8; // r14
  size_t v9; // rbx
  __int64 func; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  const char *v15; // rsi
  __int64 v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // r14
  char *v19; // rdx
  __int64 v20; // rbx
  char *v21; // rax
  __int64 v22; // r8
  bool v23; // cf
  char *v24; // rdi
  char *v25; // r8
  unsigned int v26; // r14d
  size_t v27; // rax
  size_t v28; // r15
  size_t v29; // r12
  __int64 v30; // rax
  unsigned int v31; // ebx
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rax
  char *v36; // [rsp+0h] [rbp-C0h]
  char *s; // [rsp+8h] [rbp-B8h]
  char *sb; // [rsp+8h] [rbp-B8h]
  char *sc; // [rsp+8h] [rbp-B8h]
  char *sd; // [rsp+8h] [rbp-B8h]
  char *sa; // [rsp+8h] [rbp-B8h]
  int v42; // [rsp+1Ch] [rbp-A4h] BYREF
  void *v43; // [rsp+20h] [rbp-A0h] BYREF
  __int128 v44; // [rsp+28h] [rbp-98h]
  __int64 v45; // [rsp+40h] [rbp-80h] BYREF
  int v46; // [rsp+48h] [rbp-78h]
  __int128 v47; // [rsp+50h] [rbp-70h]
  char *v48; // [rsp+60h] [rbp-60h] BYREF
  __int128 v49; // [rsp+68h] [rbp-58h]
  unsigned __int64 v50; // [rsp+78h] [rbp-48h]
  int v51; // [rsp+80h] [rbp-40h]
  unsigned __int64 v52; // [rsp+88h] [rbp-38h]

  v52 = __readfsqword(0x28u);
  v4 = sub_1E8D00((__int64)(a1 + 72));
  if ( !v4 || (*(_BYTE *)(v4 + 72) & 2) == 0 )
    return 0;
  v5 = &s1;
  if ( *(_QWORD *)(v4 + 40) )
    v5 = *(const char **)(v4 + 32);
  if ( !v5 )
    return 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 720))(a1, 0);
  v42 = -1;
  s = (char *)v6;
  v43 = nullptr;
  v44 = 0;
  v7 = strlen(v5);
  v8 = v7 + 1;
  v9 = v7;
  v43 = (void *)qvector_reserve(&v43, 0, v7 + 1, 1);
  *(_QWORD *)&v44 = v8;
  memmove(v43, v5, v9);
  *((_BYTE *)v43 + v9) = 0;
  func = get_func(s);
  sub_1C76F0((int)"Searching");
  if ( !func )
  {
    v34 = getinf(20);
    v35 = getinf(19);
    v15 = (const char *)&v43;
    v22 = sub_2DEC00(&v42, (__int64 *)&v43, v35, v34, (unsigned __int64)s, v5, a2);
    goto LABEL_25;
  }
  v48 = nullptr;
  v50 = 0;
  v51 = -1;
  v45 = 0;
  v49 = 0;
  v47 = 0;
  func_tail_iterator_set(&v45, func, -1);
  v15 = (const char *)v45;
  v46 = -1;
  v16 = v45;
  if ( v45 )
  {
    while ( 1 )
    {
      rangeset_t_add(&v48, v15, v11, v12, v13, v14);
      v15 = (const char *)v45;
      v16 = v45;
      if ( !v45 )
        break;
      v17 = v46 + 1;
      if ( *(_DWORD *)(v45 + 128) <= v46 + 1 )
        break;
      ++v46;
      if ( v17 >= 0 )
        v15 = (const char *)(*(_QWORD *)(v45 + 136) + 16LL * v17);
    }
    v18 = v49;
    if ( !(_QWORD)v49 )
      goto LABEL_37;
  }
  else
  {
    v18 = v49;
    if ( !(_QWORD)v49 )
    {
      v24 = v48;
      v22 = -1;
      if ( !v48 )
      {
        sub_1C78D0();
        goto LABEL_51;
      }
      goto LABEL_24;
    }
  }
  v19 = v48;
  v20 = 0;
  while ( 1 )
  {
    v21 = &v48[16 * (int)v20];
    if ( (unsigned __int64)s >= *(_QWORD *)v21 && (unsigned __int64)s < *((_QWORD *)v21 + 1) )
      break;
    if ( ++v20 == v18 )
      goto LABEL_37;
  }
  if ( a2 )
  {
    if ( v20 >= 0 )
    {
      while ( 1 )
      {
        v15 = (const char *)&v43;
        v22 = sub_2DEC00(
                &v42,
                (__int64 *)&v43,
                *(_QWORD *)&v19[16 * (int)v20],
                *(_QWORD *)&v19[16 * (int)v20 + 8],
                (unsigned __int64)s,
                v5,
                1);
        v23 = v20-- == 0;
        if ( v23 || v22 != -1 )
          break;
        v19 = v48;
      }
LABEL_20:
      v16 = v45;
      goto LABEL_21;
    }
  }
  else if ( v20 < v18 )
  {
    while ( 1 )
    {
      v15 = (const char *)&v43;
      v33 = sub_2DEC00(
              &v42,
              (__int64 *)&v43,
              *(_QWORD *)&v19[16 * (int)v20],
              *(_QWORD *)&v19[16 * (int)v20 + 8],
              (unsigned __int64)s,
              v5,
              0);
      ++v20;
      v22 = v33;
      if ( v20 >= v18 || v33 != -1 )
        break;
      v19 = v48;
    }
    goto LABEL_20;
  }
LABEL_37:
  v22 = -1;
LABEL_21:
  if ( v16 )
  {
    v15 = nullptr;
    sb = (char *)v22;
    lock_func_range(v16, 0);
    v22 = (__int64)sb;
  }
  v24 = v48;
  if ( v48 )
  {
LABEL_24:
    sc = (char *)v22;
    *(_QWORD *)&v49 = 0;
    qfree(v24, v15);
    v22 = (__int64)sc;
  }
LABEL_25:
  sd = (char *)v22;
  sub_1C78D0();
  v25 = sd;
  if ( sd != (char *)-1LL )
  {
    sa = (char *)&s1;
    if ( (_QWORD)v44 )
      sa = (char *)v43;
    v48 = nullptr;
    v26 = v42;
    v49 = 0;
    if ( sa )
    {
      v36 = v25;
      v27 = strlen(sa);
      v28 = v27 + 1;
      v29 = v27;
      v48 = (char *)qvector_reserve(&v48, 0, v27 + 1, 1);
      *(_QWORD *)&v49 = v28;
      memmove(v48, sa, v29);
      v25 = v36;
      v48[v29] = 0;
    }
    v30 = *a1;
    v50 = v26 | 0xFFFFFFFF00000000LL;
    v15 = v25;
    (*(void (__fastcall **)(__int64 *, char *, _QWORD, char **))(v30 + 1104))(a1, v25, 0, &v48);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48, v15);
    }
    v31 = 1;
    goto LABEL_33;
  }
LABEL_51:
  v31 = 0;
LABEL_33:
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43, v15);
  }
  return v31;
}
