unsigned __int64 __fastcall sub_3B040(__int64 *a1, char *a2)
{
  __int64 v2; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r12
  size_t v8; // rax
  size_t v9; // r9
  void *v10; // rdx
  void *v11; // rdi
  char *v12; // r10
  const char *v13; // rdi
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  size_t v22; // r9
  char *v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // r9d
  char *v31; // rdi
  int errdesc; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // rax
  void *v40; // rdx
  __int64 v41; // r8
  size_t v42; // r11
  __int64 v43; // rsi
  const char *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+8h] [rbp-C8h]
  size_t v48; // [rsp+10h] [rbp-C0h]
  size_t v49; // [rsp+10h] [rbp-C0h]
  char *v50; // [rsp+18h] [rbp-B8h]
  size_t v51; // [rsp+18h] [rbp-B8h]
  char *src; // [rsp+20h] [rbp-B0h]
  _BYTE *srcb; // [rsp+20h] [rbp-B0h]
  void *srca; // [rsp+20h] [rbp-B0h]
  void *srcc; // [rsp+20h] [rbp-B0h]
  int v56; // [rsp+28h] [rbp-A8h]
  __int64 v57; // [rsp+30h] [rbp-A0h]
  __int64 v58; // [rsp+38h] [rbp-98h]
  char *v59; // [rsp+38h] [rbp-98h]
  __int64 v60; // [rsp+40h] [rbp-90h] BYREF
  __int128 v61; // [rsp+48h] [rbp-88h]
  __int64 v62; // [rsp+60h] [rbp-70h] BYREF
  __int128 v63; // [rsp+68h] [rbp-68h]
  char *s; // [rsp+80h] [rbp-50h] BYREF
  __int128 v65; // [rsp+88h] [rbp-48h]
  unsigned __int64 v66; // [rsp+98h] [rbp-38h]

  v56 = (int)a2;
  v66 = __readfsqword(0x28u);
  v2 = a1[85];
  v61 = 0;
  v60 = 0;
  if ( !v2 )
    goto LABEL_2;
  v5 = v2;
  a2 = 0;
  v60 = qvector_reserve(&v60, 0, v2, 1);
  memset((void *)(v60 + v61), 0, v5 - v61);
  v6 = a1[85];
  *(_QWORD *)&v61 = v5;
  v57 = v6;
  if ( !v6 )
    goto LABEL_2;
  v58 = 0;
  v7 = 0;
  do
  {
    v24 = operator new(0x360u);
    v25 = *a1;
    v26 = a1[95];
    v27 = a1[87];
    *(_QWORD *)(v24 + 8) = 0;
    *(_QWORD *)v24 = v25;
    *(_QWORD *)(v24 + 696) = v27;
    *(_QWORD *)(v24 + 760) = v26;
    *(_QWORD *)(v24 + 528) = 0;
    *(_QWORD *)(v24 + 552) = 0;
    *(_QWORD *)(v24 + 576) = 0;
    *(_QWORD *)(v24 + 600) = 0;
    *(_QWORD *)(v24 + 624) = 0;
    *(_QWORD *)(v24 + 648) = 0;
    *(_QWORD *)(v24 + 672) = 0;
    *(_QWORD *)(v24 + 704) = 0;
    *(_QWORD *)(v24 + 728) = 0;
    *(_QWORD *)(v24 + 752) = 0;
    *(_QWORD *)(v24 + 768) = 0;
    *(_QWORD *)(v24 + 808) = 0;
    *(_QWORD *)(v24 + 816) = 0;
    *(_OWORD *)(v24 + 536) = 0;
    *(_OWORD *)(v24 + 560) = 0;
    *(_OWORD *)(v24 + 584) = 0;
    *(_OWORD *)(v24 + 608) = 0;
    *(_OWORD *)(v24 + 632) = 0;
    *(_OWORD *)(v24 + 656) = 0;
    *(_OWORD *)(v24 + 680) = 0;
    *(_OWORD *)(v24 + 712) = 0;
    *(_OWORD *)(v24 + 736) = 0;
    *(_OWORD *)(v24 + 776) = 0;
    *(_OWORD *)(v24 + 792) = 0;
    *(_OWORD *)(v24 + 824) = 0;
    *(_OWORD *)(v24 + 840) = 0;
    v28 = a1[84];
    *(_BYTE *)(v24 + 860) = 0;
    s = 0;
    *(_DWORD *)(v24 + 856) = v58 + 1;
    v65 = 0;
    sub_35470((unsigned int)&s, (unsigned int)"%s%s", v56, v7 + v28 + 24, v29, v30);
    if ( (_QWORD)v65 && s && (src = s, v8 = strlen(s), (v9 = v8) != 0) )
    {
      v10 = (void *)(v8 + 1);
      v11 = *(void **)(v24 + 832);
      v12 = src;
      if ( *(_QWORD *)(v24 + 848) < v8 + 1 )
      {
        v48 = v8;
        v50 = src;
        srca = (void *)(v8 + 1);
        v45 = qvector_reserve(v24 + 832, v11, v10, 1);
        *(_QWORD *)(v24 + 832) = v45;
        v9 = v48;
        v11 = (void *)v45;
        v12 = v50;
        v10 = srca;
      }
      *(_QWORD *)(v24 + 840) = v10;
      srcb = (_BYTE *)v9;
      memmove(v11, v12, v9);
      srcb[*(_QWORD *)(v24 + 832)] = 0;
      if ( *(_QWORD *)(v24 + 840) )
      {
        v13 = *(const char **)(v24 + 832);
        goto LABEL_13;
      }
    }
    else
    {
      *(_QWORD *)(v24 + 840) = 0;
    }
    v13 = s1;
LABEL_13:
    v14 = open_linput(v13, 0);
    *(_QWORD *)(v24 + 8) = v14;
    if ( !v14 )
    {
      v31 = (char *)s1;
      if ( (_QWORD)v65 )
        v31 = s;
      errdesc = get_errdesc(v31, 0xFFFFFFFFLL);
      a2 = (char *)s1;
      if ( (_QWORD)v65 )
        a2 = s;
      sub_112F0((unsigned int)"failed to open %s: %s\n", (_DWORD)a2, errdesc, v33, v34, v35);
LABEL_19:
      if ( v24 )
      {
        sub_1A3D0(v24);
        a2 = (_BYTE *)&stru_360;
        operator delete((void *)v24, 0x360u);
      }
      v23 = s;
      if ( s )
        goto LABEL_22;
      goto LABEL_23;
    }
    *(_BYTE *)(v24 + 774) = 1;
    if ( !(unsigned __int8)sub_3B7E0(v24, 17, 0) )
    {
      a2 = (char *)s1;
      if ( (_QWORD)v65 )
        a2 = s;
      sub_112F0((unsigned int)"failed to parse dyld subcache header for %s\n", (_DWORD)a2, v15, v16, v17, v18);
      goto LABEL_19;
    }
    v19 = v7 + a1[84];
    if ( *(_OWORD *)v19 - *(_OWORD *)(v24 + 104) != 0 )
    {
      a2 = (char *)s1;
      if ( (_QWORD)v65 )
        a2 = s;
      sub_196C0(
        (unsigned int)"%s does not match the subcache uuid from the umbrella cache, please verify that all files are from"
                      " the same source",
        (_DWORD)a2,
        *(_DWORD *)(v19 + 8) ^ *(_DWORD *)(v24 + 112),
        v19,
        v17,
        v18);
      goto LABEL_19;
    }
    sub_1C2E0(v24, a1 + 72);
    *(_BYTE *)(v60 + v58) = 1;
    v36 = a1[99];
    a2 = (char *)a1[98];
    if ( a1[100] < (unsigned __int64)(v36 + 1) )
    {
      v46 = qvector_reserve(a1 + 98, a2, v36 + 1, 8);
      a1[98] = v46;
      a2 = (char *)v46;
      v36 = a1[99];
    }
    *(_QWORD *)&a2[8 * v36] = v24;
    v23 = s;
    ++a1[99];
    if ( v23 )
    {
LABEL_22:
      *(_QWORD *)&v65 = 0;
      qfree(v23, a2);
    }
LABEL_23:
    ++v58;
    v7 += 56;
  }
  while ( v57 != v58 );
  v37 = 0;
  v38 = 0;
  v62 = 0;
  v59 = 0;
  v63 = 0;
  do
  {
    if ( !*(_BYTE *)(v60 + v38) )
    {
      v39 = a1[84];
      a2 = "expected name: %s%s uuid: %02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X\n";
      s = 0;
      v65 = 0;
      ++v59;
      sub_35470(
        (unsigned int)&s,
        (unsigned int)"expected name: %s%s uuid: %02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X\n",
        v56,
        v37 + v39 + 24,
        *(unsigned __int8 *)(v37 + v39),
        *(unsigned __int8 *)(v37 + v39 + 1));
      v40 = (void *)v65;
      if ( (_QWORD)v65 )
      {
        v22 = v65 - 1;
        if ( (_QWORD)v65 != 1 )
        {
          v41 = v63;
          v42 = v65 - 1;
          if ( (_QWORD)v63 )
          {
            v41 = v63 - 1;
            v42 = v22 + v63 - 1;
            v40 = (void *)(v65 + v63 - 1);
          }
          v43 = v62;
          if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)v40 )
          {
            v47 = v41;
            v49 = v65 - 1;
            v51 = v42;
            srcc = v40;
            v62 = qvector_reserve(&v62, v62, v40, 1);
            v41 = v47;
            v43 = v62;
            v22 = v49;
            v42 = v51;
            v40 = srcc;
          }
          *(_QWORD *)&v63 = v40;
          *(_BYTE *)(v43 + v42) = 0;
          a2 = s;
          memcpy((void *)(v41 + v62), s, v22);
        }
      }
      if ( s )
      {
        *(_QWORD *)&v65 = 0;
        qfree(s, a2, v40, v20, v21, v22);
      }
    }
    ++v38;
    v37 += 56;
  }
  while ( v57 != v38 );
  if ( v59 )
  {
    v44 = s1;
    if ( (_QWORD)v63 )
      LODWORD(v44) = v62;
    a2 = v59;
    sub_196C0((unsigned int)"%zu missing subcaches:\n%s", (_DWORD)v59, (_DWORD)v44, v20, v21, v22);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62, a2);
  }
LABEL_2:
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60, a2);
  }
  return v66 - __readfsqword(0x28u);
}
