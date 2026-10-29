void __fastcall sub_4E6970(_DWORD *a1, unsigned int *a2)
{
  unsigned int *v2; // r8
  __int64 v4; // rdx
  unsigned int v5; // edi
  _DWORD *v6; // rax
  unsigned int v7; // r10d
  __int64 v8; // r9
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  _DWORD *v11; // r11
  _DWORD *v12; // r15
  int v13; // edx
  size_t v14; // rcx
  char *v15; // rsi
  char *v16; // r14
  char *v17; // rax
  __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // r10
  _DWORD *v21; // r8
  _DWORD *i; // r15
  int v23; // edx
  _BYTE *v24; // rbx
  size_t v25; // rcx
  size_t v26; // r15
  size_t v27; // r14
  size_t v28; // rax
  _QWORD *v29; // r8
  size_t v30; // rsi
  _BYTE *v31; // rdi
  size_t v32; // r14
  unsigned __int64 v33; // rax
  char *v34; // rdi
  size_t v35; // r15
  size_t v36; // rcx
  void *v37; // r8
  _QWORD *v38; // r14
  size_t v39; // rdx
  unsigned __int64 v40; // rsi
  size_t v41; // r8
  _BYTE *v42; // r9
  __int64 v43; // rcx
  _BYTE *v44; // rdi
  _BYTE *v45; // rdx
  char *v46; // rcx
  int v47; // esi
  int v48; // edx
  int v49; // edx
  unsigned __int64 v50; // rdi
  _BYTE *v51; // r8
  size_t v52; // r14
  unsigned __int64 v53; // rdi
  _BYTE *v54; // rax
  _QWORD *v55; // r9
  unsigned __int64 v56; // rdi
  _BYTE *v57; // rax
  size_t v58; // rdx
  _QWORD *v59; // r10
  size_t v60; // r8
  _BYTE *v61; // r9
  _BYTE *v62; // rdi
  void *v63; // rax
  unsigned __int64 v64; // rdi
  _BYTE *v65; // rsi
  __int64 v66; // rax
  int v67; // ecx
  _DWORD *v68; // rdi
  _DWORD *v69; // rax
  __int64 v70; // rsi
  int v71; // edx
  _DWORD *v72; // rdi
  _DWORD *v73; // rax
  __int64 v74; // rsi
  unsigned __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rsi
  unsigned int *v80; // [rsp+8h] [rbp-110h]
  char *src; // [rsp+10h] [rbp-108h]
  void *srcd; // [rsp+10h] [rbp-108h]
  void *srce; // [rsp+10h] [rbp-108h]
  void *srca; // [rsp+10h] [rbp-108h]
  _QWORD *srcf; // [rsp+10h] [rbp-108h]
  _QWORD *srcg; // [rsp+10h] [rbp-108h]
  void *srch; // [rsp+10h] [rbp-108h]
  _QWORD *srci; // [rsp+10h] [rbp-108h]
  void *srcb; // [rsp+10h] [rbp-108h]
  _BYTE *srcj; // [rsp+10h] [rbp-108h]
  void *srcc; // [rsp+10h] [rbp-108h]
  void *srck; // [rsp+10h] [rbp-108h]
  void *v93; // [rsp+18h] [rbp-100h]
  _BYTE *v94; // [rsp+18h] [rbp-100h]
  void *v95; // [rsp+18h] [rbp-100h]
  void *v96; // [rsp+18h] [rbp-100h]
  void *v97; // [rsp+18h] [rbp-100h]
  void *v98; // [rsp+18h] [rbp-100h]
  void *v99; // [rsp+18h] [rbp-100h]
  unsigned int *v100; // [rsp+18h] [rbp-100h]
  _QWORD *v101; // [rsp+20h] [rbp-F8h]
  __int64 v102; // [rsp+20h] [rbp-F8h]
  size_t v103; // [rsp+20h] [rbp-F8h]
  unsigned int *v104; // [rsp+20h] [rbp-F8h]
  size_t v105; // [rsp+28h] [rbp-F0h]
  size_t v106; // [rsp+28h] [rbp-F0h]
  __int64 v107; // [rsp+30h] [rbp-E8h]
  __int64 v108; // [rsp+38h] [rbp-E0h]
  void *v109; // [rsp+40h] [rbp-D8h] BYREF
  size_t n; // [rsp+48h] [rbp-D0h]
  char v111[16]; // [rsp+50h] [rbp-C8h] BYREF
  void *dest; // [rsp+60h] [rbp-B8h] BYREF
  size_t v113; // [rsp+68h] [rbp-B0h]
  char v114[16]; // [rsp+70h] [rbp-A8h] BYREF
  void *v115; // [rsp+80h] [rbp-98h] BYREF
  size_t v116; // [rsp+88h] [rbp-90h]
  _QWORD v117[2]; // [rsp+90h] [rbp-88h] BYREF
  void *v118; // [rsp+A0h] [rbp-78h]
  size_t v119; // [rsp+A8h] [rbp-70h]
  _QWORD v120[2]; // [rsp+B0h] [rbp-68h] BYREF
  void *v121; // [rsp+C0h] [rbp-58h]
  char *v122; // [rsp+C8h] [rbp-50h]
  _QWORD v123[9]; // [rsp+D0h] [rbp-48h] BYREF

  v2 = a2;
  v4 = a2[6];
  v5 = a1[18];
  v80 = a2 + 4;
  v6 = *((_DWORD **)a2 + 2);
  v7 = v4 - 1;
  v109 = v111;
  v8 = 48 * v4;
  strcpy(v111, "rel1");
  v9 = &v6[12 * v4];
  v10 = 12LL * (((_DWORD)v4 - 1) & v5);
  dest = v114;
  n = 4;
  v11 = &v6[v10];
  strcpy(v114, "rel2");
  v113 = 4;
  if ( v10 == 12 * v4 )
  {
LABEL_62:
    if ( v6 != v11 )
    {
      v12 = v6;
      while ( 1 )
      {
        v48 = v12[1];
        if ( v48 == 2 )
        {
          if ( v5 == *v12 && v5 == v12[2] )
            goto LABEL_8;
        }
        else if ( !v48 )
        {
          goto LABEL_15;
        }
        v12 += 12;
        if ( v11 == v12 )
          goto LABEL_15;
      }
    }
    goto LABEL_15;
  }
  v12 = &v6[v10];
  while ( 1 )
  {
    v13 = v12[1];
    if ( v13 != 2 )
    {
      if ( !v13 )
        goto LABEL_15;
      goto LABEL_4;
    }
    if ( v5 == *v12 && v5 == v12[2] )
      break;
LABEL_4:
    v12 += 12;
    if ( v9 == v12 )
      goto LABEL_62;
  }
LABEL_8:
  if ( &v109 == (void **)(v12 + 4) )
    goto LABEL_15;
  v14 = *((_QWORD *)v12 + 3);
  if ( v14 > 0xF )
  {
    if ( (v14 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v14 <= 0x1D )
    {
      srcc = &qword_18 + 6;
      v75 = 31;
    }
    else
    {
      srcc = *((void **)v12 + 3);
      v75 = v14 + 1;
      if ( (__int64)(v14 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    v104 = v2;
    v99 = *((void **)v12 + 3);
    v16 = (char *)operator new(v75);
    sub_233E40((__int64)&v109);
    v109 = v16;
    v14 = (size_t)v99;
    v2 = v104;
    *(_QWORD *)v111 = srcc;
    v15 = *((char **)v12 + 2);
LABEL_149:
    v100 = v2;
    srck = (void *)v14;
    memcpy(v16, v15, v14);
    v17 = (char *)v109;
    v2 = v100;
    v14 = (size_t)srck;
    goto LABEL_14;
  }
  if ( !v14 )
    goto LABEL_13;
  v15 = *((char **)v12 + 2);
  v16 = v111;
  if ( v14 != 1 )
    goto LABEL_149;
  v111[0] = *v15;
LABEL_13:
  v17 = v111;
LABEL_14:
  n = v14;
  v17[v14] = 0;
  v18 = v2[6];
  v6 = *((_DWORD **)v2 + 2);
  v7 = v18 - 1;
  v8 = 48 * v18;
  v9 = &v6[12 * v18];
LABEL_15:
  v19 = a1[19];
  v20 = v19 & v7;
  v21 = &v6[12 * v20];
  if ( 48 * v20 != v8 )
  {
    for ( i = &v6[12 * v20]; v9 != i; i += 12 )
    {
      v23 = i[1];
      if ( v23 == 2 )
      {
        if ( v19 == *i && v19 == i[2] )
        {
LABEL_22:
          if ( &dest == (void **)(i + 4) )
            goto LABEL_27;
          v24 = dest;
          v25 = *((_QWORD *)i + 3);
          if ( dest != v114 )
          {
            if ( *(_QWORD *)v114 >= v25 )
              goto LABEL_25;
            if ( (v25 & 0x8000000000000000LL) == 0LL )
            {
              srcb = (void *)(2LL * *(_QWORD *)v114);
              if ( v25 >= 2LL * *(_QWORD *)v114 )
                goto LABEL_116;
              v64 = 2LL * *(_QWORD *)v114 + 1;
              if ( (*(_QWORD *)v114 & 0x4000000000000000LL) != 0 )
LABEL_166:
                std::__throw_bad_alloc();
              goto LABEL_117;
            }
LABEL_172:
            std::__throw_length_error("basic_string::_M_create");
          }
          if ( v25 <= 0xF )
          {
LABEL_25:
            if ( v25 )
              goto LABEL_118;
          }
          else
          {
            if ( (v25 & 0x8000000000000000LL) != 0LL )
              goto LABEL_172;
            if ( v25 > 0x1D )
            {
LABEL_116:
              srcb = *((void **)i + 3);
              v64 = v25 + 1;
              if ( (__int64)(v25 + 1) < 0 )
                goto LABEL_166;
            }
            else
            {
              srcb = &qword_18 + 6;
              v64 = 31;
            }
LABEL_117:
            v98 = *((void **)i + 3);
            v24 = (_BYTE *)operator new(v64);
            sub_233E40((__int64)&dest);
            dest = v24;
            v25 = (size_t)v98;
            *(_QWORD *)v114 = srcb;
LABEL_118:
            v65 = *((_BYTE **)i + 2);
            if ( v25 != 1 )
            {
              srcj = (_BYTE *)v25;
              memcpy(v24, v65, v25);
              v113 = (size_t)srcj;
              srcj[(_QWORD)dest] = 0;
              goto LABEL_27;
            }
            *v24 = *v65;
            v24 = dest;
          }
          v113 = v25;
          v24[v25] = 0;
          goto LABEL_27;
        }
      }
      else if ( !v23 )
      {
        goto LABEL_27;
      }
    }
  }
  for ( ; v21 != v6; v6 += 12 )
  {
    v49 = v6[1];
    if ( v49 == 2 )
    {
      if ( v19 == *v6 && v19 == v6[2] )
      {
        i = v6;
        goto LABEL_22;
      }
    }
    else if ( !v49 )
    {
      break;
    }
  }
LABEL_27:
  v26 = n;
  v116 = 0;
  v115 = v117;
  v27 = n + 13;
  src = (char *)v109;
  LOBYTE(v117[0]) = 0;
  if ( n + 13 <= 0xF )
  {
    v28 = 13;
    v29 = v117;
    v30 = 0;
    goto LABEL_29;
  }
  if ( (v27 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  if ( v27 <= 0x1D )
  {
    v27 = 30;
    v50 = 31;
  }
  else
  {
    v50 = n + 14;
    if ( (__int64)(n + 14) < 0 )
      std::__throw_bad_alloc();
  }
  v51 = (_BYTE *)operator new(v50);
  if ( v116 )
  {
    if ( v116 != -1 )
      v51 = memcpy(v51, v115, v116 + 1);
  }
  else
  {
    *v51 = *(_BYTE *)v115;
  }
  v101 = v51;
  sub_233E40((__int64)&v115);
  v30 = v116;
  v29 = v101;
  v117[0] = v27;
  v115 = v101;
  if ( 0x7FFFFFFFFFFFFFFFLL - v116 <= 0xC )
    std::__throw_length_error("basic_string::append");
  v28 = v116 + 13;
  if ( v27 >= v116 + 13 )
  {
LABEL_29:
    qmemcpy((char *)v29 + v30, "join project ", 13);
  }
  else
  {
    sub_23A830(&v115, v116, 0, "join project ", 0xDu);
    v28 = v30 + 13;
  }
  v116 = v28;
  *((_BYTE *)v115 + v28) = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL - v116 < v26 )
    std::__throw_length_error("basic_string::append");
  v31 = v115;
  v32 = v26 + v116;
  if ( v115 == v117 )
    v33 = 15;
  else
    v33 = v117[0];
  if ( v33 < v32 )
  {
    sub_23A830(&v115, v116, 0, src, v26);
    v31 = v115;
  }
  else if ( v26 )
  {
    v34 = (char *)v115 + v116;
    if ( v26 == 1 )
      *v34 = *src;
    else
      memcpy(v34, src, v26);
    v31 = v115;
  }
  v116 = v32;
  v31[v32] = 0;
  v35 = v116;
  if ( v116 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  v36 = v116 + 1;
  if ( v115 == v117 )
  {
    if ( v116 != 15 )
    {
LABEL_41:
      *((_BYTE *)v115 + v116) = 32;
      v37 = v115;
      goto LABEL_42;
    }
    v66 = operator new(0x1Fu);
    v55 = v115;
    v36 = 16;
    v37 = (void *)v66;
    v52 = 30;
LABEL_112:
    v97 = (void *)v36;
    srci = v55;
    v63 = memcpy(v37, v55, v35);
    v36 = (size_t)v97;
    v55 = srci;
    v37 = v63;
    goto LABEL_94;
  }
  if ( v117[0] >= v36 )
    goto LABEL_41;
  if ( (v36 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v52 = 2LL * v117[0];
  if ( v36 >= 2LL * v117[0] )
  {
    v52 = v116 + 1;
    v53 = v116 + 2;
    if ( (__int64)(v116 + 2) < 0 )
LABEL_91:
      std::__throw_bad_alloc();
  }
  else
  {
    v53 = v52 + 1;
    if ( (v117[0] & 0x4000000000000000LL) != 0 )
      goto LABEL_91;
  }
  v54 = (_BYTE *)operator new(v53);
  v55 = v115;
  v36 = v35 + 1;
  v37 = v54;
  if ( v35 )
  {
    if ( v35 == 1 )
    {
      *v54 = *(_BYTE *)v115;
      goto LABEL_94;
    }
    goto LABEL_112;
  }
LABEL_94:
  *((_BYTE *)v37 + v35) = 32;
  if ( v55 != v117 )
  {
    v93 = v37;
    srce = (void *)v36;
    operator delete(v55, v117[0] + 1LL);
    v37 = v93;
    v36 = (size_t)srce;
  }
  v115 = v37;
  v117[0] = v52;
LABEL_42:
  v116 = v36;
  *((_BYTE *)v37 + v35 + 1) = 0;
  v38 = v115;
  v118 = v120;
  v39 = v116;
  if ( v115 == v117 )
  {
    v67 = v116 + 1;
    v68 = v120;
    v69 = v117;
    if ( (unsigned int)(v116 + 1) >= 8 )
    {
      LODWORD(v76) = 0;
      do
      {
        v77 = (unsigned int)v76;
        v76 = (unsigned int)(v76 + 8);
        *(_QWORD *)((char *)v120 + v77) = *(_QWORD *)((char *)v117 + v77);
      }
      while ( (unsigned int)v76 < (v67 & 0xFFFFFFF8) );
      v68 = (_DWORD *)((char *)v120 + v76);
      v69 = (_DWORD *)((char *)v117 + v76);
    }
    v70 = 0;
    if ( (v67 & 4) != 0 )
    {
      *v68 = *v69;
      v70 = 4;
    }
    if ( (v67 & 2) != 0 )
    {
      *(_WORD *)((char *)v68 + v70) = *(_WORD *)((char *)v69 + v70);
      v70 += 2;
    }
    if ( (v67 & 1) != 0 )
      *((_BYTE *)v68 + v70) = *((_BYTE *)v69 + v70);
    v41 = v113;
    v119 = v39;
    v115 = v117;
    v42 = dest;
    v116 = 0;
    LOBYTE(v117[0]) = 0;
    if ( 0x7FFFFFFFFFFFFFFFLL - v39 >= v113 )
    {
      v43 = v113 + v39;
      v38 = v120;
      goto LABEL_132;
    }
LABEL_175:
    std::__throw_length_error("basic_string::append");
  }
  v40 = v117[0];
  v41 = v113;
  v118 = v115;
  v119 = v116;
  v42 = dest;
  v120[0] = v117[0];
  v115 = v117;
  v116 = 0;
  LOBYTE(v117[0]) = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL - v39 < v113 )
    goto LABEL_175;
  v43 = v113 + v39;
  if ( v38 != v120 )
  {
    if ( v40 >= v43 )
    {
LABEL_46:
      if ( v41 )
      {
        v44 = (char *)v38 + v39;
        if ( v41 == 1 )
        {
          *v44 = *v42;
          v38 = v118;
        }
        else
        {
          srcd = (void *)v43;
          memcpy(v44, v42, v41);
          v38 = v118;
          v43 = (__int64)srcd;
        }
      }
      goto LABEL_49;
    }
    if ( v43 >= 0 )
    {
      v107 = 2 * v40;
      if ( v43 >= 2 * v40 )
        goto LABEL_99;
      v56 = 2 * v40 + 1;
      if ( (v40 & 0x4000000000000000LL) != 0 )
LABEL_163:
        std::__throw_bad_alloc();
      goto LABEL_100;
    }
LABEL_177:
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_132:
  if ( (unsigned __int64)v43 <= 0xF )
    goto LABEL_46;
  if ( v43 < 0 )
    goto LABEL_177;
  if ( (unsigned __int64)v43 > 0x1D )
  {
LABEL_99:
    v107 = v43;
    v56 = v43 + 1;
    if ( v43 + 1 < 0 )
      goto LABEL_163;
  }
  else
  {
    v107 = 30;
    v56 = 31;
  }
LABEL_100:
  v105 = v39;
  v102 = v43;
  v94 = v42;
  srca = (void *)v41;
  v57 = (_BYTE *)operator new(v56);
  v58 = v105;
  v59 = v118;
  v38 = v57;
  v60 = (size_t)srca;
  v61 = v94;
  v43 = v102;
  if ( v105 )
  {
    if ( v105 == 1 )
    {
      *v57 = *(_BYTE *)v118;
    }
    else
    {
      v108 = v102;
      v106 = (size_t)v94;
      v103 = (size_t)srca;
      v95 = (void *)v58;
      srcf = v118;
      memcpy(v57, v118, v58);
      v43 = v108;
      v61 = (_BYTE *)v106;
      v60 = v103;
      v58 = (size_t)v95;
      v59 = srcf;
    }
  }
  if ( v61 && v60 )
  {
    v62 = (char *)v38 + v58;
    if ( v60 == 1 )
    {
      *v62 = *v61;
    }
    else
    {
      v96 = (void *)v43;
      srcg = v59;
      memcpy(v62, v61, v60);
      v43 = (__int64)v96;
      v59 = srcg;
    }
  }
  if ( v59 != v120 )
  {
    srch = (void *)v43;
    operator delete(v59, v120[0] + 1LL);
    v43 = (__int64)srch;
  }
  v118 = v38;
  v120[0] = v107;
LABEL_49:
  v119 = v43;
  *((_BYTE *)v38 + v43) = 0;
  v45 = v118;
  v121 = v123;
  v46 = (char *)v119;
  if ( v118 == v120 )
  {
    v71 = v119 + 1;
    v72 = v123;
    v73 = v120;
    if ( (unsigned int)(v119 + 1) >= 8 )
    {
      LODWORD(v78) = 0;
      do
      {
        v79 = (unsigned int)v78;
        v78 = (unsigned int)(v78 + 8);
        *(_QWORD *)((char *)v123 + v79) = *(_QWORD *)((char *)v120 + v79);
      }
      while ( (unsigned int)v78 < (v71 & 0xFFFFFFF8) );
      v72 = (_DWORD *)((char *)v123 + v78);
      v73 = (_DWORD *)((char *)v120 + v78);
    }
    v74 = 0;
    if ( (v71 & 4) != 0 )
    {
      *v72 = *v73;
      v74 = 4;
    }
    if ( (v71 & 2) != 0 )
    {
      *(_WORD *)((char *)v72 + v74) = *(_WORD *)((char *)v73 + v74);
      v74 += 2;
    }
    if ( (v71 & 1) != 0 )
      *((_BYTE *)v72 + v74) = *((_BYTE *)v73 + v74);
    v45 = v123;
  }
  else
  {
    v121 = v118;
    v123[0] = v120[0];
  }
  v47 = a1[26];
  v122 = v46;
  v118 = v120;
  v119 = 0;
  LOBYTE(v120[0]) = 0;
  sub_4DC570(v80, v47, v45, v46);
  if ( v121 != v123 )
    operator delete(v121, v123[0] + 1LL);
  if ( v118 != v120 )
    operator delete(v118, v120[0] + 1LL);
  if ( v115 != v117 )
    operator delete(v115, v117[0] + 1LL);
  if ( dest != v114 )
    operator delete(dest, *(_QWORD *)v114 + 1LL);
  if ( v109 != v111 )
    operator delete(v109, *(_QWORD *)v111 + 1LL);
}

