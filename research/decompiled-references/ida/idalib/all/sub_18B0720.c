__int64 __fastcall sub_18B0720(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        double a7,
        __m128 a8,
        unsigned int a9,
        _BYTE *a10,
        _BYTE *a11,
        char a12,
        char a13)
{
  __int64 *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r13
  unsigned __int8 v18; // r15
  int v19; // r12d
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r10d
  bool v24; // dl
  bool v25; // al
  __int64 v26; // rdx
  __int64 v27; // rsi
  _WORD *v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  _DWORD *v34; // rax
  int v35; // eax
  bool v36; // al
  unsigned int v37; // r15d
  char v39; // si
  unsigned __int8 v40; // al
  __int64 v41; // r8
  char v42; // di
  __int64 v43; // rdx
  unsigned __int64 v44; // r15
  __int64 *v45; // rdi
  __int64 v46; // rdi
  char v47; // cl
  unsigned __int8 v48; // al
  __int64 v49; // r8
  char v50; // si
  __int64 v51; // rdx
  unsigned __int64 v52; // rdi
  __int64 *v53; // rsi
  __int64 v54; // rdi
  char v55; // al
  __int64 *v56; // rbx
  __int64 v57; // rsi
  char v58; // dl
  char v59; // al
  unsigned __int64 v60; // rdi
  _BOOL8 v61; // rdx
  _QWORD *v62; // r12
  _BOOL8 v63; // rdx
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // rcx
  bool v66; // cl
  char *v67; // rdx
  _QWORD *v68; // rbx
  unsigned __int64 v69; // rsi
  __int64 v70; // rdi
  unsigned __int64 *v71; // rcx
  char *v72; // rax
  char *v73; // rsi
  char *v74; // rax
  char *v75; // rdi
  __int64 v76; // rdi
  char v77; // dl
  _BOOL8 v78; // rax
  __int64 v79; // rsi
  char v80; // dl
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // r9
  _QWORD *v83; // rcx
  unsigned __int64 v84; // r12
  _BOOL8 v85; // rax
  _QWORD *v86; // r15
  unsigned __int64 v87; // r13
  _QWORD *v88; // rax
  char *v89; // rdx
  char *v90; // rdx
  __int64 v91; // rdi
  unsigned __int64 *v92; // rsi
  char *v93; // rax
  char v94; // di
  char *v95; // rsi
  _BOOL8 v96; // rsi
  _BOOL8 v97; // rdi
  int v101; // [rsp+18h] [rbp-170h]
  __int64 *v102; // [rsp+18h] [rbp-170h]
  unsigned __int8 v103; // [rsp+18h] [rbp-170h]
  unsigned __int8 v104; // [rsp+20h] [rbp-168h]
  int v105; // [rsp+20h] [rbp-168h]
  int v106; // [rsp+28h] [rbp-160h]
  bool v107; // [rsp+28h] [rbp-160h]
  int v108; // [rsp+2Ch] [rbp-15Ch]
  int v109; // [rsp+2Ch] [rbp-15Ch]
  void *v110; // [rsp+30h] [rbp-158h] BYREF
  __int64 v111; // [rsp+38h] [rbp-150h]
  int v112; // [rsp+40h] [rbp-148h] BYREF
  char v113; // [rsp+44h] [rbp-144h]
  _BYTE v114[120]; // [rsp+48h] [rbp-140h] BYREF
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v116; // [rsp+C8h] [rbp-C0h]
  int v117; // [rsp+D0h] [rbp-B8h] BYREF
  char v118; // [rsp+D4h] [rbp-B4h]
  char v119; // [rsp+D8h] [rbp-B0h] BYREF

  v14 = (__int64 *)a1;
  if ( a10 )
    *a10 = 0;
  if ( a11 )
    *a11 = 0;
  v15 = sub_18B0530(a1, a9, a4, a7, a8);
  if ( !v15 )
    return 0;
  v16 = sub_18B0530(a1, a9, a6, a7, a8);
  v17 = v16;
  if ( !v16 )
    return 0;
  v18 = (*(_BYTE *)(v16 + 19) >> 1) & 0xF;
  v104 = (*(_BYTE *)(v15 + 19) >> 1) & 0xF;
  v19 = sub_F63060(v15);
  v20 = sub_F63060(v17);
  if ( !(v20 | v19) )
    return 0;
  v22 = v104;
  v23 = v18;
  if ( v19 == 2 && v104 != 2 && v20 == 2 && v18 != 2 )
  {
    if ( a12 || (v104 || v18 != 7) && (v104 != 7 || v18) )
      return 0;
    v24 = v104 == 2;
    v25 = v18 == 2;
LABEL_16:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 && a13 )
    {
      if ( v104 || !v25 )
      {
        v36 = v23 == 0;
        if ( !v24 || v23 )
          goto LABEL_121;
        v17 = v15;
      }
      v26 = *(unsigned __int8 *)(v17 + 19);
      if ( ((*(_BYTE *)(v17 + 19) >> 1) & 0xF) == 2 )
      {
        v27 = 8LL * *(unsigned __int16 *)(v17 + 22) + 48;
        v28 = (_WORD *)((v17 + v27 + (((char)BYTE3(*(_QWORD *)(v17 + 16)) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*v28 & 0x3FF) == 1 )
        {
          v29 = (*(_QWORD *)(v17 + 16) & 0x40000000LL) != 0;
          if ( (v26 & 0x40) != 0 )
          {
            v27 += ((char)v26 >> 5) & 4;
            v29 += (*(_BYTE *)(((v17 + v27 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
          }
          v105 = v23;
          v101 = v22;
          v30 = sub_F63270(*(_QWORD *)(*(_QWORD *)&v28[4 * v29] & 0xFFFFFFFFFFFFFFF0LL), v27, v26, v29, v21, v22);
          LODWORD(v22) = v101;
          v23 = v105;
          v31 = (__int64)v30;
          if ( v30 )
          {
            v32 = v30[5];
            if ( (v32 & 7) == 0 )
            {
              v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v33 )
              {
                v34 = *(_DWORD **)(v33 + 16);
                if ( *v34 == 9 )
                {
                  v35 = memcmp(v34 + 4, "bad_alloc", 9u);
                  LODWORD(v22) = v101;
                  v23 = v105;
                  if ( !v35 )
                  {
                    if ( sub_B8EC80(v31) )
                      return 0;
                    LODWORD(v22) = v101;
                    v36 = v105 == 0;
LABEL_121:
                    if ( (_DWORD)v22 != 0 && a10 != nullptr && v36 )
                    {
                      *a10 = 1;
                      LOBYTE(v21) = v19 == 0 && a11 != nullptr;
                      v37 = v21;
                      if ( (_BYTE)v21 )
                      {
                        *a11 = 1;
                        return v37;
                      }
                      return 1;
                    }
LABEL_57:
                    v56 = v14 + 1;
                    sub_168CDE0((__int64)&ptr, v56, a9, a2, 0);
                    sub_15F7200(&ptr);
                    if ( *(_DWORD *)(a3 + 16) && a5 )
                    {
                      sub_168CDE0((__int64)&ptr, v56, a5, a3, 0);
                      sub_15F7200(&ptr);
                    }
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_120:
    v36 = v23 == 0;
    goto LABEL_121;
  }
  LOBYTE(v21) = v18 == 6 && v104 == 6;
  v37 = v21;
  if ( v23 == 6 && v104 == 6 )
  {
    ptr = &v117;
    v110 = &v112;
    v111 = 0x2000000000LL;
    v116 = 0x2000000000LL;
    v39 = *(_BYTE *)(v15 + 19);
    v40 = ((unsigned __int8)v39 >> 1) & 0xF;
    if ( (unsigned int)v40 - 6 > 2 )
    {
      v46 = 0;
    }
    else
    {
      v41 = 8LL * *(unsigned __int16 *)(v15 + 22) + 48;
      v42 = BYTE3(*(_QWORD *)(v15 + 16));
      v43 = (v42 & 0x40) != 0;
      v44 = (v15 + v41 + ((v42 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v39 & 0x40) != 0 )
        v43 += (*(_BYTE *)(((v15 + v41 + ((v39 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v45 = (__int64 *)(v44 + 8 * v43);
      if ( v40 == 2 )
      {
        v45 = (__int64 *)(v44
                        + 8 * ((*(_WORD *)((v15 + ((v39 >> 5) & 4) + v41 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v43));
      }
      else if ( v40 > 1u && ((v40 + 13) & 0xFu) > 8 )
      {
LABEL_149:
        BUG();
      }
      v46 = *v45;
    }
    v108 = v23;
    sub_F1A490(v46, (__int64)&v110, v14[31], 1, 0);
    v47 = *(_BYTE *)(v17 + 19);
    v48 = ((unsigned __int8)v47 >> 1) & 0xF;
    if ( (unsigned int)v48 - 6 > 2 )
    {
      v54 = 0;
    }
    else
    {
      v49 = 8LL * *(unsigned __int16 *)(v17 + 22) + 48;
      v50 = BYTE3(*(_QWORD *)(v17 + 16));
      v51 = (v50 & 0x40) != 0;
      v52 = (v17 + v49 + ((v50 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v47 & 0x40) != 0 )
        v51 += (*(_BYTE *)(((v17 + v49 + ((v47 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v53 = (__int64 *)(v52 + 8 * v51);
      if ( v48 == 2 )
      {
        v53 = (__int64 *)(v52
                        + 8 * ((*(_WORD *)((v17 + ((v47 >> 5) & 4) + v49 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v51));
      }
      else if ( v48 > 1u && ((v48 + 13) & 0xFu) > 8 )
      {
        goto LABEL_149;
      }
      v54 = *v53;
    }
    sub_F1A490(v54, (__int64)&ptr, v14[31], 1, 0);
    v55 = sub_2222ED0(&v110, &ptr);
    LODWORD(v22) = v104;
    v23 = v108;
    if ( v55 )
    {
      if ( ptr != &v117 )
        free(ptr);
      if ( v110 != &v112 )
        free(v110);
      return 0;
    }
    if ( ptr != &v117 )
    {
      free(ptr);
      v23 = v108;
      LODWORD(v22) = v104;
    }
    if ( v110 != &v112 )
    {
      v109 = v23;
      v106 = v22;
      free(v110);
      v23 = v109;
      LODWORD(v22) = v106;
    }
    if ( (*(_BYTE *)(v14[29] + 1) & 0x10) == 0 || !a13 )
      goto LABEL_57;
    goto LABEL_120;
  }
  v24 = v104 == 2;
  v25 = v23 == 2;
  v107 = v23 == 2 && v24;
  if ( !v107 )
    goto LABEL_16;
  v112 = 0;
  v111 = 8;
  v110 = v114;
  v113 = 1;
  ptr = &v119;
  v116 = 8;
  v117 = 0;
  v118 = 1;
  v57 = 8LL * *(unsigned __int16 *)(v15 + 22) + 48;
  v58 = BYTE3(*(_QWORD *)(v15 + 16));
  v59 = *(_BYTE *)(v15 + 19);
  v60 = (v15 + v57 + ((v58 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v61 = (v58 & 0x40) != 0;
  if ( (v59 & 0x40) != 0 )
  {
    v65 = (v15 + ((v59 >> 5) & 4) + v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v96 = (*(_BYTE *)(v65 + 1) & 4) != 0;
    v62 = (_QWORD *)(v60 + 8 * (v96 + v61));
    v63 = v96 + 1;
    v64 = v65 + 8 * (v96 + 1);
  }
  else
  {
    v62 = (_QWORD *)(v60 + 8 * v61);
    v63 = 0;
    v64 = (v15 + ((v59 >> 5) & 4) + v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v65 = v64;
  }
  if ( (((unsigned __int8)v59 >> 1) & 0xF) == 2 )
    v64 = v65 + 8 * ((*(_WORD *)v65 & 0x3FF) + v63);
  v66 = v23 == 2 && v104 == 2;
  v67 = v114;
  if ( (_QWORD *)v64 != v62 )
  {
    v102 = v14;
    v68 = v62;
    while ( 1 )
    {
      v69 = *(_QWORD *)(*(_QWORD *)&byte_8[*v68 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v66 )
      {
        v70 = 8LL * HIDWORD(v111);
        v71 = (unsigned __int64 *)&v67[v70];
        if ( &v67[v70] != v67 )
        {
          v72 = v67;
          if ( v69 == *(_QWORD *)v67 )
            goto LABEL_76;
          while ( 1 )
          {
            v72 += 8;
            if ( v71 == (unsigned __int64 *)v72 )
              break;
            if ( v69 == *(_QWORD *)v72 )
              goto LABEL_76;
          }
        }
        if ( HIDWORD(v111) < (unsigned int)v111 )
          break;
      }
      v72 = (char *)sub_2236760(&v110, v69);
      v66 = v113;
      v67 = (char *)v110;
      if ( v113 )
        goto LABEL_76;
      v73 = (char *)v110 + 8 * (unsigned int)v111;
LABEL_77:
      if ( v73 != v72 && *(_QWORD *)v72 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v74 = v72 + 8;
        do
        {
          v75 = v74;
          if ( v73 == v74 )
            break;
          v74 += 8;
        }
        while ( *(_QWORD *)v75 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( (_QWORD *)v64 == ++v68 )
      {
        v14 = v102;
        goto LABEL_84;
      }
    }
    ++HIDWORD(v111);
    *v71 = v69;
    v67 = (char *)v110;
    v72 = (char *)v110 + v70;
LABEL_76:
    v73 = &v67[8 * HIDWORD(v111)];
    v66 = v107;
    goto LABEL_77;
  }
LABEL_84:
  v76 = 8LL * *(unsigned __int16 *)(v17 + 22) + 48;
  v77 = BYTE3(*(_QWORD *)(v17 + 16));
  v78 = (v77 & 0x40) != 0;
  v79 = v17 + v76 + ((v77 >> 5) & 4) + 7;
  v80 = *(_BYTE *)(v17 + 19);
  v81 = v79 & 0xFFFFFFFFFFFFFFF8LL;
  v82 = (v17 + v76 + ((v80 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v80 & 0x40) != 0 )
  {
    v97 = (*(_BYTE *)(v82 + 1) & 4) != 0;
    v83 = (_QWORD *)(v81 + 8 * (v97 + v78));
    v85 = v97 + 1;
    v84 = v82 + 8 * (v97 + 1);
  }
  else
  {
    v83 = (_QWORD *)(v81 + 8 * v78);
    v84 = (v17 + v76 + ((*(char *)(v17 + 19) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v85 = 0;
  }
  if ( (((unsigned __int8)v80 >> 1) & 0xF) == 2 )
    v84 = v82 + 8 * ((*(_WORD *)v82 & 0x3FF) + v85);
  if ( v83 != (_QWORD *)v84 )
  {
    v103 = v37;
    v86 = v83;
    while ( 1 )
    {
      v87 = *(_QWORD *)(*(_QWORD *)&byte_8[*v86 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v113 )
      {
        v88 = v110;
        v89 = (char *)v110 + 8 * HIDWORD(v111);
        if ( v110 == v89 )
          goto LABEL_130;
        while ( v87 != *v88 )
        {
          if ( v89 == (char *)++v88 )
            goto LABEL_130;
        }
      }
      else if ( !sub_2236570(&v110, v87) )
      {
LABEL_130:
        v94 = v118;
        goto LABEL_112;
      }
      if ( v118 )
      {
        v90 = (char *)ptr;
        v91 = 8LL * HIDWORD(v116);
        v92 = (unsigned __int64 *)((char *)ptr + v91);
        if ( ptr != (char *)ptr + v91 )
        {
          v93 = (char *)ptr;
          if ( v87 == *(_QWORD *)ptr )
            goto LABEL_103;
          while ( 1 )
          {
            v93 += 8;
            if ( v92 == (unsigned __int64 *)v93 )
              break;
            if ( v87 == *(_QWORD *)v93 )
              goto LABEL_103;
          }
        }
        if ( HIDWORD(v116) < (unsigned int)v116 )
          break;
      }
      v93 = (char *)sub_2236760(&ptr, v87);
      v94 = v118;
      v90 = (char *)ptr;
      if ( v118 )
        goto LABEL_103;
      v95 = (char *)ptr + 8 * (unsigned int)v116;
LABEL_104:
      if ( v95 != v93 && (unsigned __int64)(*(_QWORD *)v93 + 2LL) <= 1 )
      {
        do
          v93 += 8;
        while ( v95 != v93 && *(_QWORD *)v93 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( (_QWORD *)v84 == ++v86 )
      {
        v37 = v103;
        goto LABEL_111;
      }
    }
    ++HIDWORD(v116);
    *v92 = v87;
    v90 = (char *)ptr;
    v93 = (char *)ptr + v91;
LABEL_103:
    v94 = v107;
    v95 = &v90[8 * HIDWORD(v116)];
    goto LABEL_104;
  }
  v94 = v118;
LABEL_111:
  if ( HIDWORD(v116) - v117 != HIDWORD(v111) - v112 )
  {
LABEL_112:
    if ( !v94 )
      free(ptr);
    if ( !v113 )
      free(v110);
    goto LABEL_57;
  }
  if ( !v94 )
    free(ptr);
  if ( !v113 )
    free(v110);
  return v37;
}
