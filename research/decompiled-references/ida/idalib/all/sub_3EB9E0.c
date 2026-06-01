__int64 __fastcall sub_3EB9E0(__int64 a1, __int64 a2, _BYTE *a3)
{
  const void *v3; // r15
  __int64 v4; // rbp
  const char *v5; // rdi
  size_t v7; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // r10
  unsigned int v10; // r15d
  __int64 v11; // r8
  __int64 result; // rax
  bool v13; // zf
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  const char *v18; // r11
  size_t v19; // rbx
  _QWORD *v20; // rcx
  const char *v21; // rax
  _QWORD *v22; // r15
  __int64 v23; // rbp
  _QWORD *v24; // r12
  const char *v25; // r14
  const char *v26; // r13
  _QWORD *v27; // rbx
  const char *v28; // rsi
  const char *v29; // rdi
  int v30; // eax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  _QWORD *v35; // r10
  char *v36; // r11
  const char *v37; // rax
  const char *v38; // rdi
  int v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // rsi
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  char v44; // r11
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v51; // [rsp+8h] [rbp-A0h]
  __int64 v52; // [rsp+8h] [rbp-A0h]
  unsigned int v53; // [rsp+10h] [rbp-98h]
  _QWORD *v54; // [rsp+10h] [rbp-98h]
  __int64 v55; // [rsp+10h] [rbp-98h]
  unsigned __int64 v56; // [rsp+10h] [rbp-98h]
  unsigned __int64 v57; // [rsp+10h] [rbp-98h]
  const char *srca; // [rsp+18h] [rbp-90h]
  _QWORD *src; // [rsp+18h] [rbp-90h]
  void *srcb; // [rsp+18h] [rbp-90h]
  _QWORD *v61; // [rsp+20h] [rbp-88h]
  __int64 v62; // [rsp+20h] [rbp-88h]
  char *v63; // [rsp+20h] [rbp-88h]
  char v64; // [rsp+20h] [rbp-88h]
  __int64 v65; // [rsp+28h] [rbp-80h]
  __int64 v66; // [rsp+28h] [rbp-80h]
  __int64 v67; // [rsp+28h] [rbp-80h]
  _BYTE *v68; // [rsp+30h] [rbp-78h]
  void **v69; // [rsp+48h] [rbp-60h] BYREF
  _BYTE s2[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v71; // [rsp+68h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v3 = *(const void **)(a2 + 24);
  v4 = a2;
  if ( !v3 || !*(_BYTE *)(a1 + 80) )
    return 0xFFFFFFFFLL;
  v5 = *(const char **)(a2 + 24);
  memset(s2, 0, sizeof(s2));
  v7 = strlen(v5);
  *(_QWORD *)s2 = qvector_reserve(s2, 0, v7 + 1, 1);
  *(_QWORD *)&s2[8] = v7 + 1;
  memmove(*(void **)s2, v3, v7);
  *(_BYTE *)(*(_QWORD *)s2 + v7) = 0;
  v8 = sub_3DDF90(a1 + 24, (__int64)s2);
  if ( *(_QWORD *)s2 )
  {
    *(_QWORD *)&s2[8] = 0;
    qfree(*(void **)s2);
  }
  v9 = (_QWORD *)(a1 + 32);
  if ( (_QWORD *)(a1 + 32) != v8 )
  {
    v10 = *((_DWORD *)v8 + 14);
    if ( !v10 || (unsigned __int64)v10 >= *(_QWORD *)(a1 + 8) )
    {
      if ( !under_debugger )
        interr(1387);
      BUG();
    }
    v11 = *(_QWORD *)a1 + 16LL * v10;
    if ( *(_QWORD *)v11 )
    {
      result = 0xFFFFFFFFLL;
      if ( a3 )
      {
        *a3 = 1;
        return v10;
      }
      return result;
    }
    if ( v10 <= 0x400 )
      goto LABEL_14;
    return 0xFFFFFFFFLL;
  }
  v14 = *(_QWORD *)(a1 + 8);
  v10 = v14;
  if ( (_DWORD)v14 )
  {
    if ( (unsigned int)v14 > 0x400 )
      return 0xFFFFFFFFLL;
    v15 = *(_QWORD *)a1;
    v16 = 16LL * (unsigned int)v14;
    if ( (unsigned int)v14 < v14 || (v17 = (unsigned int)(v14 + 1), v17 == v14) )
    {
LABEL_24:
      v11 = v15 + v16;
      v13 = *(_BYTE *)(v15 + v16 + 8) == 0;
      *(_QWORD *)(v15 + v16) = v4;
      if ( !v13 )
        goto LABEL_15;
      goto LABEL_25;
    }
    *(_QWORD *)s2 = 0;
    s2[8] = 0;
    if ( v17 < v14 )
    {
LABEL_23:
      *(_QWORD *)(a1 + 8) = v17;
      goto LABEL_24;
    }
    v42 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int64)s2 < v15 )
    {
LABEL_70:
      if ( v42 >= v17 )
        goto LABEL_71;
      goto LABEL_73;
    }
LABEL_56:
    if ( (unsigned __int64)s2 < v15 + 16 * v42 )
    {
      v43 = *(_QWORD *)s2;
      v44 = s2[8];
      if ( v42 < v17 )
      {
        v67 = *(_QWORD *)s2;
        v64 = s2[8];
        v57 = v17;
        v49 = qvector_reserve(a1, v15, v17, 16);
        v43 = v67;
        v44 = v64;
        v15 = v49;
        v9 = (_QWORD *)(a1 + 32);
        v17 = v57;
        *(_QWORD *)a1 = v49;
        v14 = *(_QWORD *)(a1 + 8);
      }
      if ( v14 < v17 )
      {
        v45 = 16 * v14;
        do
        {
          v46 = v45 + v15;
          v45 += 16;
          *(_QWORD *)v46 = v43;
          *(_BYTE *)(v46 + 8) = v44;
          v15 = *(_QWORD *)a1;
        }
        while ( 16 * v17 != v45 );
      }
      goto LABEL_23;
    }
    goto LABEL_70;
  }
  if ( v14 <= 1 )
  {
    s2[8] = 0;
    v17 = 2;
    v10 = 1;
    *(_QWORD *)s2 = 0;
    v16 = 16;
    v15 = *(_QWORD *)a1;
    v42 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int64)s2 < *(_QWORD *)a1 )
    {
      v14 = 0;
      if ( v42 > 1 )
        goto LABEL_65;
LABEL_73:
      v56 = v17;
      v48 = qvector_reserve(a1, v15, v17, 16);
      v9 = (_QWORD *)(a1 + 32);
      v17 = v56;
      *(_QWORD *)a1 = v48;
      v15 = v48;
      v14 = *(_QWORD *)(a1 + 8);
LABEL_71:
      if ( v14 >= v17 )
        goto LABEL_23;
LABEL_65:
      v47 = 16 * v14;
      do
      {
        *(__m128i *)(v15 + v47) = _mm_load_si128((const __m128i *)s2);
        v47 += 16;
        v15 = *(_QWORD *)a1;
      }
      while ( 16 * v17 != v47 );
      goto LABEL_23;
    }
    goto LABEL_56;
  }
  v10 = 1;
  v11 = *(_QWORD *)a1 + 16LL;
LABEL_14:
  v13 = *(_BYTE *)(v11 + 8) == 0;
  *(_QWORD *)v11 = a2;
  if ( !v13 )
    goto LABEL_15;
LABEL_25:
  v18 = *(const char **)(v4 + 24);
  memset(s2, 0, sizeof(s2));
  if ( v18 )
  {
    v65 = v11;
    v61 = v9;
    srca = v18;
    v19 = strlen(v18);
    *(_QWORD *)s2 = qvector_reserve(s2, 0, v19 + 1, 1);
    *(_QWORD *)&s2[8] = v19 + 1;
    memmove(*(void **)s2, srca, v19);
    v11 = v65;
    v9 = v61;
    *(_BYTE *)(*(_QWORD *)s2 + v19) = 0;
  }
  v20 = v9;
  if ( !*(_QWORD *)(a1 + 40) )
    goto LABEL_48;
  v53 = v10;
  v21 = haystack;
  v66 = v4;
  v22 = v9;
  v68 = a3;
  v23 = *(_QWORD *)&s2[8];
  v24 = *(_QWORD **)(a1 + 40);
  if ( *(_QWORD *)&s2[8] )
    v21 = *(const char **)s2;
  v25 = *(const char **)s2;
  src = v9;
  v62 = v11;
  v26 = v21;
  while ( 1 )
  {
    v32 = v24[5];
    if ( !v23 )
      break;
    if ( v32 )
      goto LABEL_40;
    v27 = v24;
    v28 = v25;
    v29 = haystack;
LABEL_33:
    v30 = strcmp(v29, v28);
    v31 = (_QWORD *)v24[2];
    v24 = (_QWORD *)v24[3];
    if ( v30 >= 0 )
    {
      v22 = v27;
      v24 = v31;
    }
    if ( !v24 )
    {
      v20 = v22;
      v34 = v23;
      v10 = v53;
      v35 = src;
      v11 = v62;
      v4 = v66;
      v36 = (char *)v25;
      a3 = v68;
      goto LABEL_44;
    }
  }
  if ( v32 )
  {
LABEL_40:
    v29 = (const char *)v24[4];
    v27 = v24;
    v28 = v26;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v33 = v24[2];
    if ( !v33 )
      break;
    v22 = v24;
    v24 = (_QWORD *)v24[2];
    if ( *(_QWORD *)(v33 + 40) )
      goto LABEL_40;
  }
  v36 = (char *)v25;
  v34 = 0;
  v10 = v53;
  v35 = src;
  v11 = v62;
  v20 = v24;
  v4 = v66;
  a3 = v68;
LABEL_44:
  if ( v35 == v20 )
    goto LABEL_48;
  if ( v20[5] )
  {
    v37 = (const char *)v20[4];
    v38 = haystack;
    if ( !v34 )
      goto LABEL_47;
    goto LABEL_53;
  }
  v37 = haystack;
  if ( v34 )
  {
LABEL_53:
    v38 = v36;
LABEL_47:
    srcb = (void *)v11;
    v54 = v20;
    v63 = v36;
    v39 = strcmp(v38, v37);
    v20 = v54;
    v11 = (__int64)srcb;
    if ( v39 >= 0 )
    {
      v36 = v63;
    }
    else
    {
LABEL_48:
      v55 = v11;
      v69 = (void **)s2;
      v40 = sub_3EB8C0((_QWORD *)(a1 + 24), v20, &v69);
      v36 = *(char **)s2;
      v11 = v55;
      v20 = v40;
    }
  }
  *((_DWORD *)v20 + 14) = v10;
  if ( v36 )
  {
    v51 = v11;
    *(_QWORD *)&s2[8] = 0;
    qfree(v36);
    v11 = v51;
  }
  v52 = v11;
  *(_QWORD *)s2 = -1;
  netnode_check(s2, *(_QWORD *)(a1 + 88), 0, 1);
  LODWORD(v69) = v10;
  v41 = *(_QWORD *)(v4 + 24);
  *(_BYTE *)(v52 + 8) = 1;
  netnode_hashset(*(_QWORD *)s2, v41, &v69, 4, 72);
LABEL_15:
  if ( a3 )
    *a3 = 0;
  return v10;
}
