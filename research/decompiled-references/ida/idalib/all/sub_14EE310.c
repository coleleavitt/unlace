__int64 __fastcall sub_14EE310(__int64 a1, __m128i a2)
{
  unsigned int v3; // r13d
  char v4; // al
  char v5; // al
  __int16 v6; // ax
  __int64 *v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rbp
  unsigned __int16 v10; // cx
  __int64 v11; // rbp
  void **v13; // rbp
  unsigned __int64 v14; // rax
  void **v15; // r15
  void **v16; // r12
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // r15
  void **v20; // r12
  __int64 v21; // r15
  bool v22; // zf
  unsigned __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rdi
  __int16 v26; // ax
  __int16 v27; // dx
  __int16 v28; // ax
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // rdi
  char v38; // al
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 (__fastcall *v41)(_QWORD); // rax
  __int64 (__fastcall *v42)(_QWORD); // rax
  _QWORD *v43; // rdi
  unsigned int v44; // eax
  unsigned __int16 v45; // si
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rbp
  __int64 *v49; // rdi
  int *v50; // rsi
  unsigned __int8 *v51; // r12
  unsigned int v52; // r8d
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // r12
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  char *v61; // r8
  unsigned __int64 v62; // rcx
  _BYTE *v63; // rax
  _BYTE *v64; // rsi
  signed __int64 v65; // r10
  _BYTE *v66; // rdi
  void **v67; // rbp
  unsigned __int64 v68; // rax
  __int64 v69; // r15
  __int64 v70; // r12
  void *v71; // rdi
  void **v72; // rdi
  void **v73; // rdi
  void **v74; // r15
  void **v75; // r12
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  int v78; // eax
  unsigned __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // r15
  __int64 v83; // rcx
  __int64 v84; // r15
  void *v85; // rdi
  int v86; // edx
  char *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  void *v93; // rdi
  int v94; // edx
  char *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rcx
  char v98; // [rsp+Fh] [rbp-1F9h]
  unsigned int v99; // [rsp+10h] [rbp-1F8h]
  signed __int64 v100; // [rsp+10h] [rbp-1F8h]
  signed __int64 v101; // [rsp+10h] [rbp-1F8h]
  unsigned int v102; // [rsp+10h] [rbp-1F8h]
  char *v103; // [rsp+10h] [rbp-1F8h]
  __int64 v104; // [rsp+10h] [rbp-1F8h]
  __int64 v105; // [rsp+10h] [rbp-1F8h]
  __int64 v106; // [rsp+18h] [rbp-1F0h]
  char *v107; // [rsp+18h] [rbp-1F0h]
  __int64 v108; // [rsp+18h] [rbp-1F0h]
  __int64 v109; // [rsp+18h] [rbp-1F0h]
  __int64 v110; // [rsp+18h] [rbp-1F0h]
  int v111; // [rsp+18h] [rbp-1F0h]
  __int64 v112; // [rsp+20h] [rbp-1E8h]
  unsigned __int64 v113; // [rsp+20h] [rbp-1E8h]
  unsigned __int64 v114; // [rsp+20h] [rbp-1E8h]
  char *v115; // [rsp+20h] [rbp-1E8h]
  __int64 v116; // [rsp+20h] [rbp-1E8h]
  int v117; // [rsp+20h] [rbp-1E8h]
  unsigned __int64 v118; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v119; // [rsp+28h] [rbp-1E0h]
  char v120; // [rsp+3Eh] [rbp-1CAh] BYREF
  char v121; // [rsp+3Fh] [rbp-1C9h] BYREF
  __int64 v122; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v123; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v124; // [rsp+50h] [rbp-1B8h] BYREF
  char v125; // [rsp+58h] [rbp-1B0h]
  _QWORD v126[6]; // [rsp+60h] [rbp-1A8h] BYREF
  _BYTE *v127; // [rsp+90h] [rbp-178h] BYREF
  char v128; // [rsp+98h] [rbp-170h]
  __int64 v129; // [rsp+A0h] [rbp-168h]
  int v130; // [rsp+A8h] [rbp-160h]
  __int16 v131; // [rsp+ACh] [rbp-15Ch]
  __int64 (__fastcall *v132)(__int64); // [rsp+B0h] [rbp-158h]
  __int64 v133; // [rsp+B8h] [rbp-150h]
  __int64 v134; // [rsp+C0h] [rbp-148h]
  _DWORD v135[2]; // [rsp+D0h] [rbp-138h] BYREF
  char v136; // [rsp+D8h] [rbp-130h]
  __int64 v137; // [rsp+DCh] [rbp-12Ch]
  char v138; // [rsp+E4h] [rbp-124h]
  void *v139; // [rsp+E8h] [rbp-120h]
  __int64 v140; // [rsp+F0h] [rbp-118h]
  _BYTE v141[24]; // [rsp+F8h] [rbp-110h] BYREF
  void *v142; // [rsp+110h] [rbp-F8h] BYREF
  unsigned __int64 v143; // [rsp+118h] [rbp-F0h]
  __int64 v144; // [rsp+120h] [rbp-E8h]
  void *v145; // [rsp+130h] [rbp-D8h]
  _BYTE v146[16]; // [rsp+140h] [rbp-C8h] BYREF
  __int16 v147; // [rsp+150h] [rbp-B8h]
  void *ptr; // [rsp+160h] [rbp-A8h] BYREF
  __int64 v149; // [rsp+168h] [rbp-A0h]
  _BYTE v150[152]; // [rsp+170h] [rbp-98h] BYREF

  v3 = 0;
  v4 = *(_BYTE *)(a1 + 2064);
  *(_BYTE *)(a1 + 2064) = 0;
  v129 = a1;
  v98 = v4;
  v127 = (_BYTE *)(a1 + 1952);
  v5 = *(_BYTE *)(a1 + 1952);
  v130 = 1638424;
  v128 = v5;
  v132 = sub_1478A90;
  v6 = *(_WORD *)(a1 + 32);
  *(_BYTE *)(a1 + 1952) = 1;
  v131 = 63;
  v133 = 0;
  v134 = 0;
  if ( v6 == 24 )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 92) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
      sub_1568800(&v127);
    else
      LODWORD(v134) = sub_1478A90(a1);
    v3 = v134;
    v6 = *(_WORD *)(a1 + 32);
  }
  v149 = 0xC00000000LL;
  ptr = v150;
  if ( v6 == 25 )
  {
    v7 = *(__int64 **)(a1 + 8);
    v8 = (_BYTE *)v7[7];
    if ( (v8[1] & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 96);
      v10 = *(_WORD *)(a1 + 92);
    }
    else
    {
      sub_1564820(&v142, a1, v3, (*v8 & 8) == 0 ? 87 : 129);
      if ( (_BYTE)v147 )
      {
        sub_FC7790(v144, (__int64 *)&v142, SHIBYTE(v147));
        v144 = 0;
        v147 = 0;
      }
      if ( v145 != v146 )
        operator delete(v145);
      v13 = (void **)v142;
      if ( v142 )
      {
        v14 = v143;
        if ( v143 )
        {
          if ( (unsigned __int64)v142 < v143 || (unsigned __int64)v142 > v143 + 14848 )
          {
            v15 = *((void ***)v142 + 66);
            v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v142 + 134)];
            if ( v15 != v16 )
            {
              do
              {
                while ( 1 )
                {
                  v16 -= 8;
                  v17 = (void **)v16[3];
                  if ( v17 == v16 + 5 )
                    break;
                  operator delete(v17);
                  if ( v15 == v16 )
                    goto LABEL_23;
                }
              }
              while ( v15 != v16 );
LABEL_23:
              v16 = (void **)v13[66];
            }
            if ( v16 != v13 + 68 )
              free(v16);
            v18 = (void **)v13[52];
            if ( v18 != v13 + 54 )
              free(v18);
            v19 = v13 + 48;
            v20 = v13 + 8;
            do
            {
              while ( *v19 != v19 + 2 )
              {
                operator delete(*v19);
                v19 -= 4;
                if ( v19 == v20 )
                  goto LABEL_31;
              }
              v19 -= 4;
            }
            while ( v19 != v20 );
LABEL_31:
            operator delete(v13, 0x3A0u);
          }
          else
          {
            v47 = *(unsigned int *)(v143 + 14976);
            *(_DWORD *)(v143 + 14976) = v47 + 1;
            *(_QWORD *)(v14 + 8 * v47 + 14848) = v13;
          }
        }
      }
      v7 = *(__int64 **)(a1 + 8);
      v9 = *(_QWORD *)(a1 + 96);
      v10 = *(_WORD *)(a1 + 92);
      if ( *(_WORD *)(a1 + 32) == 24 )
      {
        *(_WORD *)(a1 + 92) = v10 + 1;
        goto LABEL_9;
      }
    }
    if ( !v10 )
    {
LABEL_9:
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v7, (int *)(a1 + 16));
      v11 = sub_1909C90(v9, v3, 0, 0, *(unsigned int *)(a1 + 40));
      goto LABEL_10;
    }
    v44 = *(_DWORD *)(a1 + 2792);
    if ( !v44 )
    {
LABEL_96:
      *(_WORD *)(a1 + 92) = v10 - 1;
      goto LABEL_9;
    }
    v45 = *(_WORD *)(a1 + 88);
    v46 = *(_QWORD *)(a1 + 2784) + 24LL * v44 - 24;
    while ( 1 )
    {
      if ( v45 == *(_WORD *)(v46 + 14) )
      {
        if ( *(_DWORD *)(v46 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_91;
      }
      else if ( v45 > *(_WORD *)(v46 + 14) )
      {
        goto LABEL_91;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v46 + 16) && *(_WORD *)(v46 + 18) >= v10 )
        goto LABEL_96;
LABEL_91:
      --v44;
      v46 -= 24;
      *(_DWORD *)(a1 + 2792) = v44;
      if ( !v44 )
        goto LABEL_96;
    }
  }
  v21 = 0;
  sub_14EE070((__int64)&v124, *(_QWORD *)(a1 + 96), 0, 1);
  v22 = *(_BYTE *)(a1 + 56) == 0;
  v120 = 1;
  if ( !v22 && (_DWORD)v134 == *(_DWORD *)(a1 + 60) )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v41 = *(__int64 (__fastcall **)(_QWORD))(a1 + 72);
      v21 = 0;
      if ( v41 )
        v21 = v41(*(_QWORD *)(a1 + 80));
    }
  }
  v122 = v21;
  v126[0] = &v122;
  v126[2] = &v127;
  v126[4] = &v121;
  v121 = 0;
  v126[1] = a1;
  v126[3] = &ptr;
  while ( 1 )
  {
    sub_1703AD0(a1 + 48, *(unsigned int *)(a1 + 16), sub_14ED9D0, v126);
    v25 = *(_QWORD *)(a1 + 8);
    v26 = *(_WORD *)(a1 + 32);
    if ( **(char **)(v25 + 56) < 0 && (unsigned __int16)(v26 - 395) <= 1u )
    {
      if ( !(unsigned __int8)sub_14F2230(a1, &ptr, &v120) )
        goto LABEL_48;
      goto LABEL_52;
    }
    switch ( v26 )
    {
      case 20:
        v38 = sub_14EDA40((const __m128i *)a1);
        break;
      case 26:
        goto LABEL_66;
      case 5:
        v39 = *(_QWORD *)(v25 + 2944);
        v40 = v39 >= *(unsigned int *)(v25 + 2912) ? sub_14180A0(v25, 1u) : *(_QWORD *)(v25 + 2904) + 24 * v39;
        v38 = *(_WORD *)(v40 + 16) == 62;
        break;
      case 461:
        goto LABEL_71;
      default:
        goto LABEL_42;
    }
    if ( v38 )
    {
LABEL_66:
      v23 = sub_14EF570(a1, &ptr, v21);
      if ( *(_WORD *)(a1 + 32) != 27 )
        goto LABEL_45;
      goto LABEL_67;
    }
    v26 = *(_WORD *)(a1 + 32);
    if ( v26 == 461 )
    {
LABEL_71:
      v23 = sub_14EE0E0(a1);
      goto LABEL_44;
    }
LABEL_42:
    v23 = v26 == 24 ? sub_14EE310(a1) : sub_14BDAD0(a1, 0, a2);
LABEL_44:
    if ( *(_WORD *)(a1 + 32) != 27 )
      goto LABEL_45;
LABEL_67:
    v118 = v23;
    v36 = *(_QWORD *)(a1 + 96);
    v37 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    v112 = v36;
    sub_14634E0(v37, (int *)(a1 + 16));
    v23 = sub_1E53840(v112, v118 & 0xFFFFFFFFFFFFFFFELL, *(unsigned int *)(a1 + 40));
LABEL_45:
    if ( v23 > 1 )
    {
      v33 = (unsigned int)v149;
      v34 = v23 & 0xFFFFFFFFFFFFFFFELL;
      v35 = (unsigned int)v149 + 1LL;
      if ( v35 > HIDWORD(v149) )
      {
        v113 = v34;
        sub_2237220(&ptr, v150, v35, 8);
        v33 = (unsigned int)v149;
        v34 = v113;
      }
      *((_QWORD *)ptr + v33) = v34;
      LODWORD(v149) = v149 + 1;
LABEL_52:
      if ( *(_WORD *)(a1 + 32) != 66 )
        goto LABEL_53;
      goto LABEL_47;
    }
    v22 = *(_WORD *)(a1 + 32) == 66;
    v120 = 0;
    if ( !v22 )
      break;
LABEL_47:
    v24 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v24, (int *)(a1 + 16));
LABEL_48:
    if ( *(_WORD *)(a1 + 32) == 25 )
      goto LABEL_53;
  }
  LOWORD(v142) = 25;
  sub_15680D0(a1, &v142, 1, 2);
LABEL_53:
  v27 = HIWORD(v130);
  v28 = *(_WORD *)(v129 + 32);
  if ( HIWORD(v130) == v28 )
  {
    v42 = v132;
    v43 = (_QWORD *)(v133 + v129);
    if ( ((unsigned __int8)v132 & 1) == 0 )
      goto LABEL_81;
    goto LABEL_80;
  }
  if ( v28 == 63 )
  {
    v29 = *(_QWORD *)(v129 + 8);
    v30 = *(_QWORD *)(v29 + 2944);
    if ( v30 >= *(unsigned int *)(v29 + 2912) )
    {
      v31 = sub_14180A0(v29, 1u);
      v27 = HIWORD(v130);
    }
    else
    {
      v31 = *(_QWORD *)(v29 + 2904) + 24 * v30;
    }
    if ( *(_WORD *)(v31 + 16) == v27 )
    {
      v48 = v129;
      v49 = *(__int64 **)(v129 + 8);
      v50 = (int *)(v129 + 16);
      *(_DWORD *)(v129 + 40) = *(_DWORD *)(v129 + 16);
      sub_14634E0(v49, v50);
      v99 = *(_DWORD *)(v48 + 40);
      sub_1564820(&v142, v129, v99, 1917);
      v51 = (unsigned __int8 *)v142;
      v52 = v99;
      v53 = HIWORD(v130);
      if ( !v142 )
      {
        v77 = v143;
        v78 = *(_DWORD *)(v143 + 14976);
        if ( v78 )
        {
          v81 = (unsigned int)(v78 - 1);
          *(_DWORD *)(v143 + 14976) = v81;
          v51 = *(unsigned __int8 **)(v77 + 8 * v81 + 14848);
          v82 = *((unsigned int *)v51 + 134);
          v83 = *((_QWORD *)v51 + 66);
          *v51 = 0;
          *((_DWORD *)v51 + 106) = 0;
          v84 = v83 + (v82 << 6);
          while ( v83 != v84 )
          {
            while ( 1 )
            {
              v84 -= 64;
              v85 = *(void **)(v84 + 24);
              if ( v85 == (void *)(v84 + 40) )
                break;
              v116 = v83;
              v108 = v53;
              v102 = v52;
              operator delete(v85);
              v83 = v116;
              v52 = v102;
              v53 = v108;
              if ( v116 == v84 )
                goto LABEL_152;
            }
          }
LABEL_152:
          *((_DWORD *)v51 + 134) = 0;
        }
        else
        {
          v106 = HIWORD(v130);
          v51 = (unsigned __int8 *)operator new(0x3A0u);
          *v51 = 0;
          *((_QWORD *)v51 + 12) = v51 + 112;
          *((_QWORD *)v51 + 16) = v51 + 144;
          *((_QWORD *)v51 + 20) = v51 + 176;
          *((_QWORD *)v51 + 24) = v51 + 208;
          *((_QWORD *)v51 + 28) = v51 + 240;
          *((_QWORD *)v51 + 32) = v51 + 272;
          *((_QWORD *)v51 + 36) = v51 + 304;
          *((_QWORD *)v51 + 40) = v51 + 336;
          *((_QWORD *)v51 + 44) = v51 + 368;
          *((_QWORD *)v51 + 48) = v51 + 400;
          *((_QWORD *)v51 + 52) = v51 + 432;
          *((_QWORD *)v51 + 13) = 0;
          v51[112] = 0;
          *((_QWORD *)v51 + 17) = 0;
          v51[144] = 0;
          *((_QWORD *)v51 + 21) = 0;
          v51[176] = 0;
          *((_QWORD *)v51 + 25) = 0;
          v51[208] = 0;
          *((_QWORD *)v51 + 29) = 0;
          v51[240] = 0;
          *((_QWORD *)v51 + 33) = 0;
          v51[272] = 0;
          *((_QWORD *)v51 + 37) = 0;
          v51[304] = 0;
          *((_QWORD *)v51 + 41) = 0;
          v51[336] = 0;
          *((_QWORD *)v51 + 45) = 0;
          v51[368] = 0;
          *((_QWORD *)v51 + 49) = 0;
          v51[400] = 0;
          *((_QWORD *)v51 + 53) = 0x800000000LL;
          v52 = v99;
          *((_QWORD *)v51 + 66) = v51 + 544;
          v53 = v106;
          *((_QWORD *)v51 + 67) = 0x600000000LL;
        }
        v142 = v51;
      }
      v51[*v51 + 1] = 4;
      v54 = v142;
      v55 = *(unsigned __int8 *)v142;
      *(_BYTE *)v142 = v55 + 1;
      v54[v55 + 2] = v53;
      v137 = 0;
      v138 = 0;
      v139 = v141;
      v140 = 0;
      v141[0] = 0;
      v141[16] = 0;
      v135[0] = v52;
      v135[1] = v52;
      v136 = 1;
      if ( !v52 )
      {
LABEL_112:
        if ( (_BYTE)v147 )
        {
          sub_FC7790(v144, (__int64 *)&v142, SHIBYTE(v147));
          v144 = 0;
          v147 = 0;
        }
        if ( v145 != v146 )
          operator delete(v145);
        v67 = (void **)v142;
        if ( v142 )
        {
          v68 = v143;
          if ( v143 )
          {
            if ( (unsigned __int64)v142 < v143 || (unsigned __int64)v142 > v143 + 14848 )
            {
              v69 = *((_QWORD *)v142 + 66);
              v70 = v69 + ((unsigned __int64)*((unsigned int *)v142 + 134) << 6);
              while ( v69 != v70 )
              {
                while ( 1 )
                {
                  v70 -= 64;
                  v71 = *(void **)(v70 + 24);
                  if ( v71 == (void *)(v70 + 40) )
                    break;
                  operator delete(v71);
                  if ( v69 == v70 )
                    goto LABEL_123;
                }
              }
LABEL_123:
              v72 = (void **)v67[66];
              if ( v72 != v67 + 68 )
                free(v72);
              v73 = (void **)v67[52];
              if ( v73 != v67 + 54 )
                free(v73);
              v74 = v67 + 48;
              v75 = v67 + 8;
              do
              {
                while ( *v74 != v74 + 2 )
                {
                  operator delete(*v74);
                  v74 -= 4;
                  if ( v75 == v74 )
                    goto LABEL_130;
                }
                v74 -= 4;
              }
              while ( v75 != v74 );
LABEL_130:
              operator delete(v67, 0x3A0u);
            }
            else
            {
              v76 = *(unsigned int *)(v143 + 14976);
              *(_DWORD *)(v143 + 14976) = v76 + 1;
              *(_QWORD *)(v68 + 8 * v76 + 14848) = v67;
            }
          }
        }
        v42 = v132;
        v43 = (_QWORD *)(v129 + v133);
        if ( ((unsigned __int8)v132 & 1) == 0 )
        {
LABEL_81:
          HIDWORD(v134) = v42(v43);
          if ( !v120 )
            goto LABEL_60;
          goto LABEL_82;
        }
LABEL_80:
        v42 = *(__int64 (__fastcall **)(_QWORD))((char *)v42 + *v43 - 1);
        goto LABEL_81;
      }
      v56 = v142;
      if ( v142 )
      {
        v57 = *((unsigned int *)v142 + 134);
        v58 = v57 + 1;
        v59 = v57 << 6;
      }
      else
      {
        v79 = v143;
        v80 = *(_DWORD *)(v143 + 14976);
        if ( v80 )
        {
          v89 = (unsigned int)(v80 - 1);
          *(_DWORD *)(v143 + 14976) = v89;
          v56 = *(_QWORD **)(v79 + 8 * v89 + 14848);
          v90 = *((unsigned int *)v56 + 134);
          v91 = v56[66];
          *(_BYTE *)v56 = 0;
          *((_DWORD *)v56 + 106) = 0;
          v92 = v91 + (v90 << 6);
          while ( v91 != v92 )
          {
            while ( 1 )
            {
              v92 -= 64;
              v93 = *(void **)(v92 + 24);
              if ( v93 == (void *)(v92 + 40) )
                break;
              v110 = v92;
              v104 = v91;
              operator delete(v93);
              v91 = v104;
              v92 = v110;
              if ( v104 == v110 )
                goto LABEL_162;
            }
          }
LABEL_162:
          *((_DWORD *)v56 + 134) = 0;
        }
        else
        {
          v56 = (_QWORD *)operator new(0x3A0u);
          *(_BYTE *)v56 = 0;
          v56[12] = v56 + 14;
          v56[16] = v56 + 18;
          v56[20] = v56 + 22;
          v56[24] = v56 + 26;
          v56[28] = v56 + 30;
          v56[32] = v56 + 34;
          v56[36] = v56 + 38;
          v56[40] = v56 + 42;
          v56[44] = v56 + 46;
          v56[48] = v56 + 50;
          v56[52] = v56 + 54;
          v56[13] = 0;
          *((_BYTE *)v56 + 112) = 0;
          v56[17] = 0;
          *((_BYTE *)v56 + 144) = 0;
          v56[21] = 0;
          *((_BYTE *)v56 + 176) = 0;
          v56[25] = 0;
          *((_BYTE *)v56 + 208) = 0;
          v56[29] = 0;
          *((_BYTE *)v56 + 240) = 0;
          v56[33] = 0;
          *((_BYTE *)v56 + 272) = 0;
          v56[37] = 0;
          *((_BYTE *)v56 + 304) = 0;
          v56[41] = 0;
          *((_BYTE *)v56 + 336) = 0;
          v56[45] = 0;
          *((_BYTE *)v56 + 368) = 0;
          v56[49] = 0;
          *((_BYTE *)v56 + 400) = 0;
          v56[53] = 0x800000000LL;
          v56[66] = v56 + 68;
          v56[67] = 0x600000000LL;
        }
        v142 = v56;
        v59 = 0;
        v58 = 1;
      }
      v60 = v56[66];
      v61 = (char *)v135;
      v62 = v60 + v59;
      if ( *((unsigned int *)v56 + 135) < v58 )
      {
        if ( v60 > (unsigned __int64)v135 || v62 <= (unsigned __int64)v135 )
        {
          v105 = sub_2237400(v56 + 66, v56 + 68, v58, 64, &v123);
          sub_9EF810(v56 + 66, v105);
          v94 = v123;
          v95 = (char *)v56[66];
          v96 = v105;
          if ( v95 != (char *)(v56 + 68) )
          {
            v111 = v123;
            free(v95);
            v96 = v105;
            v94 = v111;
          }
          v56[66] = v105;
          v97 = *((unsigned int *)v56 + 134);
          *((_DWORD *)v56 + 135) = v94;
          v61 = (char *)v135;
          v62 = v96 + (v97 << 6);
        }
        else
        {
          v103 = (char *)v135 - v60;
          v109 = sub_2237400(v56 + 66, v56 + 68, v58, 64, &v123);
          sub_9EF810(v56 + 66, v109);
          v86 = v123;
          v87 = (char *)v56[66];
          v88 = v109;
          if ( v87 == (char *)(v56 + 68) )
          {
            v56[66] = v109;
            *((_DWORD *)v56 + 135) = v86;
          }
          else
          {
            v117 = v123;
            free(v87);
            v88 = v109;
            v56[66] = v109;
            *((_DWORD *)v56 + 135) = v117;
          }
          v61 = &v103[v88];
          v62 = v88 + ((unsigned __int64)*((unsigned int *)v56 + 134) << 6);
        }
      }
      *(_QWORD *)v62 = *(_QWORD *)v61;
      *(_DWORD *)(v62 + 8) = *((_DWORD *)v61 + 2);
      *(_QWORD *)(v62 + 12) = *(_QWORD *)(v61 + 12);
      *(_DWORD *)(v62 + 20) = *((_DWORD *)v61 + 5);
      v63 = (_BYTE *)(v62 + 40);
      *(_QWORD *)(v62 + 24) = v62 + 40;
      v64 = *((_BYTE **)v61 + 3);
      v65 = *((_QWORD *)v61 + 4);
      if ( &v64[v65] && !v64 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v65 > 0xF )
      {
        if ( v65 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v119 = v62;
        v115 = v61;
        v101 = *((_QWORD *)v61 + 4);
        v63 = (_BYTE *)operator new(v65 + 1);
        v62 = v119;
        v65 = v101;
        v61 = v115;
        *(_QWORD *)(v119 + 24) = v63;
        *(_QWORD *)(v119 + 40) = v101;
      }
      else
      {
        if ( v65 == 1 )
        {
          *(_BYTE *)(v62 + 40) = *v64;
          goto LABEL_110;
        }
        if ( !v65 )
        {
LABEL_110:
          *(_QWORD *)(v62 + 32) = v65;
          v63[v65] = 0;
          v66 = v139;
          *(_BYTE *)(v62 + 56) = v61[56];
          ++*((_DWORD *)v56 + 134);
          if ( v66 != v141 )
            operator delete(v66);
          goto LABEL_112;
        }
      }
      v114 = v62;
      v107 = v61;
      v100 = v65;
      memcpy(v63, v64, v65);
      v62 = v114;
      v61 = v107;
      v65 = v100;
      v63 = *(_BYTE **)(v114 + 24);
      goto LABEL_110;
    }
  }
  v32 = sub_15688B0(&v127);
  if ( v120 == 1 && !v32 )
  {
LABEL_82:
    v11 = sub_1909C90(*(_QWORD *)(a1 + 96), v3, ptr, (unsigned int)v149, HIDWORD(v134));
    goto LABEL_61;
  }
LABEL_60:
  v11 = 1;
LABEL_61:
  if ( v125 )
    sub_190D5E0(v124);
LABEL_10:
  if ( ptr != v150 )
    free(ptr);
  *v127 = v128;
  *(_BYTE *)(a1 + 2064) = v98;
  return v11;
}
