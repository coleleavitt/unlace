__int64 __fastcall sub_8A51B0(__int64 *a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned int v7; // r14d
  unsigned __int64 v8; // rcx
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  __int64 *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // r10
  int v27; // eax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // ecx
  char v33; // al
  __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  char v37; // al
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // r10
  char v42; // al
  char v43; // al
  char v44; // al
  __int64 v45; // r10
  __int64 v46; // rdi
  unsigned int v47; // edx
  unsigned int v48; // r13d
  __int64 v49; // rax
  __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // r12
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // r12
  __int64 v57; // r13
  __int64 v58; // rdi
  __int64 v59; // rax
  char v60; // dl
  int v61; // edx
  int v62; // eax
  int v63; // edx
  __int64 v64; // rdi
  unsigned __int16 v65; // ax
  char v66; // r11
  bool v67; // r11
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned int v70; // ecx
  __int64 v71; // r13
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rax
  void *v74; // rdi
  unsigned __int64 v75; // rax
  char v76; // al
  char v77; // al
  __int64 v78; // rax
  __int64 v79; // rcx
  int v80; // r9d
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int16 *v84; // r13
  unsigned int v85; // eax
  unsigned int v86; // eax
  unsigned int v87; // edx
  unsigned __int8 **v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rax
  bool v91; // zf
  __m128i *v92; // rax
  __int64 v93; // rax
  unsigned __int64 v94; // rdi
  __int64 v95; // r13
  bool v96; // al
  unsigned int v97; // eax
  char v98; // al
  __int64 v99; // [rsp+0h] [rbp-288h]
  __int64 v100; // [rsp+0h] [rbp-288h]
  _DWORD *v101; // [rsp+0h] [rbp-288h]
  __int64 v102; // [rsp+8h] [rbp-280h]
  __int64 v103; // [rsp+10h] [rbp-278h]
  __int64 v104; // [rsp+10h] [rbp-278h]
  __int64 v105; // [rsp+10h] [rbp-278h]
  __int64 v106; // [rsp+10h] [rbp-278h]
  unsigned int *v107; // [rsp+10h] [rbp-278h]
  __int64 v108; // [rsp+10h] [rbp-278h]
  __int64 *v109; // [rsp+18h] [rbp-270h]
  unsigned __int64 v110; // [rsp+20h] [rbp-268h]
  __int64 v111; // [rsp+20h] [rbp-268h]
  char *v112; // [rsp+20h] [rbp-268h]
  __int64 v113; // [rsp+20h] [rbp-268h]
  _QWORD *v114; // [rsp+28h] [rbp-260h]
  __int64 v115; // [rsp+28h] [rbp-260h]
  _QWORD *v116; // [rsp+28h] [rbp-260h]
  __int64 v117; // [rsp+28h] [rbp-260h]
  __int64 v118; // [rsp+28h] [rbp-260h]
  __m128i *v119; // [rsp+28h] [rbp-260h]
  char *v120; // [rsp+28h] [rbp-260h]
  unsigned __int64 v121; // [rsp+30h] [rbp-258h]
  bool v122; // [rsp+30h] [rbp-258h]
  bool v123; // [rsp+30h] [rbp-258h]
  __int64 v124; // [rsp+38h] [rbp-250h]
  __int64 v125; // [rsp+38h] [rbp-250h]
  __int64 v126; // [rsp+38h] [rbp-250h]
  __int64 v127; // [rsp+48h] [rbp-240h]
  int v128; // [rsp+48h] [rbp-240h]
  __int64 v129; // [rsp+48h] [rbp-240h]
  unsigned __int64 v130; // [rsp+50h] [rbp-238h]
  char *v131; // [rsp+58h] [rbp-230h]
  unsigned int v132; // [rsp+60h] [rbp-228h] BYREF
  char v133; // [rsp+64h] [rbp-224h]
  __m128i v134; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v135; // [rsp+B0h] [rbp-1D8h]
  char v136; // [rsp+B8h] [rbp-1D0h]
  __int64 v137; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v139; // [rsp+D8h] [rbp-1B0h]
  _BYTE v140[80]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int64 v141[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v142; // [rsp+140h] [rbp-148h]
  char v143; // [rsp+148h] [rbp-140h]
  __int64 v144; // [rsp+158h] [rbp-130h]
  void *v145; // [rsp+160h] [rbp-128h]
  __int64 v146; // [rsp+168h] [rbp-120h]
  _BYTE v147[80]; // [rsp+170h] [rbp-118h] BYREF
  __m128i v148; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v149; // [rsp+1D0h] [rbp-B8h] BYREF
  char v150; // [rsp+1D8h] [rbp-B0h]
  __int64 v151; // [rsp+1E8h] [rbp-A0h]
  void *v152; // [rsp+1F0h] [rbp-98h]
  __int64 v153; // [rsp+1F8h] [rbp-90h]
  _BYTE v154[136]; // [rsp+200h] [rbp-88h] BYREF

  v4 = sub_80FBD0(a2);
  if ( !v4
    || (v51 = sub_C63970(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 17360LL), v4), !strchr(*(const char **)(v51 + 24), 69)) )
  {
    v5 = *a1;
    v133 &= ~1u;
    v132 = 0;
    v6 = *(_QWORD *)(v5 + 32);
    v7 = *(_DWORD *)(v5 + 320);
    v8 = *(unsigned int *)(v6 + 196);
    v9 = *(_DWORD *)(v6 + 208) + 1;
    v10 = *(unsigned int *)(v6 + 192);
    *(_DWORD *)(v6 + 208) = v9;
    if ( v8 < v10 + 1 )
    {
      sub_25D6060(v6 + 184, v6 + 200, v10 + 1, 4);
      v10 = *(unsigned int *)(v6 + 192);
    }
    *(_DWORD *)(*(_QWORD *)(v6 + 184) + 4 * v10) = v9;
    ++*(_DWORD *)(v6 + 192);
    v99 = *(unsigned __int8 *)(a2 + 3);
    v11 = sub_80F230(*(_QWORD *)(a2 + v99));
    v134 = 0u;
    v13 = *(_QWORD *)(v11 + 8);
    v14 = v11;
    v136 |= 1u;
    v15 = *(unsigned int *)(a2 + 16);
    v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    ptr = v140;
    v110 = v15;
    LOBYTE(v15) = *(_BYTE *)(a2 + 2);
    v135 = 0;
    v139 = 0x800000000LL;
    v137 = 0;
    v140[65] = 0;
    v17 = *(_QWORD *)v16;
    v109 = (__int64 *)(a2 + v99 + 8LL * ((v15 & 8) != 0) + 8);
    v102 = 0;
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v19 = *(_BYTE *)(v18 + 16);
    if ( v19 != 13 )
    {
      if ( *(_BYTE *)(v17 + 16) != 41 )
      {
        v121 = v16;
        v117 = v14;
        if ( v19 != 41 )
          goto LABEL_37;
        v49 = sub_B0D320(v17);
        v14 = v117;
        v16 = v121;
        v17 = v49;
        if ( !v49 )
          goto LABEL_37;
      }
LABEL_7:
      v114 = (_QWORD *)v16;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
      {
        v20 = (__int64 *)*a1;
        v21 = v14;
        v124 = v14;
        v143 |= 1u;
        v141[0] = 0;
        v141[1] = 0;
        v142 = 0;
        v144 = 0;
        v145 = v147;
        v146 = 0x800000000LL;
        v147[65] = 0;
        v148.m128i_i64[0] = (__int64)v20;
        v148.m128i_i64[1] = (__int64)v141;
        LOBYTE(v149) = 0;
        if ( !(unsigned __int8)sub_871080((__int64)&v148, v14, v20, (__int64)v147, v14, v12) )
          goto LABEL_80;
        v22 = *a1;
        if ( v142 )
          goto LABEL_79;
        if ( (v147[64] & 1) != 0 )
        {
          v83 = sub_A2E130(v22, v124, 2258, 0);
          if ( v83 )
          {
            v148.m128i_i32[0] = 8;
            v148.m128i_i64[1] = v124;
            sub_B029C0(v83, &v148);
          }
          goto LABEL_80;
        }
        if ( !v141[0] || (v141[0] & 3) != 0 || (*(_BYTE *)((v141[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
        {
LABEL_79:
          sub_827AF0(v22, v124, 110);
          goto LABEL_80;
        }
        v130 = v141[0] & 0xFFFFFFFFFFFFFFFCLL;
        v127 = *(_QWORD *)((v141[0] & 0xFFFFFFFFFFFFFFFCLL) + 48);
        v125 = *(_QWORD *)(v22 + 16);
        v23 = sub_B167E0(*v114, v21);
        v24 = sub_6DC9E0(v125, v23, v127);
        v26 = v130;
        if ( !v24 )
        {
          sub_827AF0(*a1, a2, 110);
          goto LABEL_80;
        }
        if ( (*(_WORD *)a2 & 0x1FF) == 0x5C )
        {
          v27 = *(_BYTE *)(a2 + 4) & 0x3F;
          v28 = *(_BYTE *)(a2 + 4) & 0x3F;
          if ( v27 == 15 || v27 == 20 || (unsigned __int8)v28 <= 0x1Du && (v29 = 871104512, _bittest64(&v29, v28)) )
          {
            v30 = *(_QWORD *)(*a1 + 32);
            v31 = (unsigned int)(*(_DWORD *)(v30 + 208) + 1);
            v32 = *(_DWORD *)(v30 + 176);
            *(_DWORD *)(v30 + 208) = v31;
            v102 = (v31 << 32) | v32;
            if ( (*(_BYTE *)(v130 + 28) & 0x7Fu) - 33 > 3 )
            {
              v34 = *a1;
              v35 = v110;
              v36 = (__int64)v109;
            }
            else
            {
              v128 = v31;
              v33 = sub_7A5610((_DWORD *)v130);
              v34 = *a1;
              v26 = v130;
              LODWORD(v31) = v128;
              if ( v33 )
              {
                v35 = v110 - 1;
                v36 = (__int64)(v109 + 1);
              }
              else
              {
                v35 = v110;
                v36 = (__int64)v109;
              }
            }
            v115 = v26;
            if ( !(unsigned __int8)sub_899300(v36, v35, v31, v34, v26, 1u) )
              goto LABEL_80;
            v26 = v115;
            v129 = a2;
            v126 = v115;
          }
          else
          {
            v129 = a2;
            v126 = 0;
          }
        }
        else
        {
          v126 = 0;
          v129 = 0;
        }
        if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 33 > 3 )
          goto LABEL_30;
        v116 = (_QWORD *)v26;
        v37 = sub_7A5610((_DWORD *)v26);
        v41 = (__int64)v116;
        if ( v37 || v129 && (v42 = sub_7A4F00(v116), v41 = (__int64)v116, v42) )
        {
          v89 = *a1;
          if ( !v110 )
          {
            sub_827AF0(v89, a2, 110);
            goto LABEL_80;
          }
          v120 = (char *)v41;
          if ( !(unsigned __int8)sub_89DEE0(v89, *v109, (__int64)&v134, v38, v39, v40) )
            goto LABEL_80;
          v131 = v120;
          v91 = (unsigned __int8)sub_7A4F00(v120) == 0;
          v92 = nullptr;
          if ( v91 )
            v92 = &v134;
          v119 = v92;
          v93 = sub_A2CB40(*a1);
          v45 = (__int64)v131;
          v67 = 0;
          if ( *(char *)(v93 + 1) < 0 )
          {
            if ( v129 )
            {
              if ( (*(_BYTE *)(v129 + 4) & 0x3F) == 0xF && v131[82] < 0 )
              {
                if ( (v140[64] & 2) != 0 )
                  goto LABEL_80;
                if ( (v136 & 1) != 0 )
                  goto LABEL_80;
                v98 = sub_84FB20(*a1, (_DWORD *)*v109, &v134);
                v45 = (__int64)v131;
                v67 = 0;
                if ( !v98 )
                  goto LABEL_80;
              }
            }
          }
          --v110;
          ++v109;
        }
        else
        {
          v103 = v41;
          v43 = sub_7A5D20(v41);
          v26 = v103;
          if ( !v43 )
          {
LABEL_30:
            v104 = v26;
            v44 = sub_77DE60((_QWORD *)v26, 0, nullptr, v25);
            v45 = v104;
            if ( v44 )
            {
              v46 = *a1;
              if ( (*(_DWORD *)(v104 + 40) & 7) == 6
                && (*(_DWORD *)(*(_QWORD *)(v104 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) == 1 )
              {
                v148 = 0u;
                v149 = 0;
                v153 = 0x800000000LL;
                v150 |= 1u;
                v151 = 0;
                v152 = v154;
                v154[65] = 0;
                v48 = sub_87DD20(v46, a2, &v148);
                if ( (_BYTE)v48 )
                {
                  sub_81F730((__int64)&v148, (__int64)&v132);
                  v97 = sub_8934C0(v5, 1, v7);
                  v7 = -1;
                  v48 = v97;
                }
                if ( v152 != v154 )
                  free(v152);
LABEL_81:
                v74 = v145;
                if ( v145 == v147 )
                  goto LABEL_39;
                goto LABEL_82;
              }
              if ( (unsigned __int8)sub_873630(v46, a2) )
              {
                v47 = v7;
                v7 = -1;
                v48 = sub_8934C0(v5, 1, v47);
                goto LABEL_81;
              }
LABEL_80:
              v48 = 0;
              goto LABEL_81;
            }
            goto LABEL_116;
          }
          v94 = sub_79A330(v103 + 72);
          if ( v94 )
            v94 -= 64LL;
          v95 = sub_7A3750(v94);
          v96 = sub_7A3730(v94);
          v67 = 0;
          if ( v96 )
          {
            v107 = (unsigned int *)sub_780F80(v103);
            v90 = sub_780E20(v95);
            v148.m128i_i64[0] = 0;
            v45 = (__int64)sub_7DA670(v90, (__int64)(v107 + 2), *v107, (__int64)&v148);
LABEL_116:
            v119 = nullptr;
            v67 = 0;
            goto LABEL_117;
          }
          v45 = v95;
          v119 = nullptr;
        }
LABEL_117:
        if ( v145 != v147 )
        {
          v108 = v45;
          free(v145);
          v67 = 0;
          v45 = v108;
        }
        if ( v126 )
        {
LABEL_71:
          v148.m128i_i64[0] = (__int64)&v149;
          v148.m128i_i64[1] = 0x400000000LL;
          if ( v119 )
          {
            v123 = v67;
            if ( (*(_BYTE *)(v45 + 28) & 0x7Fu) - 33 > 3 )
            {
LABEL_103:
              v112 = (char *)v45;
              v141[0] = 0;
              v84 = (unsigned __int16 *)sub_78BC30((_QWORD *)v45, v141);
              v85 = sub_8124E0(a2);
              if ( (unsigned __int8)sub_837DA0(*a1, v85, v112, v141[0], (__int64)v84) )
              {
                v113 = *a1;
                v86 = sub_8124E0(a2);
                if ( (unsigned __int8)sub_895450(
                                        v86,
                                        v141[0],
                                        v119,
                                        a2,
                                        (_DWORD **)v109,
                                        v84,
                                        v126,
                                        v102,
                                        v113,
                                        (__int64)&v132,
                                        0) )
                {
                  if ( !v148.m128i_i32[2]
                    || (unsigned __int8)sub_82E940(*a1, a2, (__int64)&v132, v148.m128i_i64[0], v148.m128i_u32[2]) )
                  {
                    goto LABEL_107;
                  }
                }
              }
LABEL_76:
              v48 = 0;
              goto LABEL_77;
            }
            v111 = v45;
            if ( sub_83DE60(v45) && !v123 )
            {
              v45 = sub_84F640(*a1, a2, v119, v111, (__int64)&v148);
              if ( !v45 )
                goto LABEL_76;
            }
            else
            {
              v76 = sub_7A5610((_DWORD *)v111);
              v45 = v111;
              if ( v76 )
              {
                v77 = sub_84E640(
                        *a1,
                        (_DWORD *)a2,
                        v119,
                        4 * (unsigned int)((*(_BYTE *)(v111 + 28) & 0x7F) == 34) + 5,
                        0);
                v45 = v111;
                if ( !v77 )
                  goto LABEL_76;
              }
            }
          }
          if ( (*(_BYTE *)(v45 + 28) & 0x7F) == 0x22 )
          {
            v71 = *(_QWORD *)(*a1 + 16);
            v72 = sub_79A330(v45 + 72);
            if ( v72 )
              v72 -= 64LL;
            v73 = sub_6E8B00(v71, v72);
            if ( !(unsigned __int8)sub_8926A0(*a1, (_DWORD *)a2, v119, v73) )
              goto LABEL_76;
LABEL_107:
            v87 = v7;
            v7 = -1;
            v48 = sub_8934C0(v5, 1, v87);
LABEL_77:
            v74 = (void *)v148.m128i_i64[0];
            if ( (__int64 *)v148.m128i_i64[0] != &v149 )
LABEL_82:
              free(v74);
LABEL_39:
            if ( ptr != v140 )
              free(ptr);
            if ( v7 != -1 )
              sub_8934C0(v5, 0, v7);
            --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 192LL);
            if ( (_BYTE)v48 )
            {
              sub_824D00(a1[1], *(_QWORD **)(*a1 + 16), (__int64)&v132);
              if ( v132 > 1 )
                sub_69F740((__int64)&v132);
            }
            else
            {
              if ( v132 > 1 )
              {
                sub_69F740((__int64)&v132);
                if ( !*((_BYTE *)a1 + 16) )
                  return v48;
              }
              else if ( !*((_BYTE *)a1 + 16) )
              {
                return v48;
              }
              if ( !sub_821520(a2) )
                return v48;
              v53 = a1[1];
              sub_69F1F0((__int64)&v148, a2, 0, 0);
              sub_823790(v53, v148.m128i_i64[0], v148.m128i_i64[1], 1);
              v54 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL;
              v55 = *(_QWORD *)v54;
              if ( *(_BYTE *)(*(_QWORD *)v54 + 16LL) != 41 )
                v55 = sub_B0D320(v55);
              v56 = a1[1];
              v57 = *(_QWORD *)(v55 + 32);
              v58 = *a1;
              v59 = *(unsigned int *)(v56 + 56);
              if ( (_DWORD)v59 )
              {
                sub_A2E240(v58, a2, 2297, 0);
                *(_BYTE *)(v56 + 24) |= 1u;
                *(_DWORD *)(v56 + 56) = 0;
              }
              else
              {
                v60 = *(_BYTE *)(v56 + 24);
                if ( (v60 & 1) == 0 )
                {
                  if ( (v60 & 2) != 0
                    || (*(_BYTE *)(v56 + 24) & 8) != 0
                    && *(_QWORD *)(*(_QWORD *)(v56 + 48) + 8LL * ((*(_DWORD *)(v56 + 24) >> 4) - 1)) == *(_QWORD *)(v56 + 32) )
                  {
                    v88 = (unsigned __int8 **)sub_A2E240(v58, a2, 2264, 0);
                    if ( v88 )
                      sub_823450(v88, 3);
                    *(_BYTE *)(v56 + 24) |= 1u;
                    *(_DWORD *)(v56 + 56) = 0;
                  }
                  else
                  {
                    v61 = *(_DWORD *)(v56 + 60);
                    *(_BYTE *)(v56 + 24) |= 4u;
                    if ( !v61 )
                    {
                      sub_25D6060(v56 + 48, v56 + 64, 1, 8);
                      v59 = *(unsigned int *)(v56 + 56);
                    }
                    *(_QWORD *)(*(_QWORD *)(v56 + 48) + 8 * v59) = 0;
                    v62 = *(_DWORD *)(v56 + 56);
                    v63 = *(_DWORD *)(v56 + 24);
                    *(_QWORD *)(v56 + 40) = v57;
                    ++v62;
                    *(_QWORD *)(v56 + 32) = 0x7FFFFFFFFFFFFFFFLL;
                    *(_DWORD *)(v56 + 56) = v62;
                    *(_DWORD *)(v56 + 24) = v63 & 7 | (16 * v62) | 8;
                  }
                }
              }
            }
            return 1;
          }
          goto LABEL_103;
        }
        goto LABEL_69;
      }
LABEL_37:
      sub_827AF0(*a1, a2, 110);
      goto LABEL_38;
    }
    if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) != 0x1F2 )
    {
      if ( *(_BYTE *)(v17 + 16) != 41 )
        goto LABEL_37;
      goto LABEL_7;
    }
    v64 = *a1;
    v65 = *(_WORD *)v14 & 0x1FF;
    if ( v65 == 47 )
    {
      v118 = v14;
      if ( !(unsigned __int8)sub_89DEE0(v64, *(_QWORD *)(v14 + 16), (__int64)&v134, v16, v14, v12) )
        goto LABEL_38;
      v14 = v118;
      v45 = *(_QWORD *)(v118 + 24);
      if ( (*(_BYTE *)(v45 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v66 = *(_BYTE *)(v118 + 2);
        v119 = &v134;
        v67 = (v66 & 0x10) != 0;
LABEL_69:
        v122 = v67;
        v68 = *(_QWORD *)(*a1 + 32);
        v105 = v45;
        v69 = (unsigned int)(*(_DWORD *)(v68 + 208) + 1);
        v70 = *(_DWORD *)(v68 + 176);
        *(_DWORD *)(v68 + 208) = v69;
        v102 = (v69 << 32) | v70;
        if ( (unsigned __int8)sub_899300((__int64)v109, v110, v69, *a1, v45, 0) )
        {
          v45 = v105;
          v67 = v122;
          v126 = v105;
          goto LABEL_71;
        }
LABEL_38:
        v48 = 0;
        goto LABEL_39;
      }
      goto LABEL_87;
    }
    if ( v65 <= 0x76u )
    {
      if ( v65 == 103 )
      {
        v100 = v14;
        v78 = sub_A2CB40(v64);
        v81 = v100;
        if ( *(char *)(v78 + 1) >= 0 )
        {
          sub_A2E240(*a1, v100, 2278, 0);
          v81 = v100;
        }
        v101 = (_DWORD *)v81;
        if ( (unsigned __int8)sub_89DEE0(*a1, *(_QWORD *)(v81 + 16), (__int64)&v134, v79, v81, v80) )
        {
          v82 = sub_8C1F60(v101);
          v48 = sub_8926A0(*a1, v101, &v134, v82);
          goto LABEL_39;
        }
        goto LABEL_38;
      }
    }
    else if ( v65 <= 0x78u )
    {
      v106 = v14;
      v75 = sub_89E210(v64, v14, (__int64)&v134, 0, v14, v12);
      v45 = v75;
      if ( !v75 )
        goto LABEL_38;
      v67 = 0;
      v119 = &v134;
      v14 = v106;
      if ( (*(_BYTE *)(v75 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_69;
LABEL_87:
      v64 = *a1;
    }
    sub_827AF0(v64, v14, 110);
    goto LABEL_38;
  }
  v52 = sub_80FBD0(a2);
  return sub_87F0C0(a1, a2, v52);
}

