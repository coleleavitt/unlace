unsigned __int64 __fastcall sub_1DED920(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // r15
  __int64 *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned int v21; // r14d
  __int64 v22; // rdi
  __int64 v23; // rdx
  _QWORD *v24; // r10
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // esi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 *v37; // rsi
  __int64 v38; // rdi
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned __int64 v41; // r9
  int v42; // eax
  __int64 *v43; // r9
  int v44; // r14d
  unsigned int v45; // eax
  __int8 *v46; // r10
  unsigned __int8 v47; // di
  int v48; // eax
  char *v49; // rax
  __int64 v50; // rdx
  _BYTE *v51; // rdi
  __int64 v52; // r10
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r10
  __int64 v59; // rdx
  void *v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r14
  void *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r14
  void *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  void *v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rax
  size_t v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int8 *v92; // r10
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rcx
  _QWORD *v96; // rax
  __int64 v97; // rdx
  unsigned __int8 *v98; // rax
  __int64 v99; // rsi
  _BYTE *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rcx
  int v103; // eax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rsi
  __int64 v107; // rcx
  void *v108; // rdi
  __int64 v110; // [rsp+10h] [rbp-188h]
  int v111; // [rsp+18h] [rbp-180h]
  __int64 v112; // [rsp+18h] [rbp-180h]
  unsigned __int8 v113; // [rsp+20h] [rbp-178h]
  unsigned __int8 v114; // [rsp+20h] [rbp-178h]
  __int64 v115; // [rsp+28h] [rbp-170h]
  unsigned __int64 v116; // [rsp+28h] [rbp-170h]
  __int64 *v117; // [rsp+28h] [rbp-170h]
  __int64 v118; // [rsp+28h] [rbp-170h]
  __int64 v119; // [rsp+28h] [rbp-170h]
  unsigned __int64 v120; // [rsp+28h] [rbp-170h]
  unsigned __int64 v121; // [rsp+28h] [rbp-170h]
  unsigned __int64 v122; // [rsp+28h] [rbp-170h]
  unsigned __int64 v123; // [rsp+28h] [rbp-170h]
  __int64 v124; // [rsp+28h] [rbp-170h]
  _QWORD *v125; // [rsp+30h] [rbp-168h] BYREF
  __int8 *v126; // [rsp+38h] [rbp-160h]
  __int64 v127; // [rsp+40h] [rbp-158h]
  unsigned __int8 *v128; // [rsp+48h] [rbp-150h]
  __int64 v129; // [rsp+50h] [rbp-148h]
  __int64 v130; // [rsp+58h] [rbp-140h]
  __int64 v131; // [rsp+68h] [rbp-130h] BYREF
  void *src; // [rsp+70h] [rbp-128h] BYREF
  size_t n; // [rsp+78h] [rbp-120h]
  _QWORD v134[2]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v135; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v136[12]; // [rsp+98h] [rbp-100h]
  char v137; // [rsp+A4h] [rbp-F4h]
  void *dest; // [rsp+A8h] [rbp-F0h]
  __m128 v139; // [rsp+B0h] [rbp-E8h] BYREF
  char v140; // [rsp+C8h] [rbp-D0h]
  _QWORD v141[2]; // [rsp+D0h] [rbp-C8h] BYREF
  _QWORD *v142; // [rsp+E0h] [rbp-B8h]
  unsigned __int8 *v143[11]; // [rsp+F0h] [rbp-A8h] BYREF
  char v144; // [rsp+148h] [rbp-50h]
  unsigned int v145; // [rsp+150h] [rbp-48h]
  char v146; // [rsp+154h] [rbp-44h]

  v9 = *(_QWORD *)(a3 + 32);
  if ( (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3) == 6 )
  {
    if ( !v9 )
    {
      v110 = 0;
      v11 = a4;
      v12 = a4;
      goto LABEL_6;
    }
  }
  else if ( !v9 )
  {
    v110 = 0;
    v11 = a4;
    v12 = a4 + 16;
    goto LABEL_6;
  }
  v9 = sub_1DD3CF0((__int64)a1, v9, *(void **)(a4 + 8), 0, 0);
  v110 = v10;
  if ( !v9 )
    return 0;
  v11 = a4;
  if ( (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3) != 6 || *(_QWORD *)(a3 + 32) )
    v12 = a4 + 16;
  else
    v12 = a4;
LABEL_6:
  v13 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v17 = sub_1DCE820(
          a1,
          a2,
          *(_QWORD *)(a3 + 40),
          (const __m128i *)(v13 * ((v12 - (unsigned __int64)(v12 != 0)) / v13 + (v12 != 0))),
          a5,
          a6,
          v14,
          v15);
  v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v19 = *(unsigned __int16 *)(a3 + 18);
  LOWORD(v19) = (unsigned __int16)v19 >> 3;
  if ( (unsigned int)(unsigned __int8)v19 - 5 <= 1 )
  {
LABEL_8:
    v20 = *a1;
    goto LABEL_9;
  }
  v35 = sub_F6A860(*v18);
  v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v35 )
  {
    v19 = *(unsigned __int16 *)(a3 + 18);
    LOWORD(v19) = (unsigned __int16)v19 >> 3;
    goto LABEL_8;
  }
  v131 = *(_QWORD *)(v35 + 32);
  v36 = sub_F22BD0(&v131, 0);
  v19 = *(unsigned __int16 *)(a3 + 18);
  v20 = *a1;
  v112 = v36;
  v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  LOWORD(v19) = (unsigned __int16)v19 >> 3;
  if ( v36 && (*(_BYTE *)(v36 + 28) & 0x7F) == 0x46 )
  {
    v37 = (__int64 *)(v20 + 8);
    if ( (_BYTE)v19 != 6 || *(_QWORD *)(a3 + 32) )
      v11 = a4 + 16;
    v38 = *(_QWORD *)(a3 + 40);
    v125 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
    v39 = sub_F6C520(v38);
    v135 = *(_QWORD *)(a3 + 40);
    *(_QWORD *)v136 = ((v11 != 0) + (v11 - (unsigned __int64)(v11 != 0)) / v39) * v39;
    v40 = sub_F6CCB0(&v135, a5);
    sub_168B9F0((__int64)v141, v37, v40, 0x13D4u, 0);
    v41 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    if ( v144 )
    {
      v37 = (__int64 *)v112;
      sub_1DB86A0(v143, v112);
      v41 = (unsigned __int64)v125;
    }
    else
    {
      if ( !v146 )
      {
LABEL_45:
        v116 = v41;
        v42 = sub_F58630((unsigned __int8)(*(_WORD *)(a3 + 18) >> 3));
        v43 = (__int64 *)v116;
        v44 = v42;
        if ( v144 )
        {
          sub_AE9DF0(v143, v42, 2u);
          v43 = (__int64 *)v116;
        }
        else if ( v146 )
        {
          v79 = sub_168B9E0(v141);
          v82 = v116;
          v83 = v79;
          v84 = v142;
          if ( v142 )
          {
            v85 = *v142;
            v125 = (_QWORD *)v83;
            v84 = (void *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, __int64, __int64, unsigned __int64))(v85 + 32))(
                            v142,
                            v37,
                            v83,
                            v85,
                            v81,
                            v116);
            v83 = (__int64)v125;
            v82 = v116;
          }
          v124 = v82;
          src = v84;
          v86 = sub_1587BC0(v83, (__int64 *)&src, v83, v80, v81, v82);
          sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * v145 + 8), v44, 2u);
          v43 = (__int64 *)v124;
        }
        v117 = v43;
        sub_15F7200(v141);
        sub_168B9F0((__int64)v141, (__int64 *)(*a1 + 8), *(_DWORD *)(v112 + 24), 0x67u, 0);
        sub_15F7200(v141);
        v19 = *(unsigned __int16 *)(a3 + 18);
        v20 = *a1;
        v18 = v117;
        LOWORD(v19) = (unsigned __int16)v19 >> 3;
        goto LABEL_9;
      }
      v63 = sub_168B9E0(v141);
      v67 = (__int64)v125;
      v68 = v63;
      v69 = v142;
      if ( v142 )
      {
        v69 = (void *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, _QWORD *))(*v142 + 32LL))(
                        v142,
                        v37,
                        *v142,
                        v65,
                        v66,
                        v125);
        v67 = (__int64)v125;
      }
      v121 = v67;
      src = v69;
      v70 = sub_1587BC0(v68, (__int64 *)&src, v64, v65, v66, v67);
      v37 = (__int64 *)v112;
      sub_1DB86A0((unsigned __int8 **)(*v70 + 32LL * v145 + 8), v112);
      v41 = v121;
    }
    if ( v144 )
    {
      v37 = (_QWORD *)&byte_7;
      v120 = v41;
      sub_AE9DF0(v143, 7, 2u);
      v41 = v120;
    }
    else if ( v146 )
    {
      v122 = v41;
      v71 = sub_168B9E0(v141);
      v75 = v122;
      v76 = v71;
      v77 = v142;
      if ( v142 )
      {
        v77 = (void *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, unsigned __int64))(*v142 + 32LL))(
                        v142,
                        v37,
                        *v142,
                        v73,
                        v74,
                        v122);
        v75 = v122;
      }
      v123 = v75;
      src = v77;
      v78 = sub_1587BC0(v76, (__int64 *)&src, v72, v73, v74, v75);
      v37 = (_QWORD *)&byte_7;
      sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * v145 + 8), 7, 2u);
      v41 = v123;
    }
    goto LABEL_45;
  }
LABEL_9:
  v21 = *(_DWORD *)(v20 + 12632);
  if ( v21 )
    goto LABEL_10;
  v33 = *(_QWORD *)(a3 + 32);
  if ( (_BYTE)v19 != 6 )
  {
    v20 = v110;
    if ( *(_QWORD *)(a4 + 8) != v110 || v9 != v33 )
    {
      v111 = (unsigned __int8)v19;
      goto LABEL_11;
    }
LABEL_59:
    if ( v17 != *(_QWORD *)(a3 + 40) )
    {
LABEL_10:
      v111 = (unsigned __int8)v19;
      if ( (_BYTE)v19 != 6 )
      {
LABEL_11:
        v21 = *(_DWORD *)a4;
        goto LABEL_12;
      }
      goto LABEL_50;
    }
LABEL_60:
    v27 = a3;
    v26 = a3;
    goto LABEL_18;
  }
  if ( v33 )
  {
    v20 = v110;
    if ( *(_QWORD *)(a4 + 8) == v110 && v9 == v33 )
      goto LABEL_59;
  }
  else
  {
    if ( v9 | v110 )
    {
      v111 = 6;
      goto LABEL_12;
    }
    if ( v17 == *(_QWORD *)(a3 + 40) )
      goto LABEL_60;
  }
LABEL_50:
  v111 = 6;
  if ( *(_QWORD *)(a3 + 32) )
    goto LABEL_11;
  v21 = 0;
LABEL_12:
  v22 = *v18;
  v23 = (unsigned int)*(unsigned __int8 *)(*v18 + 16) - 47;
  if ( (unsigned int)v23 > 1 )
  {
    v114 = v19;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 > 1 )
      goto LABEL_16;
    v34 = sub_F63050(v22, v20, v23, v19);
    v19 = v114;
    v22 = v34;
    if ( !v34 )
      goto LABEL_16;
  }
  v113 = v19;
  v24 = sub_F60F10(v22, v20, v23, v19, v16, (__int64)v18);
  v25 = v24[5];
  v115 = (__int64)v24;
  if ( (v25 & 7) != 0 )
    goto LABEL_16;
  v125 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_16;
  if ( (unsigned int)v113 - 5 <= 1 )
    goto LABEL_16;
  v45 = sub_F58630(v111);
  if ( sub_17B1BF0(*a1, v115, v45, 0, v21, (__int64)v125) )
    goto LABEL_16;
  sub_168B9F0((__int64)v141, (__int64 *)(*a1 + 8), v21, 0x150Du, 0);
  v46 = (__int8 *)v115;
  if ( v144 )
  {
    v126 = (__int8 *)v115;
    sub_AE9DF0(v143, (__int64)v125, 5u);
    v46 = (__int8 *)v115;
  }
  else if ( v146 )
  {
    v88 = sub_168B9E0(v141);
    v92 = (__int8 *)v115;
    v93 = v88;
    v94 = (__int64)v142;
    if ( v142 )
    {
      v95 = *v142;
      v126 = (__int8 *)v93;
      v94 = (*(__int64 (__fastcall **)(_QWORD *))(v95 + 32))(v142);
      v93 = (__int64)v126;
      v92 = (__int8 *)v115;
    }
    v135 = v94;
    v126 = v92;
    v96 = sub_1587BC0(v93, &v135, v93, v89, v90, v91);
    v46 = v126;
    v97 = *v96 + 32LL * v145;
    v98 = *(unsigned __int8 **)(v97 + 8);
    if ( !v98 )
    {
      v102 = *(_QWORD *)(v97 + 16);
      v103 = *(_DWORD *)(v102 + 14976);
      if ( v103 )
      {
        v104 = (unsigned int)(v103 - 1);
        *(_DWORD *)(v102 + 14976) = v104;
        v98 = *(unsigned __int8 **)(v102 + 8 * v104 + 14848);
        v105 = *((unsigned int *)v98 + 134);
        *v98 = 0;
        v106 = *((_QWORD *)v98 + 66);
        *((_DWORD *)v98 + 106) = 0;
        v107 = v106 + (v105 << 6);
        while ( v106 != v107 )
        {
          while ( 1 )
          {
            v107 -= 64;
            v108 = *(void **)(v107 + 24);
            if ( v108 == (void *)(v107 + 40) )
              break;
            v130 = v107;
            v129 = v106;
            v128 = v98;
            v127 = v97;
            v126 = v46;
            operator delete(v108);
            v107 = v130;
            v46 = v126;
            v97 = v127;
            v98 = v128;
            if ( v106 == v130 )
              goto LABEL_124;
          }
        }
LABEL_124:
        *((_DWORD *)v98 + 134) = 0;
      }
      else
      {
        v127 = v97;
        v98 = (unsigned __int8 *)operator new(0x3A0u);
        *v98 = 0;
        *((_QWORD *)v98 + 12) = v98 + 112;
        *((_QWORD *)v98 + 16) = v98 + 144;
        *((_QWORD *)v98 + 20) = v98 + 176;
        *((_QWORD *)v98 + 24) = v98 + 208;
        *((_QWORD *)v98 + 28) = v98 + 240;
        *((_QWORD *)v98 + 32) = v98 + 272;
        *((_QWORD *)v98 + 36) = v98 + 304;
        *((_QWORD *)v98 + 40) = v98 + 336;
        *((_QWORD *)v98 + 44) = v98 + 368;
        *((_QWORD *)v98 + 48) = v98 + 400;
        *((_QWORD *)v98 + 52) = v98 + 432;
        *((_QWORD *)v98 + 13) = 0;
        v98[112] = 0;
        *((_QWORD *)v98 + 17) = 0;
        v98[144] = 0;
        *((_QWORD *)v98 + 21) = 0;
        v98[176] = 0;
        *((_QWORD *)v98 + 25) = 0;
        v98[208] = 0;
        *((_QWORD *)v98 + 29) = 0;
        v98[240] = 0;
        *((_QWORD *)v98 + 33) = 0;
        v98[272] = 0;
        *((_QWORD *)v98 + 37) = 0;
        v98[304] = 0;
        *((_QWORD *)v98 + 41) = 0;
        v98[336] = 0;
        *((_QWORD *)v98 + 45) = 0;
        v98[368] = 0;
        *((_QWORD *)v98 + 49) = 0;
        v98[400] = 0;
        *((_QWORD *)v98 + 53) = 0x800000000LL;
        v46 = v126;
        *((_QWORD *)v98 + 66) = v98 + 544;
        v97 = v127;
        *((_QWORD *)v98 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v97 + 8) = v98;
    }
    v99 = (__int64)v125;
    v98[*v98 + 1] = 5;
    v100 = *(_BYTE **)(v97 + 8);
    v101 = (unsigned __int8)*v100;
    *v100 = v101 + 1;
    *(_QWORD *)&v100[8 * v101 + 16] = v99;
  }
  v47 = v46[73];
  v127 = (__int64)v46;
  v48 = sub_F58620(v47 >> 5);
  v49 = sub_F58640(v48);
  LODWORD(v135) = v21;
  HIDWORD(v135) = v21;
  dest = &v139.m128_u16[4];
  v126 = &v139.m128_i8[8];
  src = v134;
  v125 = v134;
  *(_QWORD *)&v136[4] = 0;
  v137 = 0;
  v139.m128_u64[0] = 0;
  v139.m128_i8[8] = 0;
  v140 = 0;
  v136[0] = 1;
  sub_1DB8B90(&src, v49, (__int64)&v49[v50]);
  v51 = dest;
  v52 = v127;
  if ( src == v134 )
  {
    v87 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *(_BYTE *)dest = v134[0];
        v87 = n;
      }
      else
      {
        v125 = (_QWORD *)v127;
        memcpy(dest, src, n);
        v87 = n;
        v52 = v127;
      }
      v51 = dest;
    }
    v139.m128_u64[0] = v87;
    v51[v87] = 0;
    v51 = src;
    goto LABEL_68;
  }
  if ( dest == v126 )
  {
    v125 = (_QWORD *)v134[0];
    dest = src;
    v139 = _mm_loadh_ps((const double *)&v125);
    goto LABEL_115;
  }
  v125 = (_QWORD *)v134[0];
  v53 = v139.m128_u64[1];
  dest = src;
  v139 = _mm_loadh_ps((const double *)&v125);
  if ( !v51 )
  {
LABEL_115:
    v51 = v134;
    src = v134;
    goto LABEL_68;
  }
  src = v51;
  v134[0] = v53;
LABEL_68:
  n = 0;
  *v51 = 0;
  if ( src != v134 )
  {
    v125 = (_QWORD *)v52;
    operator delete(src);
    v52 = (__int64)v125;
  }
  if ( v144 )
  {
    if ( (_DWORD)v135 && HIDWORD(v135) )
    {
      v125 = (_QWORD *)v52;
      sub_1DBFA60((__int64 *)v143, (unsigned __int64)&v135);
      v52 = (__int64)v125;
    }
  }
  else if ( v146 )
  {
    v125 = (_QWORD *)v52;
    v54 = sub_168B9E0(v141);
    v58 = (__int64)v125;
    v59 = v54;
    v60 = v142;
    if ( v142 )
    {
      v61 = *v142;
      v126 = (__int8 *)v59;
      v60 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(v61 + 32))(v142);
      v59 = (__int64)v126;
      v58 = (__int64)v125;
    }
    v125 = (_QWORD *)v58;
    src = v60;
    v62 = sub_1587BC0(v59, (__int64 *)&src, v59, v55, v56, v57);
    v52 = (__int64)v125;
    if ( (_DWORD)v135 && HIDWORD(v135) )
    {
      sub_1DBFA60((__int64 *)(*v62 + 32LL * v145 + 8), (unsigned __int64)&v135);
      v52 = (__int64)v125;
    }
  }
  if ( dest != &v139.m128_u16[4] )
  {
    v118 = v52;
    operator delete(dest);
    v52 = v118;
  }
  v119 = v52;
  sub_15F7200(v141);
  sub_168B9F0((__int64)v141, (__int64 *)(*a1 + 8), *(_DWORD *)(v119 + 24), 0x73u, 0);
  sub_15F7200(v141);
LABEL_16:
  v26 = sub_A76250(*(_QWORD *)(*a1 + 248), v111, v9, v17, 0);
  v27 = v26;
  if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  LOWORD(v19) = *(_WORD *)(v26 + 18) >> 3;
LABEL_18:
  v28 = 16;
  if ( (_BYTE)v19 == 6 )
    v28 = 16LL * (*(_QWORD *)(v26 + 32) != 0);
  v29 = sub_1EA6140(a2, v27, v28, 8);
  if ( (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3) != 6 || (v31 = 0, *(_QWORD *)(a3 + 32)) )
    v31 = *(_DWORD *)a4;
  if ( (unsigned __int8)(*(_WORD *)(v29 + 18) >> 3) != 6 || *(_QWORD *)(v29 + 32) )
  {
    *(_DWORD *)v30 = v31;
    if ( (unsigned __int8)(*(_WORD *)(v29 + 18) >> 3) != 6 || *(_QWORD *)(v29 + 32) )
      *(_QWORD *)(v30 + 8) = v110;
  }
  return v27;
}
