__m128i *__fastcall sub_83CB20(__m128i *a1, __int64 a2, _DWORD *a3, unsigned int a4, __m128i *a5, __int64 a6)
{
  char v9; // r15
  unsigned __int64 v10; // r13
  bool v12; // al
  __int64 v13; // rdx
  unsigned __int8 **v14; // rax
  __int64 v15; // rdx
  unsigned int v17; // eax
  __int64 v18; // r10
  bool v19; // r9
  unsigned int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // r9
  unsigned int v24; // r11d
  __int64 v25; // r10
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  _WORD *v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned __int8 **v32; // rax
  unsigned __int8 **v33; // rbp
  unsigned int v34; // eax
  unsigned int i; // edx
  unsigned __int8 **v36; // rax
  unsigned __int8 **v37; // r14
  unsigned __int64 v38; // r8
  unsigned __int8 v39; // al
  _DWORD *v40; // rax
  __int64 v41; // rdx
  __m128i v42; // xmm0
  char v43; // al
  char v44; // al
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __m128i v50; // xmm0
  unsigned __int64 v51; // rax
  __int64 v52; // r15
  __int64 v53; // rsi
  unsigned int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  _WORD *v60; // rax
  char v61; // al
  _WORD *v62; // r8
  bool v63; // r9
  unsigned int v64; // r11d
  char v65; // al
  unsigned __int8 **v66; // rax
  __int64 v67; // r8
  unsigned int v68; // eax
  __int64 v69; // rax
  __int64 v70; // r8
  char v71; // al
  int v72; // r11d
  __int64 v73; // rax
  __int64 v74; // r10
  unsigned __int64 v75; // rax
  unsigned int v76; // eax
  char v77; // al
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int8 **v80; // rax
  unsigned __int8 **v81; // rax
  unsigned __int8 **v82; // r14
  unsigned __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  bool v86; // cc
  unsigned __int64 v87; // rax
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  bool v91; // r9
  bool v92; // al
  unsigned __int8 **v93; // rdi
  char v94; // al
  __int64 v95; // rax
  unsigned __int8 **v96; // rax
  int v97; // r11d
  unsigned __int8 **v98; // r15
  char v99; // al
  __int64 v100; // rax
  unsigned __int64 v101; // rdx
  int v102; // eax
  __int64 v103; // rax
  unsigned __int8 **v104; // rax
  unsigned __int8 **v105; // rbp
  unsigned int v107; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v108; // [rsp+8h] [rbp-E0h]
  unsigned int v109; // [rsp+8h] [rbp-E0h]
  _WORD *v110; // [rsp+8h] [rbp-E0h]
  unsigned int v111; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v112; // [rsp+8h] [rbp-E0h]
  __int64 v113; // [rsp+8h] [rbp-E0h]
  unsigned int v114; // [rsp+8h] [rbp-E0h]
  bool v115; // [rsp+10h] [rbp-D8h]
  bool v116; // [rsp+10h] [rbp-D8h]
  __int64 v117; // [rsp+10h] [rbp-D8h]
  bool v118; // [rsp+10h] [rbp-D8h]
  __int64 v119; // [rsp+10h] [rbp-D8h]
  char v120; // [rsp+10h] [rbp-D8h]
  __int64 v121; // [rsp+10h] [rbp-D8h]
  int v122; // [rsp+10h] [rbp-D8h]
  int v123; // [rsp+10h] [rbp-D8h]
  unsigned int v124; // [rsp+18h] [rbp-D0h]
  _WORD *v125; // [rsp+18h] [rbp-D0h]
  unsigned int v126; // [rsp+18h] [rbp-D0h]
  bool v127; // [rsp+18h] [rbp-D0h]
  bool v128; // [rsp+18h] [rbp-D0h]
  unsigned int v129; // [rsp+18h] [rbp-D0h]
  bool v130; // [rsp+18h] [rbp-D0h]
  __int64 v131; // [rsp+20h] [rbp-C8h]
  unsigned int v132; // [rsp+20h] [rbp-C8h]
  int v133; // [rsp+20h] [rbp-C8h]
  __int64 v134; // [rsp+28h] [rbp-C0h]
  __int64 v135; // [rsp+30h] [rbp-B8h]
  __int64 v136; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE *v137[4]; // [rsp+50h] [rbp-98h] BYREF
  __m128i v138; // [rsp+70h] [rbp-78h] BYREF

  v9 = (a5[8].m128i_i8[0] & 2) != 0;
  if ( (a5[8].m128i_i8[0] & 2) != 0 )
    goto LABEL_6;
  v10 = a4;
  v12 = sub_69F610(a5);
  if ( !v12 )
  {
    v13 = 2168;
LABEL_4:
    v14 = (unsigned __int8 **)sub_A2E130(a2, a3, v13, 0);
    if ( v14 )
      sub_823450(v14, (unsigned int)v10);
    goto LABEL_8;
  }
  v115 = v12;
  v17 = sub_69F3D0((__int64)a5);
  v18 = 0;
  v19 = v115;
  v20 = v17;
  if ( v17 )
  {
    v34 = sub_69F3D0((__int64)a5);
    v18 = *(_QWORD *)(a2 + 32);
    v20 = *(_DWORD *)(a2 + 40);
    v19 = v115;
    for ( i = *(_DWORD *)(v18 + 176); v34 < i; i = *(_DWORD *)(v18 + 176) )
    {
      v18 = *(_QWORD *)(v18 + 16);
      --v20;
    }
    if ( v34 != i )
    {
      v36 = (unsigned __int8 **)sub_A2E130(a2, a3, 2221, 1);
      v37 = v36;
      if ( v36 )
      {
        sub_823450(v36, (unsigned int)v10);
        sub_823450(v37, (a5->m128i_i8[0] & 3) == 0);
      }
      sub_8219E0(a2, a5->m128i_i64[0], a5->m128i_i64[1]);
      a1->m128i_i64[0] = 0;
      a1->m128i_i64[1] = 0;
      a1[1].m128i_i64[0] = 0;
      a1[1].m128i_i64[1] = 0;
      return a1;
    }
  }
  v21 = 1027;
  if ( _bittest64(&v21, v10) )
  {
    if ( (_DWORD)v10 == 10 )
      goto LABEL_13;
    goto LABEL_29;
  }
  if ( (unsigned int)(v10 - 5) <= 2 )
  {
    v19 = 0;
    goto LABEL_13;
  }
  if ( (unsigned int)(v10 - 8) > 1 )
  {
LABEL_29:
    if ( (a6 & 4) != 0 || (byte_8[a6 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
    {
      if ( (*(_BYTE *)(sub_A2CB40(a2) + 1) & 8) != 0 )
      {
        v32 = (unsigned __int8 **)sub_A2E130(a2, a3, 2175, 0);
        v33 = v32;
        if ( v32 )
        {
          sub_823450(v32, (unsigned int)v10);
          sub_8356A0(v33, a6, 8u);
        }
        goto LABEL_8;
      }
      goto LABEL_6;
    }
  }
LABEL_13:
  v131 = v18;
  v124 = v20;
  v116 = v19;
  v138 = _mm_loadu_si128(a5);
  v136 = 0;
  v134 = sub_69F240(v138.m128i_i64);
  v22 = sub_A2CB40(a2);
  v23 = v116;
  v24 = v124;
  v25 = v131;
  if ( (*(_BYTE *)(v22 + 1) & 0x20) != 0 )
  {
    v43 = sub_69F550(a5, (_QWORD *)(a2 + 840));
    v23 = v116;
    v24 = v124;
    v25 = v131;
    if ( v43 )
    {
      v44 = sub_81F8C0(a2, a5->m128i_i64[0], a5->m128i_i64[1], 0);
      v23 = v116;
      v24 = v124;
      v25 = v131;
      if ( v44 )
      {
        v136 = *(_QWORD *)(a2 + 864);
        goto LABEL_49;
      }
    }
  }
  v26 = a5->m128i_i64[0];
  if ( !a5->m128i_i64[0] )
    goto LABEL_18;
  v27 = a5->m128i_i64[0] & 3;
  if ( (v26 & 3) == 0 )
  {
    v38 = v26 & 0xFFFFFFFFFFFFFFFCLL;
    v39 = *(_BYTE *)((v26 & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7F;
    if ( v39 == 29 )
    {
      if ( (unsigned int)v10 > 4 )
      {
        if ( (unsigned int)(v10 - 8) > 1 )
          goto LABEL_44;
      }
      else if ( (unsigned int)v10 <= 1 )
      {
LABEL_44:
        v108 = v38;
        v40 = (_DWORD *)sub_7AADA0(v38);
        if ( *v40 )
        {
          v41 = *(_QWORD *)(v108 + 48);
          v42 = _mm_loadu_si128(a5);
          a1[1].m128i_i64[0] = (__int64)v40;
          a1[1].m128i_i64[1] = v41;
          *a1 = v42;
          return a1;
        }
        v80 = (unsigned __int8 **)sub_A2E130(a2, a3, 2295, 0);
        if ( v80 )
          sub_8356A0(v80, *(_QWORD *)(v108 + 48), 8u);
        goto LABEL_8;
      }
      goto LABEL_68;
    }
    if ( v39 != 27 && v39 != 28 )
    {
      if ( (unsigned int)v39 - 38 > 6 )
        goto LABEL_6;
      v112 = v38;
      v135 = v25;
      v132 = v24;
      v128 = v23;
      v69 = sub_77B9E0(v38, *(_QWORD *)(a2 + 16), v27);
      v70 = v112;
      if ( v69 )
        v70 = v69;
      v113 = v70;
      if ( *(char *)(v70 + 28) < 0 )
        goto LABEL_6;
      v71 = sub_B05C30(v134, *(_QWORD *)(a2 + 16));
      v72 = v132;
      v120 = v71;
      v73 = *(_QWORD *)(a2 + 840);
      v74 = v135;
      if ( v73 )
      {
        if ( (v73 & 3) == 0 )
        {
          v75 = v73 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)(v75 + 28) & 0x7Fu) - 38 <= 6 && (*(_BYTE *)(v75 + 28) & 0x7F) != 0x29 )
            v9 = *(_BYTE *)(v75 + 97) >> 7;
        }
      }
      if ( v135 || v128 && (*(_BYTE *)(v113 + 28) & 0x7F) == 0x29 )
        goto LABEL_110;
      v90 = sub_A2CB40(a2);
      v91 = v128;
      v72 = v132;
      v74 = 0;
      if ( (*(_BYTE *)(v90 + 1) & 0x20) != 0 )
      {
        v94 = sub_81F8C0(a2, a5->m128i_i64[0], a5->m128i_i64[1], 0);
        v72 = v132;
        v74 = 0;
        if ( v94 )
          goto LABEL_110;
        v91 = v128;
      }
      if ( (unsigned int)v10 > 4 )
      {
        if ( (unsigned int)(v10 - 8) > 1 )
          goto LABEL_129;
      }
      else if ( (unsigned int)v10 <= 1 )
      {
LABEL_129:
        if ( (*(_BYTE *)(v113 + 28) & 0x7F) == 0x29 || *(char *)(v113 + 97) >= 0 )
        {
          v133 = v72;
          v130 = v91;
          if ( (*(_BYTE *)sub_A2CB40(a2) & 8) != 0 && v9 )
            goto LABEL_6;
          v92 = sub_83CAB0(*(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL));
          v72 = v133;
          v74 = 0;
          if ( v92 )
          {
            if ( !v120 )
            {
              if ( !v130 )
                goto LABEL_89;
              if ( (*(_BYTE *)(sub_A2CB40(a2) + 1) & 8) != 0 )
              {
                v93 = (unsigned __int8 **)sub_A2E130(a2, a3, 2227, 1);
                if ( v93 )
                  sub_8356A0(v93, v113, 0xAu);
LABEL_139:
                sub_A2DD70(a2, *(unsigned int *)(v113 + 24), 105);
                goto LABEL_8;
              }
              goto LABEL_6;
            }
          }
          else
          {
            if ( !v130 )
              goto LABEL_89;
            if ( !v120 )
            {
              if ( (*(_BYTE *)(sub_A2CB40(a2) + 1) & 8) != 0 )
              {
                v103 = sub_A2CB40(a2);
                v104 = (unsigned __int8 **)sub_A2E130(
                                             a2,
                                             a3,
                                             (unsigned int)((*(_BYTE *)(v103 + 1) & 0x10) == 0) + 2228,
                                             1);
                v105 = v104;
                if ( v104 )
                {
                  sub_8356A0(v104, v113, 0xAu);
                  sub_8356A0(v105, v134, 8u);
                }
                goto LABEL_139;
              }
LABEL_6:
              v15 = 110;
LABEL_7:
              sub_A2E130(a2, a3, v15, 0);
              goto LABEL_8;
            }
            if ( !*(_BYTE *)(a2 + 962)
              || (v99 = sub_B19540(*(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(a2 + 16)), v72 = v133, !v99)
              || (v100 = sub_798D40(v113), v102 = sub_7884D0(v113, v100, v101), v72 = v133, v74 = 0, v102) )
            {
              v122 = v72;
              if ( (*(_BYTE *)(sub_A2CB40(a2) + 1) & 8) != 0 )
              {
                v95 = sub_A2CB40(a2);
                v96 = (unsigned __int8 **)sub_A2E240(
                                            a2,
                                            a3,
                                            (unsigned int)((*(_BYTE *)(v95 + 1) & 0x10) == 0) + 2228,
                                            1);
                v97 = v122;
                v98 = v96;
                if ( v96 )
                {
                  sub_8356A0(v96, v113, 0xAu);
                  sub_8356A0(v98, v134, 8u);
                  v97 = v122;
                }
                v123 = v97;
                sub_A2DD70(a2, *(unsigned int *)(v113 + 24), 105);
                v72 = v123;
                v74 = 0;
              }
              else
              {
                sub_A2E240(a2, a3, 110, 0);
                v72 = v122;
                v74 = 0;
              }
            }
          }
        }
LABEL_110:
        v121 = v74;
        v129 = v72;
        v76 = sub_69F3F0((__int64)a5);
        v77 = sub_836260(a2, a3, (_QWORD *)v113, v121, v76, &v136);
        v25 = v121;
        v24 = v129;
        if ( !v77 )
          goto LABEL_8;
LABEL_49:
        v45 = a5->m128i_i64[0];
        if ( a5->m128i_i64[0] && (v45 & 3) == 0 )
          v24 += (*(_BYTE *)(v45 + 28) & 0x7F) == 41;
        if ( !v25 )
        {
LABEL_53:
          if ( (unsigned int)v10 > 4 )
          {
            if ( (unsigned int)(v10 - 8) > 1 )
              goto LABEL_56;
          }
          else if ( (unsigned int)v10 <= 1 )
          {
LABEL_56:
            v46 = _mm_loadu_si128(a5);
            a1[1].m128i_i64[0] = v136;
            *a1 = v46;
            a1[1].m128i_i64[1] = v134;
            return a1;
          }
          if ( v24 >= *(_DWORD *)(a2 + 948) )
            goto LABEL_56;
LABEL_8:
          a1->m128i_i64[0] = 0;
          a1->m128i_i64[1] = 0;
          a1[1].m128i_i64[0] = 0;
          a1[1].m128i_i64[1] = 0;
          return a1;
        }
LABEL_64:
        v109 = v24;
        v48 = sub_A2CB40(a2);
        v24 = v109;
        if ( (*(_BYTE *)(v48 + 1) & 0x20) != 0 && **(_BYTE **)(a2 + 24) )
          goto LABEL_8;
        goto LABEL_53;
      }
LABEL_68:
      v15 = 2241;
      goto LABEL_7;
    }
    if ( (unsigned int)v10 > 4 )
    {
      if ( (unsigned int)(v10 - 8) <= 1 )
        goto LABEL_68;
    }
    else if ( (unsigned int)v10 > 1 )
    {
      goto LABEL_68;
    }
    v49 = *(_QWORD *)(v38 + 48);
    v50 = _mm_loadu_si128(a5);
    a1[1].m128i_i64[0] = v38 + 64;
    a1[1].m128i_i64[1] = v49;
    *a1 = v50;
    return a1;
  }
  if ( v27 != 3 )
  {
    if ( v27 == 1 )
    {
      v60 = (_WORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
      v28 = v60;
      if ( v25 )
      {
LABEL_19:
        v117 = v25;
        v107 = v24;
        v125 = v28;
        v29 = sub_69F3F0((__int64)a5);
        v24 = v107;
        v30 = *(_QWORD *)(v117 + 88);
        if ( v30 )
        {
          v31 = v117 + 80;
          do
          {
            if ( *(_QWORD *)(v30 + 32) < (unsigned __int64)v125
              || *(_WORD **)(v30 + 32) == v125 && *(_DWORD *)(v30 + 40) < v29 )
            {
              v30 = *(_QWORD *)(v30 + 24);
            }
            else
            {
              v31 = v30;
              v30 = *(_QWORD *)(v30 + 16);
            }
          }
          while ( v30 );
          if ( v31 != v117 + 80 && *(_WORD **)(v31 + 32) == v125 && v29 == *(_DWORD *)(v31 + 40) )
            v30 = v31 + 48;
        }
        v47 = a5->m128i_i64[0];
        v136 = v30;
        if ( v47 && (v47 & 3) == 0 )
          v24 = ((*(_BYTE *)(v47 + 28) & 0x7F) == 41) + v107;
        goto LABEL_64;
      }
      v126 = v24;
      if ( v60 && (*v60 & 0x1FF) == 0x31 )
      {
        v118 = v23;
        v110 = v60;
        v61 = sub_8C7570(v60, *(_QWORD *)(a2 + 16), 1, v60);
        v62 = v110;
        v63 = v118;
        v64 = v126;
        if ( v61
          || (v119 = (__int64)v110,
              v111 = v126,
              v127 = v63,
              v65 = sub_81F8C0(a2, a5->m128i_i64[0], a5->m128i_i64[1], 0),
              v64 = v111,
              v62 = (_WORD *)v119,
              v65) )
        {
          v114 = v64;
          v78 = sub_7A7530(*((_QWORD *)v62 + 2) & 0xFFFFFFFFFFFFFFF8LL, 0);
          v24 = v114;
          v136 = v78;
          v79 = a5->m128i_i64[0];
          if ( a5->m128i_i64[0] && (v79 & 3) == 0 )
            v24 = ((*(_BYTE *)(v79 + 28) & 0x7F) == 41) + v114;
          goto LABEL_53;
        }
        if ( v127 )
        {
          v66 = (unsigned __int8 **)sub_A2E130(a2, a3, 2170, 1);
          v67 = v119;
          if ( v66 )
          {
            sub_823450(v66, (unsigned int)v10);
            v67 = v119;
          }
          v68 = sub_8124E0(v67);
          sub_A2DD70(a2, v68, 2285);
          a1->m128i_i64[0] = 0;
          a1->m128i_i64[1] = 0;
          a1[1].m128i_i64[0] = 0;
          a1[1].m128i_i64[1] = 0;
          return a1;
        }
LABEL_89:
        v59 = _mm_loadu_si128(a5);
        a1[1].m128i_i64[0] = 0;
        *a1 = v59;
        a1[1].m128i_i64[1] = v134;
        return a1;
      }
LABEL_88:
      if ( v23 )
      {
        v138.m128i_i8[4] &= ~1u;
        v138.m128i_i32[0] = 0;
        sub_81F730((__int64)a5, (__int64)&v138);
        v81 = (unsigned __int8 **)sub_A2E130(a2, a3, 2172, 0);
        v82 = v81;
        if ( v81 )
        {
          sub_823450(v81, (unsigned int)v10);
          v83 = sub_6C4DA0(*(_QWORD *)(a2 + 16), a6, 1u);
          sub_6A3290((__int64)v137, (__int64)&v138, *(_QWORD *)(a2 + 16), v83, v84, v85);
          sub_838D50(v82, v137[0], (size_t)v137[1]);
        }
        else
        {
          v87 = sub_6C4DA0(*(_QWORD *)(a2 + 16), a6, 1u);
          sub_6A3290((__int64)v137, (__int64)&v138, *(_QWORD *)(a2 + 16), v87, v88, v89);
        }
        std::string::_M_dispose();
        sub_8219E0(a2, a5->m128i_i64[0], a5->m128i_i64[1]);
        v86 = v138.m128i_i32[0] <= 1u;
        a1->m128i_i64[0] = 0;
        a1->m128i_i64[1] = 0;
        a1[1].m128i_i64[0] = 0;
        a1[1].m128i_i64[1] = 0;
        if ( !v86 )
          sub_69F740((__int64)&v138);
        return a1;
      }
      goto LABEL_89;
    }
LABEL_18:
    v28 = nullptr;
    if ( v25 )
      goto LABEL_19;
    goto LABEL_88;
  }
  v51 = v26 >> 3;
  if ( !(_DWORD)v51 )
    goto LABEL_18;
  v52 = *(_QWORD *)(a2 + 912);
  v53 = a2 + 904;
  if ( !v52 )
    goto LABEL_86;
  v54 = v51 - 1;
  v55 = a2 + 904;
  while ( *(_DWORD *)(v52 + 32) - 1 >= v54 )
  {
    v56 = *(_QWORD *)(v52 + 16);
    if ( !v56 )
      goto LABEL_84;
    v55 = v52;
LABEL_79:
    v52 = v56;
  }
  v56 = *(_QWORD *)(v52 + 24);
  if ( v56 )
    goto LABEL_79;
  v52 = v55;
LABEL_84:
  if ( v52 == v53 || v54 < *(_DWORD *)(v52 + 32) - 1 )
  {
LABEL_86:
    v13 = 2165;
    goto LABEL_4;
  }
  v57 = sub_69F420((__int64)a5);
  v58 = _mm_loadu_si128(a5);
  a1[1].m128i_i64[0] = v52 + 40;
  a1[1].m128i_i64[1] = v57;
  *a1 = v58;
  return a1;
}

