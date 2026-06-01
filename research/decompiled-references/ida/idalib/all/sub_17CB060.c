void __fastcall sub_17CB060(__int64 a1, char *a2, double a3)
{
  __int64 v4; // rbx
  size_t v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r12
  size_t v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 i; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // r12
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 *v20; // rax
  unsigned int v21; // eax
  bool v22; // zf
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 *v33; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned int v38; // ecx
  int v39; // eax
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  char v44; // r12
  __int64 v45; // rdx
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _BYTE *v55; // rax
  int v56; // eax
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // edx
  __int64 *v64; // rsi
  unsigned int v65; // ecx
  __int64 v66; // rax
  __int64 v67; // r12
  size_t v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int16 v74; // ax
  __int64 v75; // rax
  unsigned int v76; // eax
  unsigned int v77; // edx
  __int64 *v78; // rsi
  unsigned int v79; // ecx
  size_t v80; // rax
  unsigned __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  unsigned __int8 v85; // al
  __int64 v86; // rsi
  char v87; // al
  __int64 *v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rax
  __int16 v91; // ax
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r12
  __int64 *v99; // rsi
  unsigned int v100; // edx
  __int64 v101; // rax
  __int64 v102; // rax
  unsigned __int64 v103; // rax
  __int64 v104; // r12
  __int64 v105; // rax
  __int64 v106; // rdi
  unsigned int v107; // r12d
  bool v108; // al
  __int64 v109; // r12
  __int64 v110; // rdi
  size_t v111; // rax
  size_t v112; // rax
  __int64 v113; // rdx
  unsigned __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rsi
  unsigned __int64 v118; // rdi
  __int64 *v119; // r14
  _QWORD *v120; // rdx
  unsigned __int64 v121; // r15
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 *v124; // rax
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  unsigned __int64 v128; // rcx
  __int64 *v129; // rax
  __int64 v130; // rax
  bool v131; // al
  __int64 *v132; // rsi
  unsigned int v133; // edx
  __int64 v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rax
  __int64 *v137; // rbp
  unsigned int v138; // edx
  unsigned int v139; // ecx
  unsigned int v140; // edx
  __int64 *v141; // rsi
  unsigned int v142; // ecx
  char v143; // al
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 *v149; // rsi
  unsigned int v150; // edx
  __int64 v151; // rax
  __int64 v152; // rax
  char v153; // [rsp+1h] [rbp-119h] BYREF
  unsigned __int64 v154; // [rsp+2h] [rbp-118h] BYREF
  __int64 v155; // [rsp+Ah] [rbp-110h] BYREF
  void *v156; // [rsp+12h] [rbp-108h] BYREF
  __m128i v157; // [rsp+1Ah] [rbp-100h]
  void *v158; // [rsp+2Ah] [rbp-F0h]
  __int64 v159; // [rsp+3Ah] [rbp-E0h] BYREF
  void *v160; // [rsp+52h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+5Ah] [rbp-C0h]

  if ( a2[28] < 0 )
    return;
  v4 = (__int64)a2;
  v154 = *((_QWORD *)a2 + 6);
  if ( (unsigned __int8)sub_179FCB0(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL)) )
    return;
  if ( (a2[29] & 1) != 0 )
    sub_180FE80(a1, a2);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 35 <= 1 )
  {
    sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *((_DWORD *)a2 + 6), 0x13A3u, 0);
    v5 = j__strlen("*");
    sub_9EC740((__int64)&v156, *((_DWORD *)a2 + 6), "*", v5, 0);
    sub_1589170((__int64)&v160, &v156);
    if ( v158 != &v159 )
      operator delete(v158);
    sub_15F7200(&v160);
    a2 = (char *)v154;
    v154 = sub_A74EC0(*(_QWORD *)(a1 + 248), v154);
    *(_QWORD *)(v4 + 48) = v154;
  }
  v6 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v6 + 47) & 0x20) == 0 )
  {
    if ( sub_9B48E0(v4)
      && (*(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0
      && (*(_DWORD *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_DWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL] & 7u) >> 9 )
    {
      v77 = *(_DWORD *)(v4 + 24);
      v78 = (__int64 *)(a1 + 8);
      v79 = 3094;
      goto LABEL_129;
    }
    v6 = *(_QWORD *)(a1 + 232);
  }
  if ( *(_DWORD *)(v6 + 48) == 120 )
  {
    v80 = j__strlen("cl_clang_storage_class_specifiers");
    a2 = "cl_clang_storage_class_specifiers";
    if ( !sub_FF8450(a1 + 200, (__int64)"cl_clang_storage_class_specifiers", v80, v6)
      && (unsigned __int8)sub_17A0330(v4) )
    {
      v32 = *(_DWORD *)(v4 + 24);
      v33 = (__int64 *)(a1 + 8);
      v34 = 5019;
      goto LABEL_122;
    }
    v6 = *(_QWORD *)(a1 + 232);
  }
  if ( (*(_BYTE *)(v6 + 47) & 0x20) == 0 )
  {
LABEL_29:
    v22 = !sub_9B48E0(v4);
    v25 = v154;
    if ( !v22 )
    {
      v26 = (__int64 *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
      v35 = *(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v35 & 8) == 0 )
        goto LABEL_31;
      v36 = v35 & 0xFFFFFFFFFFFFFFF0LL;
      v37 = ((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            | *(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 4)
          & 3;
      if ( (_DWORD)v37 != 1 )
        goto LABEL_31;
      if ( (*(_BYTE *)(v4 + 29) & 1) == 0 || !sub_179AE90(v4, (__int64)a2, v37, v36, v23, v24) )
      {
        a2 = (char *)(a1 + 8);
        v38 = 6955;
        if ( !(*(_BYTE *)(*(_QWORD *)(a1 + 232) + 208LL) >> 6) )
          v38 = 6597;
        sub_168B9F0((__int64)&v160, (__int64 *)a2, *(_DWORD *)(v4 + 24), v38, 0);
        sub_15F7200(&v160);
      }
      v25 = v154;
    }
    v26 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_31:
    if ( sub_F65F60(*v26) )
    {
      if ( **(_QWORD **)(a1 + 608) )
      {
        v32 = *(_DWORD *)(v4 + 24);
        v33 = (__int64 *)(a1 + 8);
        v34 = 5475;
        goto LABEL_122;
      }
      if ( (*(_BYTE *)(v4 + 96) & 7) != 2 )
      {
        v32 = *(_DWORD *)(v4 + 24);
        v33 = (__int64 *)(a1 + 8);
        v34 = 5477;
        goto LABEL_122;
      }
      v27 = *(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v27 + 16) - 2 > 1 )
        goto LABEL_39;
      v31 = *(_QWORD *)(v27 + 40);
      if ( (*(_BYTE *)(v27 + 19) & 2) != 0 )
      {
        v27 = *(_QWORD *)v31;
        if ( *(_DWORD *)(v31 + 8) <= 0x40u )
          v31 = *(_QWORD *)v31;
        else
          v31 = *(_QWORD *)v27;
      }
      if ( v31 )
      {
LABEL_39:
        v32 = *(_DWORD *)(v4 + 24);
        v33 = (__int64 *)(a1 + 8);
        v34 = 5323;
LABEL_122:
        sub_168B9F0((__int64)&v160, v33, v32, v34, 0);
        goto LABEL_112;
      }
    }
    v42 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v42 + 60) & 0x20) != 0 && (*(_BYTE *)(v42 + 89) & 4) != 0 )
    {
      a2 = nullptr;
      v103 = sub_15F1640(a1, 0);
      v104 = v103;
      if ( v103 )
      {
        if ( (*(_BYTE *)(v103 + 29) & 1) != 0
          && (sub_179A8E0(v103, 0, v27, v28, v29, v30)
           || (*(_BYTE *)(v104 + 29) & 1) != 0 && sub_179A970(v104, 0, v27, v28, v29, v30)) )
        {
          a2 = (char *)v154;
          v105 = sub_A72040(*(_QWORD **)(a1 + 248), v154);
          if ( v105 )
          {
            v27 = (unsigned int)*(unsigned __int8 *)(v105 + 16) - 2;
            if ( (unsigned int)v27 <= 1 )
            {
              v106 = *(_QWORD *)(v105 + 40);
              if ( (*(_BYTE *)(v105 + 19) & 2) != 0 )
              {
                v107 = *(_DWORD *)(v106 + 8);
                v108 = v107 <= 0x40 ? *(_QWORD *)v106 == 0 : v107 == (unsigned int)sub_2206780(v106);
              }
              else
              {
                v108 = v106 == 0;
              }
              if ( v108 )
              {
                sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0x14CCu, 0);
                a2 = (char *)&v156;
                LODWORD(v156) = 2;
                sub_1587D10((__int64)&v160, (int *)&v156);
                sub_15F7200(&v160);
              }
            }
          }
        }
      }
    }
    v43 = *(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
    v44 = *(_BYTE *)(v43 + 17) & 8;
    if ( v44 )
    {
      sub_15F2480(a1);
      if ( (unsigned __int8)sub_B843B0((_BYTE *)v4) )
        goto LABEL_190;
    }
    else
    {
      if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
        goto LABEL_61;
      v124 = sub_B8C3D0(v4, (__int64)a2, v27, v28, v29, v30);
      v127 = *v124;
      v128 = *v124 + 8LL * *((unsigned int *)v124 + 2);
      if ( *v124 >= v128 )
      {
        if ( v127 != v128 )
        {
          while ( *(_WORD *)(*(_QWORD *)v128 + 36LL) != 174 )
          {
            v128 += 8LL;
            if ( v127 == v128 )
              goto LABEL_219;
          }
          goto LABEL_221;
        }
      }
      else
      {
        v129 = (__int64 *)*v124;
        while ( 1 )
        {
          v127 = *v129;
          if ( *(_WORD *)(*v129 + 36) == 174 )
            break;
          if ( (__int64 *)v128 == ++v129 )
            goto LABEL_219;
        }
        if ( (__int64 *)v128 != v129 )
          goto LABEL_221;
      }
LABEL_219:
      if ( (*(_BYTE *)(v4 + 29) & 1) != 0 && sub_179AE90(v4, (__int64)a2, v127, v128, v125, v126) )
      {
LABEL_221:
        sub_15F2480(a1);
        v43 = *(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_61:
        v45 = *(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v46 = *(_BYTE *)(v45 + 16);
        if ( v46 != 6 )
        {
LABEL_62:
          if ( v46 == 13 && ((*(_WORD *)(v45 + 18) >> 3) & 0x1FF) == 0x1B3 )
          {
            a2 = (char *)sub_B8C330(v4);
            if ( (unsigned int)sub_B74100(v4, (__int64)a2) || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
            {
              sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0x148Du, 0);
              sub_1605D30((__int64)&v160, (__int64 *)&v154);
              goto LABEL_112;
            }
          }
          if ( !sub_9B48E0(v4) && (*(_BYTE *)(v4 + 29) & 1) != 0 && sub_179AE90(v4, (__int64)a2, v47, v48, v49, v50) )
          {
            v32 = *(_DWORD *)(v4 + 24);
            v33 = (__int64 *)(a1 + 8);
            v34 = 3331;
            goto LABEL_122;
          }
          if ( !sub_9B48E0(v4) && sub_F582C0(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL)) && !sub_F65EB0(&v154) )
          {
            v51 = *(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
            v123 = *(_QWORD *)(*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v123 + 16) != 13 || ((*(_WORD *)(v123 + 18) >> 3) & 0x1FF) != 0x1B2)
              && (unsigned __int8)(*(_BYTE *)(v51 + 16) - 27) > 1u )
            {
              sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0x1378u, 0);
              sub_1605D30((__int64)&v160, (__int64 *)&v154);
              goto LABEL_112;
            }
          }
          if ( v44 && (*(_BYTE *)(v4 + 29) & 1) != 0 && sub_179AE90(v4, (__int64)a2, v51, v52, v53, v54) )
          {
            v32 = *(_DWORD *)(v4 + 24);
            v33 = (__int64 *)(a1 + 8);
            v34 = 3332;
            goto LABEL_122;
          }
          v55 = *(_BYTE **)(a1 + 232);
          if ( (*v55 & 8) != 0 )
          {
            if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x2B )
            {
              if ( (v55[1] & 8) == 0 )
                goto LABEL_79;
              goto LABEL_187;
            }
            if ( *(char *)(v4 + 97) >= 0 )
              goto LABEL_79;
            if ( (unsigned __int8)sub_17AF6D0(a1, *(_DWORD *)(v4 + 24), v154) )
              goto LABEL_113;
            v55 = *(_BYTE **)(a1 + 232);
          }
          if ( (v55[1] & 8) == 0 )
            goto LABEL_79;
          if ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0x2B )
          {
            if ( *(char *)(v4 + 97) < 0
              && (*(_BYTE *)(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
              && (unsigned __int8)sub_1E666A0(a1, *(unsigned int *)(v4 + 24), v154, 3488) )
            {
              goto LABEL_113;
            }
LABEL_79:
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 23) > 1
              || ((v56 = *(_BYTE *)(v4 + 28) & 0x7F, v56 == 46) || v56 == 40) && sub_179A840(v4) )
            {
LABEL_84:
              if ( !sub_F58320(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL))
                || (v57 = *(_QWORD *)(a1 + 544), (*(_BYTE *)(v57 + 8) & 0x7Fu) - 34 > 5) )
              {
LABEL_86:
                if ( sub_F58350(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL)) )
                {
                  v58 = *(_QWORD *)(a1 + 544);
                  if ( (*(_BYTE *)(v58 + 8) & 0x7Fu) - 34 <= 5 )
                  {
                    v59 = *(_QWORD *)(a1 + 248);
                    v160 = nullptr;
                    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
                    sub_A83E70(v59, (char **)&v160, v58 - 72);
                    v60 = *(_QWORD *)(a1 + 784);
                    v61 = sub_B8C1B0(*(_QWORD *)(a1 + 544));
                    sub_1C2B2A0(v60, v154, *(unsigned int *)(v4 + 24), v61, &v160);
                    sub_17A8FD0(&v160);
                  }
                }
                return;
              }
              v109 = v57 - 72;
              v110 = *(_QWORD *)(a1 + 248);
              v156 = nullptr;
              v157 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
              sub_A83E70(v110, (char **)&v156, v109);
              v111 = j__strlen("sve");
              if ( !(unsigned __int8)sub_FBE200((__int64)"sve", v111, (__int64)&v156) )
              {
                v112 = j__strlen("sme");
                if ( (unsigned __int8)sub_FBE200((__int64)"sme", v112, (__int64)&v156) )
                {
                  if ( (unsigned __int8)sub_B7B300(v109, 1, v113, v114) )
                    goto LABEL_178;
                  v140 = *(_DWORD *)(v4 + 24);
                  v141 = (__int64 *)(a1 + 8);
                  v142 = 5045;
                }
                else
                {
                  v140 = *(_DWORD *)(v4 + 24);
                  v141 = (__int64 *)(a1 + 8);
                  v142 = 5046;
                }
                sub_168B9F0((__int64)&v160, v141, v140, v142, 0);
                sub_1605D30((__int64)&v160, (__int64 *)&v154);
                sub_15F7200(&v160);
                sub_B88650(v4, 1);
                sub_17A8FD0(&v156);
                return;
              }
LABEL_178:
              sub_17A8FD0(&v156);
              goto LABEL_86;
            }
            goto LABEL_83;
          }
LABEL_187:
          if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 23) > 1 )
            goto LABEL_84;
LABEL_83:
          if ( !(unsigned __int8)sub_1C0D9F0(*(_QWORD *)(a1 + 768), v154, *(unsigned int *)(v4 + 24)) )
            goto LABEL_84;
LABEL_113:
          sub_B88650(v4, 1);
          return;
        }
        if ( sub_9B48E0(v4) )
        {
LABEL_204:
          v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v46 = *(_BYTE *)(v45 + 16);
          goto LABEL_62;
        }
LABEL_190:
        v116 = *(_QWORD *)(v4 + 56);
        v157.m128i_i32[0] = 1;
        v156 = nullptr;
        v117 = *(_QWORD **)(a1 + 248);
        v157.m128i_i8[4] = 0;
        v118 = v116 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v116 & 4) != 0 )
          v118 = *(_QWORD *)(v118 + 32);
        v119 = sub_17A0050(v118, v117, &v153, (__int64)&v156);
        if ( v119 )
        {
          v120 = (_QWORD *)(*(_QWORD *)(v4 + 56) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v4 + 56) & 4) != 0 )
            v120 = (_QWORD *)v120[4];
          if ( v154 == *v120 )
            v121 = *v119;
          else
            v121 = sub_179FCF0(v154, *(_QWORD **)(a1 + 248), &v153, (__int64)&v156);
          if ( (v121 & 0xFFFFFFFFFFFFFFF0LL) != 0
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 6 )
          {
            a2 = (char *)(a1 + 8);
            sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0x1662u, 0);
            sub_15F7200(&v160);
            v122 = *(_QWORD *)(v4 + 56);
            *(_QWORD *)(v4 + 48) = v121;
            if ( (v122 & 4) != 0 )
              *(_QWORD *)((v122 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v119;
            else
              *(_QWORD *)(v4 + 56) = (unsigned __int64)v119 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v157.m128i_i32[0] > 0x40u && v156 )
              operator delete[](v156);
            goto LABEL_204;
          }
        }
        else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL) != 6 )
        {
          v131 = sub_A5EB90(v4);
          v132 = (__int64 *)(a1 + 8);
          v133 = *(_DWORD *)(v4 + 24);
          if ( v131 )
            sub_168B9F0((__int64)&v160, v132, v133, 0x154Eu, 0);
          else
            sub_168B9F0((__int64)&v160, v132, v133, 0x154Du, 0);
          sub_15F7200(&v160);
LABEL_249:
          sub_B88650(v4, 1);
          if ( v157.m128i_i32[0] > 0x40u && v156 )
            operator delete[](v156);
          return;
        }
        v135 = v154;
        v136 = sub_A72040(*(_QWORD **)(a1 + 248), v154);
        if ( !v136 || *(_BYTE *)(v136 + 16) != 6 )
          BUG();
        v137 = (__int64 *)(a1 + 8);
        v155 = sub_EEC8C0(*(_QWORD *)(v136 + 40), v135, a3);
        if ( sub_A5EB90(v4) )
        {
          v138 = *(_DWORD *)(v4 + 24);
          v139 = 5449;
        }
        else
        {
          v143 = sub_17A0330(v4);
          v138 = *(_DWORD *)(v4 + 24);
          v139 = 5448;
          if ( !v143 )
            v139 = 5447;
        }
        sub_168B9F0((__int64)&v160, v137, v138, v139, 0);
        sub_15884C0((__int64)&v160, &v155);
        sub_15F7200(&v160);
        goto LABEL_249;
      }
    }
    v43 = *(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_61;
  }
  v7 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
    v7 = *(_QWORD *)v7;
  v156 = *(void **)(v4 + 48);
  v8 = *(_QWORD *)((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_E3A850(v8) || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
  {
    v63 = *(_DWORD *)(v4 + 24);
    v64 = (__int64 *)(a1 + 8);
    v65 = 4706;
LABEL_111:
    sub_168B9F0((__int64)&v160, v64, v63, v65, 0);
    sub_1605D30((__int64)&v160, (__int64 *)&v156);
LABEL_112:
    sub_15F7200(&v160);
    goto LABEL_113;
  }
  if ( !sub_9B48E0(v4)
    && ((*(_BYTE *)(v4 + 96) & 7) != 2 && ((*(_BYTE *)(v4 + 96) & 7) != 0 || ((*(_BYTE *)(v4 + 96) >> 3) & 3) != 2)
     || sub_A5EB90(v4)) )
  {
    v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v90 + 16) == 13 )
    {
      v91 = (*(_WORD *)(v90 + 18) >> 3) & 0x1FF;
      if ( v91 == 496 || ((v91 + 19) & 0x1FFu) <= 1 )
      {
        v63 = *(_DWORD *)(v4 + 24);
        v64 = (__int64 *)(a1 + 8);
        v65 = 4064;
        goto LABEL_111;
      }
    }
  }
  v9 = *(_QWORD *)(a1 + 232);
  v10 = j__strlen("__cl_clang_function_pointers");
  if ( !sub_FF8450(a1 + 200, (__int64)"__cl_clang_function_pointers", v10, v9) )
  {
    for ( i = *(_QWORD *)&byte_8[(unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[(unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v156)
            & 7; ; i = sub_F68450(v15, (__int64)"__cl_clang_function_pointers", v17, v11, v12) )
    {
      v14 = i & 0xFFFFFFFFFFFFFFF0LL;
      v15 = *(_QWORD *)v14;
      v16 = (__int64 *)v14;
      v17 = *(unsigned __int8 *)(*(_QWORD *)v14 + 16LL);
      v18 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_BYTE)v18 == 42 )
      {
        if ( (_BYTE)v17 == 42 )
        {
LABEL_96:
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 32)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 25 <= 1 )
            goto LABEL_23;
        }
        else
        {
LABEL_108:
          v15 = sub_F63050(v15, "__cl_clang_function_pointers", v17, v11);
          if ( v15 )
            goto LABEL_96;
        }
        v15 = *v16;
        v39 = *(unsigned __int8 *)(*v16 + 16);
        goto LABEL_98;
      }
      if ( (_BYTE)v17 == 33 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v19 + 16) == 26 )
          goto LABEL_22;
      }
      else
      {
        if ( (_BYTE)v18 != 33 )
          goto LABEL_116;
        v62 = sub_F63050(v15, "__cl_clang_function_pointers", v17, v11);
        if ( !v62 )
        {
          v15 = *v16;
          v18 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          goto LABEL_116;
        }
        v19 = *(_QWORD *)(*(_QWORD *)(v62 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v19 + 16) == 26 )
        {
          v15 = *v16;
          goto LABEL_106;
        }
      }
      v66 = sub_179A8B0(v19, (__int64)"__cl_clang_function_pointers", v17, v11);
      v15 = *v16;
      if ( v66 )
        goto LABEL_106;
      v18 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_116:
      if ( (unsigned int)(v18 - 43) > 1 )
        break;
LABEL_106:
      v39 = *(unsigned __int8 *)(v15 + 16);
      if ( (_BYTE)v39 == 42 )
        goto LABEL_96;
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v17 + 16) == 42 )
        goto LABEL_108;
LABEL_98:
      if ( (_BYTE)v39 == 33 )
        goto LABEL_22;
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v17 + 16) == 33 )
      {
        v15 = sub_F63050(v15, "__cl_clang_function_pointers", v17, v11);
        if ( v15 )
        {
LABEL_22:
          v20 = (__int64 *)(*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*v20 + 16) == 26 || sub_179A8B0(*v20, (__int64)"__cl_clang_function_pointers", v17, v11) )
            goto LABEL_23;
        }
        v15 = *v16;
        v39 = *(unsigned __int8 *)(*v16 + 16);
      }
      if ( (unsigned int)(v39 - 43) <= 1 )
        goto LABEL_51;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
      {
        v15 = sub_F63050(v15, "__cl_clang_function_pointers", v17, v11);
        if ( v15 )
        {
LABEL_51:
          while ( 1 )
          {
            v40 = *(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL;
            if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
              break;
            while ( 1 )
            {
              v15 = *(_QWORD *)v40;
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v40 + 16LL) - 43 <= 1 )
                break;
              v41 = sub_F63050(v15, "__cl_clang_function_pointers", v17, v11);
              v40 = *(_QWORD *)(v41 + 32) & 0xFFFFFFFFFFFFFFF0LL;
              if ( (*(_BYTE *)(v41 + 18) & 0x10) == 0 )
                goto LABEL_54;
            }
          }
LABEL_54:
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                               - 25) <= 1u )
          {
LABEL_23:
            sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0x124Bu, 0);
            LOBYTE(v155) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 16LL)
                         - 43 <= 1;
            sub_1588420((__int64)&v160, (unsigned __int8 *)&v155);
            goto LABEL_24;
          }
        }
        v15 = *v16;
        continue;
      }
    }
  }
  v67 = *(_QWORD *)(a1 + 232);
  v68 = j__strlen("cl_khr_fp16");
  a2 = "cl_khr_fp16";
  if ( !sub_FF8450(a1 + 200, (__int64)"cl_khr_fp16", v68, v67) )
  {
    a2 = (char *)v156;
    v115 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(*(_QWORD *)(a1 + 248), (__int64)v156) & 0xFFFFFFFFFFFFFFF0LL)
                                 + 8LL)
                     & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v115 + 16) == 13 && ((*(_WORD *)(v115 + 18) >> 3) & 0x1FF) == 0x1E0 )
    {
      v63 = *(_DWORD *)(v4 + 24);
      v64 = (__int64 *)(a1 + 8);
      v65 = 4686;
      goto LABEL_111;
    }
  }
  v71 = (__int64)v156;
  v72 = (unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL;
  v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v73 + 16) == 13 )
  {
    v74 = (*(_WORD *)(v73 + 18) >> 3) & 0x1FF;
    if ( v74 == 493 )
    {
      v75 = *(_QWORD *)&byte_8[(unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v75 & 8) == 0
        || (v71 = v75 & 0xFFFFFFFFFFFFFFF0LL,
            (*(_DWORD *)((char *)&qword_18 + (v75 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v75 & 7)) >> 9 != 4) )
      {
        v76 = sub_B73090(v4);
        v33 = (__int64 *)(a1 + 8);
        v34 = 3735;
        v32 = v76;
        goto LABEL_122;
      }
      goto LABEL_124;
    }
    if ( v74 != 492 )
      goto LABEL_124;
    v130 = *(_QWORD *)&byte_8[(unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v130 & 8) == 0 )
    {
      if ( (*(_BYTE *)(v7 + 8) & 0x7F) != 0 )
        goto LABEL_235;
      v71 = (unsigned __int8)v156 & 7;
      LOBYTE(v130) = v130 & 7;
LABEL_233:
      if ( (((unsigned __int8)v71 | (unsigned __int8)v130) & 1) == 0 )
      {
        sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0x125Au, 0);
        sub_15F7200(&v160);
        a2 = (_BYTE *)(&dword_0 + 1);
        sub_B88650(v4, 1);
      }
LABEL_235:
      if ( *(char *)(v4 + 28) < 0 )
        return;
      goto LABEL_124;
    }
    v71 = (unsigned __int8)v156 & 7;
    a2 = (char *)(*(_QWORD *)&byte_8[(unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL] & 7LL);
    v72 = (((unsigned int)a2 | *(_DWORD *)((char *)&qword_18 + (v130 & 0xFFFFFFFFFFFFFFF0LL))) >> 9) - 1;
    if ( (unsigned int)v72 > 1 )
    {
      if ( (*(_BYTE *)(v7 + 8) & 0x7F) != 0 )
        goto LABEL_235;
      v72 = *(_QWORD *)&byte_8[(unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL];
      v130 = v72 & 7;
    }
    else
    {
      sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0x1568u, 0);
      sub_15F7200(&v160);
      a2 = (_BYTE *)(&dword_0 + 1);
      sub_B88650(v4, 1);
      if ( (*(_BYTE *)(v7 + 8) & 0x7F) != 0 )
        goto LABEL_235;
      v71 = (unsigned __int8)v156 & 7;
      v72 = *(_QWORD *)&byte_8[(unsigned __int64)v156 & 0xFFFFFFFFFFFFFFF0LL];
      v130 = v72 & 7;
      if ( (v72 & 8) == 0 )
        goto LABEL_233;
    }
    a2 = (char *)(v130 | *(__int64 *)((char *)&qword_18 + (v72 & 0xFFFFFFFFFFFFFFF0LL)));
    v72 = ((unsigned int)v130 | *(_DWORD *)((char *)&qword_18 + (v72 & 0xFFFFFFFFFFFFFFF0LL))) >> 9;
    if ( (_DWORD)v72 == 3 )
      goto LABEL_235;
    goto LABEL_233;
  }
LABEL_124:
  if ( (*(_BYTE *)(v4 + 29) & 1) != 0 && sub_179AE90(v4, (__int64)a2, v71, v72, v69, v70) )
  {
    sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0x123Au, 0);
    sub_15F7200(&v160);
    return;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
  {
    if ( (v154 & 1) == 0 && (byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
    {
      v77 = *(_DWORD *)(v4 + 24);
      v78 = (__int64 *)(a1 + 8);
      v79 = 4690;
LABEL_129:
      sub_168B9F0((__int64)&v160, v78, v77, v79, 0);
      LODWORD(v156) = 0;
      sub_1587D10((__int64)&v160, (int *)&v156);
      goto LABEL_112;
    }
    if ( (*(_BYTE *)(v4 + 96) & 5) == 1 )
    {
      v32 = *(_DWORD *)(v4 + 24);
      v33 = (__int64 *)(a1 + 8);
      v34 = 4682;
      goto LABEL_122;
    }
  }
  if ( sub_A5EB90(v4) )
  {
    v81 = v154;
LABEL_134:
    v82 = (_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_135;
  }
  v22 = (unsigned __int8)sub_17A0330(v4) == 0;
  v81 = v154;
  if ( !v22 )
    goto LABEL_134;
  v82 = (_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v4 + 96) & 5) == 1 )
  {
LABEL_135:
    v83 = *(_QWORD *)(*(_QWORD *)(*v82 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v83 + 16) != 13 || ((*(_WORD *)(v83 + 18) >> 3) & 0x1FF) != 0x1EC)
      && (*(_BYTE *)(*v82 + 17LL) & 4) == 0 )
    {
      v84 = v82[1];
      if ( (v84 & 8) == 0
        || (v21 = (*(_DWORD *)((char *)&qword_18 + (v84 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v84 & 7)) >> 9,
            v21 != 3)
        && (v21 != 1 || (a2 = *(char **)(a1 + 232), !sub_17A1920(a1 + 200, (__int64)a2))) )
      {
        v85 = sub_17A0330(v4);
        v86 = *(_QWORD *)(a1 + 232);
        LODWORD(v156) = v85 | (2 * ((*(_BYTE *)(v4 + 96) & 5) == 1));
        v87 = sub_17A1920(a1 + 200, v86);
        v88 = (__int64 *)(a1 + 8);
        if ( v87 )
        {
          sub_168B9F0((__int64)&v160, v88, *(_DWORD *)(v4 + 24), 0x124Du, 0);
          v89 = sub_16CF4F0((__int64)&v160, (int *)&v156);
          if ( *(_BYTE *)(v89 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v89 + 32), (__int64)"global or constant", 1u);
          }
          else if ( *(_BYTE *)(v89 + 132) )
          {
            sub_17B29E0(v89, (__int64)"global or constant");
          }
          sub_15F7200(&v160);
        }
        else
        {
          sub_168B9F0((__int64)&v160, v88, *(_DWORD *)(v4 + 24), 0x124Du, 0);
          v134 = sub_16CF4F0((__int64)&v160, (int *)&v156);
          sub_17CAFB0(v134, (__int64)"constant");
          sub_15F7200(&v160);
        }
        goto LABEL_113;
      }
    }
    goto LABEL_29;
  }
  if ( (*(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL] & 8) == 0 )
    goto LABEL_29;
  v92 = (*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
       | *(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 9;
  if ( (v92 & 0x7FFFFF) != 1 )
  {
    if ( (v92 & 0x7FFFFF) - 2 > 1 )
    {
      if ( (v92 & 0x7FFFFB) != 0 )
      {
        sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0xC16u, 0);
        LODWORD(v156) = 1;
        sub_1587D10((__int64)&v160, (int *)&v156);
        goto LABEL_112;
      }
    }
    else
    {
      a2 = nullptr;
      v93 = sub_15F1640(a1, 0);
      v98 = v93;
      if ( v93 )
      {
        if ( (*(_BYTE *)(v93 + 29) & 1) == 0 || !sub_179AFB0(v93, 0, v94, v95, v96, v97) )
        {
          v99 = (__int64 *)(a1 + 8);
          v100 = *(_DWORD *)(v4 + 24);
          v101 = *(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v101 & 8) != 0
            && (*(_DWORD *)((char *)&qword_18 + (v101 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v101 & 7)) >> 9 == 3 )
          {
            sub_168B9F0((__int64)&v160, v99, v100, 0x124Cu, 0);
            LODWORD(v156) = 0;
            v152 = sub_1587D10((__int64)&v160, (int *)&v156);
            sub_17CAFB0(v152, (__int64)"constant");
            sub_15F7200(&v160);
          }
          else
          {
            sub_168B9F0((__int64)&v160, v99, v100, 0x124Cu, 0);
            LODWORD(v156) = 0;
            v102 = sub_1587D10((__int64)&v160, (int *)&v156);
            sub_162C0B0(v102, (__int64)"local");
            sub_15F7200(&v160);
          }
          goto LABEL_113;
        }
        if ( (*(_BYTE *)(v98 + 29) & 1) != 0
          && sub_179AFB0(v98, 0, v145, v146, v147, v148)
          && (*(_BYTE *)(*(_QWORD *)(a1 + 608) + 8LL) & 1) == 0 )
        {
          v149 = (__int64 *)(a1 + 8);
          v150 = *(_DWORD *)(v4 + 24);
          v151 = *(_QWORD *)&byte_8[v154 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v151 & 8) != 0
            && (*(_DWORD *)((char *)&qword_18 + (v151 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v151 & 7)) >> 9 == 3 )
          {
            sub_168B9F0((__int64)&v160, v149, v150, 0x1236u, 0);
            sub_17CAFB0((__int64)&v160, (__int64)"constant");
            sub_15F7200(&v160);
          }
          else
          {
            sub_168B9F0((__int64)&v160, v149, v150, 0x1236u, 0);
            sub_162C0B0((__int64)&v160, (__int64)"local");
            sub_15F7200(&v160);
          }
          goto LABEL_113;
        }
      }
    }
    goto LABEL_29;
  }
  sub_168B9F0((__int64)&v160, (__int64 *)(a1 + 8), *(_DWORD *)(v4 + 24), 0x124Cu, 0);
  LODWORD(v156) = 1;
  v144 = sub_1587D10((__int64)&v160, (int *)&v156);
  if ( *(_BYTE *)(v144 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v144 + 32), (__int64)"global", 1u);
  }
  else if ( *(_BYTE *)(v144 + 132) )
  {
    sub_17B29E0(v144, (__int64)"global");
  }
LABEL_24:
  sub_15F7200(&v160);
  sub_B88650(v4, 1);
}
