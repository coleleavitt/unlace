__int64 __fastcall sub_707EF0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 *v12; // rdx
  __int64 v13; // r12
  __int64 *v14; // rcx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r9
  __int64 result; // rax
  int v23; // ebx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r11
  int v27; // edi
  int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // r13
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int8 v39; // r8
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  char v45; // al
  __int64 v46; // rbp
  __int64 v47; // rcx
  void *v48; // rdi
  __int64 v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rsi
  unsigned __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rsi
  unsigned __int64 v59; // rax
  __int64 v60; // rsi
  bool v61; // al
  __int64 v62; // rdi
  bool v63; // al
  __int64 v64; // rdi
  int v65; // r10d
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  unsigned __int64 v69; // r14
  __int64 v70; // rdi
  unsigned __int64 v71; // r12
  __int64 v72; // rax
  unsigned __int64 v73; // r13
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rbp
  char v77; // al
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rax
  unsigned __int64 v82; // rdx
  __int64 v83; // rdi
  unsigned __int64 v84; // r10
  __int64 v85; // rax
  unsigned __int64 v86; // r14
  __int64 v87; // rdx
  _QWORD *v88; // r9
  __int64 v89; // rax
  _QWORD *v90; // rcx
  unsigned __int64 v91; // r10
  __int64 v92; // rax
  __int16 v93; // ax
  unsigned __int64 v94; // r12
  __int16 v95; // r14
  char v96; // al
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rdi
  __int64 v100; // rax
  char v101; // bp
  char v102; // r12
  int v103; // r13d
  __int64 v104; // rdi
  __int64 v105; // rax
  void *v106; // r14
  __int64 v107; // rdi
  unsigned __int64 v108; // r12
  __int64 v109; // rax
  unsigned __int64 v110; // r13
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rbp
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rax
  __int64 v119; // rax
  char v120; // bp
  __int64 v121; // rax
  int v122; // eax
  unsigned __int64 v123; // rax
  void *v124; // rax
  void *v125; // rax
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rax
  char v130; // al
  __int64 v131; // rax
  unsigned __int8 v132; // [rsp+0h] [rbp-F8h]
  unsigned __int8 v133; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v134; // [rsp+0h] [rbp-F8h]
  __int64 v135; // [rsp+0h] [rbp-F8h]
  __int64 *v136; // [rsp+0h] [rbp-F8h]
  __int64 *v137; // [rsp+0h] [rbp-F8h]
  __int64 *v138; // [rsp+0h] [rbp-F8h]
  __int64 *v139; // [rsp+0h] [rbp-F8h]
  char v140; // [rsp+0h] [rbp-F8h]
  __int64 *v141; // [rsp+0h] [rbp-F8h]
  __int64 *v142; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v143; // [rsp+0h] [rbp-F8h]
  _QWORD *v144; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v145; // [rsp+0h] [rbp-F8h]
  __int64 *v146; // [rsp+0h] [rbp-F8h]
  char v147; // [rsp+0h] [rbp-F8h]
  __int64 *v148; // [rsp+0h] [rbp-F8h]
  __int64 *v149; // [rsp+0h] [rbp-F8h]
  __int64 *v150; // [rsp+0h] [rbp-F8h]
  __int64 *v151; // [rsp+0h] [rbp-F8h]
  __int64 *v152; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v153; // [rsp+0h] [rbp-F8h]
  char v154; // [rsp+0h] [rbp-F8h]
  char v155; // [rsp+0h] [rbp-F8h]
  __int64 *v156; // [rsp+8h] [rbp-F0h]
  __int64 v157; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v158; // [rsp+8h] [rbp-F0h]
  unsigned int v159; // [rsp+8h] [rbp-F0h]
  __int64 *v160; // [rsp+8h] [rbp-F0h]
  char v161; // [rsp+8h] [rbp-F0h]
  char v162; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v163; // [rsp+8h] [rbp-F0h]
  _QWORD *v164; // [rsp+8h] [rbp-F0h]
  char v165; // [rsp+8h] [rbp-F0h]
  __int64 *v166; // [rsp+8h] [rbp-F0h]
  __int64 *v167; // [rsp+8h] [rbp-F0h]
  char v168; // [rsp+8h] [rbp-F0h]
  unsigned int v169; // [rsp+10h] [rbp-E8h]
  char v170; // [rsp+10h] [rbp-E8h]
  unsigned __int8 v171; // [rsp+10h] [rbp-E8h]
  __int64 v172; // [rsp+10h] [rbp-E8h]
  char v173; // [rsp+10h] [rbp-E8h]
  char v174; // [rsp+10h] [rbp-E8h]
  __int16 v175; // [rsp+10h] [rbp-E8h]
  unsigned int v176; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v177; // [rsp+18h] [rbp-E0h]
  char v178; // [rsp+18h] [rbp-E0h]
  char v179; // [rsp+18h] [rbp-E0h]
  char v180; // [rsp+20h] [rbp-D8h]
  char v181; // [rsp+20h] [rbp-D8h]
  char v182; // [rsp+28h] [rbp-D0h]
  void *v183; // [rsp+28h] [rbp-D0h]
  char v184; // [rsp+30h] [rbp-C8h]
  __int64 v185; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v186; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v187; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v188; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int64 v189; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v190; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v191; // [rsp+70h] [rbp-88h] BYREF
  _QWORD *v192; // [rsp+78h] [rbp-80h] BYREF
  void *v193; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v194; // [rsp+88h] [rbp-70h]
  void *v195; // [rsp+90h] [rbp-68h] BYREF
  unsigned int v196; // [rsp+98h] [rbp-60h]
  void *v197; // [rsp+A0h] [rbp-58h] BYREF
  void *v198; // [rsp+A8h] [rbp-50h]
  unsigned int v199; // [rsp+B0h] [rbp-48h]

  v10 = a3;
  v11 = a2;
  v186 = a3;
  v12 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v187 = a2;
  v13 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 42 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1 )
    {
      v13 = 0;
    }
    else
    {
      v169 = a5;
      v25 = sub_B0D320(v13);
      v12 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      a5 = v169;
      v13 = v25;
    }
  }
  v14 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( v16 == 42 || v16 == 43 )
  {
    if ( !*(_DWORD *)(a1[270] + 64LL) )
      return 0;
  }
  else
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1 )
    {
      v15 = 0;
      goto LABEL_6;
    }
    v176 = a5;
    v156 = v12;
    v17 = sub_B0D320(v15);
    v12 = v156;
    v14 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    v15 = v17;
    a5 = v176;
    if ( !*(_DWORD *)(a1[270] + 64LL) )
      goto LABEL_6;
  }
  if ( v13 && v15 )
  {
    if ( *(_BYTE *)(*v14 + 16) == *(_BYTE *)(*v12 + 16) )
    {
      v132 = a5;
      v23 = sub_6B2590(v15);
      v24 = sub_6B2590(v13);
      return sub_707EF0((_DWORD)a1, v24, v23, a4, v132, a6, 0);
    }
    return 0;
  }
LABEL_6:
  v18 = v15 | v13;
  if ( v18 )
    return 0;
  if ( (_BYTE)a5 )
  {
    v159 = a5;
    v11 = sub_6B3060(&v187, a2);
    v187 = v11;
    v52 = sub_6B3060(&v186, a2);
    a5 = v159;
    v186 = v52;
    v10 = v52;
    v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    v14 = (__int64 *)(v52 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( (v12[1] | v11 & 7) == (v14[1] | v10 & 7) )
    return v11;
  v19 = 0;
  if ( (v12[1] & 8) != 0 )
    v19 = *(__int64 *)((char *)&qword_18 + (v12[1] & 0xFFFFFFFFFFFFFFF0LL));
  v20 = v19 | v12[1] & 7 | v11 & 7;
  if ( (v14[1] & 8) != 0 )
  {
    v21 = *(__int64 *)((char *)&qword_18 + (v14[1] & 0xFFFFFFFFFFFFFFF0LL)) | v14[1] & 7 | v10 & 7;
    if ( v21 != v20 )
      goto LABEL_14;
  }
  else
  {
    v21 = v14[1] & 7 | v10 & 7;
    if ( v21 != v20 )
    {
LABEL_14:
      if ( (unsigned int)(v20 >> 9) == (unsigned int)(v21 >> 9)
        && (((unsigned __int8)(v21 ^ v20) | (unsigned __int8)((v21 >> 6) ^ (v20 >> 6))) & 7) == 0
        && ((v21 & 8) != 0) == ((v20 & 8) != 0) )
      {
        v53 = (v20 >> 4) & 3;
        v54 = (v21 >> 4) & 3;
        if ( (_DWORD)v53 != 1 && (_DWORD)v54 != 1 )
        {
          if ( (_DWORD)v53 == 2
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 33 )
          {
            v186 = v10;
            v122 = sub_6C4380(a1, v10, 2u);
            v187 = v11;
            return sub_707EF0((_DWORD)a1, v11, v122, 0, 0, 0, 0);
          }
          if ( (_DWORD)v54 == 2
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 33 )
          {
            v187 = v11;
            v55 = sub_6C4380(a1, v11, 2u);
            v186 = v10;
            return sub_707EF0((_DWORD)a1, v55, v10, 0, 0, 0, 0);
          }
        }
      }
      return 0;
    }
  }
  v26 = *(_QWORD *)(v12[1] & 0xFFFFFFFFFFFFFFF0LL);
  v177 = v12[1] & 0xFFFFFFFFFFFFFFF0LL;
  v157 = *(_QWORD *)(v14[1] & 0xFFFFFFFFFFFFFFF0LL);
  v27 = *(unsigned __int8 *)(v26 + 16);
  v28 = *(unsigned __int8 *)(v157 + 16);
  v29 = *(unsigned __int8 *)(v26 + 16);
  v170 = *(_BYTE *)(v157 + 16);
  if ( (_BYTE)v27 == 26 )
  {
    if ( v28 == 26 )
    {
      v65 = 25;
LABEL_131:
      switch ( v65 )
      {
        case 2:
          goto LABEL_30;
        case 3:
        case 13:
        case 14:
        case 40:
        case 46:
        case 47:
          return 0;
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 12:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 26:
        case 28:
        case 29:
        case 31:
        case 32:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 42:
        case 43:
        case 44:
        case 45:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
          if ( (unsigned int)(v28 - 56) > 1 )
          {
            v157 = sub_B0D320(v157);
            v26 = *(_QWORD *)v177;
            v27 = *(unsigned __int8 *)(*(_QWORD *)v177 + 16LL);
          }
          if ( (unsigned int)(v27 - 56) > 1 )
            v26 = sub_B0D320(v26);
          goto LABEL_110;
        case 7:
          v104 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 7 )
          {
            v165 = a5;
            v146 = v14;
            v105 = sub_B0D320(v104);
            LOBYTE(a5) = v165;
            v14 = v146;
            v104 = v105;
          }
          v106 = *(void **)(v104 + 32);
          v107 = *v14;
          v108 = (unsigned __int64)v106;
          if ( *(_BYTE *)(*v14 + 16) != 7 )
          {
            v147 = a5;
            v109 = sub_B0D320(v107);
            LOBYTE(a5) = v147;
            v107 = v109;
          }
          v110 = *(_QWORD *)(v107 + 32);
          if ( (_BYTE)a5 )
          {
            v154 = a5;
            v195 = v106;
            v125 = (void *)sub_6B3060(&v195, v29);
            v197 = (void *)v110;
            v195 = v125;
            v108 = (unsigned __int64)v125;
            v126 = sub_6B3060(&v197, v29);
            LOBYTE(a5) = v154;
            v110 = v126;
          }
          v195 = (void *)v108;
          v197 = (void *)v110;
          v111 = sub_707EF0((_DWORD)a1, v108, v110, 0, (unsigned __int8)a5, 0, 0);
          if ( (v111 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
            return 0;
          v112 = *(_QWORD *)&byte_8[v111 & 0xFFFFFFFFFFFFFFF0LL] | v111 & 7;
          if ( v112 == (*(_QWORD *)&byte_8[v108 & 0xFFFFFFFFFFFFFFF0LL] | v108 & 7) )
            return v11;
          if ( v112 == (*(_QWORD *)&byte_8[v110 & 0xFFFFFFFFFFFFFFF0LL] | v110 & 7) )
            return v10;
          return sub_6CA7E0((__int64)a1, v111);
        case 10:
          v99 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 10 )
          {
            v100 = *v14;
            v101 = *(_BYTE *)(v99 + 32) & 1;
            if ( *(_BYTE *)(*v14 + 16) == 10 )
            {
              v102 = *(_BYTE *)(v100 + 32) & 1;
LABEL_187:
              v103 = (*(_DWORD *)(v99 + 32) >> 1) & 0xFFFFFF;
              goto LABEL_188;
            }
          }
          else
          {
            v167 = v14;
            v151 = v12;
            v119 = sub_B0D320(v99);
            v14 = v167;
            v12 = v151;
            v120 = *(_BYTE *)(v119 + 32);
            v100 = *v167;
            v101 = v120 & 1;
            if ( *(_BYTE *)(*v167 + 16) == 10 )
            {
              v99 = *v151;
              v102 = *(_BYTE *)(v100 + 32) & 1;
              if ( *(_BYTE *)(*v151 + 16) == 10 )
                goto LABEL_187;
LABEL_229:
              v152 = v14;
              v121 = sub_B0D320(v99);
              v14 = v152;
              v99 = v121;
LABEL_225:
              v100 = *v14;
              v103 = (*(_DWORD *)(v99 + 32) >> 1) & 0xFFFFFF;
              if ( *(_BYTE *)(*v14 + 16) != 10 )
                v100 = sub_B0D320(*v14);
LABEL_188:
              if ( v102 == v101 && ((*(_DWORD *)(v100 + 32) >> 1) & 0xFFFFFF) == v103 )
                return v11;
              return 0;
            }
          }
          v166 = v14;
          v150 = v12;
          v118 = sub_B0D320(v100);
          v14 = v166;
          v99 = *v150;
          v102 = *(_BYTE *)(v118 + 32) & 1;
          if ( *(_BYTE *)(*v150 + 16) == 10 )
            goto LABEL_225;
          goto LABEL_229;
        case 11:
          v80 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 11 )
          {
            v162 = a5;
            v142 = v14;
            v81 = sub_B0D320(v80);
            LOBYTE(a5) = v162;
            v14 = v142;
            v80 = v81;
          }
          v82 = *(_QWORD *)(v80 + 32);
          v83 = *v14;
          v84 = v82;
          if ( *(_BYTE *)(*v14 + 16) != 11 )
          {
            v174 = a5;
            v163 = v82;
            v143 = v82;
            v85 = sub_B0D320(v83);
            LOBYTE(a5) = v174;
            v82 = v163;
            v84 = v143;
            v83 = v85;
          }
          v86 = *(_QWORD *)(v83 + 32);
          if ( (_BYTE)a5 )
          {
            v168 = a5;
            v192 = (_QWORD *)v82;
            v123 = sub_6B3060(&v192, v29);
            v193 = (void *)v86;
            v192 = (_QWORD *)v123;
            v153 = v123;
            v124 = (void *)sub_6B3060(&v193, v29);
            LOBYTE(a5) = v168;
            v84 = v153;
            v193 = v124;
            v86 = (unsigned __int64)v124;
          }
          if ( (*(_BYTE *)(a1[270] + 47LL) & 0x20) == 0 )
            goto LABEL_180;
          v87 = 0;
          v88 = (_QWORD *)(v84 & 0xFFFFFFFFFFFFFFF0LL);
          v89 = *(_QWORD *)&byte_8[v84 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v89 & 8) != 0 )
            v87 = *(__int64 *)((char *)&qword_18 + (v89 & 0xFFFFFFFFFFFFFFF0LL));
          v90 = (_QWORD *)(v86 & 0xFFFFFFFFFFFFFFF0LL);
          v91 = v87 | ((unsigned __int8)v84 | (unsigned __int8)v89) & 7;
          v92 = *(_QWORD *)&byte_8[v86 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v92 & 8) != 0 )
            v18 = *(__int64 *)((char *)&qword_18 + (v92 & 0xFFFFFFFFFFFFFFF0LL));
          v93 = v18 | ((unsigned __int8)v86 | (unsigned __int8)v92) & 7;
          v94 = v18 >> 9;
          v95 = v93;
          if ( (_DWORD)v94 != (unsigned int)(v91 >> 9) )
          {
            v179 = a5;
            v175 = v91;
            v164 = v88;
            v144 = v90;
            v96 = sub_B05B90((unsigned int)(v91 >> 9), (unsigned int)v94, a1);
            v90 = v144;
            v88 = v164;
            LOWORD(v91) = v175;
            LOBYTE(a5) = v179;
            if ( !v96 )
              return 0;
          }
          v84 = v91 & 0x1FF | *v88 & 0xFFFFFFFFFFFFFFF0LL;
          v86 = v95 & 0x1FF | *v90 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_180:
          v192 = (_QWORD *)v84;
          v193 = (void *)v86;
          v145 = v84;
          v97 = sub_707EF0((_DWORD)a1, v84, v86, a4, (unsigned __int8)a5, 0, 0);
          if ( (v97 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
            return 0;
          v98 = *(_QWORD *)&byte_8[v97 & 0xFFFFFFFFFFFFFFF0LL] | v97 & 7;
          if ( v98 == (*(_QWORD *)&byte_8[v145 & 0xFFFFFFFFFFFFFFF0LL] | v145 & 7) )
            return v11;
          if ( v98 == (*(_QWORD *)&byte_8[v86 & 0xFFFFFFFFFFFFFFF0LL] | v86 & 7) )
            return v10;
          return sub_6C4B80((__int64)a1, v97);
        case 25:
          goto LABEL_100;
        case 27:
          v113 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 27 )
          {
            v148 = v14;
            v114 = sub_B0D320(*v12);
            v14 = v148;
            v113 = v114;
          }
          v115 = *v14;
          if ( *(_BYTE *)(*v14 + 16) != 27 )
            v115 = sub_B0D320(v115);
          if ( (*(_BYTE *)(v115 + 49) & 1) == (*(_BYTE *)(v113 + 49) & 1)
            && *(_BYTE *)(v113 + 48) == *(_BYTE *)(v115 + 48)
            && ((*(_BYTE *)(v115 + 49) & 2) != 0) == ((*(_BYTE *)(v113 + 49) & 2) != 0)
            && *(_QWORD *)(v115 + 40) == *(_QWORD *)(v113 + 40) )
          {
            return v11;
          }
          return 0;
        case 30:
          if ( v170 != 30 )
          {
            v157 = sub_B0D320(v157);
            v26 = *(_QWORD *)v177;
            LOBYTE(v29) = *(_BYTE *)(*(_QWORD *)v177 + 16LL);
          }
          if ( (_BYTE)v29 != 30 )
            v26 = sub_B0D320(v26);
          if ( *(_QWORD *)(v157 + 32) == *(_QWORD *)(v26 + 32)
            && *(_DWORD *)(v26 + 40) == *(_DWORD *)(v157 + 40)
            && *(_DWORD *)(v26 + 44) == *(_DWORD *)(v157 + 44) )
          {
            return v11;
          }
          return 0;
        case 33:
          v76 = *v14;
          v77 = *(_BYTE *)(*v14 + 16);
          if ( a4 )
          {
            if ( v77 != 33 )
            {
              v141 = v12;
              v78 = sub_B0D320(*v14);
              v12 = v141;
              v76 = v78;
            }
            v79 = *v12;
            if ( *(_BYTE *)(*v12 + 16) != 33 )
              v79 = sub_B0D320(*v12);
            if ( !(unsigned __int8)sub_6D58F0((__int64)a1, v79, v76, a6) )
              return 0;
          }
          else
          {
            if ( v77 != 33 )
            {
              v149 = v12;
              v116 = sub_B0D320(*v14);
              v12 = v149;
              v76 = v116;
            }
            v117 = *v12;
            if ( *(_BYTE *)(*v12 + 16) != 33 )
              v117 = sub_B0D320(*v12);
            if ( !(unsigned __int8)sub_70ABF0(a1, v117, v76, v14, a5) )
              return 0;
          }
          return v11;
        case 34:
          goto LABEL_80;
        case 41:
          v67 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 41 )
          {
            v161 = a5;
            v139 = v14;
            v68 = sub_B0D320(v67);
            LOBYTE(a5) = v161;
            v14 = v139;
            v67 = v68;
          }
          v69 = *(_QWORD *)(v67 + 32);
          v70 = *v14;
          v71 = v69;
          if ( *(_BYTE *)(*v14 + 16) != 41 )
          {
            v140 = a5;
            v72 = sub_B0D320(v70);
            LOBYTE(a5) = v140;
            v70 = v72;
          }
          v73 = *(_QWORD *)(v70 + 32);
          if ( (_BYTE)a5 )
          {
            v155 = a5;
            v188 = v69;
            v127 = sub_6B3060(&v188, v29);
            v189 = v73;
            v188 = v127;
            v71 = v127;
            v128 = sub_6B3060(&v189, v29);
            LOBYTE(a5) = v155;
            v73 = v128;
          }
          v188 = v71;
          v189 = v73;
          v74 = sub_707EF0((_DWORD)a1, v71, v73, 0, (unsigned __int8)a5, 0, 0);
          if ( (v74 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
            return 0;
          v75 = *(_QWORD *)&byte_8[v74 & 0xFFFFFFFFFFFFFFF0LL] | v74 & 7;
          if ( v75 == (*(_QWORD *)&byte_8[v71 & 0xFFFFFFFFFFFFFFF0LL] | v71 & 7) )
            return v11;
          if ( v75 == (*(_QWORD *)&byte_8[v73 & 0xFFFFFFFFFFFFFFF0LL] | v73 & 7) )
            return v10;
          return sub_6C4160((__int64)a1, v74);
      }
    }
    if ( (unsigned int)(v28 - 5) <= 1 || v28 != 25 )
      goto LABEL_95;
LABEL_100:
    v187 = v11;
    v186 = v10;
    return sub_7096F0((_DWORD)a1, v11, v10, a4, (unsigned __int8)a5, 0, a7);
  }
  if ( v28 == 26 )
  {
    if ( (unsigned int)(v27 - 5) <= 1 || v27 != 25 )
      goto LABEL_95;
    goto LABEL_100;
  }
  v30 = v28 - 5;
  if ( (unsigned int)(v27 - 5) > 1 )
  {
    if ( v30 <= 1 )
    {
      if ( v27 == 2 )
        goto LABEL_30;
LABEL_95:
      v56 = *v12;
      v57 = *(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v58 = *(_QWORD *)v57;
      if ( *(_BYTE *)(*(_QWORD *)v57 + 16LL) == 46 )
      {
        v186 = v10;
        return sub_707DA0((__int64)a1, v58, v10, 0);
      }
      v59 = *(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v60 = *(_QWORD *)v59;
      if ( *(_BYTE *)(*(_QWORD *)v59 + 16LL) == 46 )
      {
        v187 = v11;
        return sub_707DA0((__int64)a1, v60, v11, a6);
      }
      if ( a6 != 1 && a4 )
      {
        v160 = v14;
        v137 = v12;
        v61 = sub_6B30A0(v56);
        v62 = *v160;
        if ( v61 )
        {
          result = v11;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v62 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
            return result;
        }
        v63 = sub_6B30A0(v62);
        v14 = v160;
        v56 = *v137;
        if ( v63 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
          return v10;
      }
      if ( *(_BYTE *)(v56 + 16) == 16
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 16
        && (v138 = v14, v66 = sub_B0D320(v56), v14 = v138, (v56 = v66) != 0) )
      {
        if ( (*(_QWORD *)(v56 + 24) & 0xFFFFFFFFFFFFFFF8LL) <= 0xF
          && (*(_BYTE *)(v56 + 17) & 4) == 0
          && ((*(_BYTE *)(v56 + 18) >> 3) & 3) == 2 )
        {
          return v10;
        }
      }
      v64 = *v14;
      if ( (*(_BYTE *)(*v14 + 16) == 16
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v64 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 16
         && (v64 = sub_B0D320(v64)) != 0)
        && (*(_QWORD *)(v64 + 24) & 0xFFFFFFFFFFFFFFF8LL) <= 0xF
        && (*(_BYTE *)(v64 + 17) & 4) == 0
        && ((*(_BYTE *)(v64 + 18) >> 3) & 3) == 2 )
      {
        return v11;
      }
      return 0;
    }
    if ( v27 == 35 )
    {
      if ( v28 != 35 && v28 != 34 )
        goto LABEL_95;
    }
    else
    {
      if ( v28 != 35 )
      {
        if ( v27 == 57 )
        {
          if ( (unsigned __int8)(v170 - 56) > 1u )
            goto LABEL_95;
LABEL_110:
          if ( *(_QWORD *)(v157 + 32) == *(_QWORD *)(v26 + 32) && *(_DWORD *)(v26 + 20) == *(_DWORD *)(v157 + 20) )
            return v11;
          return 0;
        }
        if ( v28 == 57 )
        {
          if ( v27 != 56 )
            goto LABEL_95;
          goto LABEL_110;
        }
        if ( v28 != v27 )
          goto LABEL_95;
        v65 = *(unsigned __int8 *)(v26 + 16);
        goto LABEL_131;
      }
      if ( (_BYTE)v27 != 34 )
        goto LABEL_95;
    }
LABEL_80:
    v49 = *v14;
    if ( (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 34 > 1 )
    {
      v136 = v12;
      v50 = sub_B0D320(*v14);
      v12 = v136;
      v49 = v50;
    }
    v51 = *v12;
    if ( (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 34 > 1 )
      v51 = sub_B0D320(*v12);
    if ( (unsigned __int8)sub_70A720(a1, v51, v49) )
      return v11;
    return 0;
  }
  if ( v30 > 1 && v28 != 2 )
    goto LABEL_95;
LABEL_30:
  v133 = a5;
  v31 = sub_6D9A50(a1, v11);
  v32 = v31;
  if ( v31 && (unsigned int)*(unsigned __int8 *)(v31 + 16) - 2 >= 2 )
    v32 = 0;
  v33 = sub_6D9A50(a1, v10);
  v34 = v33;
  if ( v33 && (unsigned int)*(unsigned __int8 *)(v33 + 16) - 2 <= 1 )
  {
    if ( v32 )
    {
      v35 = *(_QWORD **)(v33 + 40);
      if ( (*(_BYTE *)(v34 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v35 + 2) <= 0x40u )
          v35 = (_QWORD *)*v35;
        else
          v35 = *(_QWORD **)*v35;
      }
      v36 = *(_QWORD **)(v32 + 40);
      if ( (*(_BYTE *)(v32 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v36 + 2) <= 0x40u )
          v36 = (_QWORD *)*v36;
        else
          v36 = *(_QWORD **)*v36;
      }
      if ( v36 != v35 )
        return 0;
    }
  }
  else
  {
    v34 = 0;
  }
  v171 = v133;
  v187 = v11;
  v37 = sub_6D9A50(a1, v11);
  v186 = v10;
  v134 = *(_QWORD *)(v37 + 32);
  v38 = sub_6D9A50(a1, v10);
  v39 = v171;
  v158 = *(_QWORD *)(v38 + 32);
  if ( v171 )
  {
    v190 = v134;
    v190 = sub_6B3060(&v190, v10);
    v134 = v190;
    v191 = v158;
    v129 = sub_6B3060(&v191, v10);
    v39 = v171;
    v158 = v129;
  }
  v190 = v134;
  v191 = v158;
  v40 = sub_707EF0((_DWORD)a1, v134, v158, 0, v39, 0, 0);
  if ( (v40 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  v41 = sub_6D9A50(a1, v11);
  if ( !v41 || *(_BYTE *)(v41 + 16) != 6 )
  {
    v42 = sub_6D9A50(a1, v10);
    if ( !v42 || *(_BYTE *)(v42 + 16) != 6 )
    {
      v178 = 0;
      v173 = 0;
      goto LABEL_66;
    }
    v173 = 0;
    v43 = 0;
    goto LABEL_51;
  }
  v172 = v41;
  v42 = sub_6D9A50(a1, v10);
  v43 = v172;
  if ( !v42 )
  {
LABEL_270:
    v178 = 0;
    v173 = 1;
    goto LABEL_52;
  }
  if ( *(_BYTE *)(v42 + 16) != 6 )
  {
    v42 = 0;
    goto LABEL_270;
  }
  v173 = 1;
LABEL_51:
  v178 = 1;
LABEL_52:
  v185 = v42;
  v193 = nullptr;
  v195 = nullptr;
  v192 = a1;
  v194 = 1;
  v196 = 1;
  sub_6B1210((__int64)&v197, &v192, v43, v32);
  v182 = (char)v197;
  v44 = v185;
  if ( v194 > 0x40 && v193 )
  {
    operator delete[](v193);
    v44 = v185;
  }
  v193 = v198;
  v194 = v199;
  sub_6B1210((__int64)&v197, &v192, v44, v34);
  v45 = (char)v197;
  if ( v196 > 0x40 && v195 )
  {
    v184 = (char)v197;
    operator delete[](v195);
    v45 = v184;
  }
  v195 = v198;
  v196 = v199;
  if ( v182 && v45 )
  {
    if ( v199 == v194 )
    {
      if ( v199 <= 0x40 )
      {
        if ( v198 == v193 )
          goto LABEL_63;
      }
      else if ( (unsigned __int8)sub_2586760(&v193, &v195) )
      {
LABEL_61:
        if ( v195 )
          operator delete[](v195);
        goto LABEL_63;
      }
    }
    else
    {
      if ( v199 >= v194 )
      {
        sub_2587D60(&v197, &v193);
        if ( (unsigned int)v198 <= 0x40 )
        {
          v130 = v197 == v195;
        }
        else
        {
          v183 = v197;
          v130 = sub_2586760(&v197, &v195);
          if ( v183 )
          {
            v181 = v130;
            operator delete[](v183);
            v130 = v181;
          }
        }
      }
      else
      {
        sub_2587D60(&v197, &v195);
        if ( v194 <= 0x40 )
          v130 = v193 == v197;
        else
          v130 = sub_2586760(&v193, &v197);
        if ( (unsigned int)v198 > 0x40 && v197 )
        {
          v180 = v130;
          operator delete[](v197);
          v130 = v180;
        }
      }
      if ( v130 )
        goto LABEL_60;
    }
    result = 0;
    if ( v196 > 0x40 && v195 )
    {
      operator delete[](v195);
      result = 0;
    }
    if ( v194 > 0x40 )
    {
      v48 = v193;
      if ( v193 )
        goto LABEL_76;
    }
    return result;
  }
LABEL_60:
  if ( v196 > 0x40 )
    goto LABEL_61;
LABEL_63:
  if ( v194 > 0x40 && v193 )
    operator delete[](v193);
LABEL_66:
  if ( !v32 )
  {
    if ( v34 )
      goto LABEL_69;
    if ( v173 )
    {
      if ( (v134 & 7 | *(_QWORD *)&byte_8[v134 & 0xFFFFFFFFFFFFFFF0LL]) == (*(_QWORD *)&byte_8[v40
                                                                                             & 0xFFFFFFFFFFFFFFF0LL]
                                                                          | v40 & 7)
        || !v178 )
      {
        return v11;
      }
      goto LABEL_146;
    }
    if ( v178 )
    {
LABEL_146:
      if ( (v158 & 7 | *(_QWORD *)&byte_8[v158 & 0xFFFFFFFFFFFFFFF0LL]) == (*(_QWORD *)&byte_8[v40
                                                                                             & 0xFFFFFFFFFFFFFFF0LL]
                                                                          | v40 & 7)
        || !v173 )
      {
        return v10;
      }
      return v11;
    }
    v131 = *(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] | v40 & 7;
    if ( v131 == (v134 & 7 | *(_QWORD *)&byte_8[v134 & 0xFFFFFFFFFFFFFFF0LL]) )
      return v11;
    if ( v131 != (v158 & 7 | *(_QWORD *)&byte_8[v158 & 0xFFFFFFFFFFFFFFF0LL]) )
      return sub_6C5C30((__int64)a1, v40, 0, 0);
    return v10;
  }
  if ( (v134 & 7 | *(_QWORD *)&byte_8[v134 & 0xFFFFFFFFFFFFFFF0LL]) == (*(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL]
                                                                      | v40 & 7) )
    return v11;
  if ( !v34 )
  {
LABEL_71:
    if ( (*(_BYTE *)(v32 + 19) & 2) != 0 )
      v46 = *(_QWORD *)(*(_QWORD *)(v32 + 40) + 16LL);
    else
      v46 = 0;
    sub_6B25E0((__int64)&v197, v32);
    v47 = v46;
    goto LABEL_74;
  }
LABEL_69:
  if ( (v158 & 7 | *(_QWORD *)&byte_8[v158 & 0xFFFFFFFFFFFFFFF0LL]) == (*(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL]
                                                                      | v40 & 7) )
    return v10;
  if ( v32 )
    goto LABEL_71;
  if ( (*(_BYTE *)(v34 + 19) & 2) != 0 )
    v32 = *(_QWORD *)(*(_QWORD *)(v34 + 40) + 16LL);
  sub_6B25E0((__int64)&v197, v34);
  v47 = v32;
LABEL_74:
  result = sub_6C55D0((__int64)a1, v40, (__int64)&v197, v47, 0, 0);
  if ( (unsigned int)v198 > 0x40 )
  {
    v48 = v197;
    if ( v197 )
    {
LABEL_76:
      v135 = result;
      operator delete[](v48);
      return v135;
    }
  }
  return result;
}

