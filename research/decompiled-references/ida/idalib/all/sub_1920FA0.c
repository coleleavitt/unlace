__int64 __fastcall sub_1920FA0(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        int a5,
        __int64 *a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v13; // rbx
  __int64 v14; // rdi
  __int64 result; // rax
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r10
  unsigned __int8 v31; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r13
  char v38; // al
  unsigned __int64 v39; // r14
  _WORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // r11
  __int64 v45; // r9
  char v46; // al
  _WORD *v47; // rax
  _WORD *v48; // r14
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  bool v52; // al
  bool v53; // al
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int8 v56; // r9
  char v57; // al
  __int64 v58; // rax
  unsigned __int8 v59; // r9
  _WORD *v60; // rax
  _WORD *v61; // rax
  char v62; // al
  char v63; // al
  char v64; // al
  char v65; // al
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // eax
  size_t v70; // r14
  int v71; // eax
  __int64 v72; // r14
  size_t v73; // rax
  size_t v74; // rax
  unsigned __int8 v75; // r9
  int v76; // eax
  size_t v77; // r14
  int v78; // eax
  __int64 v79; // r14
  size_t v80; // rax
  size_t v81; // rax
  char v82; // r9
  unsigned int v83; // eax
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int8 v86; // r9
  __int64 v87; // r14
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  unsigned __int8 v95; // [rsp+0h] [rbp-1E8h]
  _DWORD *v96; // [rsp+0h] [rbp-1E8h]
  unsigned __int8 v97; // [rsp+0h] [rbp-1E8h]
  char v98; // [rsp+0h] [rbp-1E8h]
  _DWORD *v99; // [rsp+0h] [rbp-1E8h]
  int v100; // [rsp+0h] [rbp-1E8h]
  unsigned __int8 v101; // [rsp+0h] [rbp-1E8h]
  unsigned __int8 v102; // [rsp+0h] [rbp-1E8h]
  int v103; // [rsp+0h] [rbp-1E8h]
  __int64 *v104; // [rsp+0h] [rbp-1E8h]
  unsigned __int8 v105; // [rsp+0h] [rbp-1E8h]
  __int64 v106; // [rsp+0h] [rbp-1E8h]
  unsigned __int8 v107; // [rsp+0h] [rbp-1E8h]
  unsigned int v108; // [rsp+0h] [rbp-1E8h]
  unsigned __int64 v109; // [rsp+8h] [rbp-1E0h]
  unsigned __int8 v110; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 v111; // [rsp+8h] [rbp-1E0h]
  _DWORD *v112; // [rsp+8h] [rbp-1E0h]
  unsigned __int8 v113; // [rsp+8h] [rbp-1E0h]
  __int64 v114; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 v115; // [rsp+10h] [rbp-1D8h]
  unsigned __int64 v116; // [rsp+10h] [rbp-1D8h]
  unsigned __int8 v117; // [rsp+10h] [rbp-1D8h]
  unsigned __int8 v118; // [rsp+10h] [rbp-1D8h]
  unsigned __int8 v119; // [rsp+10h] [rbp-1D8h]
  char v120; // [rsp+10h] [rbp-1D8h]
  char v121; // [rsp+10h] [rbp-1D8h]
  char v122; // [rsp+10h] [rbp-1D8h]
  __int64 v123; // [rsp+18h] [rbp-1D0h]
  char v124; // [rsp+18h] [rbp-1D0h]
  __int64 v125; // [rsp+18h] [rbp-1D0h]
  unsigned __int64 v126; // [rsp+18h] [rbp-1D0h]
  __int64 v127; // [rsp+20h] [rbp-1C8h]
  __int64 *v128; // [rsp+20h] [rbp-1C8h]
  __int64 v129; // [rsp+20h] [rbp-1C8h]
  unsigned __int8 v130; // [rsp+20h] [rbp-1C8h]
  unsigned __int8 v131; // [rsp+20h] [rbp-1C8h]
  __int64 v132; // [rsp+20h] [rbp-1C8h]
  __int64 v133; // [rsp+20h] [rbp-1C8h]
  unsigned __int8 v134; // [rsp+20h] [rbp-1C8h]
  __int64 v135; // [rsp+28h] [rbp-1C0h]
  unsigned __int8 v136; // [rsp+28h] [rbp-1C0h]
  __int64 *v137; // [rsp+28h] [rbp-1C0h]
  int v138; // [rsp+28h] [rbp-1C0h]
  int v139; // [rsp+30h] [rbp-1B8h]
  unsigned __int8 v140; // [rsp+30h] [rbp-1B8h]
  __int64 v141; // [rsp+30h] [rbp-1B8h]
  char v142; // [rsp+3Fh] [rbp-1A9h]
  unsigned __int8 v143; // [rsp+3Fh] [rbp-1A9h]
  unsigned __int8 v144; // [rsp+3Fh] [rbp-1A9h]
  unsigned __int8 v145; // [rsp+3Fh] [rbp-1A9h]
  __int64 v146; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v147; // [rsp+48h] [rbp-1A0h] BYREF
  char v148; // [rsp+50h] [rbp-198h]
  __int64 v149; // [rsp+54h] [rbp-194h]
  char v150; // [rsp+5Ch] [rbp-18Ch]
  _DWORD v151[6]; // [rsp+60h] [rbp-188h] BYREF
  void *v152; // [rsp+78h] [rbp-170h]
  _BYTE v153[24]; // [rsp+88h] [rbp-160h] BYREF
  _DWORD v154[6]; // [rsp+A0h] [rbp-148h] BYREF
  void *v155; // [rsp+B8h] [rbp-130h]
  _BYTE v156[24]; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v157[3]; // [rsp+E0h] [rbp-108h] BYREF
  void *v158; // [rsp+F8h] [rbp-F0h]
  _BYTE v159[24]; // [rsp+108h] [rbp-E0h] BYREF
  __int16 v160; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v161; // [rsp+128h] [rbp-C0h]
  unsigned int v162; // [rsp+130h] [rbp-B8h] BYREF
  char v163; // [rsp+134h] [rbp-B4h]
  __int64 v164; // [rsp+138h] [rbp-B0h] BYREF

  v13 = a2;
  sub_18D4200((__int64)a1, a2, a3, a4, 0, *(double *)a7.m128_u64);
  v14 = *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL)
                                                                                        + 8)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
  {
    result = sub_1918B10(
               a1,
               a2,
               a3,
               a4,
               a6 != nullptr,
               (*(_BYTE *)(a1[29] + 13) & 2) != 0,
               a7,
               a8,
               (*(_BYTE *)(a1[29] + 13) & 4) != 0,
               0,
               1);
    if ( !a6 )
      return result;
    goto LABEL_3;
  }
  if ( sub_F58380(v14)
    || (LOBYTE(v16) = sub_F58380(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)),
        (_BYTE)v16) )
  {
    result = sub_1918440((__int64)a1, a2, a3, a4, a6 != nullptr, 0, a7, a8);
    if ( !a6 )
      return result;
    goto LABEL_3;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 31
    || (v95 = v16,
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                         + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL) == 31) )
  {
    result = sub_1917F70((__int64)a1, a2, (unsigned __int64 *)a3, a4, a6 != nullptr, v16, a7, a8);
    if ( !a6 )
      return result;
LABEL_3:
    *a6 = result;
    return result;
  }
  v17 = sub_191F280((__int64)a1, a2, a3, a4, 4 * (unsigned int)(a6 != nullptr), a7, a8);
  v19 = *a2;
  v20 = v95;
  v109 = v17;
  if ( *a2 == 1 )
    return 0;
  v21 = *a3;
  if ( *a3 == 1 )
    return 0;
  if ( a5 != 5 )
    goto LABEL_13;
  v127 = *a3;
  v39 = v21 & 0xFFFFFFFFFFFFFFFELL;
  v123 = *a2;
  v115 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v40 = (_WORD *)sub_BFB840(v19 & 0xFFFFFFFFFFFFFFFELL);
  v44 = v39;
  v45 = v95;
  if ( (*v40 & 0x1FF) == 9 )
    goto LABEL_44;
  v61 = (_WORD *)sub_BFB840(v39);
  v45 = v95;
  v42 = v123;
  v41 = v127;
  if ( (*v61 & 0x1FF) == 9 )
  {
    v44 = v115;
LABEL_44:
    v124 = v45;
    v99 = (_DWORD *)v44;
    v46 = sub_F61920(*(_QWORD *)(*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v41, v42, v43, v45);
    LOBYTE(v45) = v124;
    if ( !v46 || (*v99 & 0x20000) != 0 )
    {
      v42 = *a2;
      v41 = *a3;
    }
    else
    {
      v142 = v124;
      v125 = (__int64)v99;
      v100 = sub_EEC140(v39);
      LODWORD(v147) = sub_EEB7E0(v115, (__int64)a2, *(double *)a7.m128_u64);
      HIDWORD(v147) = v100;
      v128 = a1 + 1;
      sub_168B9F0((__int64)&v160, a1 + 1, a4, 0x1CDDu, 0);
      v135 = sub_15884C0((__int64)&v160, &v147);
      v157[0] = *(_QWORD *)(sub_BFB840(v125) + 8);
      sub_162B6D0(v135, v157);
      sub_15F7200(&v160);
      if ( v39 == v125 )
      {
        v76 = sub_EEC140(v39);
        v138 = sub_15F0EF0((__int64)a1, v76, 0, (__m128i)a7, *(double *)a8.m128_u64);
        sub_168B9F0((__int64)&v160, v128, a4, 0x18E0u, 0);
        v77 = j__strlen("&");
        v78 = sub_EEB7E0(v115, (__int64)v128, *(double *)a7.m128_u64);
        sub_9EC740((__int64)v157, v78, "&", v77, 0);
        v79 = sub_1589170((__int64)&v160, v157);
        v80 = j__strlen("[");
        LODWORD(v149) = a4;
        HIDWORD(v149) = a4;
        v150 = 1;
        sub_18BE5B0((__int64)v154, v149, 1, "[", v80);
        v133 = sub_1589170(v79, v154);
        v81 = j__strlen("]");
        sub_9EC740((__int64)v151, v138, "]", v81, 0);
        a2 = (__int64 *)v151;
        sub_1589170(v133, v151);
        v82 = v142;
        if ( v152 != v153 )
        {
          operator delete(v152);
          v82 = v142;
        }
        if ( v155 != v156 )
        {
          v120 = v82;
          operator delete(v155);
          v82 = v120;
        }
        if ( v158 != v159 )
        {
          v121 = v82;
          operator delete(v158);
          v82 = v121;
        }
        v122 = v82;
        sub_15F7200(&v160);
        v42 = *v13;
        v41 = *a3;
        LOBYTE(v45) = v122;
      }
      else
      {
        a2 = a1 + 1;
        sub_168B9F0((__int64)&v160, v128, a4, 0x18E0u, 0);
        sub_15F7200(&v160);
        v42 = *v13;
        v41 = *a3;
        LOBYTE(v45) = v142;
      }
    }
  }
  v101 = v45;
  v126 = v41 & 0xFFFFFFFFFFFFFFFELL;
  v116 = v42 & 0xFFFFFFFFFFFFFFFELL;
  v47 = (_WORD *)sub_BFB840(v41 & 0xFFFFFFFFFFFFFFFELL);
  v20 = v101;
  v48 = v47;
  if ( (*v47 & 0x1FF) == 0x4E )
  {
    v49 = v116;
  }
  else
  {
    v60 = (_WORD *)sub_BFB840(v116);
    v20 = v101;
    v48 = v60;
    if ( (*v60 & 0x1FF) != 0x4E )
      goto LABEL_13;
    v49 = v126;
  }
  if ( v49 )
  {
    v50 = *(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22 )
    {
      v102 = v20;
      v51 = sub_F68450(v50, (__int64)a2, v21, v19, v18);
      v52 = sub_F57FF0(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL));
      v20 = v102;
      if ( v52 )
      {
        v136 = v102;
        v129 = a1[31];
        v103 = sub_EEC140(v126);
        LODWORD(v146) = sub_EEB7E0(v116, (__int64)a2, *(double *)a7.m128_u64);
        HIDWORD(v146) = v103;
        v104 = (__int64 *)(*((_QWORD *)v48 + 1) & 0xFFFFFFFFFFFFFFF0LL);
        v53 = sub_F57FF0(*v104);
        v56 = v136;
        if ( v53
          || (v57 = sub_9EC890(*v104, (__int64)a2, (__int64)v104, v54, v55), v56 = v136, !v57)
          || (v140 = v136,
              v108 = *((_DWORD *)v48 + 4),
              v83 = sub_A97D20(v129, *(_QWORD *)(*(_QWORD *)(v129 + 18648) & 0xFFFFFFFFFFFFFFF0LL)),
              v56 = v136,
              v83 <= 0x3F)
          && (!v83 ? (v84 = 0) : (v84 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v83)), v108 > v84) )
        {
          v130 = v56;
          v137 = a1 + 1;
          sub_168B9F0((__int64)&v160, a1 + 1, a4, 0x1CDCu, 0);
          v58 = sub_15884C0((__int64)&v160, &v146);
          v157[0] = *((_QWORD *)v48 + 1);
          sub_162B6D0(v58, v157);
          sub_15F7200(&v160);
          v59 = v130;
        }
        else
        {
          v137 = a1 + 1;
          sub_168B9F0((__int64)&v160, a1 + 1, a4, 0x1CDCu, 0);
          v85 = sub_15884C0((__int64)&v160, &v146);
          v86 = v140;
          v87 = v85;
          if ( *(_BYTE *)(v85 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v85 + 32), *(_QWORD *)(v129 + 18648), 8u);
            v86 = v140;
          }
          else if ( *(_BYTE *)(v85 + 132) )
          {
            v144 = v140;
            v88 = sub_168B9E0((_QWORD *)v85);
            v92 = v140;
            v141 = v88;
            v93 = *(_QWORD **)(v87 + 16);
            if ( v93 )
            {
              v93 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, __int64, __int64))(*v93 + 32LL))(
                                *(_QWORD *)(v87 + 16),
                                &v146,
                                v89,
                                *v93,
                                v91,
                                v92);
              v92 = v144;
            }
            v145 = v92;
            v157[0] = (__int64)v93;
            v94 = sub_1587BC0(v141, v157, v89, v90, v91, v92);
            sub_AE9DF0(
              (unsigned __int8 **)(*v94 + 32LL * *(unsigned int *)(v87 + 128) + 8),
              *(_QWORD *)(v129 + 18648),
              8u);
            v86 = v145;
          }
          v134 = v86;
          sub_15F7200(&v160);
          v59 = v134;
        }
        v131 = v59;
        if ( (*(_WORD *)sub_BFB840(v126) & 0x1FF) == 0x4E )
        {
          v143 = v131;
          v69 = sub_EEC140(v126);
          v139 = sub_15F0EF0((__int64)a1, v69, 0, (__m128i)a7, *(double *)a8.m128_u64);
          sub_168B9F0((__int64)&v160, v137, a4, 0x18E0u, 0);
          v70 = j__strlen("&");
          v71 = sub_EEB7E0(v116, (__int64)v137, *(double *)a7.m128_u64);
          sub_9EC740((__int64)v157, v71, "&", v70, 0);
          v72 = sub_1589170((__int64)&v160, v157);
          v73 = j__strlen("[");
          LODWORD(v147) = a4;
          HIDWORD(v147) = a4;
          v148 = 1;
          sub_18BE5B0((__int64)v154, v147, 1, "[", v73);
          v132 = sub_1589170(v72, v154);
          v74 = j__strlen("]");
          sub_9EC740((__int64)v151, v139, "]", v74, 0);
          a2 = (__int64 *)v151;
          sub_1589170(v132, v151);
          v75 = v143;
          if ( v152 != v153 )
          {
            operator delete(v152);
            v75 = v143;
          }
          if ( v155 != v156 )
          {
            v117 = v75;
            operator delete(v155);
            v75 = v117;
          }
          if ( v158 != v159 )
          {
            v118 = v75;
            operator delete(v158);
            v75 = v118;
          }
          v119 = v75;
          sub_15F7200(&v160);
          v20 = v119;
        }
        else
        {
          a2 = v137;
          sub_168B9F0((__int64)&v160, v137, a4, 0x18E0u, 0);
          sub_15F7200(&v160);
          v20 = v131;
        }
      }
    }
  }
LABEL_13:
  if ( (v109 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v98 = v20;
    v38 = sub_F610C0(*(_QWORD *)(v109 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v21, v19, v18, v20);
    LOBYTE(v20) = v98;
    if ( v38 )
    {
      if ( a6 )
        *a6 = v109;
      return v109;
    }
  }
  v22 = *v13 & 0xFFFFFFFFFFFFFFFELL;
  v23 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v24 + 16) != 42 )
  {
    if ( *(_BYTE *)(v24 + 16) == 34 )
    {
LABEL_19:
      LOBYTE(v20) = 1;
      goto LABEL_20;
    }
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v25 + 16) != 42 )
    {
      if ( *(_BYTE *)(v25 + 16) != 34 )
        return sub_18F40B0((__int64)a1, a4, v13, a3, *(double *)a7.m128_u64);
      v22 = *a3 & 0xFFFFFFFFFFFFFFFELL;
      v23 = *v13 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_19;
    }
    v22 = *a3 & 0xFFFFFFFFFFFFFFFELL;
    v23 = *v13 & 0xFFFFFFFFFFFFFFFELL;
  }
LABEL_20:
  v110 = v20;
  v96 = (_DWORD *)v23;
  if ( !sub_9EC890(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v21, v19, v18) )
    return sub_18F40B0((__int64)a1, a4, v13, a3, *(double *)a7.m128_u64);
  v26 = sub_BFD550(v22);
  v27 = sub_BFE6E0(v26, a1[31], 2, *(double *)a7.m128_u64);
  v30 = (__int64)v96;
  v31 = v110;
  if ( !v27 )
    goto LABEL_24;
  v163 &= ~1u;
  v160 = 0;
  v32 = a1[29];
  v161 = 0;
  v162 = 0;
  if ( (*(_BYTE *)(v32 + 1) & 8) == 0 )
    goto LABEL_66;
  if ( (*v96 & 0x20000) != 0 )
    goto LABEL_24;
  v62 = sub_C3F220((unsigned __int64)v96, (__int64)&v160, a1[31], 0, 0, v110);
  v30 = (__int64)v96;
  v31 = v110;
  if ( !v62
    || (v112 = v96, v105 = v31, v63 = sub_142BC90((__int64)&v164, nullptr), v31 = v105, v30 = (__int64)v112, v63) )
  {
LABEL_66:
    v113 = v31;
    v106 = v30;
    v64 = sub_BFED30(a1[31], 5, v22, v30, v29, *(double *)a7.m128_u64);
    sub_18E67D0((__int64)a1, a4, v22, v64, *(double *)a7.m128_u64);
    v30 = v106;
    v31 = v113;
  }
  if ( v162 > 1 )
  {
    v114 = v30;
    v107 = v31;
    sub_A4F8E0((int *)&v162);
    v30 = v114;
    v31 = v107;
  }
LABEL_24:
  v111 = v30;
  v97 = v31;
  if ( !(unsigned __int8)sub_18EC860((__int64)a1, a4, v22, v28, v29, *(double *)a7.m128_u64) )
    return 0;
  v33 = v111;
  if ( v97 )
  {
    v65 = sub_18F07E0((__int64)a1, a4, v22, *(double *)a7.m128_u64);
    v33 = v111;
    if ( v65 )
      return 0;
  }
  if ( (*(_WORD *)v22 & 0x1FF) == 0x7F && (*(_BYTE *)(a1[29] + 16) & 4) != 0 )
  {
    sub_168B9F0((__int64)&v160, a1 + 1, a4, 0x1309u, 0);
    LODWORD(v157[0]) = 1;
    sub_1587D10((__int64)&v160, (int *)v157);
    sub_15F7200(&v160);
    return 0;
  }
  sub_16C5BF0((__int64)a1, v22, v33, 0, 1, 0, *(double *)a7.m128_u64);
  if ( a6 )
  {
    v37 = sub_AA7480((_QWORD *)a1[31], *v13 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v37 = *(_QWORD *)((*v13 & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( sub_A62E10(a1[31], v37, v34, v35, v36) )
        v37 = sub_AAF890((__int64 *)a1[31], v37, v66, v67, v68);
    }
    *a6 = v37;
  }
  return *(_QWORD *)(v22 + 8);
}
