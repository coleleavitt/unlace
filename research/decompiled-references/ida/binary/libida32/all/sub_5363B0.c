__int64 __fastcall sub_5363B0(__int64 *a1, __int64 a2, __int64 *a3, unsigned __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *, unsigned __int64 *, __int64, __int64); // rax
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // ebp
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // r15
  void *v19; // rdi
  void *v20; // rdi
  unsigned __int64 v21; // rbp
  bool v22; // dl
  __int16 v23; // ax
  unsigned __int8 v24; // al
  __int64 v25; // rax
  unsigned __int8 v26; // al
  unsigned __int64 v27; // rdi
  char *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r13
  char *v31; // r12
  void *v32; // rdi
  void *v33; // rdi
  unsigned int v34; // eax
  int v35; // eax
  int v36; // eax
  const char *v37; // rax
  void *idati; // rdx
  __int64 v39; // rax
  unsigned int v40; // eax
  int v41; // r14d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  __int64 v46; // r9
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rax
  __m128i v50; // xmm0
  const char *v51; // rsi
  _BYTE *v52; // r8
  _QWORD *v53; // rax
  unsigned int v54; // ecx
  _BYTE *v55; // rdx
  char v56; // si
  void *v57; // rdx
  void *v58; // rdx
  void *v59; // rdi
  char *v60; // rdi
  void *v61; // r14
  void *v62; // r15
  char *v63; // rbx
  void *v64; // rdi
  void *v65; // rdi
  char v66; // al
  int v67; // r14d
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // r9
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rax
  __m128i v76; // xmm0
  __int64 v77; // r9
  _BYTE *v78; // r8
  _QWORD *v79; // rdx
  unsigned int v80; // ecx
  _BYTE *v81; // rax
  char v82; // si
  int v83; // eax
  int v84; // ecx
  void *v85; // r14
  void *v86; // r15
  _QWORD *v87; // rbp
  void *v88; // rdi
  void *v89; // rdi
  void *v90; // rax
  void *v91; // rax
  void *v92; // rdx
  void *v93; // rax
  __int64 v94; // [rsp+0h] [rbp-C8h]
  _QWORD *v95; // [rsp+8h] [rbp-C0h]
  __int64 v96; // [rsp+8h] [rbp-C0h]
  _QWORD *v97; // [rsp+8h] [rbp-C0h]
  __int64 v98; // [rsp+8h] [rbp-C0h]
  __int64 v99; // [rsp+10h] [rbp-B8h]
  __int64 v100; // [rsp+10h] [rbp-B8h]
  unsigned int v101; // [rsp+10h] [rbp-B8h]
  void **v102; // [rsp+18h] [rbp-B0h]
  unsigned __int8 v103; // [rsp+20h] [rbp-A8h]
  __int64 v104; // [rsp+20h] [rbp-A8h]
  char v105; // [rsp+2Ch] [rbp-9Ch]
  __int64 v106; // [rsp+38h] [rbp-90h] BYREF
  void *v107; // [rsp+40h] [rbp-88h] BYREF
  __int128 v108; // [rsp+48h] [rbp-80h]
  void *v109; // [rsp+60h] [rbp-68h] BYREF
  __int128 v110; // [rsp+68h] [rbp-60h] BYREF
  int v111; // [rsp+78h] [rbp-50h]
  __int16 v112; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v113; // [rsp+88h] [rbp-40h]

  v113 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(2720);
    goto LABEL_202;
  }
  v7 = a2;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned __int64 *, __int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( (char *)v9 == (char *)sub_51B7E0 )
  {
    v10 = sub_51B8E0(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1632LL), *a4);
    v11 = *(_DWORD *)(a2 + 8);
    v12 = v11 & 1;
    if ( v10 )
    {
      v13 = *(__int64 **)(v10 + 32);
      if ( v13 )
      {
        v14 = *v13;
        if ( v14 )
        {
          *(_QWORD *)(a2 + 24) = v14;
          if ( (v11 & 1) == 0 )
            return 1;
LABEL_14:
          *(_DWORD *)(a2 + 8) = v11 & 0xFFFFFFFE;
          return v12;
        }
      }
    }
    if ( (v11 & 1) != 0 )
    {
      v12 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v34 = v9(a2, a3, a4, a5, a6);
    v11 = *(_DWORD *)(a2 + 8);
    v12 = v34;
    if ( (v11 & 1) != 0 )
      goto LABEL_14;
    if ( v34 )
      return v12;
  }
  if ( a3 )
  {
    if ( (a3[7] & 1) == 0 && (*(_BYTE *)a4 & 0xFu) > 9 )
    {
      if ( (v11 & 4) == 0 )
      {
LABEL_17:
        v16 = operator new(0x40u);
        v17 = *a4;
        *(_QWORD *)v16 = 0;
        v18 = v16;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 32) = 0;
        *(_DWORD *)(v16 + 56) = 0;
        *(_OWORD *)(v16 + 16) = 0;
        *(_OWORD *)(v16 + 40) = 0;
        goto LABEL_18;
      }
      v36 = *(_DWORD *)(a2 + 12);
      if ( v36 <= 1024 )
      {
        *(_DWORD *)(a2 + 12) = v36 + 1;
        goto LABEL_17;
      }
      return (unsigned int)-1;
    }
    return 0;
  }
  v17 = *a4;
  if ( (*(_BYTE *)a4 & 0xFu) <= 9 )
    return 0;
  if ( (v11 & 4) != 0 )
  {
    v35 = *(_DWORD *)(v7 + 12);
    if ( v35 > 1024 )
      return (unsigned int)-1;
    *(_DWORD *)(v7 + 12) = v35 + 1;
    v17 = *a4;
  }
  v18 = 0;
LABEL_18:
  v94 = sub_51B8E0(*(_QWORD *)(*a1 + 1632), v17);
  v12 = *(_DWORD *)(v7 + 8) & 2;
  if ( v12 )
  {
    *(_DWORD *)(v7 + 8) &= ~2u;
  }
  else if ( *(_QWORD *)(v94 + 32) )
  {
    goto LABEL_20;
  }
  v21 = *a4;
  v22 = sub_524160(v94, *a1, *a4, 1);
  v23 = *(_WORD *)(v94 + 68) & 0x200;
  if ( !v22 )
  {
    if ( !v23 )
      goto LABEL_63;
    goto LABEL_67;
  }
  if ( v23 )
  {
LABEL_67:
    v107 = nullptr;
    v108 = 0;
    if ( (unsigned __int8)sub_51C800(v94, (__int64)&v107) )
    {
      v37 = haystack;
      v106 = 0;
      if ( (_QWORD)v108 )
        v37 = (const char *)v107;
      if ( v37 )
      {
        idati = **(void ***)(v94 + 32);
        WORD4(v110) = 0;
        *(_QWORD *)&v110 = v37;
        if ( !idati )
          idati = (void *)get_idati(v94, &v107);
        v109 = idati;
        create_tinfo(&v106, 61, 61, &v109);
      }
      v12 = visit_subtypes(v7, v18, (int)&v106, 0, 0);
      if ( v18 && (*(_BYTE *)(v18 + 56) & 1) != 0 )
      {
        v39 = *a3;
        *a3 = *(_QWORD *)v18;
        *(_QWORD *)v18 = v39;
        *((_DWORD *)a3 + 14) |= 1u;
      }
      clear_tinfo_t(&v106);
    }
    else
    {
      v12 = 0;
    }
    if ( v107 )
    {
      *(_QWORD *)&v108 = 0;
      qfree(v107);
    }
    goto LABEL_64;
  }
  v103 = *(_BYTE *)(v94 + 70) | v21 & 0xC0;
  v24 = *(_BYTE *)(v94 + 70) & 0xF;
  if ( v24 == 12 )
  {
    v95 = *(_QWORD **)v94;
    v40 = visit_subtypes(v7, v18, *(_DWORD *)v94 + 32, 0, 0);
    v12 = v40;
    if ( v18 )
    {
      if ( (*(_BYTE *)(v18 + 56) & 1) != 0 )
      {
        v102 = (void **)qalloc_or_throw(96, (const char *)v18);
        sub_529AC0((__int64)v102, (__int64)v95);
        v93 = v102[4];
        v102[4] = *(void **)v18;
        *(_QWORD *)v18 = v93;
        *(_DWORD *)(v18 + 56) = 0;
        if ( v12 )
        {
LABEL_121:
          if ( !v102 )
            goto LABEL_64;
          create_tinfo(a3, v103, 12, v102);
          *((_DWORD *)a3 + 14) |= 1u;
          v59 = v102[8];
          if ( v59 )
          {
            v102[9] = nullptr;
            qfree(v59);
          }
          cleanup_argloc(v102 + 5);
          clear_tinfo_t(v102 + 4);
          v60 = (char *)*v102;
          if ( *v102 )
          {
            v61 = nullptr;
            if ( v102[1] )
            {
              v104 = v7;
              v96 = v18;
              v62 = v102[1];
              do
              {
                v63 = &v60[80 * (_QWORD)v61];
                clear_tinfo_t(v63 + 64);
                v64 = *((void **)v63 + 5);
                if ( v64 )
                {
                  *((_QWORD *)v63 + 6) = 0;
                  qfree(v64);
                }
                v65 = *((void **)v63 + 2);
                if ( v65 )
                {
                  *((_QWORD *)v63 + 3) = 0;
                  qfree(v65);
                }
                v61 = (char *)v61 + 1;
                cleanup_argloc(v63);
                v60 = (char *)*v102;
              }
              while ( v62 != v61 );
              v18 = v96;
              v7 = v104;
            }
            v102[1] = nullptr;
            qfree(v60);
          }
LABEL_134:
          qfree(v102);
          goto LABEL_64;
        }
      }
      else
      {
        v102 = nullptr;
        if ( v40 )
        {
LABEL_37:
          if ( !a3 )
            goto LABEL_21;
          goto LABEL_38;
        }
      }
    }
    else
    {
      v102 = nullptr;
      if ( v40 )
        goto LABEL_186;
    }
    v41 = 0;
    while ( (unsigned __int64)v41 < v95[1] )
    {
      LODWORD(v52) = 0;
      v53 = (_QWORD *)(80LL * v41 + *v95);
      if ( v53[6] > 1u )
      {
        v52 = (_BYTE *)v53[5];
        if ( v52 )
        {
          if ( *v52 == 5 )
          {
            v54 = (char)v52[1];
            v55 = v52 + 1;
            LODWORD(v52) = (_DWORD)v52 + 1;
            v56 = v54;
            if ( v54 <= 0x7F )
            {
              while ( v54 - 48 <= 9 )
              {
                v54 = (char)*++v55;
                v56 = v54;
                if ( v54 > 0x7F )
                  goto LABEL_107;
              }
              if ( v56 == 46 )
                ++v55;
LABEL_107:
              LODWORD(v52) = 0;
              if ( *v55 )
                LODWORD(v52) = (_DWORD)v55;
            }
          }
        }
      }
      v12 = visit_subtypes(v7, v18, (int)v53 + 64, v53[2], (int)v52);
      if ( v18 )
      {
        v45 = *(_DWORD *)(v18 + 56);
        if ( v45 )
        {
          v46 = 80LL * v41;
          if ( !v102 )
          {
            v102 = (void **)qalloc_or_throw(96, (const char *)v18, v42, v43, v44, 80LL * v41);
            sub_529AC0((__int64)v102, (__int64)v95);
            v45 = *(_DWORD *)(v18 + 56);
            v46 = 80LL * v41;
          }
          v47 = (__int64)*v102 + v46;
          if ( (v45 & 1) != 0 )
          {
            v48 = *(_QWORD *)(v47 + 64);
            *(_QWORD *)(v47 + 64) = *(_QWORD *)v18;
            *(_QWORD *)v18 = v48;
            v45 = *(_DWORD *)(v18 + 56);
          }
          if ( (v45 & 2) != 0 )
          {
            v49 = *(_QWORD *)(v47 + 16);
            v50 = _mm_loadu_si128((const __m128i *)(v47 + 24));
            *(_QWORD *)(v47 + 16) = *(_QWORD *)(v18 + 8);
            *(_QWORD *)(v47 + 24) = *(_QWORD *)(v18 + 16);
            *(_QWORD *)(v47 + 32) = *(_QWORD *)(v18 + 24);
            *(_QWORD *)(v18 + 8) = v49;
            v45 = *(_DWORD *)(v18 + 56);
            *(__m128i *)(v18 + 16) = v50;
          }
          if ( (v45 & 4) != 0 )
          {
            v51 = haystack;
            if ( *(_QWORD *)(v18 + 40) )
              v51 = *(const char **)(v18 + 32);
            sub_51ABF0(v47 + 40, v51);
          }
          *(_DWORD *)(v18 + 56) = 0;
        }
      }
      ++v41;
      if ( v12 )
        goto LABEL_121;
    }
    v12 = 0;
    goto LABEL_121;
  }
  if ( v24 > 0xCu )
  {
    if ( v24 != 13 )
      goto LABEL_63;
    v66 = *(_BYTE *)(v94 + 70) & 0x30;
    if ( v66 == 16 )
    {
LABEL_139:
      v97 = *(_QWORD **)v94;
      if ( !*(_QWORD *)(*(_QWORD *)v94 + 8LL) )
        goto LABEL_63;
      v102 = nullptr;
      v67 = 0;
      v68 = 0;
      do
      {
        v77 = v68 << 7;
        LODWORD(v78) = 0;
        v79 = (_QWORD *)(v77 + *v97);
        if ( v79[6] > 1u )
        {
          v78 = (_BYTE *)v79[5];
          if ( v78 )
          {
            if ( *v78 == 5 )
            {
              v80 = (char)v78[1];
              v81 = v78 + 1;
              LODWORD(v78) = (_DWORD)v78 + 1;
              v82 = v80;
              if ( v80 <= 0x7F )
              {
                while ( v80 - 48 <= 9 )
                {
                  v80 = (char)*++v81;
                  v82 = v80;
                  if ( v80 > 0x7F )
                    goto LABEL_160;
                }
                if ( v82 == 46 )
                  ++v81;
LABEL_160:
                LODWORD(v78) = 0;
                if ( *v81 )
                  LODWORD(v78) = (_DWORD)v81;
              }
            }
          }
        }
        v99 = v77;
        v12 = visit_subtypes(v7, v18, (int)v79 + 64, v79[2], (int)v78);
        if ( v18 )
        {
          v71 = *(unsigned int *)(v18 + 56);
          if ( (_DWORD)v71 )
          {
            v72 = v99;
            if ( !v102 )
            {
              v102 = (void **)qalloc_or_throw(56, (const char *)v18, v71, v69, v70, v99);
              sub_529DD0((__int64)v102, (__int64)v97);
              LODWORD(v71) = *(_DWORD *)(v18 + 56);
              v72 = v99;
            }
            v73 = (__int64)*v102 + v72;
            if ( (v71 & 1) != 0 )
            {
              v74 = *(_QWORD *)(v73 + 64);
              *(_QWORD *)(v73 + 64) = *(_QWORD *)v18;
              LODWORD(v71) = *(_DWORD *)(v18 + 56);
              *(_QWORD *)v18 = v74;
            }
            if ( (v71 & 2) != 0 )
            {
              v75 = *(_QWORD *)(v73 + 16);
              v76 = _mm_loadu_si128((const __m128i *)(v73 + 24));
              *(_QWORD *)(v73 + 16) = *(_QWORD *)(v18 + 8);
              *(_QWORD *)(v73 + 24) = *(_QWORD *)(v18 + 16);
              *(_QWORD *)(v73 + 32) = *(_QWORD *)(v18 + 24);
              LODWORD(v71) = *(_DWORD *)(v18 + 56);
              *(_QWORD *)(v18 + 8) = v75;
              *(__m128i *)(v18 + 16) = v76;
            }
            if ( (v71 & 4) != 0 )
            {
              v105 = v71;
              v100 = v73;
              if ( (unsigned __int8)sub_51ABF0(v73 + 40, *(const char **)(v18 + 32)) )
              {
                v83 = *(_DWORD *)(v100 + 116);
                v84 = v83;
                BYTE1(v83) |= 8u;
                BYTE1(v84) &= ~8u;
                if ( (v105 & 8) != 0 )
                  v83 = v84;
                *(_DWORD *)(v100 + 116) = v83;
              }
            }
            *(_DWORD *)(v18 + 56) = 0;
          }
        }
        if ( v12 )
          break;
        v68 = ++v67;
      }
      while ( (unsigned __int64)v67 < v97[1] );
      if ( v102 )
      {
        create_tinfo(a3, v103, 13, v102);
        *((_DWORD *)a3 + 14) |= 1u;
        if ( *v102 )
        {
          v85 = nullptr;
          if ( v102[1] )
          {
            v101 = v12;
            v98 = v18;
            v86 = v102[1];
            do
            {
              v87 = (char *)*v102 + 128 * (_QWORD)v85;
              clear_tinfo_t(v87 + 8);
              v88 = (void *)v87[5];
              if ( v88 )
              {
                v87[6] = 0;
                qfree(v88);
              }
              v89 = (void *)v87[2];
              if ( v89 )
              {
                v87[3] = 0;
                qfree(v89);
              }
              v85 = (char *)v85 + 1;
            }
            while ( v86 != v85 );
            v18 = v98;
            v12 = v101;
          }
          v102[1] = nullptr;
          qfree(*v102);
        }
        goto LABEL_134;
      }
LABEL_64:
      if ( !a3 || (a3[7] & 1) == 0 )
        goto LABEL_20;
      goto LABEL_39;
    }
    if ( v66 != 48 )
    {
      v12 = 0;
      if ( v66 )
        goto LABEL_64;
      goto LABEL_139;
    }
    if ( !under_debugger )
      interr(991);
LABEL_202:
    BUG();
  }
  if ( v24 == 10 )
  {
    v107 = nullptr;
    if ( *(char *)(v94 + 29) < 0 )
    {
      v12 = visit_subtypes(v7, v18, (int)v94 + 16, 0, 0);
      if ( v12 )
        goto LABEL_119;
      if ( v18 )
      {
        if ( (*(_BYTE *)(v18 + 56) & 1) != 0 )
        {
          v90 = v107;
          v107 = *(void **)v18;
          *(_QWORD *)v18 = v90;
          *(_DWORD *)(v18 + 56) = 0;
        }
        v12 = visit_subtypes(v7, v18, v94, 0, 0);
LABEL_112:
        if ( (*(_BYTE *)(v18 + 56) & 1) != 0 )
        {
LABEL_114:
          v109 = nullptr;
          copy_tinfo_t(&v109);
          *(_QWORD *)&v110 = 0;
          copy_tinfo_t(&v110);
          *((_QWORD *)&v110 + 1) = 0;
          copy_tinfo_t((char *)&v110 + 8);
          v111 = *(_DWORD *)(v94 + 24);
          v112 = *(_WORD *)(v94 + 28);
          if ( (*(_BYTE *)(v18 + 56) & 1) != 0 )
          {
            v57 = *(void **)v18;
            *(_QWORD *)v18 = v109;
            v109 = v57;
          }
          if ( (_BYTE)v107 )
          {
            v58 = *((void **)&v110 + 1);
            *((_QWORD *)&v110 + 1) = v107;
            v107 = v58;
          }
          create_tinfo(a3, v103, 10, &v109);
          *((_DWORD *)a3 + 14) |= 1u;
          clear_tinfo_t((char *)&v110 + 8);
          clear_tinfo_t(&v110);
          clear_tinfo_t(&v109);
          goto LABEL_119;
        }
        goto LABEL_113;
      }
      v12 = visit_subtypes(v7, 0, v94, 0, 0);
    }
    else
    {
      v12 = visit_subtypes(v7, v18, v94, 0, 0);
      if ( v18 )
        goto LABEL_112;
    }
LABEL_113:
    if ( (_BYTE)v107 )
      goto LABEL_114;
LABEL_119:
    clear_tinfo_t(&v107);
    goto LABEL_64;
  }
  if ( v24 != 11 )
  {
LABEL_63:
    v12 = 0;
    goto LABEL_64;
  }
  v25 = *(_QWORD *)v94;
  LOBYTE(v25) = *(_QWORD *)v94 & 0x3F;
  v109 = (void *)(*a4 & 0xC0 | v25);
  v12 = visit_subtypes(v7, v18, (int)&v109, 0, 0);
  if ( !v18 )
  {
LABEL_186:
    if ( !a3 || (a3[7] & 1) == 0 )
      goto LABEL_26;
    goto LABEL_39;
  }
  if ( (*(_BYTE *)(v18 + 56) & 1) == 0 )
    goto LABEL_37;
  v109 = nullptr;
  copy_tinfo_t(&v109);
  *(_QWORD *)&v110 = *(_QWORD *)(v94 + 8);
  v91 = *(void **)v18;
  *(_QWORD *)v18 = v109;
  v92 = v91;
  LOBYTE(v92) = (unsigned __int8)v91 & 0x3F;
  v109 = v92;
  create_tinfo(a3, (unsigned __int8)v91 & 0xC0 | v103 & 0x3Fu, 11, &v109);
  *((_DWORD *)a3 + 14) |= 1u;
  clear_tinfo_t(&v109);
  if ( !a3 )
    goto LABEL_21;
LABEL_38:
  if ( (a3[7] & 1) == 0 )
    goto LABEL_21;
LABEL_39:
  v26 = *(_BYTE *)(v94 + 71);
  if ( v26 )
    set_tinfo_property4(a3, 26, v26, 0, 0, 1);
  if ( *(_QWORD *)(v94 + 40) )
  {
    v27 = *a4;
    v110 = 0;
    v109 = nullptr;
    if ( (unsigned __int8)get_tinfo_attrs(v27, &v109, 0) )
      set_tinfo_attrs(a3, &v109);
    v28 = (char *)v109;
    if ( v109 )
    {
      v29 = v110;
      v30 = 0;
      if ( (_QWORD)v110 )
      {
        do
        {
          v31 = &v28[48 * v30];
          v32 = *((void **)v31 + 3);
          if ( v32 )
          {
            *((_QWORD *)v31 + 4) = 0;
            qfree(v32);
          }
          v33 = *(void **)v31;
          if ( *(_QWORD *)v31 )
          {
            *((_QWORD *)v31 + 1) = 0;
            qfree(v33);
          }
          ++v30;
          v28 = (char *)v109;
        }
        while ( v29 != v30 );
      }
      *(_QWORD *)&v110 = 0;
      qfree(v28);
    }
  }
LABEL_20:
  if ( v18 )
  {
LABEL_21:
    v19 = *(void **)(v18 + 32);
    if ( v19 )
    {
      *(_QWORD *)(v18 + 40) = 0;
      qfree(v19);
    }
    v20 = *(void **)(v18 + 8);
    if ( v20 )
    {
      *(_QWORD *)(v18 + 16) = 0;
      qfree(v20);
    }
    clear_tinfo_t(v18);
    operator delete((void *)v18, 0x40u);
  }
LABEL_26:
  if ( (*(_BYTE *)(v7 + 8) & 4) != 0 )
    --*(_DWORD *)(v7 + 12);
  return v12;
}

