__int64 __fastcall sub_8ABE30(const __m128i *a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r12
  unsigned __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  void *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // r11
  int v27; // eax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // r15
  char v33; // al
  __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  __int64 *v36; // rsi
  unsigned __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // r15
  char v40; // al
  __int64 v41; // rcx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // r11
  char v45; // al
  char v46; // al
  char v47; // al
  __int64 v48; // r11
  __int64 v49; // rdi
  unsigned int v50; // eax
  __int64 v51; // rdx
  void *v52; // rdi
  unsigned int v53; // r12d
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rbx
  bool v57; // cc
  __int64 v58; // rax
  __int64 v60; // rdi
  unsigned __int16 v61; // ax
  bool v62; // r10
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned int v65; // ecx
  __int64 v66; // r12
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // rax
  __int64 v69; // r14
  __int64 *v70; // r13
  __int64 v71; // rbp
  _QWORD *v72; // r13
  __int64 v73; // rsi
  __int64 v74; // rsi
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  char v78; // al
  char v79; // al
  __int64 v80; // rcx
  int v81; // r8d
  int v82; // r9d
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 *v85; // rdi
  __int64 v86; // rdx
  __int64 *v87; // rbx
  __int64 *v88; // rdi
  __int64 v89; // rdx
  __int64 *v90; // rbx
  unsigned __int16 *v91; // r12
  unsigned int v92; // eax
  unsigned int v93; // eax
  unsigned int v94; // eax
  __int64 v95; // rdi
  bool v96; // zf
  __m128i *v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // r15
  __int64 v100; // r12
  bool v101; // al
  unsigned int v102; // eax
  unsigned int *v103; // r15
  __int64 v104; // rax
  _QWORD *v105; // rax
  char v106; // al
  __int64 v107; // [rsp+0h] [rbp-288h]
  __int64 v108; // [rsp+8h] [rbp-280h]
  unsigned int v109; // [rsp+10h] [rbp-278h]
  __int64 v110; // [rsp+10h] [rbp-278h]
  __int64 v111; // [rsp+10h] [rbp-278h]
  __int64 v112; // [rsp+18h] [rbp-270h]
  __int64 v113; // [rsp+18h] [rbp-270h]
  __int64 v114; // [rsp+18h] [rbp-270h]
  __int64 v115; // [rsp+18h] [rbp-270h]
  char *v116; // [rsp+18h] [rbp-270h]
  __int64 v117; // [rsp+18h] [rbp-270h]
  __int64 *v118; // [rsp+20h] [rbp-268h]
  unsigned __int64 v119; // [rsp+28h] [rbp-260h]
  bool v120; // [rsp+28h] [rbp-260h]
  _QWORD *v121; // [rsp+30h] [rbp-258h]
  __int64 v122; // [rsp+30h] [rbp-258h]
  _QWORD *v123; // [rsp+30h] [rbp-258h]
  unsigned __int64 v124; // [rsp+30h] [rbp-258h]
  __m128i *v125; // [rsp+30h] [rbp-258h]
  char *v126; // [rsp+30h] [rbp-258h]
  bool v127; // [rsp+38h] [rbp-250h]
  __int64 v128; // [rsp+38h] [rbp-250h]
  __int64 v129; // [rsp+48h] [rbp-240h]
  __int64 v130; // [rsp+48h] [rbp-240h]
  unsigned __int64 v131; // [rsp+50h] [rbp-238h]
  char *v132; // [rsp+58h] [rbp-230h]
  unsigned int v133; // [rsp+60h] [rbp-228h] BYREF
  char v134; // [rsp+64h] [rbp-224h]
  __int64 v135; // [rsp+68h] [rbp-220h] BYREF
  unsigned int v136; // [rsp+70h] [rbp-218h]
  char v137; // [rsp+74h] [rbp-214h]
  __int64 v138; // [rsp+78h] [rbp-210h] BYREF
  _QWORD v139[4]; // [rsp+80h] [rbp-208h] BYREF
  __m128i v140; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v141; // [rsp+B0h] [rbp-1D8h]
  char v142; // [rsp+B8h] [rbp-1D0h]
  __int64 v143; // [rsp+C8h] [rbp-1C0h]
  void *v144; // [rsp+D0h] [rbp-1B8h]
  __int64 v145; // [rsp+D8h] [rbp-1B0h]
  _BYTE v146[80]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int64 v147[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v148; // [rsp+140h] [rbp-148h]
  char v149; // [rsp+148h] [rbp-140h]
  __int64 v150; // [rsp+158h] [rbp-130h]
  void *ptr; // [rsp+160h] [rbp-128h]
  __int64 v152; // [rsp+168h] [rbp-120h]
  _BYTE v153[80]; // [rsp+170h] [rbp-118h] BYREF
  void *v154[2]; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v155; // [rsp+1D0h] [rbp-B8h] BYREF
  char v156; // [rsp+1D8h] [rbp-B0h]
  __int64 v157; // [rsp+1E8h] [rbp-A0h]
  void *v158; // [rsp+1F0h] [rbp-98h]
  __int64 v159; // [rsp+1F8h] [rbp-90h]
  _BYTE v160[136]; // [rsp+200h] [rbp-88h] BYREF

  v2 = a2;
  v4 = sub_80FBD0(a2);
  if ( v4 )
  {
    v58 = sub_C63970(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 17360LL), v4);
    if ( strchr(*(const char **)(v58 + 24), 69) )
    {
      if ( (unsigned int)sub_80FBD0(a2) == 211
        && (*(_BYTE *)a1->m128i_i64[1] = 0,
            v73 = *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)),
            *(__m128i *)v154 = _mm_unpacklo_epi64(
                                 _mm_loadl_epi64(a1),
                                 (__m128i)(unsigned __int64)(a1->m128i_i64[1] + 40)),
            (unsigned __int8)sub_883160((__int64 *)v154, v73)) )
      {
        v74 = *(_QWORD *)(*(unsigned __int8 *)(v2 + 3) + v2 + 8LL * ((*(_BYTE *)(v2 + 2) & 8) != 0) + 8 + 8);
        *(__m128i *)v154 = _mm_unpacklo_epi64(_mm_loadl_epi64(a1), (__m128i)(unsigned __int64)(a1->m128i_i64[1] + 64));
        return (unsigned int)sub_883160((__int64 *)v154, v74);
      }
      else
      {
        return 0;
      }
    }
  }
  v5 = a1->m128i_i64[0];
  v134 &= ~1u;
  v133 = 0;
  v6 = *(_QWORD *)(v5 + 32);
  v109 = *(_DWORD *)(v5 + 320);
  v7 = *(unsigned int *)(v6 + 196);
  v8 = *(_DWORD *)(v6 + 208) + 1;
  v9 = *(unsigned int *)(v6 + 192);
  *(_DWORD *)(v6 + 208) = v8;
  if ( v7 < v9 + 1 )
  {
    sub_25D6060(v6 + 184, v6 + 200, v9 + 1, 4);
    v9 = *(unsigned int *)(v6 + 192);
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 184) + 4 * v9) = v8;
  ++*(_DWORD *)(v6 + 192);
  v107 = *(unsigned __int8 *)(a2 + 3);
  v10 = sub_80F230(*(_QWORD *)(a2 + v107));
  v140 = 0u;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v10;
  v142 |= 1u;
  v15 = *(unsigned int *)(a2 + 16);
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  v144 = v146;
  v119 = v15;
  LOBYTE(v15) = *(_BYTE *)(a2 + 2);
  v141 = 0;
  v145 = 0x800000000LL;
  v143 = 0;
  v146[65] = 0;
  v17 = *(_QWORD *)v16;
  v118 = (__int64 *)(a2 + v107 + 8LL * ((v15 & 8) != 0) + 8);
  v108 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 != 13 )
  {
    if ( *(_BYTE *)(v17 + 16) != 41 )
    {
      v124 = v16;
      if ( v19 != 41 )
        goto LABEL_39;
      v55 = sub_B0D320(v17);
      v16 = v124;
      v17 = v55;
      if ( !v55 )
        goto LABEL_39;
    }
    goto LABEL_7;
  }
  if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1F2 )
  {
    v60 = a1->m128i_i64[0];
    v61 = *(_WORD *)v14 & 0x1FF;
    if ( v61 == 47 )
    {
      a2 = *(_QWORD *)(v14 + 16);
      if ( !(unsigned __int8)sub_89DEE0(v60, a2, (__int64)&v140, v16, v11, v12) )
        goto LABEL_40;
      v48 = *(_QWORD *)(v14 + 24);
      if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v62 = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
        v125 = &v140;
        goto LABEL_64;
      }
      goto LABEL_93;
    }
    if ( v61 <= 0x76u )
    {
      if ( v61 == 103 )
      {
        if ( *(char *)(sub_A2CB40(v60) + 1) >= 0 )
          sub_A2E240(a1->m128i_i64[0], v14, 2278, 0);
        a2 = *(_QWORD *)(v14 + 16);
        if ( (unsigned __int8)sub_89DEE0(a1->m128i_i64[0], a2, (__int64)&v140, v80, v81, v82) )
        {
          v83 = sub_8C1F60(v14);
          a2 = v14;
          v53 = sub_8926A0(a1->m128i_i64[0], (_DWORD *)v14, &v140, v83);
          goto LABEL_41;
        }
        goto LABEL_40;
      }
    }
    else if ( v61 <= 0x78u )
    {
      a2 = v14;
      v76 = sub_89E210(v60, v14, (__int64)&v140, 0, v11, v12);
      v48 = v76;
      if ( !v76 )
        goto LABEL_40;
      v125 = &v140;
      v62 = 0;
      if ( (*(_BYTE *)(v76 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_64;
LABEL_93:
      v60 = a1->m128i_i64[0];
    }
    a2 = v14;
    sub_828070(v60, v14, 110);
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v17 + 16) != 41 )
  {
LABEL_39:
    sub_828070(a1->m128i_i64[0], a2, 110);
    goto LABEL_40;
  }
LABEL_7:
  v121 = (_QWORD *)v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    goto LABEL_39;
  v20 = (void *)a1->m128i_i64[0];
  a2 = v14;
  v154[1] = v147;
  v149 |= 1u;
  v147[0] = 0;
  v147[1] = 0;
  v148 = 0;
  v150 = 0;
  ptr = v153;
  v152 = 0x800000000LL;
  v153[65] = 0;
  v154[0] = v20;
  LOBYTE(v155) = 0;
  if ( !(unsigned __int8)sub_871080((__int64)v154, v14, (__int64 *)v20, (__int64)v153, v11, v12) )
    goto LABEL_80;
  v21 = a1->m128i_i64[0];
  if ( v148 )
    goto LABEL_79;
  if ( (v153[64] & 1) != 0 )
  {
    a2 = v14;
    v84 = sub_A2E130(v21, v14, 2258, 0);
    if ( v84 )
    {
      a2 = (unsigned __int64)v154;
      LODWORD(v154[0]) = 8;
      v154[1] = (void *)v14;
      sub_B029C0(v84, v154);
    }
    goto LABEL_80;
  }
  if ( !v147[0] || (v147[0] & 3) != 0 || (*(_BYTE *)((v147[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
  {
LABEL_79:
    a2 = v14;
    sub_828070(v21, v14, 110);
    goto LABEL_80;
  }
  v22 = *(_QWORD *)(v21 + 16);
  v131 = v147[0] & 0xFFFFFFFFFFFFFFFCLL;
  v129 = *(_QWORD *)((v147[0] & 0xFFFFFFFFFFFFFFFCLL) + 48);
  v23 = sub_B167E0(*v121, a2);
  v24 = sub_6DC9E0(v22, v23, v129);
  v26 = v131;
  if ( !v24 )
  {
    a2 = v2;
    sub_828070(a1->m128i_i64[0], v2, 110);
    goto LABEL_80;
  }
  if ( (*(_WORD *)v2 & 0x1FF) == 0x5C )
  {
    v27 = *(_BYTE *)(v2 + 4) & 0x3F;
    v28 = *(_BYTE *)(v2 + 4) & 0x3F;
    if ( v27 == 15 || v27 == 20 || (unsigned __int8)v28 <= 0x1Du && (v29 = 871104512, _bittest64(&v29, v28)) )
    {
      v30 = *(_QWORD *)(a1->m128i_i64[0] + 32);
      v31 = *(_DWORD *)(v30 + 176);
      v32 = (unsigned int)(*(_DWORD *)(v30 + 208) + 1);
      *(_DWORD *)(v30 + 208) = v32;
      v108 = (v32 << 32) | v31;
      if ( (*(_BYTE *)(v131 + 28) & 0x7Fu) - 33 > 3 )
      {
        v34 = a1->m128i_i64[0];
        v35 = v119;
        v36 = v118;
      }
      else
      {
        v33 = sub_7A5610((_DWORD *)v131);
        v34 = a1->m128i_i64[0];
        v26 = v131;
        if ( v33 )
        {
          v35 = v119 - 1;
          v36 = v118 + 1;
        }
        else
        {
          v35 = v119;
          v36 = v118;
        }
      }
      v37 = v35;
      v38 = (__int64)v36;
      a2 = v37;
      v122 = v26;
      if ( !(unsigned __int8)sub_899300(v38, v37, v32, v34, v26, 1u) )
        goto LABEL_80;
      v26 = v122;
      v39 = v2;
      v130 = v122;
    }
    else
    {
      v130 = 0;
      v39 = v2;
    }
  }
  else
  {
    v130 = 0;
    v39 = 0;
  }
  if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 33 <= 3 )
  {
    v123 = (_QWORD *)v26;
    v40 = sub_7A5610((_DWORD *)v26);
    v44 = (__int64)v123;
    if ( v40 || v39 && (v45 = sub_7A4F00(v123), v44 = (__int64)v123, v45) )
    {
      v95 = a1->m128i_i64[0];
      if ( !v119 )
      {
        a2 = v2;
        sub_828070(v95, v2, 110);
        goto LABEL_80;
      }
      v126 = (char *)v44;
      a2 = *v118;
      if ( !(unsigned __int8)sub_89DEE0(v95, *v118, (__int64)&v140, v41, v42, v43) )
        goto LABEL_80;
      v132 = v126;
      v96 = (unsigned __int8)sub_7A4F00(v126) == 0;
      v97 = nullptr;
      if ( v96 )
        v97 = &v140;
      v125 = v97;
      v98 = sub_A2CB40(a1->m128i_i64[0]);
      v48 = (__int64)v132;
      v62 = 0;
      if ( *(char *)(v98 + 1) < 0 )
      {
        if ( v39 )
        {
          if ( (*(_BYTE *)(v39 + 4) & 0x3F) == 0xF && v132[82] < 0 )
          {
            if ( (v146[64] & 2) != 0 )
              goto LABEL_80;
            if ( (v142 & 1) != 0 )
              goto LABEL_80;
            a2 = *v118;
            v106 = sub_84FB20(a1->m128i_i64[0], (_DWORD *)*v118, &v140);
            v62 = 0;
            v48 = (__int64)v132;
            if ( !v106 )
              goto LABEL_80;
          }
        }
      }
      --v119;
      ++v118;
      goto LABEL_144;
    }
    v112 = v44;
    v46 = sub_7A5D20(v44);
    v26 = v112;
    if ( v46 )
    {
      v99 = sub_79A330(v112 + 72);
      if ( v99 )
        v99 -= 64LL;
      v100 = sub_7A3750(v99);
      v101 = sub_7A3730(v99);
      v62 = 0;
      if ( v101 )
      {
        v103 = (unsigned int *)sub_780F80(v112);
        v104 = sub_780E20(v100);
        v154[0] = nullptr;
        v105 = sub_7DA670(v104, (__int64)(v103 + 2), *v103, (__int64)v154);
        v62 = 0;
        v125 = nullptr;
        v48 = (__int64)v105;
      }
      else
      {
        v48 = v100;
        v125 = nullptr;
      }
      goto LABEL_144;
    }
  }
  v113 = v26;
  v47 = sub_77DE60((_QWORD *)v26, 0, nullptr, v25);
  v48 = v113;
  if ( v47 )
  {
    v49 = a1->m128i_i64[0];
    if ( (*(_DWORD *)(v113 + 40) & 7) == 6
      && (*(_DWORD *)(*(_QWORD *)(v113 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) == 1 )
    {
      a2 = v2;
      v154[0] = nullptr;
      v154[1] = nullptr;
      v155 = 0;
      v159 = 0x800000000LL;
      v156 |= 1u;
      v157 = 0;
      v158 = v160;
      v160[65] = 0;
      v53 = sub_87DD20(v49, v2, (__m128i *)v154);
      if ( (_BYTE)v53 )
      {
        sub_81F730((__int64)v154, (__int64)&v133);
        a2 = 1;
        v102 = sub_8934C0(v5, 1, v109);
        v109 = -1;
        v53 = v102;
      }
      if ( v158 != v160 )
        free(v158);
      goto LABEL_81;
    }
    a2 = v2;
    if ( (unsigned __int8)sub_873630(v49, v2) )
    {
      a2 = 1;
      v50 = sub_8934C0(v5, 1, v109);
      v52 = ptr;
      v53 = v50;
      if ( ptr != v153 )
        goto LABEL_34;
      goto LABEL_135;
    }
LABEL_80:
    v53 = 0;
LABEL_81:
    if ( ptr != v153 )
      free(ptr);
LABEL_41:
    v54 = v144;
    if ( v144 == v146 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v125 = nullptr;
  v62 = 0;
LABEL_144:
  if ( ptr != v153 )
  {
    v128 = v48;
    free(ptr);
    v48 = v128;
    v62 = 0;
  }
  if ( !v130 )
  {
LABEL_64:
    v127 = v62;
    v63 = *(_QWORD *)(a1->m128i_i64[0] + 32);
    v114 = v48;
    v64 = (unsigned int)(*(_DWORD *)(v63 + 208) + 1);
    v65 = *(_DWORD *)(v63 + 176);
    *(_DWORD *)(v63 + 208) = v64;
    a2 = v119;
    v108 = (v64 << 32) | v65;
    if ( (unsigned __int8)sub_899300((__int64)v118, v119, v64, a1->m128i_i64[0], v48, 0) )
    {
      v48 = v114;
      v62 = v127;
      v130 = v114;
      goto LABEL_66;
    }
LABEL_40:
    v53 = 0;
    goto LABEL_41;
  }
LABEL_66:
  v154[0] = &v155;
  v154[1] = (void *)0x400000000LL;
  if ( v125 )
  {
    v120 = v62;
    if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 33 > 3 )
      goto LABEL_130;
    v115 = v48;
    if ( sub_83DE60(v48) && !v120 )
    {
      a2 = v2;
      v48 = sub_84F640(a1->m128i_i64[0], v2, v125, v115, (__int64)v154);
      if ( !v48 )
        goto LABEL_71;
    }
    else
    {
      v78 = sub_7A5610((_DWORD *)v115);
      v48 = v115;
      if ( v78 )
      {
        a2 = v2;
        v79 = sub_84E640(
                a1->m128i_i64[0],
                (_DWORD *)v2,
                v125,
                4 * (unsigned int)((*(_BYTE *)(v115 + 28) & 0x7F) == 34) + 5,
                0);
        v48 = v115;
        if ( !v79 )
          goto LABEL_71;
      }
    }
  }
  if ( (*(_BYTE *)(v48 + 28) & 0x7F) != 0x22 )
  {
LABEL_130:
    v116 = (char *)v48;
    v147[0] = 0;
    v91 = (unsigned __int16 *)sub_78BC30((_QWORD *)v48, v147);
    v92 = sub_8124E0(v2);
    a2 = v92;
    if ( (unsigned __int8)sub_837DA0(a1->m128i_i64[0], v92, v116, v147[0], (__int64)v91) )
    {
      v117 = a1->m128i_i64[0];
      v93 = sub_8124E0(v2);
      a2 = v147[0];
      if ( (unsigned __int8)sub_895450(
                              v93,
                              v147[0],
                              v125,
                              v2,
                              (_DWORD **)v118,
                              v91,
                              v130,
                              v108,
                              v117,
                              (__int64)&v133,
                              0) )
      {
        if ( !LODWORD(v154[1]) )
          goto LABEL_134;
        a2 = v2;
        if ( (unsigned __int8)sub_82E940(a1->m128i_i64[0], v2, (__int64)&v133, (_QWORD *)v154[0], LODWORD(v154[1])) )
          goto LABEL_134;
      }
    }
LABEL_71:
    if ( v154[0] != &v155 )
      free(v154[0]);
    goto LABEL_40;
  }
  v66 = *(_QWORD *)(a1->m128i_i64[0] + 16);
  v67 = sub_79A330(v48 + 72);
  if ( v67 )
    v67 -= 64LL;
  v68 = sub_6E8B00(v66, v67);
  a2 = v2;
  if ( !(unsigned __int8)sub_8926A0(a1->m128i_i64[0], (_DWORD *)v2, v125, v68) )
    goto LABEL_71;
LABEL_134:
  a2 = 1;
  v94 = sub_8934C0(v5, 1, v109);
  v52 = v154[0];
  v53 = v94;
  if ( v154[0] != &v155 )
  {
LABEL_34:
    free(v52);
    v54 = v144;
    v109 = -1;
    if ( v144 == v146 )
      goto LABEL_45;
LABEL_42:
    free(v54);
LABEL_43:
    v51 = v109;
    if ( v109 != -1 )
    {
      a2 = 0;
      v54 = (void *)v5;
      sub_8934C0(v5, 0, v109);
    }
    goto LABEL_45;
  }
LABEL_135:
  v54 = v144;
  if ( v144 != v146 )
    free(v144);
LABEL_45:
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 192LL);
  if ( !(_BYTE)v53 )
    goto LABEL_54;
  v56 = a1->m128i_i64[1];
  if ( v133 != 6 )
  {
    v57 = *(_DWORD *)(v56 + 16) <= 0x40u;
    *(_BYTE *)v56 = 1;
    if ( v57 && v136 <= 0x40 )
    {
      *(_QWORD *)(v56 + 8) = v135;
      *(_DWORD *)(v56 + 16) = v136;
    }
    else
    {
      sub_2585EA0(v56 + 8, &v135);
    }
    v57 = *(_DWORD *)(v56 + 32) <= 0x40u;
    *(_BYTE *)(v56 + 20) = v137;
    if ( v57 && LODWORD(v139[0]) <= 0x40 )
    {
      *(_QWORD *)(v56 + 24) = v138;
      *(_DWORD *)(v56 + 32) = v139[0];
    }
    else
    {
      sub_2585EA0(v56 + 24, &v138);
    }
    *(_BYTE *)(v56 + 36) = BYTE4(v139[0]);
    goto LABEL_54;
  }
  *(_BYTE *)v56 = 0;
  v69 = *(_QWORD *)(v56 + 40);
  v70 = (__int64 *)(v56 + 40);
  v71 = sub_2575D20(v54, a2, v51);
  if ( v69 == v71 )
  {
    if ( v135 == v71 )
    {
      sub_257D030(v56 + 40, &v135);
      goto LABEL_76;
    }
    if ( v70 == &v135 )
      goto LABEL_76;
    v88 = *(__int64 **)(v56 + 48);
    if ( !v88 )
      goto LABEL_88;
    v89 = *(v88 - 1);
    if ( &v88[3 * v89] != v88 )
    {
      v111 = v56;
      v90 = &v88[3 * v89];
      do
      {
        v90 -= 3;
        sub_5FF3B0(v90);
      }
      while ( v90 != v88 );
      v56 = v111;
      v89 = *(v88 - 1);
    }
    operator delete[](v88 - 1, 24 * v89 + 8);
    *(_QWORD *)(v56 + 48) = 0;
    v75 = v135;
  }
  else
  {
    if ( v135 != v71 )
    {
      sub_2576220(v56 + 40, &v135);
      goto LABEL_76;
    }
    if ( v70 == &v135 )
      goto LABEL_76;
    sub_25769A0(v56 + 40);
    v75 = v135;
  }
  if ( v71 != v75 )
  {
LABEL_88:
    sub_25768A0(v70, &v135);
    goto LABEL_76;
  }
  sub_257CF50(v70, &v135);
LABEL_76:
  v72 = (_QWORD *)(v56 + 64);
  if ( *(_QWORD *)(v56 + 64) == v71 )
  {
    if ( v139[0] == v71 )
    {
      sub_257D030(v56 + 64, v139);
      goto LABEL_54;
    }
    if ( v72 == v139 )
      goto LABEL_54;
    v85 = *(__int64 **)(v56 + 72);
    if ( !v85 )
      goto LABEL_100;
    v86 = *(v85 - 1);
    if ( &v85[3 * v86] != v85 )
    {
      v110 = v56;
      v87 = &v85[3 * v86];
      do
      {
        v87 -= 3;
        sub_5FF3B0(v87);
      }
      while ( v87 != v85 );
      v56 = v110;
      v86 = *(v85 - 1);
    }
    operator delete[](v85 - 1, 24 * v86 + 8);
    *(_QWORD *)(v56 + 72) = 0;
    v77 = v139[0];
  }
  else
  {
    if ( v139[0] != v71 )
    {
      sub_2576220(v56 + 64, v139);
      goto LABEL_54;
    }
    if ( v72 == v139 )
      goto LABEL_54;
    sub_25769A0(v56 + 64);
    v77 = v139[0];
  }
  if ( v71 != v77 )
  {
LABEL_100:
    sub_25768A0(v72, v139);
    goto LABEL_54;
  }
  sub_257CF50(v72, v139);
LABEL_54:
  if ( v133 > 1 )
    sub_69F740((__int64)&v133);
  return v53;
}

