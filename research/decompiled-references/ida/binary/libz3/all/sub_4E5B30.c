void __fastcall sub_4E5B30(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // edi
  _DWORD *v6; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  _DWORD *v9; // rsi
  __int64 v10; // r9
  _DWORD *v11; // r8
  _DWORD *v12; // r15
  int v13; // edx
  size_t v14; // rdx
  char *v15; // rsi
  char *v16; // rax
  char *v17; // rax
  __int64 v18; // rdx
  int v19; // edx
  _DWORD *v20; // r15
  int v21; // edx
  size_t v22; // r13
  size_t v23; // r13
  size_t v24; // r15
  unsigned __int64 v25; // rdi
  _BYTE *v26; // rcx
  signed __int64 v27; // r9
  char *v28; // rax
  char *v29; // r15
  _BYTE *v30; // rdi
  size_t v31; // r15
  unsigned __int64 v32; // rax
  char *v33; // rdi
  size_t v34; // r15
  size_t v35; // rcx
  void *v36; // r8
  _QWORD *v37; // r13
  size_t v38; // rdx
  unsigned __int64 v39; // rsi
  size_t v40; // r8
  _BYTE *v41; // r9
  __int64 v42; // rcx
  _BYTE *v43; // rdi
  _BYTE *v44; // rdx
  char *v45; // rcx
  int v46; // esi
  int v47; // edx
  __int64 v48; // rax
  _QWORD *v49; // rcx
  size_t v50; // r9
  size_t v51; // rdx
  char *v52; // rdx
  size_t v53; // r13
  unsigned __int64 v54; // rdi
  _BYTE *v55; // rax
  _QWORD *v56; // r9
  void *v57; // rax
  unsigned __int64 v58; // rdi
  _BYTE *v59; // rax
  size_t v60; // rdx
  _QWORD *v61; // r10
  size_t v62; // r8
  _BYTE *v63; // r9
  _BYTE *v64; // rdi
  unsigned __int64 v65; // rdi
  char *v66; // rsi
  __int64 v67; // rax
  int v68; // esi
  _DWORD *v69; // rdi
  _DWORD *v70; // rax
  __int64 v71; // rcx
  int v72; // edx
  _DWORD *v73; // rdi
  _DWORD *v74; // rax
  __int64 v75; // rsi
  unsigned __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rax
  char *v82; // [rsp+8h] [rbp-110h]
  size_t v83; // [rsp+8h] [rbp-110h]
  size_t v84; // [rsp+8h] [rbp-110h]
  size_t v85; // [rsp+8h] [rbp-110h]
  size_t v86; // [rsp+8h] [rbp-110h]
  _QWORD *v87; // [rsp+8h] [rbp-110h]
  size_t v88; // [rsp+8h] [rbp-110h]
  size_t v89; // [rsp+8h] [rbp-110h]
  size_t v90; // [rsp+8h] [rbp-110h]
  size_t v91; // [rsp+8h] [rbp-110h]
  unsigned int *v92; // [rsp+10h] [rbp-108h]
  _QWORD *v93; // [rsp+18h] [rbp-100h]
  void *v94; // [rsp+18h] [rbp-100h]
  void *v95; // [rsp+18h] [rbp-100h]
  _BYTE *v96; // [rsp+18h] [rbp-100h]
  void *v97; // [rsp+18h] [rbp-100h]
  void *v98; // [rsp+18h] [rbp-100h]
  void *v99; // [rsp+18h] [rbp-100h]
  char *v100; // [rsp+18h] [rbp-100h]
  char *v101; // [rsp+20h] [rbp-F8h]
  size_t v102; // [rsp+20h] [rbp-F8h]
  size_t v103; // [rsp+20h] [rbp-F8h]
  size_t v104; // [rsp+20h] [rbp-F8h]
  size_t v105; // [rsp+20h] [rbp-F8h]
  size_t v106; // [rsp+28h] [rbp-F0h]
  size_t v107; // [rsp+28h] [rbp-F0h]
  size_t v108; // [rsp+28h] [rbp-F0h]
  size_t v109; // [rsp+28h] [rbp-F0h]
  size_t v110; // [rsp+28h] [rbp-F0h]
  signed __int64 v111; // [rsp+30h] [rbp-E8h]
  __int64 v112; // [rsp+30h] [rbp-E8h]
  size_t v113; // [rsp+30h] [rbp-E8h]
  size_t v114; // [rsp+38h] [rbp-E0h]
  void *v115; // [rsp+40h] [rbp-D8h] BYREF
  size_t n; // [rsp+48h] [rbp-D0h]
  char dest[16]; // [rsp+50h] [rbp-C8h] BYREF
  void *v118; // [rsp+60h] [rbp-B8h]
  size_t v119; // [rsp+68h] [rbp-B0h]
  char v120[16]; // [rsp+70h] [rbp-A8h] BYREF
  void *src; // [rsp+80h] [rbp-98h] BYREF
  size_t v122; // [rsp+88h] [rbp-90h]
  _QWORD v123[2]; // [rsp+90h] [rbp-88h] BYREF
  void *v124; // [rsp+A0h] [rbp-78h]
  size_t v125; // [rsp+A8h] [rbp-70h]
  _QWORD v126[2]; // [rsp+B0h] [rbp-68h] BYREF
  void *v127; // [rsp+C0h] [rbp-58h]
  char *v128; // [rsp+C8h] [rbp-50h]
  _QWORD v129[9]; // [rsp+D0h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 72);
  v92 = (unsigned int *)(a2 + 16);
  v6 = *(_DWORD **)(a2 + 16);
  v115 = dest;
  v7 = 48 * v4;
  strcpy(dest, "rel1");
  v8 = 48 * v4;
  v9 = &v6[12 * v4];
  v10 = 48LL * (v5 & (unsigned int)(v4 - 1));
  v118 = v120;
  n = 4;
  v11 = &v6[(unsigned __int64)v10 / 4];
  strcpy(v120, "rel2");
  v119 = 4;
  if ( v10 != 48 * v4 )
  {
    v12 = &v6[(unsigned __int64)v10 / 4];
    do
    {
      v13 = v12[1];
      if ( v13 == 2 )
      {
        if ( v5 == *v12 && v5 == v12[2] )
          goto LABEL_8;
      }
      else if ( !v13 )
      {
        goto LABEL_23;
      }
      v12 += 12;
    }
    while ( v9 != v12 );
    if ( v6 != v11 )
    {
      v12 = v6;
      goto LABEL_19;
    }
    v82 = dest;
    if ( !v7 )
      goto LABEL_36;
    goto LABEL_25;
  }
  v12 = v6;
  if ( v6 == v11 )
  {
    v82 = dest;
    goto LABEL_80;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_19:
      v19 = v12[1];
      if ( v19 != 2 )
      {
        if ( !v19 )
          goto LABEL_23;
        goto LABEL_18;
      }
      if ( v5 == *v12 )
        break;
LABEL_18:
      v12 += 12;
      if ( v11 == v12 )
        goto LABEL_23;
    }
    if ( v5 == v12[2] )
      break;
    v12 += 12;
    if ( v11 == v12 )
      goto LABEL_23;
  }
LABEL_8:
  if ( &v115 != (void **)(v12 + 4) )
  {
    v14 = *((_QWORD *)v12 + 3);
    if ( v14 > 0xF )
    {
      if ( (v14 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v14 <= 0x1D )
      {
        v90 = 30;
        v76 = 31;
      }
      else
      {
        v90 = *((_QWORD *)v12 + 3);
        v76 = v14 + 1;
        if ( (__int64)(v14 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      v105 = *((_QWORD *)v12 + 3);
      v100 = (char *)operator new(v76);
      sub_233E40((__int64)&v115);
      v16 = v100;
      v14 = v105;
      v115 = v100;
      *(_QWORD *)dest = v90;
      v15 = *((char **)v12 + 2);
    }
    else
    {
      if ( !v14 )
        goto LABEL_13;
      v15 = *((char **)v12 + 2);
      v16 = dest;
      if ( v14 == 1 )
      {
        dest[0] = *v15;
LABEL_13:
        v17 = dest;
LABEL_14:
        n = v14;
        v17[v14] = 0;
        v18 = *(unsigned int *)(a2 + 24);
        v5 = *(_DWORD *)(a1 + 72);
        v6 = *(_DWORD **)(a2 + 16);
        v8 = 48 * v18;
        v82 = (char *)v115;
        v9 = &v6[12 * v18];
        v10 = 48LL * (v5 & (unsigned int)(v18 - 1));
        v11 = &v6[(unsigned __int64)v10 / 4];
        goto LABEL_24;
      }
    }
    v91 = v14;
    memcpy(v16, v15, v14);
    v17 = (char *)v115;
    v14 = v91;
    goto LABEL_14;
  }
LABEL_23:
  v82 = dest;
LABEL_24:
  if ( v10 == v8 )
  {
LABEL_80:
    if ( v6 != v11 )
    {
      while ( 1 )
      {
        v47 = v6[1];
        if ( v47 == 2 )
        {
          if ( *v6 == v5 && v6[2] == v5 )
          {
            v20 = v6;
            goto LABEL_31;
          }
        }
        else if ( !v47 )
        {
          goto LABEL_36;
        }
        v6 += 12;
        if ( v6 == v11 )
          goto LABEL_36;
      }
    }
    goto LABEL_36;
  }
LABEL_25:
  v20 = v11;
  while ( 2 )
  {
    v21 = v20[1];
    if ( v21 != 2 )
    {
      if ( !v21 )
        goto LABEL_36;
LABEL_27:
      v20 += 12;
      if ( v9 == v20 )
        goto LABEL_80;
      continue;
    }
    break;
  }
  if ( *v20 != v5 || v20[2] != v5 )
    goto LABEL_27;
LABEL_31:
  if ( &v115 != (void **)(v20 + 4) )
  {
    v22 = *((_QWORD *)v20 + 3);
    if ( v82 != dest )
    {
      if ( *(_QWORD *)dest >= v22 )
        goto LABEL_34;
      if ( (v22 & 0x8000000000000000LL) == 0LL )
      {
        v99 = (void *)(2LL * *(_QWORD *)dest);
        if ( v22 >= 2LL * *(_QWORD *)dest )
          goto LABEL_123;
        v65 = 2LL * *(_QWORD *)dest + 1;
        if ( (*(_QWORD *)dest & 0x4000000000000000LL) != 0 )
LABEL_179:
          std::__throw_bad_alloc();
        goto LABEL_124;
      }
LABEL_189:
      std::__throw_length_error("basic_string::_M_create");
    }
    if ( v22 <= 0xF )
    {
LABEL_34:
      if ( v22 )
        goto LABEL_125;
    }
    else
    {
      if ( (v22 & 0x8000000000000000LL) != 0LL )
        goto LABEL_189;
      if ( v22 > 0x1D )
      {
LABEL_123:
        v99 = *((void **)v20 + 3);
        v65 = v22 + 1;
        if ( (__int64)(v22 + 1) < 0 )
          goto LABEL_179;
      }
      else
      {
        v99 = &qword_18 + 6;
        v65 = 31;
      }
LABEL_124:
      v82 = (char *)operator new(v65);
      sub_233E40((__int64)&v115);
      v115 = v82;
      *(_QWORD *)dest = v99;
LABEL_125:
      v66 = *((char **)v20 + 2);
      if ( v22 == 1 )
        *v82 = *v66;
      else
        memcpy(v82, v66, v22);
      v82 = (char *)v115;
    }
    n = v22;
    v82[v22] = 0;
    v82 = (char *)v115;
  }
LABEL_36:
  v23 = n;
  v122 = 0;
  src = v123;
  v24 = n + 5;
  LOBYTE(v123[0]) = 0;
  if ( n + 5 <= 0xF )
  {
    v28 = (char *)v123;
    v27 = 5;
    goto LABEL_45;
  }
  if ( (v24 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  if ( v24 > 0x1D )
  {
    v25 = n + 6;
    if ( (__int64)(n + 6) < 0 )
      std::__throw_bad_alloc();
  }
  else
  {
    v24 = 30;
    v25 = 31;
  }
  v26 = (_BYTE *)operator new(v25);
  if ( v122 )
  {
    if ( v122 != -1 )
      v26 = memcpy(v26, src, v122 + 1);
  }
  else
  {
    *v26 = *(_BYTE *)src;
  }
  v101 = v26;
  sub_233E40((__int64)&src);
  v123[0] = v24;
  src = v101;
  if ( 0x7FFFFFFFFFFFFFFFLL - v122 <= 4 )
    std::__throw_length_error("basic_string::append");
  v27 = v122 + 5;
  v28 = &v101[v122];
  if ( v24 >= v122 + 5 )
  {
LABEL_45:
    *(_DWORD *)v28 = 1852403562;
    v28[4] = 32;
    v29 = (char *)src;
    goto LABEL_46;
  }
  if ( v27 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  v102 = 2 * v24;
  if ( v27 < 2 * v24 )
  {
    if ( (v24 & 0x4000000000000000LL) == 0 )
    {
      v113 = v122;
      v110 = v122 + 5;
      v81 = operator new(2 * v24 + 1);
      v49 = src;
      v50 = v110;
      v29 = (char *)v81;
      v51 = v113;
      goto LABEL_96;
    }
LABEL_172:
    std::__throw_bad_alloc();
  }
  v102 = v122 + 5;
  v106 = v122;
  if ( (__int64)(v122 + 6) < 0 )
    goto LABEL_172;
  v48 = operator new(v122 + 6);
  v49 = src;
  v50 = v102;
  v29 = (char *)v48;
  v51 = v106;
LABEL_96:
  v111 = v50;
  v107 = v51;
  v93 = v49;
  memcpy(v29, v49, v51);
  v27 = v111;
  v52 = &v29[v107];
  *(_DWORD *)v52 = 1852403562;
  v52[4] = 32;
  if ( v93 != v123 )
  {
    operator delete(v93, v123[0] + 1LL);
    v27 = v111;
  }
  src = v29;
  v123[0] = v102;
LABEL_46:
  v122 = v27;
  v29[v27] = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL - v122 < v23 )
    std::__throw_length_error("basic_string::append");
  v30 = src;
  v31 = v23 + v122;
  if ( src == v123 )
    v32 = 15;
  else
    v32 = v123[0];
  if ( v32 < v31 )
  {
    sub_23A830(&src, v122, 0, v82, v23);
    v30 = src;
  }
  else if ( v23 )
  {
    v33 = (char *)src + v122;
    if ( v23 == 1 )
      *v33 = *v82;
    else
      memcpy(v33, v82, v23);
    v30 = src;
  }
  v122 = v31;
  v30[v31] = 0;
  v34 = v122;
  if ( v122 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  v35 = v122 + 1;
  if ( src == v123 )
  {
    if ( v122 == 15 )
    {
      v67 = operator new(0x1Fu);
      v56 = src;
      v35 = 16;
      v36 = (void *)v67;
      v53 = 30;
LABEL_104:
      v94 = (void *)v35;
      v84 = (size_t)v56;
      v57 = memcpy(v36, v56, v34);
      v35 = (size_t)v94;
      v56 = (_QWORD *)v84;
      v36 = v57;
      goto LABEL_105;
    }
LABEL_57:
    *((_BYTE *)src + v122) = 32;
    v36 = src;
  }
  else
  {
    if ( v123[0] >= v35 )
      goto LABEL_57;
    if ( (v35 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v53 = 2LL * v123[0];
    if ( v35 >= 2LL * v123[0] )
    {
      v53 = v122 + 1;
      v54 = v122 + 2;
      if ( (__int64)(v122 + 2) >= 0 )
        goto LABEL_102;
LABEL_174:
      std::__throw_bad_alloc();
    }
    v54 = v53 + 1;
    if ( (v123[0] & 0x4000000000000000LL) != 0 )
      goto LABEL_174;
LABEL_102:
    v55 = (_BYTE *)operator new(v54);
    v56 = src;
    v35 = v34 + 1;
    v36 = v55;
    if ( v34 )
    {
      if ( v34 != 1 )
        goto LABEL_104;
      *v55 = *(_BYTE *)src;
    }
LABEL_105:
    *((_BYTE *)v36 + v34) = 32;
    if ( v56 != v123 )
    {
      v95 = v36;
      v85 = v35;
      operator delete(v56, v123[0] + 1LL);
      v36 = v95;
      v35 = v85;
    }
    src = v36;
    v123[0] = v53;
  }
  v122 = v35;
  *((_BYTE *)v36 + v34 + 1) = 0;
  v37 = src;
  v124 = v126;
  v38 = v122;
  if ( src == v123 )
  {
    v68 = v122 + 1;
    v69 = v126;
    v70 = v123;
    if ( (unsigned int)(v122 + 1) >= 8 )
    {
      LODWORD(v77) = 0;
      do
      {
        v78 = (unsigned int)v77;
        v77 = (unsigned int)(v77 + 8);
        *(_QWORD *)((char *)v126 + v78) = *(_QWORD *)((char *)v123 + v78);
      }
      while ( (unsigned int)v77 < (v68 & 0xFFFFFFF8) );
      v69 = (_DWORD *)((char *)v126 + v77);
      v70 = (_DWORD *)((char *)v123 + v77);
    }
    v71 = 0;
    if ( (v68 & 4) != 0 )
    {
      *v69 = *v70;
      v71 = 4;
    }
    if ( (v68 & 2) != 0 )
    {
      *(_WORD *)((char *)v69 + v71) = *(_WORD *)((char *)v70 + v71);
      v71 += 2;
    }
    if ( (v68 & 1) != 0 )
      *((_BYTE *)v69 + v71) = *((_BYTE *)v70 + v71);
    v40 = v119;
    v125 = v38;
    src = v123;
    v41 = v118;
    v122 = 0;
    LOBYTE(v123[0]) = 0;
    if ( 0x7FFFFFFFFFFFFFFFLL - v38 >= v119 )
    {
      v42 = v119 + v38;
      v37 = v126;
      goto LABEL_140;
    }
LABEL_192:
    std::__throw_length_error("basic_string::append");
  }
  v39 = v123[0];
  v40 = v119;
  v124 = src;
  v125 = v122;
  v41 = v118;
  v126[0] = v123[0];
  src = v123;
  v122 = 0;
  LOBYTE(v123[0]) = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL - v38 < v119 )
    goto LABEL_192;
  v42 = v119 + v38;
  if ( v37 != v126 )
  {
    if ( v39 >= v42 )
    {
LABEL_62:
      if ( v40 )
      {
        v43 = (char *)v37 + v38;
        if ( v40 == 1 )
        {
          *v43 = *v41;
          v37 = v124;
        }
        else
        {
          v83 = v42;
          memcpy(v43, v41, v40);
          v37 = v124;
          v42 = v83;
        }
      }
      goto LABEL_65;
    }
    if ( v42 >= 0 )
    {
      v112 = 2 * v39;
      if ( v42 >= 2 * v39 )
        goto LABEL_110;
      v58 = 2 * v39 + 1;
      if ( (v39 & 0x4000000000000000LL) != 0 )
LABEL_176:
        std::__throw_bad_alloc();
      goto LABEL_111;
    }
LABEL_188:
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_140:
  if ( (unsigned __int64)v42 <= 0xF )
    goto LABEL_62;
  if ( v42 < 0 )
    goto LABEL_188;
  if ( (unsigned __int64)v42 > 0x1D )
  {
LABEL_110:
    v112 = v42;
    v58 = v42 + 1;
    if ( v42 + 1 < 0 )
      goto LABEL_176;
  }
  else
  {
    v112 = 30;
    v58 = 31;
  }
LABEL_111:
  v108 = v38;
  v103 = v42;
  v96 = v41;
  v86 = v40;
  v59 = (_BYTE *)operator new(v58);
  v60 = v108;
  v61 = v124;
  v37 = v59;
  v62 = v86;
  v63 = v96;
  v42 = v103;
  if ( v108 )
  {
    if ( v108 == 1 )
    {
      *v59 = *(_BYTE *)v124;
    }
    else
    {
      v114 = v103;
      v109 = (size_t)v96;
      v104 = v86;
      v97 = (void *)v60;
      v87 = v124;
      memcpy(v59, v124, v60);
      v42 = v114;
      v63 = (_BYTE *)v109;
      v62 = v104;
      v60 = (size_t)v97;
      v61 = v87;
    }
  }
  if ( v63 && v62 )
  {
    v64 = (char *)v37 + v60;
    if ( v62 == 1 )
    {
      *v64 = *v63;
    }
    else
    {
      v98 = (void *)v42;
      v88 = (size_t)v61;
      memcpy(v64, v63, v62);
      v42 = (__int64)v98;
      v61 = (_QWORD *)v88;
    }
  }
  if ( v61 != v126 )
  {
    v89 = v42;
    operator delete(v61, v126[0] + 1LL);
    v42 = v89;
  }
  v124 = v37;
  v126[0] = v112;
LABEL_65:
  v125 = v42;
  *((_BYTE *)v37 + v42) = 0;
  v44 = v124;
  v127 = v129;
  v45 = (char *)v125;
  if ( v124 == v126 )
  {
    v72 = v125 + 1;
    v73 = v129;
    v74 = v126;
    if ( (unsigned int)(v125 + 1) >= 8 )
    {
      LODWORD(v79) = 0;
      do
      {
        v80 = (unsigned int)v79;
        v79 = (unsigned int)(v79 + 8);
        *(_QWORD *)((char *)v129 + v80) = *(_QWORD *)((char *)v126 + v80);
      }
      while ( (unsigned int)v79 < (v72 & 0xFFFFFFF8) );
      v73 = (_DWORD *)((char *)v129 + v79);
      v74 = (_DWORD *)((char *)v126 + v79);
    }
    v75 = 0;
    if ( (v72 & 4) != 0 )
    {
      *v73 = *v74;
      v75 = 4;
    }
    if ( (v72 & 2) != 0 )
    {
      *(_WORD *)((char *)v73 + v75) = *(_WORD *)((char *)v74 + v75);
      v75 += 2;
    }
    if ( (v72 & 1) != 0 )
      *((_BYTE *)v73 + v75) = *((_BYTE *)v74 + v75);
    v44 = v129;
  }
  else
  {
    v127 = v124;
    v129[0] = v126[0];
  }
  v46 = *(_DWORD *)(a1 + 96);
  v128 = v45;
  v124 = v126;
  v125 = 0;
  LOBYTE(v126[0]) = 0;
  sub_4DC570(v92, v46, v44, v45);
  if ( v127 != v129 )
    operator delete(v127, v129[0] + 1LL);
  if ( v124 != v126 )
    operator delete(v124, v126[0] + 1LL);
  if ( src != v123 )
    operator delete(src, v123[0] + 1LL);
  if ( v118 != v120 )
    operator delete(v118, *(_QWORD *)v120 + 1LL);
  if ( v115 != dest )
    operator delete(v115, *(_QWORD *)dest + 1LL);
}

