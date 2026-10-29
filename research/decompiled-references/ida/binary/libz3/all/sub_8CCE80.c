void __fastcall sub_8CCE80(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // esi
  __int64 v10; // rdx
  unsigned int v11; // edx
  int v12; // r12d
  char *v13; // rbp
  int v14; // eax
  void *v15; // r14
  void *v16; // r13
  __int64 v17; // rax
  int v18; // esi
  void *v19; // r14
  void *v20; // r13
  __int64 v21; // r13
  void *v22; // r14
  char *v23; // r13
  __int64 v24; // rax
  int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  int v28; // edx
  int v29; // eax
  __int64 v30; // rax
  int v31; // edx
  int v32; // eax
  __int64 v33; // rax
  int v34; // edx
  int v35; // eax
  int *v36; // r13
  __int64 v37; // r12
  __int64 v38; // rax
  _DWORD *v39; // rbp
  unsigned int v40; // ebx
  __int64 v41; // rcx
  unsigned int v42; // esi
  int *v43; // rdx
  int v44; // eax
  int v45; // edi
  int v46; // edx
  int v47; // eax
  _QWORD *v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rbx
  int *v52; // r14
  int *v53; // rbx
  int *v54; // r14
  int *v55; // rbx
  int *v56; // rax
  __int64 v57; // rax
  int v58; // edx
  int v59; // edx
  __int64 v60; // rax
  unsigned int v61; // ecx
  size_t v62; // rsi
  _DWORD *v63; // rax
  int v64; // edx
  __int64 v65; // rax
  unsigned int v66; // esi
  _QWORD *v67; // rdi
  unsigned int v68; // edx
  int v69; // eax
  _QWORD *v70; // rdx
  int v71; // ebx
  __int64 v72; // rax
  _DWORD *v73; // rax
  __int64 v74; // rax
  unsigned int v75; // ecx
  int v76; // edx
  unsigned int v77; // ecx
  __int64 v78; // rdx
  int v79; // edi
  bool v80; // zf
  __int64 v81; // r14
  __int64 v82; // rax
  int *v83; // rbx
  int *v84; // r14
  int *v85; // rsi
  _QWORD *v86; // rax
  unsigned int v87; // r14d
  size_t v88; // rsi
  unsigned int *v89; // rax
  __int64 v90; // rax
  void *v91; // rbx
  unsigned int v92; // ecx
  _QWORD *v93; // rax
  char **v94; // rbx
  __int64 v95; // rdx
  __int64 *v96; // r15
  __int64 *v97; // rsi
  char **exception; // rbx
  __int64 v99; // rdx
  __int64 *v100; // r15
  __int64 *v101; // rsi
  __m128i v102; // [rsp+0h] [rbp-418h] BYREF
  void *v103; // [rsp+10h] [rbp-408h]
  __int64 *v104; // [rsp+18h] [rbp-400h]
  void *v105; // [rsp+20h] [rbp-3F8h]
  _QWORD *v106; // [rsp+28h] [rbp-3F0h]
  void *v107; // [rsp+30h] [rbp-3E8h]
  int *v108; // [rsp+38h] [rbp-3E0h]
  unsigned int v109; // [rsp+44h] [rbp-3D4h]
  unsigned int **v110; // [rsp+48h] [rbp-3D0h]
  _DWORD *v111; // [rsp+58h] [rbp-3C0h] BYREF
  __m128i v112; // [rsp+60h] [rbp-3B8h] BYREF
  int v113; // [rsp+70h] [rbp-3A8h] BYREF
  char v114; // [rsp+74h] [rbp-3A4h]
  __int64 v115; // [rsp+78h] [rbp-3A0h]
  __int32 v116; // [rsp+80h] [rbp-398h] BYREF
  char v117; // [rsp+84h] [rbp-394h]
  __int64 v118; // [rsp+88h] [rbp-390h]
  int v119; // [rsp+90h] [rbp-388h] BYREF
  char v120; // [rsp+94h] [rbp-384h]
  __int64 v121; // [rsp+98h] [rbp-380h]
  int v122; // [rsp+A0h] [rbp-378h] BYREF
  char v123; // [rsp+A4h] [rbp-374h]
  __int64 v124; // [rsp+A8h] [rbp-370h]
  int v125; // [rsp+B0h] [rbp-368h] BYREF
  char v126; // [rsp+B4h] [rbp-364h]
  __int64 v127; // [rsp+B8h] [rbp-360h]
  __int64 v128; // [rsp+C0h] [rbp-358h] BYREF
  __int64 v129; // [rsp+C8h] [rbp-350h]
  __int64 v130; // [rsp+D0h] [rbp-348h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-340h]
  __int64 v132; // [rsp+E0h] [rbp-338h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-330h]
  __int64 v134; // [rsp+F0h] [rbp-328h] BYREF
  __int64 v135; // [rsp+F8h] [rbp-320h]
  _BYTE v136[600]; // [rsp+100h] [rbp-318h] BYREF
  __int64 v137; // [rsp+358h] [rbp-C0h]
  __int64 v138; // [rsp+360h] [rbp-B8h]
  __int64 v139; // [rsp+368h] [rbp-B0h]
  __int64 v140; // [rsp+370h] [rbp-A8h]
  __int64 v141; // [rsp+378h] [rbp-A0h]
  __int64 v142; // [rsp+380h] [rbp-98h]
  __int64 v143; // [rsp+388h] [rbp-90h]
  __int64 v144; // [rsp+390h] [rbp-88h]
  __int64 v145; // [rsp+398h] [rbp-80h]
  __int64 v146; // [rsp+3A0h] [rbp-78h]
  __int64 v147; // [rsp+3A8h] [rbp-70h]
  __int64 v148; // [rsp+3B0h] [rbp-68h]
  __int64 v149; // [rsp+3B8h] [rbp-60h]
  __int64 v150; // [rsp+3C0h] [rbp-58h]
  __int64 v151; // [rsp+3C8h] [rbp-50h]
  __int64 v152; // [rsp+3D0h] [rbp-48h]
  __int64 v153; // [rsp+3D8h] [rbp-40h]

  v3 = a1 + 208;
  v4 = *(_DWORD *)(v3 + 376);
  v106 = a2;
  sub_8CBD20(v3, *(_DWORD *)(v3 + 372), v4);
  v103 = v136;
  sub_1839FF0(v136);
  v137 = 0;
  v138 = 0;
  v153 = 0x3F1A36E2EB1C432DLL;
  v5 = *(_QWORD *)(a1 + 256);
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 1;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 792);
    v8 = 1;
    v6 = 0;
    if ( v7 )
      goto LABEL_3;
LABEL_124:
    v9 = 0;
    goto LABEL_4;
  }
  v6 = *(unsigned int *)(v5 - 4);
  v7 = *(_QWORD *)(a1 + 792);
  v8 = 2 * v6 + 1;
  if ( !v7 )
    goto LABEL_124;
LABEL_3:
  v9 = *(_DWORD *)(v7 - 4);
LABEL_4:
  v10 = *(_QWORD *)(a1 + 248);
  if ( v10 )
  {
    v11 = 2 * *(_DWORD *)(v10 - 4);
    if ( v8 < v11 )
      v8 = v11;
  }
  sub_8C3910((__int64)v106, v8 + v9);
  if ( (_DWORD)v6 )
  {
    v12 = 1;
    v13 = nullptr;
    v107 = (void *)(32 * v6);
    v105 = &v112;
    while ( 1 )
    {
      v21 = *(_QWORD *)(a1 + 232);
      v112.m128i_i8[4] &= 0xFCu;
      v114 &= 0xFCu;
      v22 = qword_1C7F2C0;
      v23 = &v13[v21];
      v112.m128i_i32[0] = 0;
      v112.m128i_i64[1] = 0;
      v113 = 1;
      v115 = 0;
      if ( (v23[4] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v105, v23);
        if ( (v23[20] & 1) == 0 )
        {
LABEL_10:
          v14 = *((_DWORD *)v23 + 4);
          v114 &= ~1u;
          v113 = v14;
          goto LABEL_11;
        }
      }
      else
      {
        v112.m128i_i32[0] = *(_DWORD *)v23;
        if ( (v23[20] & 1) == 0 )
          goto LABEL_10;
      }
      sub_182C690(v22, &v113, v23 + 16);
LABEL_11:
      v117 &= 0xFCu;
      v15 = qword_1C7F2C0;
      v120 &= 0xFCu;
      v116 = 0;
      v118 = 0;
      v119 = 1;
      v121 = 0;
      if ( (v112.m128i_i8[4] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v116, v105);
      else
        v116 = v112.m128i_i32[0];
      if ( (v114 & 1) != 0 )
      {
        sub_182C690(v15, &v119, &v113);
      }
      else
      {
        v120 &= ~1u;
        v119 = v113;
      }
      v16 = qword_1C7F2C0;
      v122 = 0;
      v123 &= 0xFCu;
      v126 &= 0xFCu;
      v124 = 0;
      v125 = 1;
      v127 = 0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
      {
        v102.m128i_i64[0] = (__int64)&qword_1C7F2A0;
        sub_182C690(qword_1C7F2C0, &v122, &qword_1C7F2A0);
      }
      else
      {
        v122 = qword_1C7F2A0;
      }
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        sub_182C690(v16, &v125, &qword_1C7F2B0);
      }
      else
      {
        v126 &= ~1u;
        v125 = qword_1C7F2B0;
      }
      v128 = 0;
      v129 = 0;
      v130 = 1;
      v131 = 0;
      v132 = 0;
      v133 = 0;
      v134 = 1;
      v135 = 0;
      if ( (v117 & 1) != 0 )
        sub_182EA00(v103, &v128, &v116);
      else
        LODWORD(v128) = v116;
      if ( (v120 & 1) != 0 )
      {
        sub_182EA00(v103, &v130, &v119);
      }
      else
      {
        BYTE4(v130) &= ~1u;
        LODWORD(v130) = v119;
      }
      if ( (v123 & 1) != 0 )
      {
        sub_182EA00(v103, &v132, &v122);
      }
      else
      {
        BYTE4(v132) &= ~1u;
        LODWORD(v132) = v122;
      }
      if ( (v126 & 1) != 0 )
      {
        sub_182EA00(v103, &v134, &v125);
        v17 = *(_QWORD *)(a1 + 792);
        if ( !v17 )
        {
LABEL_33:
          v18 = 0;
          goto LABEL_28;
        }
      }
      else
      {
        BYTE4(v134) &= ~1u;
        LODWORD(v134) = v125;
        v17 = *(_QWORD *)(a1 + 792);
        if ( !v17 )
          goto LABEL_33;
      }
      v18 = *(_DWORD *)(v17 - 4);
LABEL_28:
      v104 = &v128;
      sub_8B2CA0(v106, v12 + v18, (__int64)&v128);
      sub_182EF00(v103, &v128);
      sub_182EF00(v103, &v130);
      sub_182EF00(v103, &v132);
      sub_182EF00(v103, &v134);
      v13 += 32;
      v12 += 2;
      v102.m128i_i64[0] = (__int64)qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v122);
      sub_182CBA0(v102.m128i_i64[0], &v125);
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v116);
      sub_182CBA0(v19, &v119);
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v105);
      sub_182CBA0(v20, &v113);
      if ( v13 == v107 )
        goto LABEL_42;
    }
  }
  v104 = &v128;
LABEL_42:
  v24 = *(_QWORD *)(a1 + 792);
  v128 = 0;
  v129 = 0;
  v25 = *(_DWORD *)(a1 + 580);
  v130 = 1;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 1;
  v135 = 0;
  if ( v24 )
    v26 = *(_DWORD *)(v24 - 4);
  else
    v26 = 0;
  sub_8B3D10(v106, v26 + 2 * v25 + 1, (__int64)v104);
  v27 = *(_QWORD *)(a1 + 792);
  v128 = 0;
  v129 = 0;
  v28 = *(_DWORD *)(a1 + 580);
  v130 = 1;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 1;
  v135 = 0;
  if ( v27 )
    v29 = *(_DWORD *)(v27 - 4);
  else
    v29 = 0;
  sub_8B3EE0(v106, v29 + 2 * v28 + 1, (__int64)v104);
  v30 = *(_QWORD *)(a1 + 792);
  v128 = 0;
  v129 = 0;
  v31 = *(_DWORD *)(a1 + 584);
  v130 = 1;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 1;
  v135 = 0;
  if ( v30 )
    v32 = *(_DWORD *)(v30 - 4);
  else
    v32 = 0;
  sub_8B3D10(v106, v32 + 2 * v31 + 1, (__int64)v104);
  v33 = *(_QWORD *)(a1 + 792);
  v128 = 0;
  v129 = 0;
  v34 = *(_DWORD *)(a1 + 584);
  v130 = 1;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 1;
  v135 = 0;
  if ( v33 )
    v35 = *(_DWORD *)(v33 - 4);
  else
    v35 = 0;
  sub_8B3EE0(v106, v35 + 2 * v34 + 1, (__int64)v104);
  v128 = 1;
  v129 = 0;
  v112.m128i_i64[1] = (__int64)v103;
  v105 = &v112;
  v130 = 1;
  v131 = 0;
  v112.m128i_i64[0] = 0;
  sub_8ADEE0((int **)&v112, (int *)v104);
  v129 = 0;
  v128 = 0xFFFFFFFFLL;
  v130 = 1;
  v131 = 0;
  sub_8ADEE0((int **)&v112, (int *)v104);
  v129 = 0;
  v128 = 0xFFFFFFFFLL;
  v130 = 1;
  v131 = 0;
  sub_8ADEE0((int **)&v112, (int *)v104);
  v36 = (int *)v112.m128i_i64[0];
  v111 = nullptr;
  v110 = &v111;
  v37 = v112.m128i_i64[1];
  sub_83BF90(&v111, 3u);
  v38 = *(_QWORD *)(a1 + 248);
  v39 = v111;
  if ( !v38 )
  {
LABEL_56:
    *(_DWORD *)(a1 + 2488) = 0;
    v49 = *(_QWORD *)(a1 + 792);
LABEL_57:
    v50 = *(_QWORD *)(a1 + 816);
    if ( !v50 )
      goto LABEL_95;
LABEL_58:
    v109 = *(_DWORD *)(v50 - 4);
    if ( !v49 )
      goto LABEL_96;
    goto LABEL_59;
  }
  v40 = *(_DWORD *)(a1 + 2488);
  while ( 1 )
  {
    v41 = *(_QWORD *)(a1 + 792);
    if ( v40 >= *(_DWORD *)(v38 - 4) )
      break;
    v42 = 2 * v40;
    v43 = (int *)(v38 + 56LL * v40);
    v44 = 2 * v43[1];
    if ( v41 )
    {
      v45 = *(_DWORD *)(v41 - 4);
      v42 += v45;
      *v39 = v45 + v44 + 1;
      v46 = *v43;
      v47 = *(_DWORD *)(v41 - 4) + 1;
    }
    else
    {
      *v39 = v44 + 1;
      v47 = 1;
      v46 = *v43;
    }
    v39[2] = v42;
    v48 = v106;
    v39[1] = v47 + 2 * v46;
    sub_8B15E0((__int64)v48, v42, 3u, (__int64)v39, v36);
    v38 = *(_QWORD *)(a1 + 248);
    ++v40;
    if ( !v38 )
      goto LABEL_56;
  }
  v76 = *(_DWORD *)(v38 - 4);
  v49 = *(_QWORD *)(a1 + 792);
  v77 = 0;
  v107 = &v116;
  *(_DWORD *)(a1 + 2488) = v76;
  do
  {
    if ( v77 >= *(_DWORD *)(v38 - 4) )
      goto LABEL_57;
    v78 = v38 + 56LL * v77;
    if ( v49 )
      v79 = *(_DWORD *)(v49 - 4);
    else
      v79 = 0;
    v80 = *(_BYTE *)(v78 + 48) == 0;
    v102.m128i_i32[0] = v79 + 2 * v77;
    if ( v80 )
    {
      v81 = v106[199] + 232LL * v102.m128i_u32[0];
      *(_BYTE *)(v81 + 3) &= ~0x80u;
    }
    else
    {
      LODWORD(v108) = v77;
      v117 &= 0xFCu;
      v120 &= 0xFCu;
      v116 = 0;
      v118 = 0;
      v119 = 1;
      v121 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v107, (int *)(v78 + 8));
      v91 = qword_1C7F2C0;
      v122 = 0;
      v123 &= 0xFCu;
      v92 = (unsigned int)v108;
      v126 &= 0xFCu;
      v80 = (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) == 0;
      v124 = 0;
      v125 = 1;
      v127 = 0;
      if ( v80 )
      {
        v122 = qword_1C7F2A0;
      }
      else
      {
        v109 = (unsigned int)v108;
        v108 = &qword_1C7F2A0;
        sub_182C690(qword_1C7F2C0, &v122, &qword_1C7F2A0);
        v92 = v109;
      }
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        LODWORD(v108) = v92;
        sub_182C690(v91, &v125, &qword_1C7F2B0);
        v92 = (unsigned int)v108;
      }
      else
      {
        v126 &= ~1u;
        v125 = qword_1C7F2B0;
      }
      LODWORD(v108) = v92;
      v128 = 0;
      v129 = 0;
      v130 = 1;
      v131 = 0;
      v132 = 0;
      v133 = 0;
      v134 = 1;
      v135 = 0;
      sub_8ADE80((__int64)v103, (__int64)v104, (int *)v107);
      sub_8ADE80((__int64)v103, (__int64)&v132, &v122);
      sub_8B3EE0(v106, v102.m128i_u32[0], (__int64)v104);
      sub_8AD4E0((__int64)v103, (__int64)v104);
      sub_25A130((char *)&v122);
      sub_25A130((char *)v107);
      v49 = *(_QWORD *)(a1 + 792);
      v38 = *(_QWORD *)(a1 + 248);
      v77 = (unsigned int)v108;
    }
    ++v77;
  }
  while ( v38 );
  v50 = *(_QWORD *)(a1 + 816);
  if ( v50 )
    goto LABEL_58;
LABEL_95:
  v109 = 0;
  if ( v49 )
  {
LABEL_59:
    v102 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v36, (__m128i)(unsigned __int64)v37);
    if ( v109 >= *(_DWORD *)(v49 - 4) )
      goto LABEL_96;
    v107 = (void *)(v49 + 8LL * v109);
    if ( v36 )
      goto LABEL_61;
    while ( !v39 )
    {
LABEL_67:
      v54 = *(int **)v107;
      if ( *(_QWORD *)v107 )
      {
        v55 = &v54[10 * *(v54 - 1)];
        if ( v55 != v54 )
        {
          while ( 1 )
          {
            v112 = _mm_load_si128(&v102);
            sub_8ADEE0((int **)v105, v54 + 2);
            v57 = *(_QWORD *)(a1 + 792);
            v37 = v112.m128i_i64[1];
            v36 = (int *)v112.m128i_i64[0];
            v58 = *v54;
            v102 = _mm_load_si128(&v112);
            if ( v57 )
            {
              v59 = *(_DWORD *)(v57 - 4) + 2 * v58 + 1;
              if ( !v39 )
                goto LABEL_104;
            }
            else
            {
              v59 = 2 * v58 + 1;
              if ( !v39 )
              {
LABEL_104:
                LODWORD(v107) = v59;
                v86 = (_QWORD *)sub_186B270(0x10u);
                v39 = v86 + 1;
                *v86 = 2;
                v59 = (int)v107;
                v56 = (int *)(v86 + 1);
                goto LABEL_71;
              }
            }
            v60 = (unsigned int)*(v39 - 1);
            if ( (_DWORD)v60 == *(v39 - 2) )
            {
              v61 = (unsigned int)(3 * v60 + 1) >> 1;
              v62 = 4 * v61 + 8;
              if ( 4 * (int)v60 + 8 >= (unsigned int)v62 || (unsigned int)v60 >= v61 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_12D192(v104, "Overflow encountered when expanding vector", v99);
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
              LODWORD(v108) = (unsigned int)(3 * v60 + 1) >> 1;
              LODWORD(v107) = v59;
              v63 = (_DWORD *)sub_186B300(v39 - 2, v62);
              v39 = v63 + 2;
              v64 = (int)v107;
              v54 += 10;
              *v63 = (_DWORD)v108;
              v63[v63[1]++ + 2] = v64;
              if ( v54 == v55 )
                break;
            }
            else
            {
              v56 = &v39[v60];
LABEL_71:
              v54 += 10;
              *v56 = v59;
              ++*(v39 - 1);
              if ( v54 == v55 )
                break;
            }
          }
        }
      }
      v128 = 1;
      v129 = 0;
      v130 = 1;
      v131 = 0;
      v112.m128i_i64[0] = (__int64)v36;
      v112.m128i_i64[1] = v37;
      sub_8ADEE0((int **)v105, (int *)v104);
      v37 = v112.m128i_i64[1];
      v36 = (int *)v112.m128i_i64[0];
      if ( !v39 || (v65 = (unsigned int)*(v39 - 1), (_DWORD)v65 == *(v39 - 2)) )
      {
        v111 = v39;
        sub_2FD3F0(v110);
        v39 = v111;
        v65 = (unsigned int)*(v111 - 1);
      }
      v66 = v109;
      v67 = v106;
      v39[v65] = v109;
      v68 = *(v39 - 1) + 1;
      *(v39 - 1) = v68;
      v69 = sub_8B15E0((__int64)v67, v66, v68, (__int64)v39, v36);
      v70 = *(_QWORD **)(a1 + 816);
      v71 = v69;
      if ( v70 )
      {
        v72 = *((unsigned int *)v70 - 1);
        if ( (_DWORD)v72 == *((_DWORD *)v70 - 2) )
        {
          v87 = (unsigned int)(3 * v72 + 1) >> 1;
          v88 = 4 * v87 + 8;
          if ( 4 * (int)v72 + 8 >= (unsigned int)v88 || (unsigned int)v72 >= v87 )
          {
            v94 = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(v104, "Overflow encountered when expanding vector", v95);
            v96 = v104;
            v97 = v104;
            *v94 = (char *)off_1C63128;
            sub_2333C0(v94 + 1, v97);
            sub_233E40((__int64)v96);
            __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v89 = (unsigned int *)sub_186B300(v70 - 1, v88);
          v70 = v89 + 2;
          *v89 = v87;
          v90 = v89[1];
          *(_QWORD *)(a1 + 816) = v70;
          v73 = (_DWORD *)v70 + v90;
        }
        else
        {
          v73 = (_DWORD *)v70 + v72;
        }
      }
      else
      {
        v93 = (_QWORD *)sub_186B270(0x10u);
        v70 = v93 + 1;
        *v93 = 2;
        *(_QWORD *)(a1 + 816) = v93 + 1;
        v73 = v93 + 1;
      }
      *v73 = v71;
      v74 = *(_QWORD *)(a1 + 792);
      v75 = ++v109;
      ++*((_DWORD *)v70 - 1);
      if ( !v74 )
      {
        if ( !v36 )
          goto LABEL_119;
        v82 = (unsigned int)*(v36 - 1);
        if ( !(_DWORD)v82 )
        {
          sub_186B220(v36 - 2);
          goto LABEL_119;
        }
LABEL_98:
        v83 = v36;
        v84 = &v36[8 * v82];
        do
        {
          sub_182EF00(v37, v83);
          v85 = v83 + 4;
          v83 += 8;
          sub_182EF00(v37, v85);
        }
        while ( v83 != v84 );
        goto LABEL_100;
      }
      v102 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v36, (__m128i)(unsigned __int64)v37);
      if ( v75 >= *(_DWORD *)(v74 - 4) )
        goto LABEL_96;
      v107 = (void *)(v74 + 8LL * v75);
      if ( !v36 )
        break;
LABEL_61:
      v51 = (unsigned int)*(v36 - 1);
      if ( (_DWORD)v51 )
      {
        v52 = v36;
        v53 = &v36[8 * v51];
        do
        {
          sub_182EF00(v37, v52);
          sub_182EF00(v37, v52 + 4);
          v52 += 8;
        }
        while ( v52 != v53 );
      }
      *(v36 - 1) = 0;
    }
    *(v39 - 1) = 0;
    goto LABEL_67;
  }
LABEL_96:
  if ( !v36 )
    goto LABEL_101;
  v82 = (unsigned int)*(v36 - 1);
  if ( (_DWORD)v82 )
    goto LABEL_98;
LABEL_100:
  *(v36 - 1) = 0;
  sub_186B220(v36 - 2);
LABEL_101:
  if ( v39 )
LABEL_119:
    sub_186B220(v39 - 2);
  sub_184C8D0(v103);
}

