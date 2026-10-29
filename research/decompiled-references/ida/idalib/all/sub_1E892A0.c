void __fastcall sub_1E892A0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v4; // r13
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  _QWORD *v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rbp
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rbp
  __int64 *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  __int64 v51; // rbp
  unsigned __int64 v52; // rax
  char *v53; // rax
  char *v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r15
  __int64 v65; // rax
  __int64 v66; // r15
  char v67; // al
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r12
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // r15
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  unsigned __int64 v97; // rax
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // r12
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // r9
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // rdx
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rax
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // rdx
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rax
  _QWORD *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rbp
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // [rsp+8h] [rbp-110h]
  __int64 v138; // [rsp+18h] [rbp-100h]
  __int64 v139; // [rsp+20h] [rbp-F8h]
  __int64 v140; // [rsp+20h] [rbp-F8h]
  __int64 v141; // [rsp+20h] [rbp-F8h]
  __int64 v142; // [rsp+20h] [rbp-F8h]
  __int64 v143; // [rsp+20h] [rbp-F8h]
  __int64 v144; // [rsp+20h] [rbp-F8h]
  __int64 v145; // [rsp+20h] [rbp-F8h]
  __int64 v146; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v147; // [rsp+20h] [rbp-F8h]
  __int64 v148; // [rsp+20h] [rbp-F8h]
  __int64 v149; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v150; // [rsp+28h] [rbp-F0h]
  __int64 v151; // [rsp+28h] [rbp-F0h]
  __int64 v152; // [rsp+28h] [rbp-F0h]
  __int64 v153; // [rsp+30h] [rbp-E8h]
  __int64 v154; // [rsp+38h] [rbp-E0h] BYREF
  int v155; // [rsp+44h] [rbp-D4h] BYREF
  _QWORD *v156; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v157[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v158; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v159[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v160; // [rsp+C8h] [rbp-50h]
  unsigned int v161; // [rsp+D0h] [rbp-48h]
  char v162; // [rsp+D4h] [rbp-44h]

  v4 = (__int64 *)(a1 + 8);
  v154 = a3;
  v6 = (__int64 *)(a1 + 8);
  sub_168B9F0((__int64)v157, (__int64 *)(a1 + 8), a2, 0x192Du, 0);
  if ( v160 )
  {
    v6 = (__int64 *)v154;
    sub_AE9DF0(v159, v154, 8u);
    if ( v160 )
    {
LABEL_74:
      v6 = (_QWORD *)(&dword_0 + 3);
      sub_AE9DF0(v159, 3, 2u);
      goto LABEL_3;
    }
  }
  else
  {
    if ( !v162 )
      goto LABEL_3;
    v90 = sub_168B9E0(v157);
    v91 = v158;
    if ( v158 )
      v91 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v158 + 32LL))(v158);
    v156 = (_QWORD *)v91;
    v92 = sub_1587BC0(v90, (__int64 *)&v156, v87, (__int64)&v156, v88, v89);
    v6 = (__int64 *)v154;
    sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * v161 + 8), v154, 8u);
    if ( v160 )
      goto LABEL_74;
  }
  if ( v162 )
  {
    v102 = sub_168B9E0(v157);
    v103 = v158;
    if ( v158 )
      v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v158 + 32LL))(v158);
    v156 = (_QWORD *)v103;
    v104 = sub_1587BC0(v102, (__int64 *)&v156, v99, (__int64)&v156, v100, v101);
    v6 = (_QWORD *)(&dword_0 + 3);
    sub_AE9DF0((unsigned __int8 **)(*v104 + 32LL * v161 + 8), 3, 2u);
  }
LABEL_3:
  sub_15F7200(v157);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 <= 1 )
  {
    sub_168B9F0((__int64)v157, v4, a2, 0x192Eu, 0);
    LODWORD(v156) = 0;
    v6 = (__int64 *)&v156;
    sub_1E889E0((__int64)v157, (int *)&v156);
    sub_15F7200(v157);
  }
  v9 = sub_C1BEF0((__int64)&v154, (__int64)v6, v7, v8);
  v10 = *(_QWORD **)(a1 + 248);
  v11 = v9;
  v154 = v9;
  v12 = sub_A72040(v10, v9);
  if ( v12 )
    v154 = *(_QWORD *)(v12 + 32);
  v17 = sub_F63270(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL), v11, v13, v14, v15, v16);
  v22 = (__int64)v17;
  if ( !v17 )
    return;
  if ( !v17[16] )
  {
    v11 = v17[13];
    sub_7052B0((__int64 *)(v11 + 96), v11, v18, v19, v20, v21);
    if ( !*(_QWORD *)(v22 + 128) )
      return;
  }
  v23 = (_QWORD *)sub_B7E900(v22, v11, v18, v19, v20, v21);
  if ( v23 )
  {
LABEL_10:
    if ( sub_B781F0((__int64)v23) )
      goto LABEL_18;
    v24 = (__int64)v4;
    if ( (*((_BYTE *)v23 + 68) & 1) == 0 )
    {
      sub_168B9F0((__int64)v157, v4, a2, 0x192Eu, 0);
      if ( v160 )
      {
        v24 = 13;
        sub_AE9DF0(v159, 13, 2u);
        if ( !v160 )
        {
LABEL_67:
          if ( !v162 )
            goto LABEL_14;
          v81 = sub_168B9E0(v157);
          v85 = v158;
          if ( v158 )
          {
            v144 = v81;
            v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v158 + 32LL))(v158);
            v81 = v144;
          }
          v156 = (_QWORD *)v85;
          v86 = sub_1587BC0(v81, (__int64 *)&v156, v81, v82, v83, v84);
          v24 = (__int64)v23;
          sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * v161 + 8), (__int64)v23, 0xAu);
          v67 = v160;
LABEL_59:
          v26 = v23[6];
          if ( v67 )
          {
            v24 = v23[6];
            sub_AE9DF0(v159, v24, 8u);
LABEL_16:
            v156 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*v23 + 16LL))(
                               v23,
                               v24,
                               v25,
                               v26);
            sub_1587DB0((__int64)v157, (__int64 *)&v156);
            sub_15F7200(v157);
            goto LABEL_18;
          }
LABEL_15:
          if ( v162 )
          {
            v140 = v26;
            v68 = sub_168B9E0(v157);
            v71 = v140;
            v72 = v68;
            v73 = v158;
            if ( v158 )
            {
              v149 = v140;
              v141 = v72;
              v73 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v158 + 32LL))(v158);
              v71 = v149;
              v72 = v141;
            }
            v142 = v71;
            v156 = (_QWORD *)v73;
            v74 = sub_1587BC0(v72, (__int64 *)&v156, v72, v71, v69, v70);
            v24 = v142;
            sub_AE9DF0((unsigned __int8 **)(*v74 + 32LL * v161 + 8), v142, 8u);
          }
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v162 )
        {
LABEL_14:
          v26 = v23[6];
          goto LABEL_15;
        }
        v75 = sub_168B9E0(v157);
        v79 = v158;
        if ( v158 )
        {
          v143 = v75;
          v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v158 + 32LL))(v158);
          v75 = v143;
        }
        v156 = (_QWORD *)v79;
        v80 = sub_1587BC0(v75, (__int64 *)&v156, v75, v76, v77, v78);
        v24 = 13;
        sub_AE9DF0((unsigned __int8 **)(*v80 + 32LL * v161 + 8), 13, 2u);
        if ( !v160 )
          goto LABEL_67;
      }
      v24 = (__int64)v23;
      sub_AE9DF0(v159, (__int64)v23, 0xAu);
      v67 = v160;
      goto LABEL_59;
    }
    sub_168B9F0((__int64)v157, v4, a2, 0x192Eu, 0);
    v155 = 16;
    v65 = sub_1E889E0((__int64)v157, &v155);
    v66 = v65;
    if ( *(_BYTE *)(v65 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v65 + 32), (__int64)v23, 0xAu);
    }
    else if ( *(_BYTE *)(v65 + 132) )
    {
      v105 = sub_168B9E0((_QWORD *)v65);
      v109 = *(_QWORD *)(v66 + 16);
      if ( v109 )
      {
        v145 = v105;
        v109 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v109 + 32LL))(v109);
        v105 = v145;
      }
      v156 = (_QWORD *)v109;
      v110 = sub_1587BC0(v105, (__int64 *)&v156, v105, v106, v107, v108);
      sub_AE9DF0((unsigned __int8 **)(*v110 + 32LL * *(unsigned int *)(v66 + 128) + 8), (__int64)v23, 0xAu);
    }
    v156 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
    sub_1587DB0(v66, (__int64 *)&v156);
    sub_15F7200(v157);
LABEL_18:
    while ( 1 )
    {
      v27 = v23[1] & 0xFFFFFFFFFFFFFFF8LL;
      v23 = (_QWORD *)v27;
      if ( !v27 )
        break;
      if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_10;
    }
  }
  v28 = sub_B8E970(v22 + 64);
  v33 = (_QWORD *)v28;
  if ( v28 )
  {
    if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 35 > 3 )
    {
      while ( 1 )
      {
        v34 = v33[1] & 0xFFFFFFFFFFFFFFF8LL;
        v33 = (_QWORD *)v34;
        if ( !v34 )
          break;
        if ( (*(_BYTE *)(v34 + 28) & 0x7Fu) - 35 <= 3 )
          goto LABEL_40;
      }
    }
    else
    {
LABEL_40:
      v61 = (*(__int64 (__fastcall **)(_QWORD *))(*v33 + 32LL))(v33);
      if ( (*(_QWORD *)(v61 + 80) & 0x40000LL) != 0
        || ((*(_QWORD *)(v61 + 80) >> 16) & 8) != 0
        || (unsigned int)sub_B984E0(v61) )
      {
        sub_168B9F0((__int64)v157, v4, a2, 0x192Eu, 0);
        v155 = 14;
        v63 = sub_1E889E0((__int64)v157, &v155);
        v64 = v63;
        if ( *(_BYTE *)(v63 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v63 + 32), (__int64)v33, 0xAu);
        }
        else if ( *(_BYTE *)(v63 + 132) )
        {
          v125 = sub_168B9E0((_QWORD *)v63);
          v128 = *(_QWORD *)(v64 + 16);
          if ( v128 )
          {
            v137 = v125;
            v128 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v128 + 32LL))(v128);
            v125 = v137;
          }
          v156 = (_QWORD *)v128;
          v129 = sub_1587BC0(v125, (__int64 *)&v156, v125, (__int64)&v156, v126, v127);
          sub_AE9DF0((unsigned __int8 **)(*v129 + 32LL * *(unsigned int *)(v64 + 128) + 8), (__int64)v33, 0xAu);
        }
        v156 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
        sub_1587DB0(v64, (__int64 *)&v156);
        sub_15F7200(v157);
      }
      else
      {
        while ( 1 )
        {
          v62 = v33[1] & 0xFFFFFFFFFFFFFFF8LL;
          v33 = (_QWORD *)v62;
          if ( !v62 )
            break;
          if ( (*(_BYTE *)(v62 + 28) & 0x7Fu) - 35 <= 3 )
            goto LABEL_40;
        }
      }
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(v22 + 104) + 96LL), *(_QWORD *)(v22 + 104), v29, v30, v31, v32);
  v39 = *(_QWORD *)(v22 + 128);
  if ( (*(_BYTE *)(v39 + 24) & 1) != 0 )
    v40 = sub_B96980(v39);
  else
    v40 = *(_QWORD *)(v39 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v22 + 104) + 96LL), *(_QWORD *)(v22 + 104), v35, v36, v37, v38);
  v41 = *(__int64 **)(v22 + 104);
  v138 = v40 + 24LL * *(unsigned int *)(*(_QWORD *)(v22 + 128) + 16LL);
  sub_7052B0(v41 + 12, (__int64)v41, v42, v43, v44, v45);
  v50 = *(_QWORD *)(v22 + 128);
  if ( (*(_BYTE *)(v50 + 24) & 1) != 0 )
    v51 = sub_B96980(v50);
  else
    v51 = *(_QWORD *)(v50 + 24);
  for ( ; v138 != v51; v51 += 24 )
  {
    v52 = *(_QWORD *)(**(_QWORD **)(v51 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v52 + 8) & 0xF) != 0 )
      v52 = sub_F64F00(**(_QWORD **)(v51 + 16), (__int64)v41, v46, v47, v48);
    v53 = (char *)sub_F63270(*(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v41, v46, v47, v48, v49);
    v54 = v53;
    if ( v53 && v53[28] >= 0 )
    {
      if ( (*(_BYTE *)(v51 + 12) & 1) != 0 )
      {
        sub_168B9F0((__int64)v157, v4, a2, 0x192Eu, 0);
        v155 = 5;
        v139 = sub_1E889E0((__int64)v157, &v155);
        v58 = sub_1E85C80(*(__int64 **)(v51 + 16), (__int64)&v155, v55, v56, v57);
        v59 = v139;
        if ( *(_BYTE *)(v139 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v139 + 32), v58, 8u);
          v59 = v139;
        }
        else if ( *(_BYTE *)(v139 + 132) )
        {
          v150 = v58;
          v111 = sub_168B9E0((_QWORD *)v139);
          v113 = v139;
          v114 = v150;
          v115 = v111;
          v116 = *(_QWORD **)(v139 + 16);
          if ( v116 )
          {
            v153 = v115;
            v116 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, unsigned __int64))(*v116 + 32LL))(
                               v116,
                               *v116,
                               v115,
                               v139,
                               v150);
            v115 = v153;
            v114 = v150;
            v113 = v139;
          }
          v151 = v114;
          v146 = v113;
          v156 = v116;
          v117 = sub_1587BC0(v115, (__int64 *)&v156, v115, v113, v114, v112);
          sub_AE9DF0((unsigned __int8 **)(*v117 + 32LL * *(unsigned int *)(v146 + 128) + 8), v151, 8u);
          v59 = v146;
        }
        v60 = *(_DWORD *)(v51 + 4);
        LODWORD(v156) = *(_DWORD *)v51;
        HIDWORD(v156) = v60;
        sub_1587DB0(v59, (__int64 *)&v156);
        sub_15F7200(v157);
      }
      v41 = *((__int64 **)v54 + 13);
      sub_7052B0(v41 + 12, (__int64)v41, v46, v47, v48, v49);
      if ( (*(_BYTE *)(*((_QWORD *)v54 + 16) + 1LL) & 2) == 0 )
      {
        sub_168B9F0((__int64)v157, v4, a2, 0x192Eu, 0);
        v155 = 15;
        v93 = sub_1E889E0((__int64)v157, &v155);
        v97 = sub_1E85C80(*(__int64 **)(v51 + 16), (__int64)&v155, v94, v95, v96);
        if ( *(_BYTE *)(v93 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v93 + 32), v97, 8u);
        }
        else if ( *(_BYTE *)(v93 + 132) )
        {
          v147 = v97;
          v118 = sub_168B9E0((_QWORD *)v93);
          v121 = v147;
          v122 = v118;
          v123 = *(_QWORD **)(v93 + 16);
          if ( v123 )
          {
            v152 = v122;
            v123 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, unsigned __int64))(*v123 + 32LL))(
                               v123,
                               *v123,
                               v122,
                               v147);
            v122 = v152;
            v121 = v147;
          }
          v148 = v121;
          v156 = v123;
          v124 = sub_1587BC0(v122, (__int64 *)&v156, v122, v121, v119, v120);
          sub_AE9DF0((unsigned __int8 **)(*v124 + 32LL * *(unsigned int *)(v93 + 128) + 8), v148, 8u);
        }
        v98 = *(_DWORD *)(v51 + 4);
        v41 = (__int64 *)&v156;
        LODWORD(v156) = *(_DWORD *)v51;
        HIDWORD(v156) = v98;
        sub_1587DB0(v93, (__int64 *)&v156);
        sub_15F7200(v157);
      }
    }
  }
  sub_168B9F0((__int64)v157, v4, *(_DWORD *)(v22 + 24), 0x170Bu, 0);
  if ( v160 )
  {
    sub_AE9DF0(v159, v22, 0xAu);
  }
  else if ( v162 )
  {
    v132 = sub_168B9E0(v157);
    v135 = v158;
    if ( v158 )
      v135 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v158 + 32LL))(v158);
    v156 = (_QWORD *)v135;
    v136 = sub_1587BC0(v132, (__int64 *)&v156, v130, v131, v133, v134);
    sub_AE9DF0((unsigned __int8 **)(*v136 + 32LL * v161 + 8), v22, 0xAu);
  }
  sub_15F7200(v157);
}
