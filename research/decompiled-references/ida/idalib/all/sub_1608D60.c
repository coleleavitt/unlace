void __fastcall sub_1608D60(__int64 **a1, unsigned __int8 *a2, char a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // rax
  __int64 v8; // rax
  unsigned __int8 **v9; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64); // rdx
  __int64 (__fastcall *v12)(__int64); // rcx
  __int64 v13; // r9
  char v14; // r14
  __int64 v15; // r13
  char v16; // al
  __int16 v17; // dx
  unsigned __int8 *v18; // rax
  _BYTE *v19; // rdi
  unsigned __int8 (*v20)(void); // rdx
  _BYTE *v21; // rdi
  __int64 (*v22)(void); // rax
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // r13
  char v26; // al
  bool v27; // zf
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // r12
  __int64 *v37; // rsi
  _QWORD *v38; // rdx
  __int64 v39; // r13
  __int64 (__fastcall *v40)(__int64); // rax
  char v41; // al
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 (__fastcall *v44)(__int64); // rax
  char v45; // al
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 *v49; // rax
  char *v50; // rdi
  __int64 v51; // rbp
  __int64 v52; // r12
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 *v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 *v61; // rax
  char *v62; // rdi
  __int64 v63; // rbp
  __int64 v64; // r12
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  char v73; // dl
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r15
  __int64 v82; // rax
  size_t v83; // rax
  __int64 v84; // rdx
  unsigned __int64 v85; // rcx
  __int64 *v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rcx
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rbp
  __int64 v95; // rax
  _BYTE *v96; // rdi
  __int64 (*v97)(void); // rax
  char v98; // al
  _BYTE *v99; // rdi
  unsigned __int8 (*v100)(void); // rax
  unsigned __int8 (*v101)(void); // rax
  __int64 v102; // rsi
  __int64 v103; // r13
  char v104; // al
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // r13
  __int64 v109; // r12
  _QWORD *v110; // rdi
  __int64 v111; // r13
  __int64 v112; // rdx
  __int64 *v113; // rdi
  __int64 v114; // rax
  __int64 (__fastcall *v115)(__int64); // rax
  char v116; // r14
  char v117; // r13
  __int64 v118; // rdi
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // rcx
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rax
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rcx
  __int64 v131; // rdx
  _QWORD *v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // rdi
  __int64 (__fastcall *v135)(__int64); // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  unsigned __int8 *v140; // rax
  _QWORD *v141; // rax
  char v142; // r15
  __int64 v143; // rdi
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // r12
  unsigned __int8 *v149; // rax
  _QWORD *v150; // rax
  char v151; // bp
  __int64 v152; // rdi
  __int64 v153; // rdx
  int v154; // eax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  void *v159; // rax
  _QWORD *v160; // rax
  __int64 v161; // [rsp+8h] [rbp-1A0h]
  unsigned int v162; // [rsp+8h] [rbp-1A0h]
  __int64 v163; // [rsp+8h] [rbp-1A0h]
  __int64 v164; // [rsp+8h] [rbp-1A0h]
  __int64 v165; // [rsp+8h] [rbp-1A0h]
  __int64 v166; // [rsp+8h] [rbp-1A0h]
  __int64 v167; // [rsp+10h] [rbp-198h]
  __int64 v168; // [rsp+10h] [rbp-198h]
  unsigned __int64 v169; // [rsp+18h] [rbp-190h] BYREF
  unsigned __int8 v170; // [rsp+22h] [rbp-186h] BYREF
  unsigned __int8 v171; // [rsp+23h] [rbp-185h] BYREF
  int v172; // [rsp+24h] [rbp-184h] BYREF
  unsigned __int64 v173; // [rsp+28h] [rbp-180h] BYREF
  unsigned __int8 *v174; // [rsp+30h] [rbp-178h] BYREF
  unsigned __int64 v175; // [rsp+38h] [rbp-170h]
  unsigned int v176; // [rsp+40h] [rbp-168h]
  void *ptr; // [rsp+50h] [rbp-158h] BYREF
  __m128i v178; // [rsp+58h] [rbp-150h]
  char v179; // [rsp+68h] [rbp-140h]
  _BYTE v180[72]; // [rsp+70h] [rbp-138h] BYREF
  __int64 v181; // [rsp+B8h] [rbp-F0h]
  int v182; // [rsp+C0h] [rbp-E8h]
  char v183; // [rsp+C8h] [rbp-E0h]
  __int64 v184; // [rsp+D0h] [rbp-D8h]
  void *v185; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-C0h]

  v7 = *a1;
  v169 = (unsigned __int64)a2;
  v8 = v7[29];
  if ( (*(_BYTE *)(v8 + 96) & 0x10) == 0
    && (!*(_DWORD *)(v8 + 64) || (*(_BYTE *)(v8 + 68) & 8) == 0)
    && (*(_BYTE *)(v8 + 89) & 4) == 0 )
  {
    goto LABEL_32;
  }
  v9 = (unsigned __int8 **)a1[1];
  v173 = v169;
  v10 = *(_QWORD *)(v169 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v10 + 17) & 4) != 0 )
    goto LABEL_32;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 10 )
  {
    if ( !sub_F58100(v10) || sub_A97D20(*((_QWORD *)*v9 + 31), *(_QWORD *)(v173 & 0xFFFFFFFFFFFFFFF0LL)) != 128 )
    {
      v14 = 0;
      goto LABEL_8;
    }
    v110 = *((_QWORD **)*v9 + 31);
    v111 = sub_A62D20(v110, v173);
    v27 = v111 == sub_21F90D0(v110, v173, v112);
    v113 = *(__int64 **)(*((_QWORD *)*v9 + 31) + 17448LL);
    v114 = *v113;
    if ( v27 )
    {
      v115 = *(__int64 (__fastcall **)(__int64))(v114 + 128);
      v11 = sub_102B810;
      if ( v115 == sub_102B810 )
      {
        v116 = *((_BYTE *)v113 + 282);
        goto LABEL_152;
      }
    }
    else
    {
      v115 = *(__int64 (__fastcall **)(__int64))(v114 + 96);
      v11 = sub_102B800;
      if ( v115 == sub_102B800 )
      {
        v116 = *((_BYTE *)v113 + 278);
LABEL_152:
        v14 = v116 ^ 1;
LABEL_8:
        a2 = *(unsigned __int8 **)(v173 & 0xFFFFFFFFFFFFFFF0LL);
        v15 = *(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL);
        v16 = *(_BYTE *)(v15 + 16);
        if ( v16 != 13 )
          goto LABEL_84;
        v17 = (*(_WORD *)(v15 + 18) >> 3) & 0x1FF;
        if ( v17 != 484 )
        {
LABEL_13:
          if ( v17 == 486 )
          {
            v11 = sub_102B800;
            v21 = *(_BYTE **)(*((_QWORD *)*v9 + 31) + 17448LL);
            v22 = *(__int64 (**)(void))(*(_QWORD *)v21 + 96LL);
            if ( (char *)v22 == (char *)sub_102B800 )
              v23 = v21[278];
            else
              v23 = v22();
            if ( !v23 )
              goto LABEL_17;
            a2 = *(unsigned __int8 **)(v173 & 0xFFFFFFFFFFFFFFF0LL);
            v15 = *(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL);
            v16 = *(_BYTE *)(v15 + 16);
            if ( v16 != 13 )
              goto LABEL_84;
            v17 = (*(_WORD *)(v15 + 18) >> 3) & 0x1FF;
          }
          if ( v17 != 487 )
            goto LABEL_132;
          v11 = sub_102B810;
          v96 = *(_BYTE **)(*((_QWORD *)*v9 + 31) + 17448LL);
          v97 = *(__int64 (**)(void))(*(_QWORD *)v96 + 128LL);
          if ( (char *)v97 == (char *)sub_102B810 )
            v98 = v96[282];
          else
            v98 = v97();
          if ( !v98 )
            goto LABEL_17;
          a2 = *(unsigned __int8 **)(v173 & 0xFFFFFFFFFFFFFFF0LL);
          v15 = *(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL);
          v16 = *(_BYTE *)(v15 + 16);
          if ( v16 == 13 )
          {
            v17 = (*(_WORD *)(v15 + 18) >> 3) & 0x1FF;
LABEL_132:
            if ( ((v17 + 76) & 0x1FFu) > 0x13 )
            {
LABEL_133:
              if ( v17 != 485 )
                goto LABEL_90;
              a2 = *v9;
              v99 = *(_BYTE **)(*((_QWORD *)*v9 + 31) + 17448LL);
              v100 = *(unsigned __int8 (**)(void))(*(_QWORD *)v99 + 112LL);
              if ( (char *)v100 == (char *)sub_F565C0 )
              {
                if ( v99[280] || v99[281] )
                {
LABEL_90:
                  if ( !v14 )
                    goto LABEL_32;
                  goto LABEL_17;
                }
              }
              else
              {
                if ( v100() )
                  goto LABEL_90;
                a2 = *v9;
              }
              if ( (*(_BYTE *)(*((_QWORD *)a2 + 29) + 89LL) & 4) != 0 )
                goto LABEL_90;
LABEL_18:
              sub_168B9B0(&v174, a2 + 8, 5080);
              v24 = *(_QWORD *)v9[1];
              if ( v24 )
                sub_15F0290(&v174, v24);
              else
                sub_AE9DF0(&v174, (__int64)"expression", 1u);
              sub_1606D30((__int64)&v185, *v9, *(unsigned int *)v9[2], v176, *(_QWORD *)v9[3]);
              v25 = sub_168DE00(&v185, &v174);
              ptr = *(void **)v25;
              v178 = *(__m128i *)(v25 + 8);
              v26 = *(_BYTE *)(v25 + 24);
              v183 = 0;
              v27 = *(_BYTE *)(v25 + 120) == 0;
              v179 = v26;
              if ( !v27 )
              {
                sub_FC70F0((__int64)v180, v25 + 32);
                v181 = *(_QWORD *)(v25 + 104);
                v119 = *(_DWORD *)(v25 + 112);
                v183 = 1;
                v182 = v119;
              }
              v184 = *(_QWORD *)(v25 + 128);
              sub_15F7200(&v185);
              LOBYTE(v172) = 1;
              v28 = sub_1588420((__int64)&ptr, (unsigned __int8 *)&v172);
              v29 = sub_A97D20(*((_QWORD *)*v9 + 31), *(_QWORD *)(v173 & 0xFFFFFFFFFFFFFFF0LL));
              if ( *(_BYTE *)(v28 + 120) )
              {
                sub_AE9DF0((unsigned __int8 **)(v28 + 32), (unsigned int)v29, 3u);
              }
              else if ( *(_BYTE *)(v28 + 132) )
              {
                v161 = v29;
                v120 = sub_168B9E0(v28);
                v123 = v161;
                v124 = v120;
                v125 = *(_QWORD **)(v28 + 16);
                if ( v125 )
                {
                  v167 = v124;
                  v125 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*v125 + 32LL))(
                                     v125,
                                     *v125,
                                     v161);
                  v124 = v167;
                  v123 = v161;
                }
                v162 = v123;
                v185 = v125;
                v126 = sub_1587BC0(v124, (__int64 *)&v185, v123, v124, v121, v122);
                sub_AE9DF0((unsigned __int8 **)(*v126 + 32LL * *(unsigned int *)(v28 + 128) + 8), v162, 3u);
              }
              v30 = sub_1605D30(v28, (__int64 *)&v173);
              v171 = 0;
              v31 = sub_1588420(v30, &v171);
              v32 = *((_QWORD *)*v9 + 31);
              if ( *(_BYTE *)(v31 + 120) )
              {
                sub_AEC220(
                  (unsigned __int8 **)(v31 + 32),
                  *(_BYTE **)(*(_QWORD *)(v32 + 17448) + 216LL),
                  *(_QWORD *)(*(_QWORD *)(v32 + 17448) + 224LL));
              }
              else
              {
                if ( !*(_BYTE *)(v31 + 132) )
                {
                  sub_15F7200(&ptr);
                  goto LABEL_27;
                }
                v163 = *(_QWORD *)(v32 + 17448);
                v127 = sub_168B9E0(v31);
                v130 = v163;
                v131 = v127;
                v132 = *(_QWORD **)(v31 + 16);
                if ( v132 )
                {
                  v168 = v131;
                  v132 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v132 + 32LL))(
                                     v132,
                                     *v132,
                                     v131,
                                     v163);
                  v131 = v168;
                  v130 = v163;
                }
                v164 = v130;
                v185 = v132;
                v133 = sub_1587BC0(v131, (__int64 *)&v185, v131, v130, v128, v129);
                sub_AEC220(
                  (unsigned __int8 **)(*v133 + 32LL * *(unsigned int *)(v31 + 128) + 8),
                  *(_BYTE **)(v164 + 216),
                  *(_QWORD *)(v164 + 224));
              }
              v117 = *(_BYTE *)(v31 + 120);
              sub_15F7200(&ptr);
              if ( v117 )
              {
                v118 = *(_QWORD *)v9[1];
                if ( !v118 )
                  goto LABEL_29;
                sub_B88650(v118, 1);
              }
LABEL_27:
              v33 = *(_QWORD *)v9[1];
              if ( v33 )
              {
                sub_1606D30((__int64)&v185, *v9, *(unsigned int *)(v33 + 24), 5899, *(_QWORD *)v9[3]);
                sub_15993D0((__int64)&v185, (__int64 *)v9[1]);
                sub_15F7200(&v185);
              }
LABEL_29:
              a2 = v174;
              if ( !v174 )
                goto LABEL_32;
LABEL_30:
              if ( v175 )
                sub_1580C40(v175, (unsigned __int64)a2);
              goto LABEL_32;
            }
            goto LABEL_88;
          }
LABEL_84:
          if ( v16 == 47 )
          {
            v66 = sub_F60F10(v15, (__int64)a2, (__int64)v11, (__int64)v12, a5, v13);
            if ( (*((_BYTE *)v66 + 74) & 1) == 0 && (v66[16] & 0xFFFFFFFFFFFFFFF8LL) == 0
              || *((char *)sub_F60F10(v15, (__int64)a2, v67, v68, a5, v69) + 76) < 0 )
            {
              goto LABEL_89;
            }
            a2 = *(unsigned __int8 **)(v173 & 0xFFFFFFFFFFFFFFF0LL);
          }
          else if ( v16 != 10 )
          {
            goto LABEL_90;
          }
LABEL_88:
          if ( sub_A97D20(*((_QWORD *)*v9 + 31), (__int64)a2) != 128 )
            goto LABEL_89;
          a2 = *v9;
          v134 = *(_QWORD *)(*((_QWORD *)*v9 + 31) + 17448LL);
          v135 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v134 + 56LL);
          if ( v135 == sub_102B790 )
          {
            if ( *(_BYTE *)(v134 + 8) <= 0x3Fu && !*(_BYTE *)(*(_QWORD *)(v134 + 208) + 352LL) )
              goto LABEL_18;
            goto LABEL_89;
          }
          if ( ((unsigned __int8 (*)(void))v135)() )
          {
LABEL_89:
            v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v173 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v70 + 16) != 13 )
              goto LABEL_90;
            v17 = (*(_WORD *)(v70 + 18) >> 3) & 0x1FF;
            goto LABEL_133;
          }
LABEL_17:
          a2 = *v9;
          goto LABEL_18;
        }
        v18 = *v9;
        v12 = sub_F565B0;
        v19 = *(_BYTE **)(*((_QWORD *)*v9 + 31) + 17448LL);
        v20 = *(unsigned __int8 (**)(void))(*(_QWORD *)v19 + 104LL);
        if ( (char *)v20 == (char *)sub_F565B0 )
        {
          if ( v19[279] )
          {
LABEL_12:
            v17 = (*(_WORD *)(v15 + 18) >> 3) & 0x1FF;
            goto LABEL_13;
          }
        }
        else
        {
          if ( v20() )
          {
            a2 = *(unsigned __int8 **)(v173 & 0xFFFFFFFFFFFFFFF0LL);
            v15 = *(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL);
            v16 = *(_BYTE *)(v15 + 16);
            if ( v16 != 13 )
              goto LABEL_84;
            goto LABEL_12;
          }
          v18 = *v9;
        }
        a2 = v18;
        goto LABEL_18;
      }
    }
    v116 = ((__int64 (*)(void))v115)();
    goto LABEL_152;
  }
  a2 = *v9;
  v101 = *(unsigned __int8 (**)(void))(**(_QWORD **)(*((_QWORD *)*v9 + 31) + 17448LL) + 64LL);
  if ( (char *)v101 != (char *)sub_102B7B0 )
  {
    if ( v101() )
      goto LABEL_32;
    a2 = *v9;
  }
  sub_168B9B0(&v174, a2 + 8, 5080);
  v102 = *(_QWORD *)v9[1];
  if ( v102 )
    sub_15F0290(&v174, v102);
  else
    sub_AE9DF0(&v174, (__int64)"expression", 1u);
  sub_1606D30((__int64)&v185, *v9, *(unsigned int *)v9[2], v176, *(_QWORD *)v9[3]);
  v103 = sub_168DE00(&v185, &v174);
  ptr = *(void **)v103;
  v178 = *(__m128i *)(v103 + 8);
  v104 = *(_BYTE *)(v103 + 24);
  v183 = 0;
  v27 = *(_BYTE *)(v103 + 120) == 0;
  v179 = v104;
  if ( !v27 )
  {
    sub_FC70F0((__int64)v180, v103 + 32);
    v181 = *(_QWORD *)(v103 + 104);
    v154 = *(_DWORD *)(v103 + 112);
    v183 = 1;
    v182 = v154;
  }
  v184 = *(_QWORD *)(v103 + 128);
  sub_15F7200(&v185);
  v171 = 0;
  v105 = sub_1588420((__int64)&ptr, &v171);
  v172 = 0;
  v106 = sub_1587D10(v105, &v172);
  v170 = 0;
  v107 = sub_1588420(v106, &v170);
  v108 = sub_1605D30(v107, (__int64 *)&v173);
  v109 = *(_QWORD *)(*((_QWORD *)*v9 + 31) + 17448LL);
  if ( *(_BYTE *)(v108 + 120) )
  {
    sub_AEC220((unsigned __int8 **)(v108 + 32), *(_BYTE **)(v109 + 216), *(_QWORD *)(v109 + 224));
  }
  else if ( *(_BYTE *)(v108 + 132) )
  {
    v155 = sub_168B9E0(v108);
    v159 = *(void **)(v108 + 16);
    if ( v159 )
    {
      v166 = v155;
      v159 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v159 + 32LL))(v159);
      v155 = v166;
    }
    v185 = v159;
    v160 = sub_1587BC0(v155, (__int64 *)&v185, v155, v156, v157, v158);
    sub_AEC220(
      (unsigned __int8 **)(*v160 + 32LL * *(unsigned int *)(v108 + 128) + 8),
      *(_BYTE **)(v109 + 216),
      *(_QWORD *)(v109 + 224));
  }
  sub_15F7200(&ptr);
  a2 = v174;
  if ( v174 )
    goto LABEL_30;
LABEL_32:
  v34 = *(_QWORD *)&byte_8[v169 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
  v35 = *(_QWORD *)(*(_QWORD *)v34 + 8LL) & 7LL;
  if ( v35 | (*(__int64 *)(*(_QWORD *)v34 + 8LL) >> 3) & 1 )
    v36 = sub_F64F00(
            *(_QWORD *)&byte_8[v169 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v169 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v169) & 7,
            (__int64)a2,
            v35,
            v35 | (*(__int64 *)(*(_QWORD *)v34 + 8LL) >> 3) & 1,
            a5)
        & 0xFFFFFFFFFFFFFFF0LL;
  else
    v36 = *(_QWORD *)v34 & 0xFFFFFFFFFFFFFFF0LL;
  v37 = *a1;
  v38 = (_QWORD *)(*a1)[31];
  v39 = v38[2181];
  v40 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 136LL);
  if ( v40 == sub_102B820 )
  {
    v41 = *(_BYTE *)(v39 + 283);
  }
  else
  {
    v41 = v40(v38[2181]);
    v37 = *a1;
    v38 = (_QWORD *)(*a1)[31];
  }
  if ( v41 || v38[2352] != v36 )
    goto LABEL_38;
  sub_168B9B0(&ptr, v37 + 1, 5080);
  v76 = *a1[2];
  if ( v76 )
    sub_15F0290((unsigned __int8 **)&ptr, v76);
  else
    sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"expression", 1u);
  sub_168CDE0(&v185, *a1 + 1, *(unsigned int *)a1[3], &ptr, *a1[4] != 0);
  v171 = 0;
  v77 = sub_1588420((__int64)&v185, &v171);
  LODWORD(v173) = 0;
  v78 = sub_1587D10(v77, (int *)&v173);
  v79 = sub_1605D30(v78, (__int64 *)&v169);
  LOBYTE(v172) = 0;
  v80 = sub_1588420(v79, (unsigned __int8 *)&v172);
  v81 = v80;
  if ( *(_BYTE *)(v80 + 120) )
  {
    sub_AEC220((unsigned __int8 **)(v80 + 32), *(_BYTE **)(v39 + 216), *(_QWORD *)(v39 + 224));
  }
  else
  {
    if ( !*(_BYTE *)(v80 + 132) )
    {
      sub_15F7200(&v185);
      goto LABEL_104;
    }
    v136 = sub_168B9E0(v80);
    v140 = *(unsigned __int8 **)(v81 + 16);
    if ( v140 )
    {
      v165 = v136;
      v140 = (unsigned __int8 *)(*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v140 + 32LL))(v140);
      v136 = v165;
    }
    v174 = v140;
    v141 = sub_1587BC0(v136, (__int64 *)&v174, v136, v137, v138, v139);
    sub_AEC220(
      (unsigned __int8 **)(*v141 + 32LL * *(unsigned int *)(v81 + 128) + 8),
      *(_BYTE **)(v39 + 216),
      *(_QWORD *)(v39 + 224));
  }
  v142 = *(_BYTE *)(v81 + 120);
  sub_15F7200(&v185);
  if ( !v142 )
  {
LABEL_104:
    v82 = *a1[2];
    if ( v82 )
    {
      sub_1606D30((__int64)&v185, *a1, *(unsigned int *)(v82 + 24), 5899, *a1[4]);
      sub_15993D0((__int64)&v185, a1[2]);
      sub_15F7200(&v185);
    }
    goto LABEL_106;
  }
  v143 = *a1[2];
  if ( v143 )
  {
    sub_B88650(v143, 1);
    goto LABEL_104;
  }
LABEL_106:
  v37 = (__int64 *)ptr;
  if ( ptr && v178.m128i_i64[0] )
    sub_1580C40(v178.m128i_u64[0], (unsigned __int64)ptr);
  v38 = (_QWORD *)(*a1)[31];
LABEL_38:
  v42 = v38[2351];
  v43 = v38[2350];
  if ( !a3 )
    goto LABEL_44;
  v44 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 144LL);
  v45 = v44 == sub_102B830 ? *(_BYTE *)(v39 + 284) : v44(v39);
  if ( v45 || v43 != v36 && v42 != v36 )
    goto LABEL_44;
  sub_168B9B0(&ptr, *a1 + 1, 5080);
  v89 = *a1[2];
  if ( v89 )
    sub_15F0290((unsigned __int8 **)&ptr, v89);
  else
    sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"expression", 1u);
  sub_168CDE0(&v185, *a1 + 1, *(unsigned int *)a1[3], &ptr, *a1[4] != 0);
  v171 = 0;
  v90 = sub_1588420((__int64)&v185, &v171);
  LODWORD(v173) = 0;
  v91 = sub_1587D10(v90, (int *)&v173);
  v92 = sub_1605D30(v91, (__int64 *)&v169);
  LOBYTE(v172) = 1;
  v93 = sub_1588420(v92, (unsigned __int8 *)&v172);
  v94 = v93;
  if ( *(_BYTE *)(v93 + 120) )
  {
    sub_AEC220((unsigned __int8 **)(v93 + 32), *(_BYTE **)(v39 + 216), *(_QWORD *)(v39 + 224));
  }
  else
  {
    if ( !*(_BYTE *)(v93 + 132) )
    {
      sub_15F7200(&v185);
      goto LABEL_119;
    }
    v148 = sub_168B9E0(v93);
    v149 = *(unsigned __int8 **)(v94 + 16);
    if ( v149 )
      v149 = (unsigned __int8 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v149 + 32LL))(*(_QWORD *)(v94 + 16));
    v174 = v149;
    v150 = sub_1587BC0(v148, (__int64 *)&v174, v144, v145, v146, v147);
    sub_AEC220(
      (unsigned __int8 **)(*v150 + 32LL * *(unsigned int *)(v94 + 128) + 8),
      *(_BYTE **)(v39 + 216),
      *(_QWORD *)(v39 + 224));
  }
  v151 = *(_BYTE *)(v94 + 120);
  sub_15F7200(&v185);
  if ( !v151 )
  {
LABEL_119:
    v95 = *a1[2];
    if ( v95 )
    {
      sub_1606D30((__int64)&v185, *a1, *(unsigned int *)(v95 + 24), 5899, *a1[4]);
      sub_15993D0((__int64)&v185, a1[2]);
      sub_15F7200(&v185);
    }
    goto LABEL_121;
  }
  v152 = *a1[2];
  if ( v152 )
  {
    sub_B88650(v152, 1);
    goto LABEL_119;
  }
LABEL_121:
  v37 = (__int64 *)ptr;
  if ( ptr && v178.m128i_i64[0] )
    sub_1580C40(v178.m128i_u64[0], (unsigned __int64)ptr);
LABEL_44:
  v46 = *(_QWORD *)(v169 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v39 + 393) & 4) != 0 )
  {
    if ( sub_F58350(v46) )
    {
      v60 = *a1[4];
      if ( v60 )
      {
        v61 = *a1;
        v185 = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
        sub_A83E70(v61[31], (char **)&v185, v60);
        v37 = (__int64 *)v169;
        sub_1C2B2A0((*a1)[98], v169, *(unsigned int *)a1[3], *a1[2], &v185);
        if ( si128.m128i_i32[1] )
        {
          v62 = (char *)v185;
          if ( si128.m128i_i32[0] )
          {
            v63 = 0;
            v64 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
            do
            {
              v65 = *(_QWORD **)&v62[v63];
              if ( v65 != (_QWORD *)-8LL && v65 )
              {
                v37 = (__int64 *)(*v65 + 17LL);
                operator delete(*(_QWORD *)&v62[v63], v37, 8);
                v62 = (char *)v185;
              }
              v63 += 8;
            }
            while ( v64 != v63 );
          }
        }
        else
        {
          v62 = (char *)v185;
        }
        free(v62);
      }
    }
    v46 = *(_QWORD *)(v169 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( sub_F58320(v46) )
  {
    v48 = *a1[4];
    if ( !v48 )
    {
      v54 = *(_QWORD *)(v169 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v54 + 16) - 57 <= 1 )
        return;
LABEL_65:
      v59 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
      if ( (unsigned int)v59 > 1 )
        return;
      v54 = sub_F63050(v54, v37, v59, v47);
      if ( !v54 )
        return;
      v55 = a1[4];
      v56 = *v55;
      if ( !*v55 )
        return;
      goto LABEL_58;
    }
    v49 = *a1;
    ptr = nullptr;
    v178 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
    sub_A83E70(v49[31], (char **)&ptr, v48);
    v37 = (__int64 *)j__strlen("sve");
    if ( (unsigned __int8)sub_FBE200((__int64)"sve", (unsigned __int64)v37, (__int64)&ptr) )
      goto LABEL_48;
    v83 = j__strlen("sme");
    if ( (unsigned __int8)sub_FBE200((__int64)"sme", v83, (__int64)&ptr) )
    {
      v37 = (_QWORD *)(&dword_0 + 1);
      if ( (unsigned __int8)sub_B7B300(*a1[4], 1, v84, v85) )
        goto LABEL_48;
      v86 = a1[3];
      v87 = (__int64)(*a1 + 1);
      v88 = 5045;
    }
    else
    {
      v86 = a1[3];
      v87 = (__int64)(*a1 + 1);
      v88 = 5046;
    }
    sub_168B9F0(&v185, v87, *(unsigned int *)v86, v88, 0);
    v37 = (__int64 *)&v169;
    sub_1605D30((__int64)&v185, (__int64 *)&v169);
    sub_15F7200(&v185);
LABEL_48:
    v50 = (char *)ptr;
    if ( v178.m128i_i32[1] && v178.m128i_i32[0] )
    {
      v51 = 0;
      v52 = 8LL * (unsigned int)(v178.m128i_i32[0] - 1) + 8;
      do
      {
        v53 = *(_QWORD **)&v50[v51];
        if ( v53 && v53 != (_QWORD *)-8LL )
        {
          v37 = (__int64 *)(*v53 + 17LL);
          operator delete(*(_QWORD *)&v50[v51], v37, 8);
          v50 = (char *)ptr;
        }
        v51 += 8;
      }
      while ( v52 != v51 );
    }
    free(v50);
  }
  v54 = *(_QWORD *)(v169 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v54 + 16) - 57 > 1 )
    goto LABEL_65;
  v55 = a1[4];
  v56 = *v55;
  if ( !*v55 )
    return;
LABEL_58:
  if ( ((*(_BYTE *)(v54 + 18) >> 3) & 0xFu) - 6 > 1 )
    return;
  v57 = (*a1)[29];
  v58 = *(_QWORD *)(v57 + 184);
  if ( *(_QWORD *)(v57 + 176) == v58 )
    return;
  if ( (unsigned __int8)sub_B7B300(v56, 1, (__int64)v55, v58) )
  {
    sub_168B9F0(&v185, *a1 + 1, *(unsigned int *)a1[3], 5044, 0);
    v75 = sub_1605D30((__int64)&v185, (__int64 *)&v169);
    LODWORD(ptr) = 0;
    goto LABEL_98;
  }
  v72 = *(_QWORD *)(*(_QWORD *)(*a1[4] + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v72 + 16) == 26
    || (v153 = *(_QWORD *)(*(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v153 + 16) == 26)
    && (v72 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*a1[4] + 48) & 0xFFFFFFFFFFFFFFF0LL), 1, v153, v71)) != 0 )
  {
    v73 = *(_BYTE *)(v72 + 19);
    if ( (v73 & 0x40) != 0 )
    {
      v74 = (v72 + ((v73 >> 5) & 4) + 8LL * *(unsigned __int16 *)(v72 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v74 + 1) & 4) != 0 && (*(_BYTE *)(v74 + 8) & 2) != 0 )
      {
        sub_168B9F0(&v185, *a1 + 1, *(unsigned int *)a1[3], 5044, 0);
        v75 = sub_1605D30((__int64)&v185, (__int64 *)&v169);
        LODWORD(ptr) = 1;
LABEL_98:
        sub_1587D10(v75, (int *)&ptr);
        sub_15F7200(&v185);
      }
    }
  }
}
