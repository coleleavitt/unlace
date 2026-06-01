char *__fastcall sub_21E3320(__int64 a1)
{
  size_t v1; // rax
  char *v2; // r14
  char *v3; // r12
  size_t v4; // r13
  size_t v5; // r15
  size_t v6; // r13
  char *v7; // rbp
  bool v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  size_t v13; // r15
  void *v14; // r8
  char *v16; // r15
  char *v17; // rax
  char v18; // r13
  char *v19; // rbp
  char *v20; // r12
  __int64 v21; // r14
  __int64 v22; // r14
  char *v23; // rax
  unsigned __int64 *v24; // rax
  unsigned __int64 *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 *v28; // rax
  char *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // r12
  char *v35; // r14
  __int64 v36; // r13
  size_t v37; // r14
  size_t v38; // r15
  size_t v39; // r15
  unsigned __int8 v40; // r14
  unsigned __int64 *v41; // r13
  __int64 v42; // rdx
  char v43; // al
  __int64 v44; // rax
  __int64 *v45; // rax
  void *v46; // rax
  unsigned __int64 v47; // rax
  char v48; // dl
  unsigned __int64 v49; // rax
  char v50; // dl
  unsigned __int64 v51; // rax
  char v52; // dl
  int v53; // [rsp+8h] [rbp-100h]
  void *v54; // [rsp+8h] [rbp-100h]
  void *v55; // [rsp+8h] [rbp-100h]
  void *v56; // [rsp+8h] [rbp-100h]
  size_t v57; // [rsp+10h] [rbp-F8h]
  char v58; // [rsp+10h] [rbp-F8h]
  char *v59; // [rsp+10h] [rbp-F8h]
  char v60; // [rsp+18h] [rbp-F0h]
  void *v61; // [rsp+18h] [rbp-F0h]
  char v62; // [rsp+27h] [rbp-E1h]
  __int64 v63; // [rsp+28h] [rbp-E0h]
  __int64 v64; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+48h] [rbp-C0h]
  _BYTE v67[184]; // [rsp+50h] [rbp-B8h] BYREF

  v53 = sub_21CFF20((char **)a1, *(char **)(a1 + 8));
  v1 = j__strlen("Do");
  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = v1;
  v5 = (size_t)&v2[-*(_QWORD *)a1];
  if ( sub_20D1BF0(v5, *(const void **)a1, v1, "Do") )
  {
    *(_QWORD *)a1 = &v3[v4];
    v7 = (char *)sub_21D6480(a1 + 808, "noexcept");
    if ( v7 )
      goto LABEL_21;
    return nullptr;
  }
  v6 = j__strlen("DO");
  if ( !sub_20D1BF0(v5, v3, v6, "DO") )
  {
    v7 = nullptr;
    v57 = j__strlen("Dw");
    v8 = sub_20D1BF0(v5, v3, v57, "Dw");
    v12 = v57;
    if ( !v8 )
      goto LABEL_4;
    v19 = v2;
    v20 = &v3[v57];
    v21 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v20;
    v22 = v21 >> 3;
    while ( v20 == v19 || *v20 != 69 )
    {
      v23 = sub_21DFD40(a1);
      ptr = v23;
      if ( !v23 )
        return v23;
      sub_20D8690((char **)(a1 + 16), (__int64 *)&ptr);
      v20 = *(char **)a1;
      v19 = *(char **)(a1 + 8);
    }
    *(_QWORD *)a1 = v20 + 1;
    v24 = (unsigned __int64 *)sub_21D4550((_QWORD *)a1, v22, v9, v10, v12, v11);
    ptr = v67;
    v25 = v24;
    v27 = v26;
    v58 = *(_BYTE *)(a1 + 937);
    v66 = 0x2000000000LL;
    sub_21D0C90((__int64)&ptr, 0x12u, v24, v26);
    v7 = (char *)sub_2223360(a1 + 904, &ptr, &v64, off_2BE9FD0);
    if ( v7 )
      goto LABEL_28;
    if ( v58 )
    {
      v47 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
      v48 = *(_BYTE *)(v47 + 18);
      *(_WORD *)(v47 + 16) = 16402;
      v7 = (char *)(v47 + 8);
      *(_QWORD *)v47 = 0;
      *(_QWORD *)(v47 + 24) = v25;
      *(_QWORD *)(v47 + 32) = v27;
      *(_BYTE *)(v47 + 18) = v48 & 0xF0 | 5;
      *(_QWORD *)(v47 + 8) = off_2BE6D80;
      sub_2223210(a1 + 904, v47, v64, off_2BE9FD0);
    }
    goto LABEL_16;
  }
  *(_QWORD *)a1 = &v3[v6];
  v16 = sub_21D94E0(a1);
  if ( !v16 )
    return nullptr;
  v17 = *(char **)a1;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v17 != 69 )
    return nullptr;
  *(_QWORD *)a1 = v17 + 1;
  v66 = 0x2000000000LL;
  v18 = *(_BYTE *)(a1 + 937);
  ptr = v67;
  sub_21D0240((__int64)&ptr, 0x11u, (unsigned __int64)v16);
  v7 = (char *)sub_2223360(a1 + 904, &ptr, &v64, off_2BE9FD0);
  if ( !v7 )
  {
    if ( v18 )
    {
      v51 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
      v52 = *(_BYTE *)(v51 + 18);
      *(_WORD *)(v51 + 16) = 16401;
      v7 = (char *)(v51 + 8);
      *(_QWORD *)v51 = 0;
      *(_QWORD *)(v51 + 24) = v16;
      *(_BYTE *)(v51 + 18) = v52 & 0xF0 | 5;
      *(_QWORD *)(v51 + 8) = off_2BE6D20;
      sub_2223210(a1 + 904, v51, v64, off_2BE9FD0);
    }
LABEL_16:
    if ( ptr != v67 )
      free(ptr);
    *(_QWORD *)(a1 + 920) = v7;
    if ( !v7 )
      return nullptr;
    goto LABEL_21;
  }
LABEL_28:
  v7 += 8;
  if ( ptr != v67 )
    free(ptr);
  v14 = nullptr;
  if ( !v7 )
    return (char *)v14;
  ptr = v7;
  v28 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
  if ( v28 )
  {
    v29 = (char *)v28[1];
    if ( v29 )
      v7 = v29;
  }
  if ( *(char **)(a1 + 928) == v7 )
    *(_BYTE *)(a1 + 936) = 1;
LABEL_21:
  v3 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
LABEL_4:
  v13 = j__strlen("Dx");
  if ( sub_20D1BF0(v2 - v3, v3, v13, "Dx") )
  {
    v3 += v13;
    *(_QWORD *)a1 = v3;
  }
  if ( v2 == v3 || *v3 != 70 )
    return nullptr;
  *(_QWORD *)a1 = v3 + 1;
  if ( v2 != v3 + 1 && v3[1] == 89 )
    *(_QWORD *)a1 = v3 + 2;
  v59 = sub_21DFD40(a1);
  if ( !v59 )
    return nullptr;
  v34 = *(char **)a1;
  v35 = *(char **)(a1 + 8);
  v36 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
  while ( 1 )
  {
    if ( v34 == v35 )
      goto LABEL_44;
LABEL_42:
    if ( *v34 == 69 )
    {
      v40 = 0;
      v62 = 0;
      *(_QWORD *)a1 = v34 + 1;
      goto LABEL_50;
    }
    if ( *v34 != 118 )
      break;
    *(_QWORD *)a1 = ++v34;
  }
  while ( 1 )
  {
LABEL_44:
    v37 = v35 - v34;
    v38 = j__strlen("RE");
    if ( sub_20D1BF0(v37, v34, v38, "RE") )
    {
      v62 = 1;
      v40 = 1;
      *(_QWORD *)a1 = &v34[v38];
      goto LABEL_50;
    }
    v39 = j__strlen("OE");
    if ( sub_20D1BF0(v37, v34, v39, "OE") )
      break;
    v23 = sub_21DFD40(a1);
    ptr = v23;
    if ( !v23 )
      return v23;
    sub_20D8690((char **)(a1 + 16), (__int64 *)&ptr);
    v34 = *(char **)a1;
    v35 = *(char **)(a1 + 8);
    if ( *(char **)a1 != v35 )
      goto LABEL_42;
  }
  v40 = 2;
  v62 = 2;
  *(_QWORD *)a1 = &v34[v39];
LABEL_50:
  v41 = (unsigned __int64 *)sub_21D4550((_QWORD *)a1, v36, v30, v31, v32, v33);
  v63 = v42;
  v43 = *(_BYTE *)(a1 + 937);
  ptr = v67;
  v60 = v43;
  v66 = 0x2000000000LL;
  sub_21D2240((__int64)&ptr, (__int64)v59, v41, v42, v53, v40, (__int64)v7);
  v44 = sub_2223360(a1 + 904, &ptr, &v64, off_2BE9FD0);
  v14 = (void *)v44;
  if ( v44 )
  {
    v14 = (void *)(v44 + 8);
    if ( ptr != v67 )
    {
      v54 = (void *)(v44 + 8);
      free(ptr);
      v14 = v54;
    }
    if ( v14 )
    {
      ptr = v14;
      v55 = v14;
      v45 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
      v14 = v55;
      if ( v45 )
      {
        v46 = (void *)v45[1];
        if ( v46 )
          v14 = v46;
      }
      if ( *(void **)(a1 + 928) == v14 )
        *(_BYTE *)(a1 + 936) = 1;
    }
  }
  else
  {
    if ( v60 )
    {
      v49 = sub_21D40A0((__int64 *)(a1 + 808), 64, 3u);
      *(_WORD *)(v49 + 16) = 16;
      v50 = *(_BYTE *)(v49 + 18);
      *(_QWORD *)(v49 + 24) = v59;
      *(_QWORD *)v49 = 0;
      *(_QWORD *)(v49 + 40) = v63;
      *(_BYTE *)(v49 + 18) = v50 & 0xF0 | 1;
      *(_DWORD *)(v49 + 48) = v53;
      *(_QWORD *)(v49 + 32) = v41;
      *(_QWORD *)(v49 + 8) = off_2BE6CC0;
      *(_BYTE *)(v49 + 52) = v62;
      *(_QWORD *)(v49 + 56) = v7;
      v61 = (void *)(v49 + 8);
      sub_2223210(a1 + 904, v49, v64, off_2BE9FD0);
      v14 = v61;
    }
    if ( ptr != v67 )
    {
      v56 = v14;
      free(ptr);
      v14 = v56;
    }
    *(_QWORD *)(a1 + 920) = v14;
  }
  return (char *)v14;
}
