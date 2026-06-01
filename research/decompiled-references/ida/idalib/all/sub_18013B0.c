__int64 __fastcall sub_18013B0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        int a9,
        __int64 a10,
        int a11,
        unsigned int a12,
        unsigned int a13,
        int a14,
        _QWORD *a15)
{
  char v17; // si
  unsigned __int8 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rdx
  _QWORD *v21; // r12
  __int64 v22; // rbp
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r13
  __int64 v31; // r14
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rax
  _QWORD *v34; // r12
  __int64 v35; // rbp
  __int64 v36; // rbx
  unsigned __int64 v37; // r14
  __int64 v38; // rax
  char v39; // si
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // r14
  __int64 v43; // rax
  unsigned __int8 v44; // cl
  int v45; // r11d
  unsigned __int64 v46; // r10
  bool v47; // dl
  int v48; // eax
  __int64 v49; // r14
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // r10
  __int64 v53; // r11
  int v54; // edx
  unsigned __int64 v55; // rax
  __m128i si128; // xmm0
  __int64 v57; // r13
  _DWORD *v58; // rdx
  _DWORD *v59; // r12
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // rdx
  size_t v65; // r12
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // r15
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // r12d
  __int64 v78; // rax
  char v79; // dl
  bool v80; // zf
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // eax
  int v86; // edx
  int v87; // esi
  unsigned __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r12
  void *v91; // rcx
  __int64 v92; // rsi
  __int64 v93; // rax
  size_t v94; // rax
  int v95; // edx
  int v96; // [rsp+0h] [rbp-278h]
  int v97; // [rsp+8h] [rbp-270h]
  char v98; // [rsp+8h] [rbp-270h]
  char v99; // [rsp+8h] [rbp-270h]
  int v100[2]; // [rsp+8h] [rbp-270h]
  int v101[2]; // [rsp+8h] [rbp-270h]
  int v103[2]; // [rsp+10h] [rbp-268h]
  int v104; // [rsp+10h] [rbp-268h]
  int v105[2]; // [rsp+10h] [rbp-268h]
  int v106[2]; // [rsp+10h] [rbp-268h]
  unsigned __int8 v107; // [rsp+18h] [rbp-260h]
  int v108; // [rsp+18h] [rbp-260h]
  int v109; // [rsp+18h] [rbp-260h]
  int v110[2]; // [rsp+18h] [rbp-260h]
  int v111[2]; // [rsp+18h] [rbp-260h]
  int v112; // [rsp+18h] [rbp-260h]
  int v113; // [rsp+20h] [rbp-258h]
  int v114; // [rsp+40h] [rbp-238h]
  int v115; // [rsp+48h] [rbp-230h]
  int v116[2]; // [rsp+4Ch] [rbp-22Ch] BYREF
  _BYTE v117[9]; // [rsp+57h] [rbp-221h] BYREF
  int v118[2]; // [rsp+60h] [rbp-218h] BYREF
  unsigned __int64 v119; // [rsp+68h] [rbp-210h]
  int v120; // [rsp+70h] [rbp-208h]
  int v121; // [rsp+78h] [rbp-200h]
  int v122; // [rsp+80h] [rbp-1F8h]
  int v123[2]; // [rsp+88h] [rbp-1F0h]
  int v124; // [rsp+90h] [rbp-1E8h]
  int v125; // [rsp+98h] [rbp-1E0h]
  int v126; // [rsp+9Ch] [rbp-1DCh]
  int v127[2]; // [rsp+A0h] [rbp-1D8h] BYREF
  int v128[2]; // [rsp+A8h] [rbp-1D0h]
  int v129[4]; // [rsp+B0h] [rbp-1C8h]
  int v130; // [rsp+C0h] [rbp-1B8h]
  int v131; // [rsp+C8h] [rbp-1B0h]
  int v132[4]; // [rsp+D0h] [rbp-1A8h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-198h]
  int v134[4]; // [rsp+F0h] [rbp-188h]
  void *v135; // [rsp+100h] [rbp-178h] BYREF
  int v136[4]; // [rsp+108h] [rbp-170h]
  int v137; // [rsp+118h] [rbp-160h] BYREF
  int v138[4]; // [rsp+120h] [rbp-158h] BYREF
  char v139; // [rsp+130h] [rbp-148h]
  int v140; // [rsp+138h] [rbp-140h]
  char v141; // [rsp+13Ch] [rbp-13Ch]
  int v142; // [rsp+140h] [rbp-138h]
  int v143; // [rsp+148h] [rbp-130h]
  void *v144; // [rsp+150h] [rbp-128h]
  int v145; // [rsp+158h] [rbp-120h]
  char v146; // [rsp+160h] [rbp-118h]
  __int64 v147; // [rsp+168h] [rbp-110h]
  int v148; // [rsp+170h] [rbp-108h]
  int v149; // [rsp+178h] [rbp-100h]
  __int64 v150; // [rsp+180h] [rbp-F8h]
  int v151; // [rsp+188h] [rbp-F0h]
  int v152[2]; // [rsp+190h] [rbp-E8h] BYREF
  int v153[2]; // [rsp+198h] [rbp-E0h]
  int v154[2]; // [rsp+1A0h] [rbp-D8h]
  void *v155; // [rsp+1A8h] [rbp-D0h] BYREF
  int v156; // [rsp+1B0h] [rbp-C8h]
  int v157; // [rsp+1B8h] [rbp-C0h] BYREF
  __int64 v158; // [rsp+1C0h] [rbp-B8h]
  int v159; // [rsp+1C8h] [rbp-B0h]
  char v160; // [rsp+1D0h] [rbp-A8h]
  __int128 v161; // [rsp+1E8h] [rbp-90h]
  __int64 v162; // [rsp+1F8h] [rbp-80h]
  __int64 v163; // [rsp+200h] [rbp-78h]
  __int64 v164; // [rsp+208h] [rbp-70h] BYREF
  int v165; // [rsp+210h] [rbp-68h]
  _QWORD v166[2]; // [rsp+218h] [rbp-60h] BYREF
  int v167; // [rsp+228h] [rbp-50h]
  int v168; // [rsp+22Ch] [rbp-4Ch]
  __int64 v169; // [rsp+230h] [rbp-48h]

  v17 = 0;
  v18 = a6;
  v19 = a1;
  v116[0] = a3;
  v20 = a12;
  HIBYTE(v115) = a6;
  v107 = (a6 | a11) ^ 1;
  v98 = 0;
  if ( (_BYTE)a13 )
  {
    v20 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v20 + 1) & 0x40) != 0 )
      v17 = (a9 | a6 | a11) ^ 1;
    v98 = v17;
  }
  if ( a10 )
  {
    v21 = nullptr;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
      v21 = sub_169D2C0(a1, a10, v20, a13, a5, a6);
    goto LABEL_8;
  }
  if ( !a5 )
  {
    v21 = nullptr;
    goto LABEL_8;
  }
  if ( *(_DWORD *)a5 && *(_DWORD *)(a5 + 4) || (v21 = *(_QWORD **)(a5 + 8)) != nullptr )
  {
    v24 = sub_16A2930(a1, a5, 0, a13, a5, a6);
    v21 = (_QWORD *)v24;
    if ( v24 )
    {
      if ( (unsigned __int8)sub_B8E180(v24) || !(unsigned __int8)sub_169F990(a1, a5, (unsigned __int64)v21) )
        goto LABEL_8;
      return 0;
    }
    if ( !sub_169D3A0(a1, a5, v25, v26, v27, v28) )
      return 0;
    if ( v107 )
    {
      if ( !a14 )
        return 0;
      v77 = *(_DWORD *)a5;
      sub_168BB30((__int64)v152, (__int64 *)(a1 + 8), *(_DWORD *)a5, 0x13u, 0);
      *(_QWORD *)v132 = sub_E918E0(*(_QWORD **)(a1 + 248), *(_QWORD *)(a5 + 8), a2);
      v78 = sub_17AE3B0((__int64)v152, (__int64 *)v132);
      v135 = *(void **)v78;
      v136[0] = *(_DWORD *)(v78 + 8);
      v136[1] = *(_DWORD *)(v78 + 12);
      *(_QWORD *)&v136[2] = *(_QWORD *)(v78 + 16);
      v79 = *(_BYTE *)(v78 + 24);
      LOBYTE(v149) = 0;
      v80 = *(_BYTE *)(v78 + 120) == 0;
      LOBYTE(v137) = v79;
      if ( !v80 )
      {
        *(_QWORD *)v101 = v78;
        sub_FC70F0((__int64)v138, v78 + 32);
        v78 = *(_QWORD *)v101;
        v147 = *(_QWORD *)(*(_QWORD *)v101 + 104LL);
        v95 = *(_DWORD *)(*(_QWORD *)v101 + 112LL);
        LOBYTE(v149) = 1;
        v148 = v95;
      }
      v150 = *(_QWORD *)(v78 + 128);
      sub_15F7200(v152);
      if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
      {
        v94 = j__strlen("typename ");
        sub_9EC740((__int64)v152, v77, "typename ", v94, 0);
        sub_1589170((__int64)&v135, v152);
        if ( v155 != &v157 )
          operator delete(v155);
      }
      sub_15F7200(&v135);
      if ( !(_BYTE)a12 )
      {
        v85 = sub_15AB9E0(a5, *(_QWORD **)(a1 + 248), v81, v82, v83, v84);
        v87 = 5;
        return sub_1CD4E00(a1, v87, 0, v85, v86, a2, v116[0], 1);
      }
    }
    else if ( !(_BYTE)a12 )
    {
      v85 = sub_15AB9E0(a5, *(_QWORD **)(a1 + 248), v73, v74, v75, v76);
      v87 = 6;
      return sub_1CD4E00(a1, v87, 0, v85, v86, a2, v116[0], 1);
    }
    return sub_1CD6700(a1, a4, 0, a5, a2, (unsigned int)v116[0], v107);
  }
LABEL_8:
  *(_QWORD *)v153 = &v155;
  *(_QWORD *)v152 = 0;
  v165 = v116[0];
  *(_QWORD *)v154 = 0x800000000LL;
  v161 = 0;
  v162 = 0;
  v163 = a1;
  v164 = a2;
  sub_B85890(v166, a2);
  v166[1] = 0;
  v167 = v18;
  v168 = 0;
  v169 = 0x101010000LL;
  sub_1A395A0(v152);
  if ( v21 )
  {
    sub_1A48440(a1, v152, v21, 0);
    if ( a10 && !v154[0] )
      sub_1A49A10(a1, v152, a4, 0, 0);
  }
  else
  {
    sub_1A49A10(a1, v152, a4, 0, 0);
    if ( !v154[0]
      && (**(_BYTE **)(a1 + 232) & 0x20) != 0
      && (!a5 || (!*(_DWORD *)a5 || !*(_DWORD *)(a5 + 4)) && !*(_QWORD *)(a5 + 8)) )
    {
      v29 = sub_18010C0((__int64 *)a1, a2, v116[0], 0.0, a8);
      if ( v29 )
        goto LABEL_40;
    }
  }
  switch ( v152[0] )
  {
    case 0:
      if ( !a15 )
        goto LABEL_16;
      BYTE1(v130) = v18;
      *(_QWORD *)v127 = &off_2BC6988;
      *(_OWORD *)v129 = 0;
      BYTE2(v130) = v98;
      HIBYTE(v130) = 1;
      *(_QWORD *)v128 = 16777217;
      LOBYTE(v130) = 1;
      sub_1A6BD60((unsigned int)&v135, a1, (unsigned int)&v164, v18, a4, a5, (__int64)v127, 1, 0, 0, 0, 1);
      v45 = v136[0];
      *(_OWORD *)v132 = 0;
      v46 = (unsigned __int64)v135 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)&v117[1] = 0;
      if ( ((unsigned __int8)v135 & 7) != 0 )
        v46 = 0;
      v122 = 0;
      *(_OWORD *)ptr = 0;
      *(_QWORD *)v123 = v46;
      v126 = v116[0];
      v125 = v116[0];
      *(_OWORD *)v134 = 0;
      LOBYTE(v97) = *(_QWORD *)v136 != 0 && a5 != 0;
      if ( (_BYTE)v97 )
      {
        v114 = v46;
        v112 = v136[0];
        sub_15AB890(
          (__int64 *)v132,
          *(_QWORD **)(a1 + 248),
          *(__int64 *)v136,
          ((unsigned __int64)(unsigned int)v116[0] << 32) | (unsigned int)v116[0]);
        v45 = v112;
        LODWORD(v46) = v114;
        if ( !v135 )
        {
LABEL_13:
          if ( HIDWORD(ptr[1]) )
            free(ptr[0]);
          goto LABEL_15;
        }
        v47 = 0;
      }
      else
      {
        if ( !v135 || a2 == v46 && !*(_QWORD *)v136 )
        {
LABEL_15:
          sub_17A1D90(&v135);
          goto LABEL_16;
        }
        v47 = a5 == 0;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0
        || v47
        || (v114 = v46,
            v108 = v45,
            v48 = sub_1CE58C0(a1, 0, (__int64)&v117[1], (__int64)v117, 0),
            v45 = v108,
            LODWORD(v46) = v114,
            !v48) )
      {
        v109 = v45;
        v104 = v46;
        v49 = sub_18013B0(
                a1,
                (unsigned __int8)a9,
                a10,
                (unsigned __int8)a11,
                (unsigned __int8)a12,
                (unsigned __int8)a13,
                0,
                0);
        if ( v49 )
        {
          sub_168B9B0((__int64)v118, a1 + 8, 5375);
          sub_AE9DF0((unsigned __int8 **)v118, v164, 9u);
          sub_AE9DF0((unsigned __int8 **)v118, HIBYTE(v115), 2u);
          sub_1A60AF0(
            a1,
            (int)&v135,
            (int)v118,
            1,
            v50,
            v51,
            v96,
            v97,
            v104,
            v109,
            v113,
            v18,
            a11,
            a9,
            v114,
            v115,
            v116[1],
            *(int *)&v117[1],
            v118[0],
            v119,
            v120,
            v121,
            v122,
            v123[0],
            v124,
            v125,
            v127[0],
            v128[0],
            v129[0],
            v129[2],
            v130,
            v131,
            v132[0],
            v132[2],
            (int)ptr[0],
            (int)ptr[1],
            v134[0],
            v134[2],
            (int)v135,
            v136[0],
            v136[2],
            v137,
            v138[0],
            v138[2],
            v139,
            v140,
            v142,
            v143,
            v144,
            v145,
            v146,
            v147,
            v148,
            v149,
            v150,
            v151,
            v152[0],
            v153[0],
            v154[0],
            (int)v155,
            v156,
            v157,
            v158,
            v159,
            v160);
          v52 = *(_QWORD *)v105;
          v53 = *(_QWORD *)v110;
          if ( *(_QWORD *)v118 && v119 )
          {
            *(_QWORD *)v111 = *(_QWORD *)v105;
            *(_QWORD *)v106 = v53;
            sub_1580C40(v119, *(unsigned __int64 *)v118);
            v52 = *(_QWORD *)v111;
            v53 = *(_QWORD *)v106;
          }
          if ( v99 )
          {
            *(_QWORD *)v100 = v52;
            sub_15AB890(
              (__int64 *)a5,
              *(_QWORD **)(a1 + 248),
              v53,
              ((unsigned __int64)(unsigned int)v116[0] << 32) | (unsigned int)v116[0]);
            v52 = *(_QWORD *)v100;
          }
          v54 = HIDWORD(ptr[1]);
          v22 = v49;
          *a15 = v52;
          if ( v54 )
            free(ptr[0]);
          sub_17A1D90(&v135);
          goto LABEL_17;
        }
      }
      goto LABEL_13;
    case 1:
      if ( a14 != 1 )
        goto LABEL_16;
      v55 = sub_AB77C0(*(_QWORD **)(a1 + 248), 6, *(_QWORD *)(a5 + 8), a2);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
      v57 = v55;
      v140 = 0;
      *(__m128i *)v136 = si128;
      v135 = &v137;
      v141 = 0;
      sub_1EA6140(&v135, v55, 24, 8);
      *v58 = 0;
      v59 = v58;
      sub_15AB9E0(a5, *(_QWORD **)(a1 + 248), (__int64)v58, v60, v61, v62);
      v63 = v116[0];
      *((_QWORD *)v59 + 1) = v64;
      v59[4] = v63;
      v65 = *(_QWORD *)v136 - *(_QWORD *)&v136[2];
      v69 = sub_A81BC0(*(_QWORD **)(a1 + 248), v57, v136[0] - v136[2], v66, v67, v68);
      memcpy(v69 + 1, (char *)v135 + *(_QWORD *)&v136[2], v65);
      v22 = sub_1E61050(a1, v57, v69, *(double *)si128.m128i_i64, a8);
      if ( v135 != &v137 && v135 )
        operator delete[](v135);
      goto LABEL_17;
    case 2:
      v30 = **(_QWORD **)v153 & 0xFFFFFFFFFFFFFFF8LL;
      v31 = sub_16C47B0(v30);
      if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 53 >= 2 )
        v30 = 0;
      goto LABEL_35;
    case 3:
    case 4:
      goto LABEL_16;
    case 5:
      if ( v152[1] == 4 || *(_QWORD *)v153 + 8LL * (unsigned int)v154[0] == *(_QWORD *)v153 )
        goto LABEL_16;
      v30 = 0;
      *(_QWORD *)v103 = v21;
      v34 = *(_QWORD **)v153;
      v35 = 0;
      v36 = *(_QWORD *)v153 + 8LL * (unsigned int)v154[0];
      if ( v98 )
      {
        do
        {
          v42 = *v34 & 0xFFFFFFFFFFFFFFF8LL;
          v43 = sub_16C47B0(v42);
          v44 = *(_BYTE *)(v43 + 28) & 0x7F;
          if ( ((v44 + 71) & 0x7Fu) <= 0xA
            || v44 == 20
            || (unsigned int)v44 - 68 <= 6
            && (v40 = (v44 + 67) & 0x7F, (unsigned __int8)v40 <= 0xBu)
            && (v41 = 2689, _bittest64(&v41, v40)) )
          {
            if ( !v35 || *(_DWORD *)(v43 + 24) < *(_DWORD *)(v35 + 24) )
            {
              v30 = 0;
              v35 = v43;
              if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 53 <= 1 )
                v30 = v42;
            }
          }
          ++v34;
        }
        while ( (_QWORD *)v36 != v34 );
      }
      else
      {
        do
        {
          v37 = *v34 & 0xFFFFFFFFFFFFFFF8LL;
          v38 = sub_16C47B0(v37);
          v39 = *(_BYTE *)(v38 + 28) & 0x7F;
          if ( (((v39 + 71) & 0x7Fu) <= 0xA || v39 == 20) && (!v35 || *(_DWORD *)(v38 + 24) < *(_DWORD *)(v35 + 24)) )
          {
            v30 = 0;
            v35 = v38;
            if ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 53 <= 1 )
              v30 = v37;
          }
          ++v34;
        }
        while ( (_QWORD *)v36 != v34 );
      }
      v31 = v35;
      v21 = *(_QWORD **)v103;
      v19 = a1;
      if ( !v31 )
        goto LABEL_16;
LABEL_35:
      v32 = *(_BYTE *)(v31 + 28) & 0x7F;
      if ( (unsigned int)v32 - 58 <= 9 )
      {
        v33 = sub_17C3D60(v19, (__int64)v21, v107, v31, v116[0]);
        if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          if ( v30 )
            v33 = sub_A77600(*(_QWORD *)(v19 + 248), v30, v33);
          goto LABEL_39;
        }
LABEL_16:
        v22 = 0;
        *(_WORD *)((char *)&v169 + 3) = 0;
        goto LABEL_17;
      }
      if ( v32 != 20 )
      {
        if ( v32 == 57 )
        {
          sub_18F5260(v19, v31, (unsigned int)v116, 1, 0, 0, 0, 0, 0);
          v22 = *(_QWORD *)(*(_QWORD *)(v19 + 248) + 18720LL);
          goto LABEL_17;
        }
        if ( v98 )
        {
          if ( (unsigned int)v32 - 68 <= 6 )
          {
            v88 = (v32 + 67) & 0x7F;
            if ( (unsigned __int8)v88 <= 0xBu )
            {
              v89 = 2689;
              if ( _bittest64(&v89, v88) )
              {
                v90 = *(_QWORD *)(v19 + 248);
                if ( v30 )
                {
                  sub_F22B10((unsigned __int64 *)v132, v30);
                  v91 = *(void **)v132;
                }
                else
                {
                  sub_F22AA0((unsigned __int64 *)&v135, v31);
                  v91 = v135;
                }
                v92 = 0;
                if ( a5 )
                  v92 = *(_QWORD *)(a5 + 8);
                v93 = sub_A80CA0(v90, v92, 0, (__int64)v91);
                v33 = sub_AB7C40(*(_QWORD **)(v19 + 248), v93, 0, 0);
                if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                  goto LABEL_39;
              }
            }
          }
        }
        goto LABEL_16;
      }
      sub_18F5260(v19, v31, (unsigned int)v116, 1, 0, 0, 0, 0, 0);
      if ( (_BYTE)a9 )
        goto LABEL_16;
      v33 = sub_A82070(*(_QWORD *)(v19 + 248), v31, 0, v70, v71, v72);
      if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_16;
LABEL_39:
      v29 = sub_179C050(v19, a5, v33, v116[0], a12, 0.0, a8);
LABEL_40:
      v22 = v29;
LABEL_17:
      sub_169D230((__int64)v152);
      return v22;
    default:
      BUG();
  }
}
