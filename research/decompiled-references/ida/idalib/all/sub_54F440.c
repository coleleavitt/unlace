__int64 __fastcall sub_54F440(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned __int64 *v8; // r12
  __int64 (__fastcall *v9)(__int64, __int64, unsigned __int64 *, __int64, __int64); // rax
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
  unsigned __int64 v39; // rax
  unsigned int v40; // eax
  int v41; // r14d
  int v42; // eax
  __int64 v43; // r9
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __m128i v47; // xmm0
  const char *v48; // rsi
  _BYTE *v49; // r8
  _QWORD *v50; // rax
  unsigned int v51; // ecx
  _BYTE *v52; // rdx
  char v53; // si
  void *v54; // rdx
  void *v55; // rdx
  void *v56; // rdi
  char *v57; // rdi
  void *v58; // r14
  void *v59; // r15
  char *v60; // rbx
  void *v61; // rdi
  void *v62; // rdi
  char v63; // al
  int v64; // r14d
  __int64 v65; // rax
  int v66; // edx
  __int64 v67; // r9
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rax
  __m128i v71; // xmm0
  _BYTE *v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // rdx
  unsigned int v75; // ecx
  _BYTE *v76; // rax
  char v77; // si
  int v78; // eax
  int v79; // ecx
  void *v80; // r14
  void *v81; // rbp
  _QWORD *v82; // r12
  void *v83; // rdi
  void *v84; // rdi
  void *v85; // rax
  void *v86; // rax
  void *v87; // rdx
  void *v88; // rax
  __int64 v89; // [rsp+0h] [rbp-C8h]
  _QWORD *v90; // [rsp+8h] [rbp-C0h]
  __int64 v91; // [rsp+8h] [rbp-C0h]
  _QWORD *v92; // [rsp+8h] [rbp-C0h]
  unsigned int v93; // [rsp+8h] [rbp-C0h]
  __int64 v94; // [rsp+10h] [rbp-B8h]
  __int64 v95; // [rsp+10h] [rbp-B8h]
  void **v96; // [rsp+18h] [rbp-B0h]
  unsigned __int8 v97; // [rsp+20h] [rbp-A8h]
  __int64 v98; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v99; // [rsp+20h] [rbp-A8h]
  char v100; // [rsp+2Ch] [rbp-9Ch]
  __int64 v101; // [rsp+38h] [rbp-90h] BYREF
  void *v102; // [rsp+40h] [rbp-88h] BYREF
  __int128 v103; // [rsp+48h] [rbp-80h]
  void *v104; // [rsp+60h] [rbp-68h] BYREF
  __int128 v105; // [rsp+68h] [rbp-60h] BYREF
  int v106; // [rsp+78h] [rbp-50h]
  __int16 v107; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v108; // [rsp+88h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(2720);
    goto LABEL_202;
  }
  v7 = a2;
  v8 = a4;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, __int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( (char *)v9 == (char *)sub_534160 )
  {
    v10 = sub_534260(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1824LL), *a4);
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
    if ( (*(_BYTE *)(a3 + 56) & 1) == 0 && (*(_BYTE *)v8 & 0xFu) > 9 )
    {
      if ( (v11 & 4) == 0 )
      {
LABEL_17:
        v16 = operator new(0x40u);
        v17 = *v8;
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
  v17 = *v8;
  if ( (*(_BYTE *)v8 & 0xFu) <= 9 )
    return 0;
  if ( (v11 & 4) != 0 )
  {
    v35 = *(_DWORD *)(v7 + 12);
    if ( v35 > 1024 )
      return (unsigned int)-1;
    *(_DWORD *)(v7 + 12) = v35 + 1;
    v17 = *v8;
  }
  v18 = 0;
LABEL_18:
  v89 = sub_534260(*(_QWORD *)(*a1 + 1824), v17);
  v12 = *(_DWORD *)(v7 + 8) & 2;
  if ( v12 )
  {
    *(_DWORD *)(v7 + 8) &= ~2u;
  }
  else if ( *(_QWORD *)(v89 + 32) )
  {
    goto LABEL_20;
  }
  v21 = *v8;
  v22 = sub_53CE30(v89, *a1, *v8, 1);
  v23 = *(_WORD *)(v89 + 68) & 0x200;
  if ( !v22 )
  {
    if ( !v23 )
      goto LABEL_63;
    goto LABEL_67;
  }
  if ( v23 )
  {
LABEL_67:
    v102 = nullptr;
    v103 = 0;
    if ( (unsigned __int8)sub_535330(v89, (__int64)&v102) )
    {
      v37 = haystack;
      v101 = 0;
      if ( (_QWORD)v103 )
        v37 = (const char *)v102;
      if ( v37 )
      {
        idati = **(void ***)(v89 + 32);
        WORD4(v105) = 0;
        *(_QWORD *)&v105 = v37;
        if ( !idati )
          idati = (void *)get_idati(v89, &v102);
        v104 = idati;
        create_tinfo(&v101, 61, 61, &v104);
      }
      v12 = visit_subtypes(v7, v18, (int)&v101, 0, 0);
      if ( v18 && (*(_BYTE *)(v18 + 56) & 1) != 0 )
      {
        v39 = *(_QWORD *)a3;
        *(_QWORD *)a3 = *(_QWORD *)v18;
        *(_QWORD *)v18 = v39;
        *(_DWORD *)(a3 + 56) |= 1u;
      }
      clear_tinfo_t(&v101);
    }
    else
    {
      v12 = 0;
    }
    if ( v102 )
    {
      *(_QWORD *)&v103 = 0;
      qfree(v102);
    }
    goto LABEL_64;
  }
  v97 = *(_BYTE *)(v89 + 70) | v21 & 0xC0;
  v24 = *(_BYTE *)(v89 + 70) & 0xF;
  if ( v24 == 12 )
  {
    v90 = *(_QWORD **)v89;
    v40 = visit_subtypes(v7, v18, *(_DWORD *)v89 + 32, 0, 0);
    v12 = v40;
    if ( v18 )
    {
      if ( (*(_BYTE *)(v18 + 56) & 1) != 0 )
      {
        v96 = (void **)qalloc_or_throw(96);
        sub_5427C0((__int64)v96, (__int64)v90);
        v88 = v96[4];
        v96[4] = *(void **)v18;
        *(_QWORD *)v18 = v88;
        *(_DWORD *)(v18 + 56) = 0;
        if ( v12 )
        {
LABEL_121:
          if ( !v96 )
            goto LABEL_64;
          create_tinfo(a3, v97, 12, v96);
          *(_DWORD *)(a3 + 56) |= 1u;
          v56 = v96[8];
          if ( v56 )
          {
            v96[9] = nullptr;
            qfree(v56);
          }
          cleanup_argloc(v96 + 5);
          clear_tinfo_t(v96 + 4);
          v57 = (char *)*v96;
          if ( *v96 )
          {
            v58 = nullptr;
            if ( v96[1] )
            {
              v98 = v7;
              v91 = v18;
              v59 = v96[1];
              do
              {
                v60 = &v57[80 * (_QWORD)v58];
                clear_tinfo_t(v60 + 64);
                v61 = *((void **)v60 + 5);
                if ( v61 )
                {
                  *((_QWORD *)v60 + 6) = 0;
                  qfree(v61);
                }
                v62 = *((void **)v60 + 2);
                if ( v62 )
                {
                  *((_QWORD *)v60 + 3) = 0;
                  qfree(v62);
                }
                v58 = (char *)v58 + 1;
                cleanup_argloc(v60);
                v57 = (char *)*v96;
              }
              while ( v59 != v58 );
              v18 = v91;
              v7 = v98;
            }
            v96[1] = nullptr;
            qfree(v57);
          }
LABEL_134:
          qfree(v96);
          goto LABEL_64;
        }
      }
      else
      {
        v96 = nullptr;
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
      v96 = nullptr;
      if ( v40 )
        goto LABEL_186;
    }
    v41 = 0;
    while ( (unsigned __int64)v41 < v90[1] )
    {
      LODWORD(v49) = 0;
      v50 = (_QWORD *)(80LL * v41 + *v90);
      if ( v50[6] > 1u )
      {
        v49 = (_BYTE *)v50[5];
        if ( v49 )
        {
          if ( *v49 == 5 )
          {
            v51 = (char)v49[1];
            v52 = v49 + 1;
            LODWORD(v49) = (_DWORD)v49 + 1;
            v53 = v51;
            if ( v51 <= 0x7F )
            {
              while ( v51 - 48 <= 9 )
              {
                v51 = (char)*++v52;
                v53 = v51;
                if ( v51 > 0x7F )
                  goto LABEL_107;
              }
              if ( v53 == 46 )
                ++v52;
LABEL_107:
              LODWORD(v49) = 0;
              if ( *v52 )
                LODWORD(v49) = (_DWORD)v52;
            }
          }
        }
      }
      v12 = visit_subtypes(v7, v18, (int)v50 + 64, v50[2], (int)v49);
      if ( v18 )
      {
        v42 = *(_DWORD *)(v18 + 56);
        if ( v42 )
        {
          v43 = 80LL * v41;
          if ( !v96 )
          {
            v96 = (void **)qalloc_or_throw(96);
            sub_5427C0((__int64)v96, (__int64)v90);
            v42 = *(_DWORD *)(v18 + 56);
            v43 = 80LL * v41;
          }
          v44 = (__int64)*v96 + v43;
          if ( (v42 & 1) != 0 )
          {
            v45 = *(_QWORD *)(v44 + 64);
            *(_QWORD *)(v44 + 64) = *(_QWORD *)v18;
            *(_QWORD *)v18 = v45;
            v42 = *(_DWORD *)(v18 + 56);
          }
          if ( (v42 & 2) != 0 )
          {
            v46 = *(_QWORD *)(v44 + 16);
            v47 = _mm_loadu_si128((const __m128i *)(v44 + 24));
            *(_QWORD *)(v44 + 16) = *(_QWORD *)(v18 + 8);
            *(_QWORD *)(v44 + 24) = *(_QWORD *)(v18 + 16);
            *(_QWORD *)(v44 + 32) = *(_QWORD *)(v18 + 24);
            *(_QWORD *)(v18 + 8) = v46;
            v42 = *(_DWORD *)(v18 + 56);
            *(__m128i *)(v18 + 16) = v47;
          }
          if ( (v42 & 4) != 0 )
          {
            v48 = haystack;
            if ( *(_QWORD *)(v18 + 40) )
              v48 = *(const char **)(v18 + 32);
            sub_5338D0(v44 + 40, v48);
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
    v63 = *(_BYTE *)(v89 + 70) & 0x30;
    if ( v63 == 16 )
    {
LABEL_139:
      v92 = *(_QWORD **)v89;
      if ( !*(_QWORD *)(*(_QWORD *)v89 + 8LL) )
        goto LABEL_63;
      v96 = nullptr;
      v64 = 0;
      v65 = 0;
      do
      {
        LODWORD(v72) = 0;
        v73 = 144 * v65;
        v74 = (_QWORD *)(144 * v65 + *v92);
        if ( v74[6] > 1u )
        {
          v72 = (_BYTE *)v74[5];
          if ( v72 )
          {
            if ( *v72 == 5 )
            {
              v75 = (char)v72[1];
              v76 = v72 + 1;
              LODWORD(v72) = (_DWORD)v72 + 1;
              v77 = v75;
              if ( v75 <= 0x7F )
              {
                while ( v75 - 48 <= 9 )
                {
                  v75 = (char)*++v76;
                  v77 = v75;
                  if ( v75 > 0x7F )
                    goto LABEL_160;
                }
                if ( v77 == 46 )
                  ++v76;
LABEL_160:
                LODWORD(v72) = 0;
                if ( *v76 )
                  LODWORD(v72) = (_DWORD)v76;
              }
            }
          }
        }
        v94 = v73;
        v12 = visit_subtypes(v7, v18, (int)v74 + 64, v74[2], (int)v72);
        if ( v18 )
        {
          v66 = *(_DWORD *)(v18 + 56);
          if ( v66 )
          {
            v67 = v94;
            if ( !v96 )
            {
              v96 = (void **)qalloc_or_throw(56);
              sub_542AD0((__int64)v96, (__int64)v92);
              v66 = *(_DWORD *)(v18 + 56);
              v67 = v94;
            }
            v68 = (__int64)*v96 + v67;
            if ( (v66 & 1) != 0 )
            {
              v69 = *(_QWORD *)(v68 + 64);
              *(_QWORD *)(v68 + 64) = *(_QWORD *)v18;
              v66 = *(_DWORD *)(v18 + 56);
              *(_QWORD *)v18 = v69;
            }
            if ( (v66 & 2) != 0 )
            {
              v70 = *(_QWORD *)(v68 + 16);
              v71 = _mm_loadu_si128((const __m128i *)(v68 + 24));
              *(_QWORD *)(v68 + 16) = *(_QWORD *)(v18 + 8);
              *(_QWORD *)(v68 + 24) = *(_QWORD *)(v18 + 16);
              *(_QWORD *)(v68 + 32) = *(_QWORD *)(v18 + 24);
              v66 = *(_DWORD *)(v18 + 56);
              *(_QWORD *)(v18 + 8) = v70;
              *(__m128i *)(v18 + 16) = v71;
            }
            if ( (v66 & 4) != 0 )
            {
              v100 = v66;
              v95 = v68;
              if ( (unsigned __int8)sub_5338D0(v68 + 40, *(const char **)(v18 + 32)) )
              {
                v78 = *(_DWORD *)(v95 + 132);
                v79 = v78;
                BYTE1(v78) |= 8u;
                BYTE1(v79) &= ~8u;
                if ( (v100 & 8) != 0 )
                  v78 = v79;
                *(_DWORD *)(v95 + 132) = v78;
              }
            }
            *(_DWORD *)(v18 + 56) = 0;
          }
        }
        if ( v12 )
          break;
        v65 = ++v64;
      }
      while ( (unsigned __int64)v64 < v92[1] );
      if ( v96 )
      {
        create_tinfo(a3, v97, 13, v96);
        *(_DWORD *)(a3 + 56) |= 1u;
        if ( *v96 )
        {
          if ( v96[1] )
          {
            v99 = v8;
            v80 = v96[1];
            v93 = v12;
            v81 = nullptr;
            do
            {
              v82 = (char *)*v96 + 144 * (_QWORD)v81;
              clear_tinfo_t(v82 + 8);
              v83 = (void *)v82[5];
              if ( v83 )
              {
                v82[6] = 0;
                qfree(v83);
              }
              v84 = (void *)v82[2];
              if ( v84 )
              {
                v82[3] = 0;
                qfree(v84);
              }
              v81 = (char *)v81 + 1;
            }
            while ( v80 != v81 );
            v12 = v93;
            v8 = v99;
          }
          v96[1] = nullptr;
          qfree(*v96);
        }
        goto LABEL_134;
      }
LABEL_64:
      if ( !a3 || (*(_BYTE *)(a3 + 56) & 1) == 0 )
        goto LABEL_20;
      goto LABEL_39;
    }
    if ( v63 != 48 )
    {
      v12 = 0;
      if ( v63 )
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
    v102 = nullptr;
    if ( *(char *)(v89 + 29) < 0 )
    {
      v12 = visit_subtypes(v7, v18, (int)v89 + 16, 0, 0);
      if ( v12 )
        goto LABEL_119;
      if ( v18 )
      {
        if ( (*(_BYTE *)(v18 + 56) & 1) != 0 )
        {
          v85 = v102;
          v102 = *(void **)v18;
          *(_QWORD *)v18 = v85;
          *(_DWORD *)(v18 + 56) = 0;
        }
        v12 = visit_subtypes(v7, v18, v89, 0, 0);
LABEL_112:
        if ( (*(_BYTE *)(v18 + 56) & 1) != 0 )
        {
LABEL_114:
          v104 = nullptr;
          copy_tinfo_t(&v104);
          *(_QWORD *)&v105 = 0;
          copy_tinfo_t(&v105);
          *((_QWORD *)&v105 + 1) = 0;
          copy_tinfo_t((char *)&v105 + 8);
          v106 = *(_DWORD *)(v89 + 24);
          v107 = *(_WORD *)(v89 + 28);
          if ( (*(_BYTE *)(v18 + 56) & 1) != 0 )
          {
            v54 = *(void **)v18;
            *(_QWORD *)v18 = v104;
            v104 = v54;
          }
          if ( (_BYTE)v102 )
          {
            v55 = *((void **)&v105 + 1);
            *((_QWORD *)&v105 + 1) = v102;
            v102 = v55;
          }
          create_tinfo(a3, v97, 10, &v104);
          *(_DWORD *)(a3 + 56) |= 1u;
          clear_tinfo_t((char *)&v105 + 8);
          clear_tinfo_t(&v105);
          clear_tinfo_t(&v104);
          goto LABEL_119;
        }
        goto LABEL_113;
      }
      v12 = visit_subtypes(v7, 0, v89, 0, 0);
    }
    else
    {
      v12 = visit_subtypes(v7, v18, v89, 0, 0);
      if ( v18 )
        goto LABEL_112;
    }
LABEL_113:
    if ( (_BYTE)v102 )
      goto LABEL_114;
LABEL_119:
    clear_tinfo_t(&v102);
    goto LABEL_64;
  }
  if ( v24 != 11 )
  {
LABEL_63:
    v12 = 0;
    goto LABEL_64;
  }
  v25 = *(_QWORD *)v89;
  LOBYTE(v25) = *(_QWORD *)v89 & 0x3F;
  v104 = (void *)(*v8 & 0xC0 | v25);
  v12 = visit_subtypes(v7, v18, (int)&v104, 0, 0);
  if ( !v18 )
  {
LABEL_186:
    if ( !a3 || (*(_BYTE *)(a3 + 56) & 1) == 0 )
      goto LABEL_26;
    goto LABEL_39;
  }
  if ( (*(_BYTE *)(v18 + 56) & 1) == 0 )
    goto LABEL_37;
  v104 = nullptr;
  copy_tinfo_t(&v104);
  *(_QWORD *)&v105 = *(_QWORD *)(v89 + 8);
  v86 = *(void **)v18;
  *(_QWORD *)v18 = v104;
  v87 = v86;
  LOBYTE(v87) = (unsigned __int8)v86 & 0x3F;
  v104 = v87;
  create_tinfo(a3, (unsigned __int8)v86 & 0xC0 | v97 & 0x3Fu, 11, &v104);
  *(_DWORD *)(a3 + 56) |= 1u;
  clear_tinfo_t(&v104);
  if ( !a3 )
    goto LABEL_21;
LABEL_38:
  if ( (*(_BYTE *)(a3 + 56) & 1) == 0 )
    goto LABEL_21;
LABEL_39:
  v26 = *(_BYTE *)(v89 + 71);
  if ( v26 )
    set_tinfo_property4(a3, 26, v26, 0, 0, 1);
  if ( *(_QWORD *)(v89 + 40) )
  {
    v27 = *v8;
    v105 = 0;
    v104 = nullptr;
    if ( (unsigned __int8)get_tinfo_attrs(v27, (char **)&v104, 0) )
      set_tinfo_attrs((unsigned __int64 *)a3, (__int64)&v104);
    v28 = (char *)v104;
    if ( v104 )
    {
      v29 = v105;
      v30 = 0;
      if ( (_QWORD)v105 )
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
          v28 = (char *)v104;
        }
        while ( v29 != v30 );
      }
      *(_QWORD *)&v105 = 0;
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
