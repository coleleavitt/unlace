void __fastcall sub_8DA9C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rdx
  unsigned int v11; // edx
  int v12; // r14d
  char *v13; // r12
  int v14; // eax
  int v15; // eax
  void *v16; // rbp
  void *v17; // rdi
  void *v18; // r13
  __int64 v19; // rax
  int v20; // esi
  void *v21; // rbp
  void *v22; // rbp
  void *v23; // rbp
  __int64 v24; // rbp
  void *v25; // r13
  char *v26; // rbp
  __int64 v27; // rax
  int v28; // edx
  int v29; // eax
  __int64 v30; // rax
  int v31; // edx
  int v32; // eax
  __int64 v33; // rax
  int v34; // edx
  int v35; // eax
  __int64 v36; // rax
  int v37; // edx
  int v38; // eax
  int *v39; // r13
  __int64 v40; // r12
  __int64 v41; // rax
  _DWORD *v42; // rbp
  unsigned int v43; // ebx
  __int64 v44; // rdx
  unsigned int v45; // esi
  int *v46; // rax
  int v47; // ecx
  int v48; // edi
  int v49; // ecx
  int v50; // eax
  _QWORD *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rbx
  int *v54; // r14
  int *v55; // rbx
  int *v56; // r14
  int *v57; // rbx
  int *v58; // rax
  __int64 v59; // rax
  int v60; // edx
  int v61; // edx
  __int64 v62; // rax
  unsigned int v63; // ecx
  size_t v64; // rsi
  _DWORD *v65; // rax
  int v66; // edx
  __int64 v67; // rax
  unsigned int v68; // esi
  _QWORD *v69; // rdi
  unsigned int v70; // edx
  int v71; // eax
  _QWORD *v72; // rdx
  int v73; // ebx
  __int64 v74; // rax
  _DWORD *v75; // rax
  __int64 v76; // rax
  unsigned int v77; // ecx
  unsigned int v78; // r14d
  __int64 v79; // r8
  int v80; // ecx
  bool v81; // zf
  __int64 v82; // rcx
  __int64 v83; // rax
  int *v84; // rbx
  int *v85; // r14
  int *v86; // rsi
  _QWORD *v87; // rax
  unsigned int v88; // r14d
  size_t v89; // rsi
  unsigned int *v90; // rax
  __int64 v91; // rax
  int v92; // eax
  _QWORD *v93; // rax
  char **v94; // rbx
  __int64 v95; // rdx
  void *v96; // r15
  _QWORD *v97; // rsi
  char **exception; // rbx
  __int64 v99; // rdx
  void *v100; // r15
  _QWORD *v101; // rsi
  void *v102[2]; // [rsp+0h] [rbp-428h] BYREF
  void *v103; // [rsp+10h] [rbp-418h]
  void *v104; // [rsp+18h] [rbp-410h]
  void *v105; // [rsp+20h] [rbp-408h]
  _QWORD *v106; // [rsp+28h] [rbp-400h]
  void *v107; // [rsp+30h] [rbp-3F8h]
  void *v108; // [rsp+38h] [rbp-3F0h]
  unsigned int v109; // [rsp+44h] [rbp-3E4h]
  unsigned int **v110; // [rsp+48h] [rbp-3E0h]
  _DWORD *v111; // [rsp+58h] [rbp-3D0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-3C8h] BYREF
  int v113; // [rsp+70h] [rbp-3B8h] BYREF
  char v114; // [rsp+74h] [rbp-3B4h]
  __int64 v115; // [rsp+78h] [rbp-3B0h]
  int v116; // [rsp+80h] [rbp-3A8h] BYREF
  char v117; // [rsp+84h] [rbp-3A4h]
  __int64 v118; // [rsp+88h] [rbp-3A0h]
  int v119; // [rsp+90h] [rbp-398h] BYREF
  char v120; // [rsp+94h] [rbp-394h]
  __int64 v121; // [rsp+98h] [rbp-390h]
  int v122; // [rsp+A0h] [rbp-388h] BYREF
  char v123; // [rsp+A4h] [rbp-384h]
  __int64 v124; // [rsp+A8h] [rbp-380h]
  int v125; // [rsp+B0h] [rbp-378h] BYREF
  char v126; // [rsp+B4h] [rbp-374h]
  __int64 v127; // [rsp+B8h] [rbp-370h]
  int v128; // [rsp+C0h] [rbp-368h]
  __int64 v129; // [rsp+D0h] [rbp-358h] BYREF
  __int64 v130; // [rsp+D8h] [rbp-350h]
  __int64 v131; // [rsp+E0h] [rbp-348h] BYREF
  __int64 v132; // [rsp+E8h] [rbp-340h]
  __int64 v133; // [rsp+F0h] [rbp-338h] BYREF
  __int64 v134; // [rsp+F8h] [rbp-330h]
  __int64 v135; // [rsp+100h] [rbp-328h] BYREF
  __int64 v136; // [rsp+108h] [rbp-320h]
  _BYTE v137[600]; // [rsp+110h] [rbp-318h] BYREF
  __int64 v138; // [rsp+368h] [rbp-C0h]
  __int64 v139; // [rsp+370h] [rbp-B8h]
  __int64 v140; // [rsp+378h] [rbp-B0h]
  __int64 v141; // [rsp+380h] [rbp-A8h]
  __int64 v142; // [rsp+388h] [rbp-A0h]
  __int64 v143; // [rsp+390h] [rbp-98h]
  __int64 v144; // [rsp+398h] [rbp-90h]
  __int64 v145; // [rsp+3A0h] [rbp-88h]
  __int64 v146; // [rsp+3A8h] [rbp-80h]
  __int64 v147; // [rsp+3B0h] [rbp-78h]
  __int64 v148; // [rsp+3B8h] [rbp-70h]
  __int64 v149; // [rsp+3C0h] [rbp-68h]
  __int64 v150; // [rsp+3C8h] [rbp-60h]
  __int64 v151; // [rsp+3D0h] [rbp-58h]
  __int64 v152; // [rsp+3D8h] [rbp-50h]
  __int64 v153; // [rsp+3E0h] [rbp-48h]
  __int64 v154; // [rsp+3E8h] [rbp-40h]

  v3 = a1 + 216;
  v4 = *(_DWORD *)(v3 + 376);
  v106 = a2;
  sub_8D97C0(v3, *(_DWORD *)(v3 + 372), v4);
  v105 = v137;
  sub_1839FF0(v137);
  v138 = 0;
  v139 = 0;
  v154 = 0x3F1A36E2EB1C432DLL;
  v5 = *(_QWORD *)(a1 + 264);
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v148 = 1;
  v149 = 0;
  v150 = 0;
  v151 = 0;
  v152 = 1;
  v153 = 0;
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    v7 = 2 * v6 + 1;
  }
  else
  {
    v7 = 1;
    v6 = 0;
  }
  v8 = *(_QWORD *)(a1 + 800);
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  v10 = *(_QWORD *)(a1 + 256);
  if ( v10 )
  {
    v11 = 2 * *(_DWORD *)(v10 - 4);
    if ( v7 < v11 )
      v7 = v11;
  }
  sub_8C3910((__int64)v106, v7 + v9);
  if ( (_DWORD)v6 )
  {
    v12 = 1;
    v13 = nullptr;
    v107 = (void *)(40 * v6);
    v102[0] = &v122;
    while ( 1 )
    {
      v24 = *(_QWORD *)(a1 + 240);
      v25 = qword_1C7F2C0;
      v122 = 0;
      v123 &= 0xFCu;
      v26 = &v13[v24];
      v126 &= 0xFCu;
      v124 = 0;
      v125 = 1;
      v127 = 0;
      if ( (v26[4] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v102[0], v26);
        if ( (v26[20] & 1) == 0 )
        {
LABEL_11:
          v14 = *((_DWORD *)v26 + 4);
          v126 &= ~1u;
          v125 = v14;
          goto LABEL_12;
        }
      }
      else
      {
        v122 = *(_DWORD *)v26;
        if ( (v26[20] & 1) == 0 )
          goto LABEL_11;
      }
      sub_182C690(v25, &v125, v26 + 16);
LABEL_12:
      v15 = *((_DWORD *)v26 + 8);
      si128.m128i_i8[4] &= 0xFCu;
      v114 &= 0xFCu;
      v16 = qword_1C7F2C0;
      v128 = v15;
      si128.m128i_i32[0] = 0;
      si128.m128i_i64[1] = 0;
      v113 = 1;
      v115 = 0;
      if ( (v123 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &si128, v102[0]);
      else
        si128.m128i_i32[0] = v122;
      if ( (v126 & 1) != 0 )
      {
        sub_182C690(v16, &v113, &v125);
      }
      else
      {
        v114 &= ~1u;
        v113 = v125;
      }
      v130 = 0;
      BYTE4(v129) &= 0xFCu;
      BYTE4(v131) &= 0xFCu;
      LODWORD(v131) = 1;
      v132 = 0;
      LODWORD(v129) = v128;
      sub_182CBA0(qword_1C7F2C0, &v131);
      BYTE4(v131) &= ~1u;
      v17 = qword_1C7F2C0;
      v117 &= 0xFCu;
      v120 &= 0xFCu;
      LODWORD(v131) = 1;
      v116 = 0;
      v118 = 0;
      v119 = 1;
      v121 = 0;
      if ( (v129 & 0x100000000LL) != 0 )
      {
        v103 = qword_1C7F2C0;
        v104 = &v129;
        sub_182C690(qword_1C7F2C0, &v116, &v129);
      }
      else
      {
        v116 = v129;
        v104 = &v129;
      }
      if ( (v131 & 0x100000000LL) != 0 )
      {
        sub_182C690(v17, &v119, &v131);
      }
      else
      {
        v120 &= ~1u;
        v119 = v131;
      }
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v104);
      sub_182CBA0(v18, &v131);
      v129 = 0;
      v130 = 0;
      v131 = 1;
      v132 = 0;
      v133 = 0;
      v134 = 0;
      v135 = 1;
      v136 = 0;
      if ( (si128.m128i_i8[4] & 1) != 0 )
      {
        v103 = &si128;
        sub_182EA00(v105, v104, &si128);
      }
      else
      {
        LODWORD(v129) = si128.m128i_i32[0];
        v103 = &si128;
      }
      if ( (v114 & 1) != 0 )
      {
        sub_182EA00(v105, &v131, &v113);
      }
      else
      {
        BYTE4(v131) &= ~1u;
        LODWORD(v131) = v113;
      }
      if ( (v117 & 1) != 0 )
      {
        sub_182EA00(v105, &v133, &v116);
      }
      else
      {
        BYTE4(v133) &= ~1u;
        LODWORD(v133) = v116;
      }
      if ( (v120 & 1) != 0 )
      {
        sub_182EA00(v105, &v135, &v119);
        v19 = *(_QWORD *)(a1 + 800);
        if ( !v19 )
        {
LABEL_34:
          v20 = 0;
          goto LABEL_29;
        }
      }
      else
      {
        BYTE4(v135) &= ~1u;
        LODWORD(v135) = v119;
        v19 = *(_QWORD *)(a1 + 800);
        if ( !v19 )
          goto LABEL_34;
      }
      v20 = *(_DWORD *)(v19 - 4);
LABEL_29:
      sub_8B2CA0(v106, v12 + v20, (__int64)v104);
      sub_182EF00(v105, v104);
      sub_182EF00(v105, &v131);
      sub_182EF00(v105, &v133);
      sub_182EF00(v105, &v135);
      v21 = qword_1C7F2C0;
      v13 += 40;
      v12 += 2;
      sub_182CBA0(qword_1C7F2C0, &v116);
      sub_182CBA0(v21, &v119);
      v22 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v103);
      sub_182CBA0(v22, &v113);
      v23 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v102[0]);
      sub_182CBA0(v23, &v125);
      if ( v13 == v107 )
        goto LABEL_43;
    }
  }
  v104 = &v129;
LABEL_43:
  v27 = *(_QWORD *)(a1 + 800);
  v129 = 0;
  v130 = 0;
  v28 = *(_DWORD *)(a1 + 588);
  v131 = 1;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 1;
  v136 = 0;
  if ( v27 )
    v29 = *(_DWORD *)(v27 - 4);
  else
    v29 = 0;
  sub_8B3D10(v106, v29 + 2 * v28 + 1, (__int64)v104);
  v30 = *(_QWORD *)(a1 + 800);
  v129 = 0;
  v130 = 0;
  v31 = *(_DWORD *)(a1 + 588);
  v131 = 1;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 1;
  v136 = 0;
  if ( v30 )
    v32 = *(_DWORD *)(v30 - 4);
  else
    v32 = 0;
  sub_8B3EE0(v106, v32 + 2 * v31 + 1, (__int64)v104);
  v33 = *(_QWORD *)(a1 + 800);
  v129 = 0;
  v130 = 0;
  v34 = *(_DWORD *)(a1 + 592);
  v131 = 1;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 1;
  v136 = 0;
  if ( v33 )
    v35 = *(_DWORD *)(v33 - 4);
  else
    v35 = 0;
  sub_8B3D10(v106, v35 + 2 * v34 + 1, (__int64)v104);
  v36 = *(_QWORD *)(a1 + 800);
  v129 = 0;
  v130 = 0;
  v37 = *(_DWORD *)(a1 + 592);
  v131 = 1;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 1;
  v136 = 0;
  if ( v36 )
    v38 = *(_DWORD *)(v36 - 4);
  else
    v38 = 0;
  sub_8B3EE0(v106, v38 + 2 * v37 + 1, (__int64)v104);
  v129 = 1;
  v130 = 0;
  si128.m128i_i64[1] = (__int64)v105;
  v103 = &si128;
  v131 = 1;
  v132 = 0;
  si128.m128i_i64[0] = 0;
  sub_8ADEE0((int **)&si128, (int *)v104);
  v130 = 0;
  v129 = 0xFFFFFFFFLL;
  v131 = 1;
  v132 = 0;
  sub_8ADEE0((int **)&si128, (int *)v104);
  v130 = 0;
  v129 = 0xFFFFFFFFLL;
  v131 = 1;
  v132 = 0;
  sub_8ADEE0((int **)&si128, (int *)v104);
  v39 = (int *)si128.m128i_i64[0];
  v111 = nullptr;
  v110 = &v111;
  v40 = si128.m128i_i64[1];
  sub_83BF90(&v111, 3u);
  v41 = *(_QWORD *)(a1 + 256);
  v42 = v111;
  if ( !v41 )
  {
LABEL_57:
    *(_DWORD *)(a1 + 2496) = 0;
    v44 = *(_QWORD *)(a1 + 800);
LABEL_58:
    v52 = *(_QWORD *)(a1 + 824);
    if ( !v52 )
      goto LABEL_96;
LABEL_59:
    v109 = *(_DWORD *)(v52 - 4);
    if ( !v44 )
      goto LABEL_97;
    goto LABEL_60;
  }
  v43 = *(_DWORD *)(a1 + 2496);
  while ( 1 )
  {
    v44 = *(_QWORD *)(a1 + 800);
    if ( v43 >= *(_DWORD *)(v41 - 4) )
      break;
    v45 = 2 * v43;
    v46 = (int *)(((unsigned __int64)v43 << 6) + v41);
    v47 = 2 * v46[1];
    if ( v44 )
    {
      v48 = *(_DWORD *)(v44 - 4);
      v45 += v48;
      *v42 = v48 + v47 + 1;
      v49 = *v46;
      v50 = *(_DWORD *)(v44 - 4) + 1;
    }
    else
    {
      *v42 = v47 + 1;
      v49 = *v46;
      v50 = 1;
    }
    v42[2] = v45;
    v51 = v106;
    v42[1] = v50 + 2 * v49;
    sub_8B15E0((__int64)v51, v45, 3u, (__int64)v42, v39);
    v41 = *(_QWORD *)(a1 + 256);
    ++v43;
    if ( !v41 )
      goto LABEL_57;
  }
  v78 = 0;
  *(_DWORD *)(a1 + 2496) = *(_DWORD *)(v41 - 4);
  v108 = &v116;
  do
  {
    if ( v78 >= *(_DWORD *)(v41 - 4) )
      goto LABEL_58;
    v79 = v41 + ((unsigned __int64)v78 << 6);
    if ( v44 )
      v80 = *(_DWORD *)(v44 - 4);
    else
      v80 = 0;
    v81 = *(_BYTE *)(v79 + 56) == 0;
    LODWORD(v102[0]) = v80 + 2 * v78;
    if ( v81 )
    {
      v82 = v106[199] + 232LL * LODWORD(v102[0]);
      *(_BYTE *)(v82 + 3) &= ~0x80u;
    }
    else
    {
      v116 = 0;
      v117 &= 0xFCu;
      v107 = (void *)(v41 + ((unsigned __int64)v78 << 6));
      v120 &= 0xFCu;
      v118 = 0;
      v119 = 1;
      v121 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v108, (int *)(v79 + 8));
      v92 = *((_DWORD *)v107 + 10);
      BYTE4(v129) &= 0xFCu;
      BYTE4(v131) &= 0xFCu;
      v130 = 0;
      LODWORD(v131) = 1;
      v132 = 0;
      LODWORD(v129) = v92;
      sub_182CBA0(qword_1C7F2C0, &v131);
      LODWORD(v131) = 1;
      BYTE4(v131) &= ~1u;
      v107 = &v122;
      v123 &= 0xFCu;
      v126 &= 0xFCu;
      v122 = 0;
      v124 = 0;
      v125 = 1;
      v127 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v122, (int *)v104);
      sub_25A130((char *)v104);
      v129 = 0;
      v130 = 0;
      v131 = 1;
      v132 = 0;
      v133 = 0;
      v134 = 0;
      v135 = 1;
      v136 = 0;
      sub_8ADE80((__int64)v105, (__int64)v104, (int *)v108);
      sub_8ADE80((__int64)v105, (__int64)&v133, &v122);
      sub_8B3EE0(v106, (unsigned int)v102[0], (__int64)v104);
      sub_8AD4E0((__int64)v105, (__int64)v104);
      sub_25A130((char *)&v122);
      sub_25A130((char *)v108);
      v44 = *(_QWORD *)(a1 + 800);
      v41 = *(_QWORD *)(a1 + 256);
    }
    ++v78;
  }
  while ( v41 );
  v52 = *(_QWORD *)(a1 + 824);
  if ( v52 )
    goto LABEL_59;
LABEL_96:
  v109 = 0;
  if ( v44 )
  {
LABEL_60:
    *(__m128i *)v102 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v40);
    if ( v109 >= *(_DWORD *)(v44 - 4) )
      goto LABEL_97;
    v107 = (void *)(v44 + 8LL * v109);
    if ( v39 )
      goto LABEL_62;
    while ( !v42 )
    {
LABEL_68:
      v56 = *(int **)v107;
      if ( *(_QWORD *)v107 )
      {
        v57 = &v56[10 * *(v56 - 1)];
        if ( v57 != v56 )
        {
          while ( 1 )
          {
            si128 = _mm_load_si128((const __m128i *)v102);
            sub_8ADEE0((int **)v103, v56 + 2);
            v59 = *(_QWORD *)(a1 + 800);
            v40 = si128.m128i_i64[1];
            v39 = (int *)si128.m128i_i64[0];
            v60 = *v56;
            *(__m128i *)v102 = _mm_load_si128(&si128);
            if ( v59 )
            {
              v61 = *(_DWORD *)(v59 - 4) + 2 * v60 + 1;
              if ( !v42 )
                goto LABEL_105;
            }
            else
            {
              v61 = 2 * v60 + 1;
              if ( !v42 )
              {
LABEL_105:
                LODWORD(v107) = v61;
                v87 = (_QWORD *)sub_186B270(0x10u);
                v42 = v87 + 1;
                *v87 = 2;
                v61 = (int)v107;
                v58 = (int *)(v87 + 1);
                goto LABEL_72;
              }
            }
            v62 = (unsigned int)*(v42 - 1);
            if ( (_DWORD)v62 == *(v42 - 2) )
            {
              v63 = (unsigned int)(3 * v62 + 1) >> 1;
              v64 = 4 * v63 + 8;
              if ( 4 * (int)v62 + 8 >= (unsigned int)v64 || (unsigned int)v62 >= v63 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_12D192((__int64 *)v104, "Overflow encountered when expanding vector", v99);
                v100 = v104;
                v101 = v104;
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v101);
                sub_233E40((__int64)v100);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v108) = (unsigned int)(3 * v62 + 1) >> 1;
              LODWORD(v107) = v61;
              v65 = (_DWORD *)sub_186B300(v42 - 2, v64);
              v42 = v65 + 2;
              v66 = (int)v107;
              v56 += 10;
              *v65 = (_DWORD)v108;
              v65[v65[1]++ + 2] = v66;
              if ( v56 == v57 )
                break;
            }
            else
            {
              v58 = &v42[v62];
LABEL_72:
              v56 += 10;
              *v58 = v61;
              ++*(v42 - 1);
              if ( v56 == v57 )
                break;
            }
          }
        }
      }
      v129 = 1;
      v130 = 0;
      v131 = 1;
      v132 = 0;
      si128.m128i_i64[0] = (__int64)v39;
      si128.m128i_i64[1] = v40;
      sub_8ADEE0((int **)v103, (int *)v104);
      v40 = si128.m128i_i64[1];
      v39 = (int *)si128.m128i_i64[0];
      if ( !v42 || (v67 = (unsigned int)*(v42 - 1), (_DWORD)v67 == *(v42 - 2)) )
      {
        v111 = v42;
        sub_2FD3F0(v110);
        v42 = v111;
        v67 = (unsigned int)*(v111 - 1);
      }
      v68 = v109;
      v69 = v106;
      v42[v67] = v109;
      v70 = *(v42 - 1) + 1;
      *(v42 - 1) = v70;
      v71 = sub_8B15E0((__int64)v69, v68, v70, (__int64)v42, v39);
      v72 = *(_QWORD **)(a1 + 824);
      v73 = v71;
      if ( v72 )
      {
        v74 = *((unsigned int *)v72 - 1);
        if ( (_DWORD)v74 == *((_DWORD *)v72 - 2) )
        {
          v88 = (unsigned int)(3 * v74 + 1) >> 1;
          v89 = 4 * v88 + 8;
          if ( 4 * (int)v74 + 8 >= (unsigned int)v89 || (unsigned int)v74 >= v88 )
          {
            v94 = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192((__int64 *)v104, "Overflow encountered when expanding vector", v95);
            v96 = v104;
            v97 = v104;
            *v94 = (char *)off_1C63128;
            sub_2333C0(v94 + 1, v97);
            sub_233E40((__int64)v96);
            __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v90 = (unsigned int *)sub_186B300(v72 - 1, v89);
          v72 = v90 + 2;
          *v90 = v88;
          v91 = v90[1];
          *(_QWORD *)(a1 + 824) = v72;
          v75 = (_DWORD *)v72 + v91;
        }
        else
        {
          v75 = (_DWORD *)v72 + v74;
        }
      }
      else
      {
        v93 = (_QWORD *)sub_186B270(0x10u);
        v72 = v93 + 1;
        *v93 = 2;
        *(_QWORD *)(a1 + 824) = v93 + 1;
        v75 = v93 + 1;
      }
      *v75 = v73;
      v76 = *(_QWORD *)(a1 + 800);
      v77 = ++v109;
      ++*((_DWORD *)v72 - 1);
      if ( !v76 )
      {
        if ( !v39 )
          goto LABEL_116;
        v83 = (unsigned int)*(v39 - 1);
        if ( !(_DWORD)v83 )
        {
          sub_186B220(v39 - 2);
          goto LABEL_116;
        }
LABEL_99:
        v84 = v39;
        v85 = &v39[8 * v83];
        do
        {
          sub_182EF00(v40, v84);
          v86 = v84 + 4;
          v84 += 8;
          sub_182EF00(v40, v86);
        }
        while ( v85 != v84 );
        goto LABEL_101;
      }
      *(__m128i *)v102 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v40);
      if ( v77 >= *(_DWORD *)(v76 - 4) )
        goto LABEL_97;
      v107 = (void *)(v76 + 8LL * v77);
      if ( !v39 )
        break;
LABEL_62:
      v53 = (unsigned int)*(v39 - 1);
      if ( (_DWORD)v53 )
      {
        v54 = v39;
        v55 = &v39[8 * v53];
        do
        {
          sub_182EF00(v40, v54);
          sub_182EF00(v40, v54 + 4);
          v54 += 8;
        }
        while ( v54 != v55 );
      }
      *(v39 - 1) = 0;
    }
    *(v42 - 1) = 0;
    goto LABEL_68;
  }
LABEL_97:
  if ( !v39 )
    goto LABEL_102;
  v83 = (unsigned int)*(v39 - 1);
  if ( (_DWORD)v83 )
    goto LABEL_99;
LABEL_101:
  *(v39 - 1) = 0;
  sub_186B220(v39 - 2);
LABEL_102:
  if ( v42 )
LABEL_116:
    sub_186B220(v42 - 2);
  sub_184C8D0(v105);
}

