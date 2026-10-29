unsigned __int64 __fastcall sub_13A0390(unsigned __int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // esi
  unsigned int v6; // r9d
  unsigned __int64 v7; // r10
  void *v8; // rdi
  unsigned int v9; // r15d
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // edx
  char *v14; // r15
  char *v15; // r14
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  char *v22; // r13
  volatile signed __int32 *v23; // r12
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r11
  __int64 v26; // rax
  unsigned __int64 v28; // rax
  std::_V2 **v29; // r8
  unsigned int v30; // r15d
  __int64 v31; // rax
  unsigned int v32; // edx
  __m128i si128; // xmm0
  __int64 v34; // rax
  void *v35; // r15
  void *v36; // rdi
  unsigned int v37; // r15d
  int v38; // eax
  void *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // esi
  unsigned __int64 v43; // rax
  void *v44; // r10
  unsigned __int64 v45; // rdi
  void *v46; // rax
  __int64 *v47; // rdi
  __int64 v48; // r13
  __int64 v49; // r13
  _QWORD *v50; // r14
  _QWORD *v51; // rbx
  volatile signed __int32 *v52; // r12
  int v53; // eax
  _DWORD *v54; // r12
  int v55; // eax
  void *v56; // rax
  int v57; // eax
  void *v58; // rdi
  __int64 v59; // rdx
  int v60; // r12d
  int v61; // ebp
  std::_V2 *v62; // r13
  unsigned __int64 v63; // rax
  void *v64; // r11
  unsigned int v65; // esi
  __int64 v66; // r11
  unsigned __int64 v67; // r9
  unsigned __int64 v68; // r15
  void ***v69; // r10
  int v70; // eax
  unsigned int v71; // r15d
  __int64 v72; // r10
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // r13
  std::_V2 **v75; // r9
  unsigned int v76; // r13d
  __int64 v77; // rax
  int v78; // eax
  unsigned int v79; // r15d
  char *v80; // r12
  void *v81; // r13
  void *v82; // rdi
  void *v83; // rax
  unsigned int v84; // r8d
  __int64 v85; // rax
  int v86; // eax
  __m128i v87; // xmm0
  void *v88; // r15
  void *v89; // rdi
  char *v90; // r12
  _DWORD *v91; // r13
  int v92; // eax
  int v93; // eax
  __m128 v94; // xmm0
  void *v95; // rax
  int v96; // eax
  void *v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rbx
  __m128i *v101; // rax
  std::_V2 *v102; // rdi
  __m128i v103; // xmm0
  void *v104; // rax
  int v105; // eax
  std::_V2 *v106[2]; // [rsp+0h] [rbp-138h] BYREF
  unsigned int *v107; // [rsp+10h] [rbp-128h]
  unsigned __int64 v108; // [rsp+18h] [rbp-120h]
  char *v109; // [rsp+20h] [rbp-118h] BYREF
  char *v110; // [rsp+28h] [rbp-110h] BYREF
  unsigned __int64 v111; // [rsp+30h] [rbp-108h]
  unsigned __int64 v112; // [rsp+38h] [rbp-100h]
  char *v113; // [rsp+40h] [rbp-F8h] BYREF
  __int64 (__fastcall **v114)(); // [rsp+48h] [rbp-F0h]
  unsigned __int64 v115; // [rsp+50h] [rbp-E8h]
  unsigned __int64 v116; // [rsp+58h] [rbp-E0h]
  __m128 v117; // [rsp+60h] [rbp-D8h] BYREF
  void *v118; // [rsp+70h] [rbp-C8h] BYREF
  char v119; // [rsp+78h] [rbp-C0h]
  void *v120[2]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v121; // [rsp+90h] [rbp-A8h] BYREF
  int v122; // [rsp+94h] [rbp-A4h]
  void *v123[2]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v124; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v125; // [rsp+B8h] [rbp-80h]
  void *v126; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v127; // [rsp+C8h] [rbp-70h]
  __int128 v128; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v129; // [rsp+E0h] [rbp-58h]
  char v130; // [rsp+E8h] [rbp-50h]
  int v131; // [rsp+ECh] [rbp-4Ch]
  void **v132; // [rsp+F0h] [rbp-48h]

  v3 = a1;
  *a3 = 0;
  v107 = a3;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a2 + 32);
    if ( !v5 )
    {
      v24 = *(_QWORD *)(a2 + 8);
      v25 = *(_QWORD *)(a2 + 16);
      if ( v24 <= v25 )
        goto LABEL_23;
      v6 = *(_DWORD *)(a2 + 36);
      v7 = 0;
      if ( !v6 )
      {
        v7 = *(_QWORD *)(a2 + 24);
LABEL_4:
        LOBYTE(v127) = v127 & 0xFE;
        *(_DWORD *)(a2 + 32) = v5 - v6;
        v8 = (void *)(v7 & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v6)));
        *(_QWORD *)(a2 + 24) = v7 >> v6;
        v126 = v8;
LABEL_5:
        LOBYTE(v123[1]) &= ~1u;
        LODWORD(v123[0]) = (_DWORD)v8;
        v106[0] = (std::_V2 *)v123;
        goto LABEL_6;
      }
LABEL_28:
      v28 = v25 + 8;
      v29 = (std::_V2 **)(v25 + *(_QWORD *)a2);
      if ( v25 + 8 <= v24 )
      {
        a1 = (unsigned __int64)*v29;
        v32 = 64;
        *(_QWORD *)(a2 + 24) = *v29;
      }
      else
      {
        *(_QWORD *)(a2 + 24) = 0;
        v30 = v24 - v25;
        if ( !v30 )
        {
          *(_QWORD *)(a2 + 16) = v25;
          *(_DWORD *)(a2 + 32) = 0;
          v37 = v6 - v5;
          goto LABEL_128;
        }
        v31 = 0;
        a1 = 0;
        while ( 1 )
        {
          a1 |= (unsigned __int64)*((unsigned __int8 *)v29 + v31) << (8 * (unsigned __int8)v31);
          *(_QWORD *)(a2 + 24) = a1;
          if ( v30 - 1 == v31 )
            break;
          ++v31;
        }
        v32 = 8 * v30;
        v28 = v30 + v25;
      }
      *(_QWORD *)(a2 + 16) = v28;
      v37 = v6 - v5;
      *(_DWORD *)(a2 + 32) = v32;
      if ( v6 - v5 <= v32 )
      {
        LOBYTE(v127) = v127 & 0xFE;
        *(_QWORD *)(a2 + 24) = a1 >> v37;
        *(_DWORD *)(a2 + 32) = v5 - v6 + v32;
        v8 = (void *)(v7 | (((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v5 - (unsigned __int8)v6 + 64)) & a1) << v5));
        v126 = v8;
        goto LABEL_5;
      }
LABEL_128:
      v109 = (char *)std::_V2::generic_category((std::_V2 *)a1);
      v106[0] = (std::_V2 *)v123;
      v132 = v123;
      v123[0] = &v124;
      v114 = (__int64 (__fastcall **)())&v124;
      v126 = &off_2BEBE68;
      v113 = (char *)&off_2BEBE68;
      v128 = 0;
      v123[1] = nullptr;
      LOBYTE(v124) = 0;
      LODWORD(v127) = 0;
      v130 = 0;
      v131 = 1;
      v129 = 0;
      sub_227B8B0(&v126, 0, 0, 0);
      v121 = v37;
      v110 = "Unexpected end of file reading %u of %u bits";
      v122 = *(_DWORD *)(a2 + 32);
      *(__m128 *)v120 = _mm_loadh_ps((const double *)&v110);
      sub_227C560(&v126, v120);
      v126 = v113;
      sub_227B7A0(&v126);
      LOWORD(v129) = 260;
      v126 = v106[0];
      v112 = v112 & 0xFFFFFFFF00000000LL | 5;
      v35 = (void *)operator new(0x40u);
      sub_2220590(v35, &v126, (unsigned int)v112, v109);
      v36 = v123[0];
      if ( v123[0] == v114 )
        goto LABEL_37;
LABEL_36:
      operator delete(v36);
      goto LABEL_37;
    }
    v6 = *(_DWORD *)(a2 + 36);
    v7 = *(_QWORD *)(a2 + 24);
    if ( v5 >= v6 )
      goto LABEL_4;
    v25 = *(_QWORD *)(a2 + 16);
    v24 = *(_QWORD *)(a2 + 8);
    if ( v24 > v25 )
      goto LABEL_28;
    *(__m128 *)v106 = _mm_loadh_ps((const double *)&off_2BB2608);
    v109 = (char *)std::_V2::generic_category((std::_V2 *)a1);
    v128 = 0;
    v120[0] = &v121;
    v126 = &off_2BEBE68;
    v110 = (char *)&off_2BEBE68;
    v120[1] = nullptr;
    LOBYTE(v121) = 0;
    LODWORD(v127) = 0;
    v130 = 0;
    v131 = 1;
    v129 = 0;
    v132 = v120;
    sub_227B8B0(&v126, 0, 0, 0);
    si128 = _mm_load_si128((const __m128i *)v106);
    v34 = *(_QWORD *)(a2 + 16);
    v124 = v24;
    *(__m128i *)v123 = si128;
    v106[0] = (std::_V2 *)v123;
    v125 = v34;
    sub_227C560(&v126, v123);
    v126 = v110;
    sub_227B7A0(&v126);
    LOWORD(v129) = 260;
    v126 = v120;
    v108 = v108 & 0xFFFFFFFF00000000LL | 5;
    v35 = (void *)operator new(0x40u);
    sub_2220590(v35, &v126, (unsigned int)v108, v109);
    v36 = v120[0];
    if ( v120[0] != &v121 )
      goto LABEL_36;
LABEL_37:
    LOBYTE(v127) = v127 | 1;
    LOBYTE(v123[1]) |= 1u;
    v126 = nullptr;
    v123[0] = v35;
LABEL_6:
    sub_A0AE70((__int64 *)&v126);
    if ( ((__int64)v123[1] & 1) != 0 )
    {
      v95 = v123[0];
      v123[0] = nullptr;
      v126 = v95;
      v96 = sub_2220DB0(&v126);
      v97 = v126;
      *(_BYTE *)(v3 + 16) |= 1u;
      *(_DWORD *)v3 = v96;
      *(_QWORD *)(v3 + 8) = v98;
      if ( v97 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v97 + 8LL))(v97);
      sub_A0AE90((__int64 *)v106[0]);
      return v3;
    }
    v9 = (unsigned int)v123[0];
    v10 = (unsigned __int64)v106[0];
    sub_A0AE90((__int64 *)v106[0]);
    if ( v9 > 3 )
    {
      *v107 = v9;
      *(_DWORD *)v3 = 1;
      *(_BYTE *)(v3 + 16) &= ~1u;
      return v3;
    }
    if ( v9 != 2 )
      break;
    a1 = (unsigned __int64)v106[0];
    sub_20252B0(v106[0], a2);
    if ( v123[0] )
    {
      v126 = v123[0];
      v123[0] = nullptr;
      v38 = sub_2220DB0(&v126);
      v39 = v126;
      *(_BYTE *)(v3 + 16) |= 1u;
      *(_DWORD *)v3 = v38;
      *(_QWORD *)(v3 + 8) = v40;
      if ( v39 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v39 + 8LL))(v39);
      if ( v123[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v123[0] + 8LL))(v123[0]);
      return v3;
    }
  }
  if ( v9 == 3 )
  {
    *(_BYTE *)(v3 + 16) |= 1u;
    if ( !qword_2CD8AA0 )
      sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
    v41 = qword_2CD8AA0;
    *(_DWORD *)v3 = 12;
    *(_QWORD *)(v3 + 8) = v41;
    return v3;
  }
  if ( v9 != 1 )
  {
    v11 = *(unsigned int *)(a2 + 72);
    if ( (_DWORD)v11 )
    {
      v12 = *(_DWORD *)(a2 + 32);
      v13 = 0;
      if ( v12 > 0x1F )
      {
        v13 = 32;
        *(_QWORD *)(a2 + 24) >>= (unsigned __int8)v12 - 32;
      }
      *(_DWORD *)(a2 + 32) = v13;
      v14 = *(char **)(a2 + 40);
      v15 = *(char **)(a2 + 48);
      v16 = *(_QWORD *)(a2 + 64) + 32 * v11 - 32;
      v17 = *(_DWORD *)v16;
      *(_OWORD *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 56) = 0;
      *(_DWORD *)(a2 + 36) = v17;
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(v16 + 8);
      v18 = *(_QWORD *)(v16 + 16);
      *(_QWORD *)(v16 + 8) = 0;
      v19 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v18;
      v20 = *(_QWORD *)(v16 + 24);
      *(_QWORD *)(v16 + 16) = v19;
      v21 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 56) = v20;
      *(_QWORD *)(v16 + 24) = v21;
      if ( v14 != v15 )
      {
        v22 = v14;
        if ( &_pthread_key_create )
        {
          do
          {
            v23 = *((volatile signed __int32 **)v22 + 1);
            if ( v23 )
            {
              if ( !_InterlockedSub(v23 + 2, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
                if ( !_InterlockedSub(v23 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 24LL))(v23);
              }
            }
            v22 += 16;
          }
          while ( v15 != v22 );
        }
        else
        {
          v90 = v14;
          do
          {
            v91 = *((_DWORD **)v90 + 1);
            if ( v91 )
            {
              v92 = v91[2];
              v91[2] = v92 - 1;
              if ( v92 == 1 )
              {
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v91 + 16LL))(v91);
                v93 = v91[3];
                v91[3] = v93 - 1;
                if ( v93 == 1 )
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v91 + 24LL))(v91);
              }
            }
            v90 += 16;
          }
          while ( v90 != v15 );
        }
      }
      if ( v14 )
        operator delete(v14);
      v48 = (unsigned int)(*(_DWORD *)(a2 + 72) - 1);
      *(_DWORD *)(a2 + 72) = v48;
      v49 = *(_QWORD *)(a2 + 64) + 32 * v48;
      v50 = *(_QWORD **)(v49 + 16);
      v51 = *(_QWORD **)(v49 + 8);
      if ( v50 != v51 )
      {
        if ( &_pthread_key_create )
        {
          do
          {
            v52 = (volatile signed __int32 *)v51[1];
            if ( v52 )
            {
              if ( !_InterlockedSub(v52 + 2, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
                if ( !_InterlockedSub(v52 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 24LL))(v52);
              }
            }
            v51 += 2;
          }
          while ( v50 != v51 );
        }
        else
        {
          do
          {
            v54 = (_DWORD *)v51[1];
            if ( v54 )
            {
              v55 = v54[2];
              v54[2] = v55 - 1;
              if ( v55 == 1 )
              {
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v54 + 16LL))(v54);
                v53 = v54[3];
                v54[3] = v53 - 1;
                if ( v53 == 1 )
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v54 + 24LL))(v54);
              }
            }
            v51 += 2;
          }
          while ( v50 != v51 );
        }
        v51 = *(_QWORD **)(v49 + 8);
      }
      if ( v51 )
        operator delete(v51);
      *(_BYTE *)(v3 + 16) &= ~1u;
      *(_DWORD *)v3 = 2;
      return v3;
    }
LABEL_23:
    *(_BYTE *)(v3 + 16) |= 1u;
    if ( !qword_2CD8AA0 )
      sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
    v26 = qword_2CD8AA0;
    *(_DWORD *)v3 = 3;
    *(_QWORD *)(v3 + 8) = v26;
    return v3;
  }
  v42 = *(_DWORD *)(a2 + 32);
  if ( v42 > 7 )
  {
    v44 = *(void **)(a2 + 24);
    v119 &= ~1u;
    LOBYTE(v127) = v127 & 0xFE;
    v43 = (unsigned __int64)v44;
    LODWORD(v44) = (unsigned __int8)v44;
    *(_DWORD *)(a2 + 32) = v42 - 8;
    v126 = (void *)(unsigned __int8)v44;
    *(_QWORD *)(a2 + 24) = v43 >> 8;
    goto LABEL_51;
  }
  v72 = 0;
  if ( v42 )
    v72 = *(_QWORD *)(a2 + 24);
  v73 = *(_QWORD *)(a2 + 16);
  v74 = *(_QWORD *)(a2 + 8);
  if ( v73 >= v74 )
  {
    v108 = std::_V2::generic_category((std::_V2 *)v10);
    v128 = 0;
    v120[0] = &v121;
    v126 = &off_2BEBE68;
    v110 = (char *)&off_2BEBE68;
    v120[1] = nullptr;
    LOBYTE(v121) = 0;
    LODWORD(v127) = 0;
    v130 = 0;
    v131 = 1;
    v129 = 0;
    v132 = v120;
    sub_227B8B0(&v126, 0, 0, 0);
    v124 = v74;
    v109 = "Unexpected end of file reading %u of %u bytes";
    v94 = _mm_loadh_ps((const double *)&v109);
    v125 = *(_QWORD *)(a2 + 16);
    *(__m128 *)v123 = v94;
    sub_227C560(&v126, v106[0]);
    v126 = v110;
    sub_227B7A0(&v126);
    v126 = v120;
    LOWORD(v129) = 260;
    v81 = (void *)operator new(0x40u);
    sub_2220590(v81, &v126, 5, v108);
    v82 = v120[0];
    if ( v120[0] != &v121 )
LABEL_105:
      operator delete(v82);
LABEL_106:
    LOBYTE(v127) = v127 | 1;
    v119 |= 1u;
    v126 = nullptr;
    v118 = v81;
  }
  else
  {
    v75 = (std::_V2 **)(v73 + *(_QWORD *)a2);
    if ( v74 >= v73 + 8 )
    {
      v10 = (unsigned __int64)*v75;
      *(_QWORD *)(a2 + 16) = v73 + 8;
      v78 = 64;
      LOBYTE(v79) = 8 - v42;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = 0;
      v76 = v74 - v73;
      if ( !v76 )
      {
        *(_DWORD *)(a2 + 32) = 0;
        v79 = 8 - v42;
        goto LABEL_104;
      }
      v77 = 0;
      v10 = 0;
      while ( 1 )
      {
        v10 |= (unsigned __int64)*((unsigned __int8 *)v75 + v77) << (8 * (unsigned __int8)v77);
        *(_QWORD *)(a2 + 24) = v10;
        if ( v76 - 1 == v77 )
          break;
        ++v77;
      }
      v78 = 8 * v76;
      v79 = 8 - v42;
      *(_DWORD *)(a2 + 32) = 8 * v76;
      *(_QWORD *)(a2 + 16) = v76 + v73;
      if ( 8 * v76 < 8 - v42 )
      {
LABEL_104:
        v108 = std::_V2::generic_category((std::_V2 *)v10);
        v80 = (char *)v106[0] + 16;
        v132 = (void **)v106[0];
        v128 = 0;
        v126 = &off_2BEBE68;
        v123[0] = (char *)v106[0] + 16;
        v123[1] = nullptr;
        LOBYTE(v124) = 0;
        LODWORD(v127) = 0;
        v130 = 0;
        v131 = 1;
        v129 = 0;
        sub_227B8B0(&v126, 0, 0, 0);
        v121 = v79;
        v109 = "Unexpected end of file reading %u of %u bits";
        v122 = *(_DWORD *)(a2 + 32);
        *(__m128 *)v120 = _mm_loadh_ps((const double *)&v109);
        sub_227C560(&v126, v120);
        v126 = &off_2BEBE68;
        sub_227B7A0(&v126);
        LOWORD(v129) = 260;
        v126 = v106[0];
        v81 = (void *)operator new(0x40u);
        sub_2220590(v81, &v126, 5, v108);
        v82 = v123[0];
        if ( v123[0] != v80 )
          goto LABEL_105;
        goto LABEL_106;
      }
    }
    v119 &= ~1u;
    *(_DWORD *)(a2 + 32) = v78 + v42 - 8;
    *(_QWORD *)(a2 + 24) = v10 >> v79;
    LOBYTE(v127) = v127 & 0xFE;
    v44 = (void *)((((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v42 + 56)) & v10) << v42) | v72);
    v126 = v44;
LABEL_51:
    LODWORD(v118) = (_DWORD)v44;
  }
  v45 = (unsigned __int64)&v126;
  sub_A0AE70((__int64 *)&v126);
  if ( (v119 & 1) != 0 )
  {
    v46 = v118;
    LOBYTE(v127) = v127 | 1;
    v118 = nullptr;
    v126 = v46;
    v108 = (unsigned __int64)&v118;
    v47 = (__int64 *)&v118;
    goto LABEL_54;
  }
  if ( (char)v118 >= 0 )
  {
    LODWORD(v126) = (_DWORD)v118;
    LOBYTE(v127) = v127 & 0xFE;
    v47 = (__int64 *)&v118;
    v108 = (unsigned __int64)&v118;
    goto LABEL_54;
  }
  v115 = v3;
  v60 = 7;
  v108 = (unsigned __int64)&v118;
  v61 = (unsigned __int8)v118 & 0x7F;
  v62 = v106[0];
  v109 = (char *)v120;
  v110 = (char *)&v121;
  while ( 2 )
  {
    v65 = *(_DWORD *)(a2 + 32);
    if ( v65 > 7 )
    {
      v64 = *(void **)(a2 + 24);
      LOBYTE(v123[1]) &= ~1u;
      LOBYTE(v127) = v127 & 0xFE;
      v63 = (unsigned __int64)v64;
      LODWORD(v64) = (unsigned __int8)v64;
      *(_DWORD *)(a2 + 32) = v65 - 8;
      v123[0] = (void *)(unsigned __int8)v64;
      *(_QWORD *)(a2 + 24) = v63 >> 8;
      goto LABEL_82;
    }
    v66 = 0;
    if ( v65 )
      v66 = *(_QWORD *)(a2 + 24);
    v67 = *(_QWORD *)(a2 + 16);
    v68 = *(_QWORD *)(a2 + 8);
    if ( v67 >= v68 )
    {
      v112 = std::_V2::generic_category((std::_V2 *)v45);
      v120[0] = v110;
      v132 = (void **)v109;
      v128 = 0;
      v126 = &off_2BEBE68;
      v114 = &off_2BEBE68;
      v120[1] = nullptr;
      LOBYTE(v121) = 0;
      LODWORD(v127) = 0;
      v130 = 0;
      v131 = 1;
      v129 = 0;
      sub_227B8B0(&v126, 0, 0, 0);
      v124 = v68;
      v113 = "Unexpected end of file reading %u of %u bytes";
      v125 = *(_QWORD *)(a2 + 16);
      *(__m128 *)v123 = _mm_loadh_ps((const double *)&v113);
      sub_227C560(&v126, v62);
      v126 = v114;
      sub_227B7A0(&v126);
      LOWORD(v129) = 260;
      v126 = v109;
      v111 = v111 & 0xFFFFFFFF00000000LL | 5;
      v88 = (void *)operator new(0x40u);
      sub_2220590(v88, &v126, (unsigned int)v111, v112);
      v89 = v120[0];
      if ( v120[0] != v110 )
LABEL_118:
        operator delete(v89);
LABEL_119:
      LOBYTE(v123[1]) |= 1u;
      LOBYTE(v127) = v127 | 1;
      v123[0] = nullptr;
      v126 = v88;
    }
    else
    {
      v69 = (void ***)(v67 + *(_QWORD *)a2);
      if ( v68 >= v67 + 8 )
      {
        v45 = (unsigned __int64)*v69;
        *(_QWORD *)(a2 + 16) = v67 + 8;
        v70 = 64;
        LOBYTE(v71) = 8 - v65;
        goto LABEL_94;
      }
      *(_QWORD *)(a2 + 24) = 0;
      v84 = v68 - v67;
      if ( (_DWORD)v68 == (_DWORD)v67 )
      {
        *(_DWORD *)(a2 + 32) = 0;
        v71 = 8 - v65;
        goto LABEL_117;
      }
      v85 = 0;
      v45 = 0;
      while ( 1 )
      {
        v45 |= (unsigned __int64)*((unsigned __int8 *)v69 + v85) << (8 * (unsigned __int8)v85);
        *(_QWORD *)(a2 + 24) = v45;
        if ( v85 == v84 - 1 )
          break;
        ++v85;
      }
      v70 = 8 * v84;
      v71 = 8 - v65;
      *(_DWORD *)(a2 + 32) = 8 * v84;
      *(_QWORD *)(a2 + 16) = v84 + v67;
      if ( 8 - v65 > 8 * v84 )
      {
LABEL_117:
        v112 = (unsigned __int64)off_2C02AD8;
        v117 = _mm_loadh_ps((const double *)off_2BB2600);
        v112 = std::_V2::generic_category((std::_V2 *)v45);
        v123[0] = (char *)v62 + 16;
        v114 = (__int64 (__fastcall **)())((char *)v62 + 16);
        v128 = 0;
        v126 = &off_2BEBE68;
        v113 = (char *)&off_2BEBE68;
        v123[1] = nullptr;
        LOBYTE(v124) = 0;
        LODWORD(v127) = 0;
        v130 = 0;
        v131 = 1;
        v129 = 0;
        v132 = (void **)v62;
        sub_227B8B0(&v126, 0, 0, 0);
        v86 = *(_DWORD *)(a2 + 32);
        v87 = _mm_load_si128((const __m128i *)&v117);
        v121 = v71;
        v122 = v86;
        *(__m128i *)v120 = v87;
        sub_227C560(&v126, v109);
        v126 = v113;
        sub_227B7A0(&v126);
        v126 = v62;
        LOWORD(v129) = 260;
        v116 = v116 & 0xFFFFFFFF00000000LL | 5;
        v88 = (void *)operator new(0x40u);
        sub_2220590(v88, &v126, (unsigned int)v116, v112);
        v89 = v123[0];
        if ( v123[0] != v114 )
          goto LABEL_118;
        goto LABEL_119;
      }
LABEL_94:
      LOBYTE(v123[1]) &= ~1u;
      *(_DWORD *)(a2 + 32) = v65 + v70 - 8;
      *(_QWORD *)(a2 + 24) = v45 >> v71;
      LOBYTE(v127) = v127 & 0xFE;
      v64 = (void *)((((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v65 + 56)) & v45) << v65) | v66);
      v123[0] = v64;
LABEL_82:
      LODWORD(v126) = (_DWORD)v64;
    }
    sub_A0AE90((__int64 *)v108);
    v119 = v127 & 1 | v119 & 0xFE;
    if ( (v127 & 1) != 0 )
    {
      v83 = v126;
      v126 = nullptr;
      v118 = v83;
    }
    else
    {
      LODWORD(v118) = (_DWORD)v126;
    }
    sub_A0AE90((__int64 *)&v126);
    v45 = (unsigned __int64)v62;
    sub_A0AE70((__int64 *)v62);
    if ( (v119 & 1) != 0 )
    {
      v104 = v118;
      v3 = v115;
      v118 = nullptr;
      LOBYTE(v127) = v127 | 1;
      v47 = (__int64 *)v108;
      v126 = v104;
      goto LABEL_54;
    }
    v61 |= ((unsigned __int8)v118 & 0x7F) << v60;
    if ( ((unsigned __int8)v118 & 0x80) == 0 )
    {
      v105 = v61;
      LOBYTE(v127) = v127 & 0xFE;
      v3 = v115;
      LODWORD(v126) = v105;
      v47 = (__int64 *)v108;
      goto LABEL_54;
    }
    v60 += 7;
    if ( v60 != 35 )
      continue;
    break;
  }
  v99 = std::_V2::generic_category(v62);
  v3 = v115;
  v100 = v99;
  v126 = &v128;
  v101 = (__m128i *)operator new(0x11u);
  v102 = v106[0];
  v103 = _mm_load_si128((const __m128i *)&xmmword_23AA3E0);
  v101[1].m128i_i8[0] = 0;
  v126 = v101;
  *v101 = v103;
  *(_QWORD *)&v128 = 16;
  v127 = 16;
  sub_22205D0(v102, &v126, 84, v100);
  if ( v126 != &v128 )
    operator delete(v126);
  LOBYTE(v127) = v127 | 1;
  v47 = (__int64 *)v108;
  v126 = v123[0];
LABEL_54:
  sub_A0AE90(v47);
  if ( (v127 & 1) != 0 )
  {
    v56 = v126;
    v126 = nullptr;
    v123[0] = v56;
    v57 = sub_2220DB0(v106[0]);
    v58 = v123[0];
    *(_BYTE *)(v3 + 16) |= 1u;
    *(_DWORD *)v3 = v57;
    *(_QWORD *)(v3 + 8) = v59;
    if ( v58 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v58 + 8LL))(v58);
    sub_A0AE90((__int64 *)&v126);
  }
  else
  {
    *v107 = (unsigned int)v126;
    sub_A0AE90((__int64 *)&v126);
    *(_BYTE *)(v3 + 16) &= ~1u;
    *(_DWORD *)v3 = 3;
  }
  return v3;
}
