__int64 __fastcall sub_521820(
        void **a1,
        unsigned __int64 *a2,
        void **a3,
        __int64 a4,
        const char *a5,
        int a6,
        __int64 a7)
{
  void **v8; // r13
  void **v9; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // r15d
  unsigned __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rax
  __int16 v19; // cx
  void **v20; // rax
  __int16 v21; // si
  __int64 v22; // rax
  void **v23; // rdi
  void **v24; // rsi
  size_t v25; // rax
  _BYTE *v26; // rsi
  __int64 v27; // r9
  void **v28; // r11
  size_t v29; // r15
  size_t v30; // rdx
  size_t v31; // r10
  __int64 v32; // rax
  const char *v33; // rdi
  const char *v34; // rax
  int v35; // edx
  void **v36; // rax
  const char *v37; // r8
  __int16 v38; // si
  unsigned int v39; // eax
  __int64 v40; // rax
  size_t v41; // rax
  __int64 v42; // rsi
  __int64 idati; // rax
  char v44; // al
  const char *v45; // r8
  int v46; // edx
  __int16 v47; // cx
  int v48; // ecx
  char v49; // al
  int v50; // ecx
  int v51; // eax
  size_t v52; // rax
  void **v53; // rax
  char v54; // al
  int type_ordinal; // eax
  void **v56; // [rsp+0h] [rbp-120h]
  const char *srcc; // [rsp+8h] [rbp-118h]
  size_t srcd; // [rsp+8h] [rbp-118h]
  void **src; // [rsp+8h] [rbp-118h]
  __int128 srca; // [rsp+8h] [rbp-118h]
  const char *srcb; // [rsp+8h] [rbp-118h]
  __int64 src_8b; // [rsp+10h] [rbp-110h]
  int src_8; // [rsp+10h] [rbp-110h]
  const char *src_8a; // [rsp+10h] [rbp-110h]
  size_t nd; // [rsp+18h] [rbp-108h]
  size_t ne; // [rsp+18h] [rbp-108h]
  size_t nf; // [rsp+18h] [rbp-108h]
  size_t n; // [rsp+18h] [rbp-108h]
  const char *na; // [rsp+18h] [rbp-108h]
  int nb; // [rsp+18h] [rbp-108h]
  _BYTE *ng; // [rsp+18h] [rbp-108h]
  size_t nc; // [rsp+18h] [rbp-108h]
  __int64 v73; // [rsp+20h] [rbp-100h]
  const char *v74; // [rsp+20h] [rbp-100h]
  size_t v75; // [rsp+20h] [rbp-100h]
  const char *v76; // [rsp+20h] [rbp-100h]
  const char *v77; // [rsp+20h] [rbp-100h]
  __int64 v78; // [rsp+28h] [rbp-F8h]
  void *ptr; // [rsp+30h] [rbp-F0h] BYREF
  __int128 v80; // [rsp+38h] [rbp-E8h]
  void *v81; // [rsp+50h] [rbp-D0h] BYREF
  __int128 v82; // [rsp+58h] [rbp-C8h]
  void *v83; // [rsp+70h] [rbp-B0h] BYREF
  __int128 v84; // [rsp+78h] [rbp-A8h]
  void *v85; // [rsp+90h] [rbp-90h] BYREF
  __int128 v86; // [rsp+98h] [rbp-88h]
  void *v87; // [rsp+B0h] [rbp-70h] BYREF
  __int128 v88; // [rsp+B8h] [rbp-68h]
  __int64 v89; // [rsp+D0h] [rbp-50h] BYREF
  const char *v90; // [rsp+D8h] [rbp-48h]
  __int16 v91; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v92; // [rsp+E8h] [rbp-38h]

  v8 = a3;
  v9 = a1;
  v78 = a4;
  v92 = __readfsqword(0x28u);
  if ( a5 && *a5 )
  {
    if ( *a5 == 35 )
    {
      v76 = a5;
      v39 = sub_693310(a1, a3, a5);
      a5 = v76;
      if ( !v39 )
      {
        v14 = -3;
        set_error_string();
        return v14;
      }
      if ( v78 )
      {
        v11 = *a2;
        v73 = *((_QWORD *)*a1 + 204);
        if ( *a2 <= 0xFF )
        {
          v12 = 0;
          ptr = nullptr;
          v80 = 0;
LABEL_21:
          srcc = a5;
          ne = strlen(a5);
          a1 = (void **)qvector_reserve(&ptr, 0, ne + 1, 1);
          ptr = a1;
          *(_QWORD *)&v80 = ne + 1;
          memmove(a1, srcc, ne);
          a5 = srcc;
          *((_BYTE *)ptr + ne) = 0;
          goto LABEL_22;
        }
        goto LABEL_5;
      }
      a5 = nullptr;
      v78 = v39;
    }
    v11 = *a2;
    v12 = 0;
    v73 = *((_QWORD *)*a1 + 204);
    if ( *a2 <= 0xFF )
      goto LABEL_20;
LABEL_5:
    a1 = (void **)v73;
    nd = (size_t)a5;
    v13 = sub_51B750(v73, v11);
    a5 = (const char *)nd;
    v12 = v13;
    if ( !v13 || (*(_BYTE *)(v13 + 69) & 0x40) == 0 )
      goto LABEL_20;
    goto LABEL_7;
  }
  v16 = *a2;
  v73 = *((_QWORD *)*a1 + 204);
  if ( v16 <= 0xFF )
  {
    if ( !a4 )
      return (unsigned int)-1;
    goto LABEL_12;
  }
  a1 = *((void ***)*a1 + 204);
  v18 = sub_51B750(v73, v16);
  v12 = v18;
  if ( !v78 )
  {
    if ( !v18 )
      return (unsigned int)-1;
    v19 = *(_WORD *)(v18 + 68);
    v20 = *(void ***)(v18 + 32);
    v21 = *(_WORD *)(v12 + 68) & 0x4000;
    if ( !v20 )
    {
      if ( !v21 || *(_DWORD *)(v12 + 16) == -1 )
        return (unsigned int)-1;
      return (unsigned int)(unsigned __int8)sub_59CD70(v9, a2, a7, 0) - 1;
    }
    if ( !v21 )
    {
      if ( (v19 & 8) == 0 )
      {
        a5 = (const char *)v20[1];
        v8 = (void **)*v20;
        goto LABEL_20;
      }
      v8 = (void **)*v20;
      goto LABEL_87;
    }
    if ( *(_DWORD *)(v12 + 16) != -1 )
      return (unsigned int)(unsigned __int8)sub_59CD70(v9, a2, a7, 0) - 1;
    v8 = (void **)*v20;
    if ( (v19 & 8) != 0 )
    {
LABEL_87:
      v40 = *((unsigned int *)v20 + 2);
      a5 = nullptr;
      ptr = nullptr;
      v80 = 0;
      v78 = v40;
      goto LABEL_22;
    }
    a5 = (const char *)v20[1];
LABEL_7:
    if ( *(_DWORD *)(v12 + 16) != -1 )
      return (unsigned int)-1;
LABEL_20:
    ptr = nullptr;
    v80 = 0;
    if ( !a5 )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( !v18 )
  {
LABEL_12:
    ptr = nullptr;
    v80 = 0;
    if ( v8 )
    {
      a6 |= 1u;
      v17 = 272;
      v12 = 0;
      goto LABEL_28;
    }
    v8 = (void **)v9[1];
    a5 = nullptr;
    v12 = 0;
    v22 = *a2 & 0x100;
    goto LABEL_58;
  }
  a5 = nullptr;
  if ( (*(_BYTE *)(v18 + 69) & 0x40) != 0 )
    goto LABEL_7;
  ptr = nullptr;
  v80 = 0;
LABEL_22:
  if ( !v8 )
    v8 = (void **)v9[1];
  v22 = *a2 & 0x100;
  if ( v78 )
  {
LABEL_58:
    a6 |= 1u;
    if ( !v22 || !v12 )
      goto LABEL_64;
    v35 = v78;
    goto LABEL_61;
  }
  if ( !v22 )
    goto LABEL_64;
  v17 = 272;
  if ( !v12 || (a6 & 1) == 0 )
    goto LABEL_28;
  v35 = 0;
LABEL_61:
  if ( (a6 & 0x1000) != 0 )
    goto LABEL_77;
  v36 = *(void ***)(v12 + 32);
  if ( !v36 || *v36 != v8 )
    goto LABEL_64;
  a1 = v8;
  na = a5;
  src_8 = v35;
  v44 = sub_630AE0(v8);
  v45 = na;
  if ( !v44 )
    goto LABEL_75;
  v46 = src_8;
  v47 = *(_WORD *)(v12 + 68) & 8;
  if ( (*(_WORD *)(v12 + 68) & 0x80u) != 0 )
  {
    if ( v47 )
    {
LABEL_100:
      v48 = *(_DWORD *)(*(_QWORD *)(v12 + 32) + 8LL);
      goto LABEL_101;
    }
LABEL_75:
    if ( na )
    {
      a1 = *(void ***)(*(_QWORD *)(v12 + 32) + 8LL);
      if ( !strcmp((const char *)a1, na) )
        goto LABEL_77;
    }
LABEL_64:
    v17 = 272;
    goto LABEL_28;
  }
  if ( v47 )
    goto LABEL_100;
  v53 = *(void ***)(v12 + 32);
  srcb = na;
  a1 = (void **)v53[1];
  v56 = (void **)*v53;
  nc = (size_t)a1;
  v54 = is_ordinal_name(a1, &v89);
  v46 = src_8;
  v45 = srcb;
  if ( v54 )
  {
    v48 = v89;
  }
  else
  {
    a1 = v56;
    type_ordinal = get_type_ordinal(v56, nc);
    v45 = srcb;
    v46 = src_8;
    v48 = type_ordinal;
  }
LABEL_101:
  if ( v46 )
  {
    if ( v46 == v48 )
      goto LABEL_77;
    goto LABEL_64;
  }
  nb = v48;
  if ( !v45 )
    goto LABEL_64;
  a1 = (void **)v45;
  src_8a = v45;
  src = **(void ****)(v12 + 32);
  v49 = is_ordinal_name(v45, &v89);
  v50 = nb;
  if ( v49 )
  {
    v51 = v89;
  }
  else
  {
    a1 = src;
    v51 = get_type_ordinal(src, src_8a);
    v50 = nb;
  }
  if ( !v51 || v50 != v51 )
    goto LABEL_64;
LABEL_77:
  v38 = *(_WORD *)(v12 + 68);
  if ( (v38 & 0x40) != 0 )
  {
    v41 = *(_QWORD *)(v12 + 72);
    *(_QWORD *)(v12 + 72) = 0;
    v42 = v38 & 0x30 | 0xDu;
    n = v41;
    idati = **(_QWORD **)(v12 + 32);
    v91 = 0;
    v90 = &byte_22CD811;
    if ( !idati )
      idati = get_idati(a1, v42);
    v89 = idati;
    create_tinfo(a2, (unsigned int)(char)v42, 189, &v89);
    v12 = sub_51B750(v73, *a2);
    *(_QWORD *)(v12 + 72) = n;
    goto LABEL_64;
  }
  if ( (unsigned __int8)sub_524160(v12, *v9, *(unsigned __int8 *)a2, 1) )
  {
    v17 = 1296;
    if ( (*(_BYTE *)(v12 + 69) & 2) == 0 )
    {
      v17 = 272;
      if ( *(_BYTE *)(v12 + 70) )
        v17 = 784;
    }
LABEL_28:
    v23 = v9;
    v81 = nullptr;
    v83 = nullptr;
    v24 = &v81;
    v82 = 0;
    v85 = nullptr;
    v84 = 0;
    v86 = 0;
    if ( !(unsigned __int8)sub_5273A0(v9, &v81, &v83, &v85, a2, v17) )
    {
      v14 = -2;
LABEL_49:
      if ( v85 )
      {
        *(_QWORD *)&v86 = 0;
        qfree(v85);
      }
      if ( v83 )
      {
        *(_QWORD *)&v84 = 0;
        qfree(v83);
      }
      if ( v81 )
      {
        *(_QWORD *)&v82 = 0;
        qfree(v81);
      }
      goto LABEL_55;
    }
    v87 = nullptr;
    v88 = 0;
    if ( v12 && *(_QWORD *)(v12 + 72) )
    {
      if ( (*(_BYTE *)(v12 + 69) & 0x20) == 0 )
      {
        v74 = *(const char **)(v12 + 72);
        v25 = strlen(v74);
        v26 = nullptr;
        v27 = 0;
        v28 = (void **)v74;
        v29 = v25;
        v30 = v25 + 1;
        v31 = v25;
LABEL_33:
        srcd = v31;
        src_8b = v27;
        nf = (size_t)v28;
        v75 = v30;
        v87 = (void *)qvector_reserve(&v87, v26, v30, 1);
        v31 = srcd;
        v26 = v87;
        v27 = src_8b;
        v28 = (void **)nf;
        v30 = v75;
LABEL_34:
        *(_QWORD *)&v88 = v30;
        v26[v31] = 0;
        v24 = v28;
        v23 = (void **)((char *)v87 + v27);
        memmove((char *)v87 + v27, v28, v29);
        goto LABEL_35;
      }
      v24 = nullptr;
      v23 = &v87;
      v87 = (void *)qvector_reserve(&v87, 0, 2, 1);
      *(_QWORD *)&v88 = 2;
      *(_BYTE *)v87 = 6;
      *((_BYTE *)v87 + 1) = 0;
      if ( *(_QWORD *)(v12 + 72) )
      {
        v77 = *(const char **)(v12 + 72);
        srca = v88;
        ng = v87;
        v52 = strlen(v77);
        v27 = srca;
        v28 = (void **)v77;
        v26 = ng;
        v29 = v52;
        v31 = v52;
        if ( (_QWORD)srca )
        {
          v27 = srca - 1;
          v31 = v52 + srca - 1;
        }
        v30 = v31 + 1;
        if ( *((_QWORD *)&srca + 1) >= v31 + 1 )
          goto LABEL_34;
        goto LABEL_33;
      }
    }
LABEL_35:
    v91 = 1;
    v90 = (const char *)(unsigned int)v78;
    v32 = (__int64)v8;
    if ( !v8 )
      v32 = get_idati(v23, v24);
    v89 = v32;
    if ( v78 )
    {
      v37 = haystack;
      if ( (_QWORD)v80 )
        LODWORD(v37) = (_DWORD)ptr;
      v14 = sub_63EF20(
              (_DWORD)v9,
              (_DWORD)v8,
              v78,
              a6,
              (_DWORD)v37,
              (_DWORD)v81,
              (__int64)v83,
              (__int64)v87,
              (__int64)v85,
              0);
      if ( v14 )
        goto LABEL_47;
    }
    else
    {
      v33 = haystack;
      if ( (_QWORD)v80 )
        LODWORD(v33) = (_DWORD)ptr;
      v14 = sub_63DDA0(
              (_DWORD)v9,
              (_DWORD)v8,
              (_DWORD)v33,
              a6,
              (_DWORD)v81,
              (_DWORD)v83,
              (__int64)v87,
              (__int64)v85,
              0,
              0);
      if ( v14 )
        goto LABEL_47;
      if ( (a6 & 1) == 0 )
      {
LABEL_46:
        v14 = 0;
LABEL_47:
        if ( v87 )
        {
          *(_QWORD *)&v88 = 0;
          qfree(v87);
        }
        goto LABEL_49;
      }
      v34 = haystack;
      if ( (_QWORD)v80 )
        v34 = (const char *)ptr;
      v90 = v34;
      LOBYTE(v91) = 0;
    }
    create_tinfo(a2, 61, 61, &v89);
    goto LABEL_46;
  }
  v14 = -2;
LABEL_55:
  if ( ptr )
  {
    *(_QWORD *)&v80 = 0;
    qfree(ptr);
  }
  return v14;
}

