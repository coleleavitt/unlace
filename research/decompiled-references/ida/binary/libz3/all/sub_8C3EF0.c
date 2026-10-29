void __fastcall sub_8C3EF0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // esi
  __int64 v10; // rdx
  unsigned int v11; // edx
  int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // esi
  void *v16; // r14
  int v17; // eax
  __int64 v18; // rax
  int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  int v22; // edx
  int v23; // eax
  __int64 v24; // rax
  int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  int v28; // edx
  int v29; // eax
  int *v30; // r13
  __int64 v31; // r12
  __int64 v32; // rax
  _DWORD *v33; // rbp
  unsigned int v34; // ebx
  __int64 v35; // rdx
  unsigned int v36; // esi
  int *v37; // rcx
  int v38; // eax
  int v39; // edi
  int v40; // ecx
  int v41; // eax
  _QWORD *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rbx
  int *v45; // r14
  int *v46; // rbx
  int *v47; // r14
  int *v48; // rbx
  int *v49; // rax
  __int64 v50; // rax
  int v51; // edx
  int v52; // edx
  __int64 v53; // rax
  unsigned int v54; // ecx
  size_t v55; // rsi
  _DWORD *v56; // rax
  int v57; // edx
  __int64 v58; // rax
  unsigned int v59; // esi
  _QWORD *v60; // rdi
  unsigned int v61; // edx
  int v62; // eax
  _QWORD *v63; // rdx
  int v64; // ebx
  __int64 v65; // rax
  _DWORD *v66; // rax
  __int64 v67; // rax
  unsigned int v68; // ecx
  int v69; // ecx
  unsigned int v70; // ecx
  __int64 v71; // rsi
  int v72; // edi
  bool v73; // zf
  __int64 v74; // r14
  __int64 v75; // rax
  int *v76; // rbx
  int *v77; // r14
  int *v78; // rsi
  _QWORD *v79; // rax
  unsigned int v80; // r14d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rax
  int v84; // eax
  _QWORD *v85; // rax
  char **exception; // rbx
  __int64 v87; // rdx
  __int64 *v88; // r15
  __int64 *v89; // rsi
  char **v90; // rbx
  __int64 v91; // rdx
  __int64 *v92; // r15
  __int64 *v93; // rsi
  __m128i v94; // [rsp+0h] [rbp-408h] BYREF
  void *v95; // [rsp+10h] [rbp-3F8h]
  __int64 *v96; // [rsp+18h] [rbp-3F0h]
  int **v97; // [rsp+20h] [rbp-3E8h]
  _QWORD *v98; // [rsp+28h] [rbp-3E0h]
  void *v99; // [rsp+30h] [rbp-3D8h]
  __int64 v100; // [rsp+38h] [rbp-3D0h]
  int *v101; // [rsp+40h] [rbp-3C8h]
  unsigned int **v102; // [rsp+48h] [rbp-3C0h]
  _DWORD *v103; // [rsp+58h] [rbp-3B0h] BYREF
  __m128i v104; // [rsp+60h] [rbp-3A8h] BYREF
  int v105; // [rsp+70h] [rbp-398h] BYREF
  char v106; // [rsp+74h] [rbp-394h]
  __int64 v107; // [rsp+78h] [rbp-390h]
  int v108; // [rsp+80h] [rbp-388h] BYREF
  char v109; // [rsp+84h] [rbp-384h]
  __int64 v110; // [rsp+88h] [rbp-380h]
  int v111; // [rsp+90h] [rbp-378h] BYREF
  char v112; // [rsp+94h] [rbp-374h]
  __int64 v113; // [rsp+98h] [rbp-370h]
  int v114; // [rsp+A0h] [rbp-368h] BYREF
  char v115; // [rsp+A4h] [rbp-364h]
  __int64 v116; // [rsp+A8h] [rbp-360h]
  __int64 v117; // [rsp+B0h] [rbp-358h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-350h]
  __int64 v119; // [rsp+C0h] [rbp-348h] BYREF
  __int64 v120; // [rsp+C8h] [rbp-340h]
  __int64 v121; // [rsp+D0h] [rbp-338h] BYREF
  __int64 v122; // [rsp+D8h] [rbp-330h]
  __int64 v123; // [rsp+E0h] [rbp-328h] BYREF
  __int64 v124; // [rsp+E8h] [rbp-320h]
  _BYTE v125[600]; // [rsp+F0h] [rbp-318h] BYREF
  __int64 v126; // [rsp+348h] [rbp-C0h]
  __int64 v127; // [rsp+350h] [rbp-B8h]
  __int64 v128; // [rsp+358h] [rbp-B0h]
  __int64 v129; // [rsp+360h] [rbp-A8h]
  __int64 v130; // [rsp+368h] [rbp-A0h]
  __int64 v131; // [rsp+370h] [rbp-98h]
  __int64 v132; // [rsp+378h] [rbp-90h]
  __int64 v133; // [rsp+380h] [rbp-88h]
  __int64 v134; // [rsp+388h] [rbp-80h]
  __int64 v135; // [rsp+390h] [rbp-78h]
  __int64 v136; // [rsp+398h] [rbp-70h]
  __int64 v137; // [rsp+3A0h] [rbp-68h]
  __int64 v138; // [rsp+3A8h] [rbp-60h]
  __int64 v139; // [rsp+3B0h] [rbp-58h]
  __int64 v140; // [rsp+3B8h] [rbp-50h]
  __int64 v141; // [rsp+3C0h] [rbp-48h]
  __int64 v142; // [rsp+3C8h] [rbp-40h]

  v3 = a1 + 184;
  v4 = *(_DWORD *)(v3 + 376);
  v98 = a2;
  sub_8BCA00(v3, *(_DWORD *)(v3 + 372), v4);
  v95 = v125;
  sub_1839FF0(v125);
  v126 = 0;
  v127 = 0;
  v142 = 0x3F1A36E2EB1C432DLL;
  v5 = *(_QWORD *)(a1 + 232);
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v136 = 1;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v140 = 1;
  v141 = 0;
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 768);
    v8 = 1;
    v6 = 0;
    if ( v7 )
      goto LABEL_3;
LABEL_100:
    v9 = 0;
    goto LABEL_4;
  }
  v6 = *(_DWORD *)(v5 - 4);
  v7 = *(_QWORD *)(a1 + 768);
  v8 = 2 * v6 + 1;
  if ( !v7 )
    goto LABEL_100;
LABEL_3:
  v9 = *(_DWORD *)(v7 - 4);
LABEL_4:
  v10 = *(_QWORD *)(a1 + 224);
  if ( v10 )
  {
    v11 = 2 * *(_DWORD *)(v10 - 4);
    if ( v8 < v11 )
      v8 = v11;
  }
  sub_8C3910((__int64)v98, v8 + v9);
  if ( v6 )
  {
    v12 = 1;
    v13 = 0;
    v100 = 4LL * v6;
    v94.m128i_i64[0] = (__int64)&v114;
    while ( 1 )
    {
      v17 = *(_DWORD *)(*(_QWORD *)(a1 + 208) + v13);
      v106 &= 0xFCu;
      v109 &= 0xFCu;
      v107 = 0;
      v108 = 1;
      v110 = 0;
      v105 = v17;
      sub_182CBA0(qword_1C7F2C0, &v108);
      v108 = 1;
      v109 &= ~1u;
      v112 &= 0xFCu;
      v115 &= 0xFCu;
      v113 = 0;
      v114 = 1;
      v116 = 0;
      v111 = dword_1C7F370;
      sub_182CBA0(qword_1C7F2C0, v94.m128i_i64[0]);
      v115 &= ~1u;
      v114 = 1;
      v117 = 0;
      v118 = 0;
      v119 = 1;
      v120 = 0;
      v121 = 0;
      v122 = 0;
      v123 = 1;
      v124 = 0;
      if ( (v106 & 1) != 0 )
      {
        v99 = &v105;
        sub_182EA00(v95, &v117, &v105);
        if ( (v109 & 1) == 0 )
        {
LABEL_10:
          BYTE4(v119) &= ~1u;
          LODWORD(v119) = v108;
          if ( (v112 & 1) == 0 )
            goto LABEL_11;
          goto LABEL_18;
        }
      }
      else
      {
        LODWORD(v117) = v105;
        v99 = &v105;
        if ( (v109 & 1) == 0 )
          goto LABEL_10;
      }
      sub_182EA00(v95, &v119, &v108);
      if ( (v112 & 1) == 0 )
      {
LABEL_11:
        BYTE4(v121) &= ~1u;
        LODWORD(v121) = v111;
        if ( (v115 & 1) == 0 )
          goto LABEL_12;
        goto LABEL_19;
      }
LABEL_18:
      sub_182EA00(v95, &v121, &v111);
      if ( (v115 & 1) == 0 )
      {
LABEL_12:
        BYTE4(v123) &= ~1u;
        LODWORD(v123) = v114;
        v14 = *(_QWORD *)(a1 + 768);
        if ( !v14 )
          goto LABEL_20;
        goto LABEL_13;
      }
LABEL_19:
      sub_182EA00(v95, &v123, v94.m128i_i64[0]);
      v14 = *(_QWORD *)(a1 + 768);
      if ( !v14 )
      {
LABEL_20:
        v15 = 0;
        goto LABEL_14;
      }
LABEL_13:
      v15 = *(_DWORD *)(v14 - 4);
LABEL_14:
      v96 = &v117;
      sub_8B2CA0(v98, v12 + v15, (__int64)&v117);
      sub_182EF00(v95, &v117);
      sub_182EF00(v95, &v119);
      sub_182EF00(v95, &v121);
      sub_182EF00(v95, &v123);
      v13 += 4;
      v12 += 2;
      v97 = (int **)qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v111);
      sub_182CBA0(v97, v94.m128i_i64[0]);
      v16 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v99);
      sub_182CBA0(v16, &v108);
      if ( v100 == v13 )
        goto LABEL_22;
    }
  }
  v96 = &v117;
LABEL_22:
  v18 = *(_QWORD *)(a1 + 768);
  v117 = 0;
  v118 = 0;
  v19 = *(_DWORD *)(a1 + 556);
  v119 = 1;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 1;
  v124 = 0;
  if ( v18 )
    v20 = *(_DWORD *)(v18 - 4);
  else
    v20 = 0;
  sub_8B3D10(v98, v20 + 2 * v19 + 1, (__int64)v96);
  v21 = *(_QWORD *)(a1 + 768);
  v117 = 0;
  v118 = 0;
  v22 = *(_DWORD *)(a1 + 556);
  v119 = 1;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 1;
  v124 = 0;
  if ( v21 )
    v23 = *(_DWORD *)(v21 - 4);
  else
    v23 = 0;
  sub_8B3EE0(v98, v23 + 2 * v22 + 1, (__int64)v96);
  v24 = *(_QWORD *)(a1 + 768);
  v117 = 0;
  v118 = 0;
  v25 = *(_DWORD *)(a1 + 560);
  v119 = 1;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 1;
  v124 = 0;
  if ( v24 )
    v26 = *(_DWORD *)(v24 - 4);
  else
    v26 = 0;
  sub_8B3D10(v98, v26 + 2 * v25 + 1, (__int64)v96);
  v27 = *(_QWORD *)(a1 + 768);
  v117 = 0;
  v118 = 0;
  v28 = *(_DWORD *)(a1 + 560);
  v119 = 1;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 1;
  v124 = 0;
  if ( v27 )
    v29 = *(_DWORD *)(v27 - 4);
  else
    v29 = 0;
  sub_8B3EE0(v98, v29 + 2 * v28 + 1, (__int64)v96);
  v117 = 1;
  v118 = 0;
  v104.m128i_i64[1] = (__int64)v95;
  v97 = (int **)&v104;
  v119 = 1;
  v120 = 0;
  v104.m128i_i64[0] = 0;
  sub_8ADEE0((int **)&v104, (int *)v96);
  v118 = 0;
  v117 = 0xFFFFFFFFLL;
  v119 = 1;
  v120 = 0;
  sub_8ADEE0((int **)&v104, (int *)v96);
  v118 = 0;
  v117 = 0xFFFFFFFFLL;
  v119 = 1;
  v120 = 0;
  sub_8ADEE0((int **)&v104, (int *)v96);
  v30 = (int *)v104.m128i_i64[0];
  v103 = nullptr;
  v102 = &v103;
  v31 = v104.m128i_i64[1];
  sub_83BF90(&v103, 3u);
  v32 = *(_QWORD *)(a1 + 224);
  v33 = v103;
  if ( !v32 )
  {
LABEL_36:
    *(_DWORD *)(a1 + 2464) = 0;
    v35 = *(_QWORD *)(a1 + 768);
LABEL_37:
    v43 = *(_QWORD *)(a1 + 792);
    if ( !v43 )
      goto LABEL_75;
LABEL_38:
    LODWORD(v101) = *(_DWORD *)(v43 - 4);
    if ( !v35 )
      goto LABEL_76;
    goto LABEL_39;
  }
  v34 = *(_DWORD *)(a1 + 2464);
  while ( 1 )
  {
    v35 = *(_QWORD *)(a1 + 768);
    if ( v34 >= *(_DWORD *)(v32 - 4) )
      break;
    v36 = 2 * v34;
    v37 = (int *)(v32 + 24LL * v34);
    v38 = 2 * v37[1];
    if ( v35 )
    {
      v39 = *(_DWORD *)(v35 - 4);
      v36 += v39;
      *v33 = v39 + v38 + 1;
      v40 = *v37;
      v41 = *(_DWORD *)(v35 - 4) + 1;
    }
    else
    {
      *v33 = v38 + 1;
      v41 = 1;
      v40 = *v37;
    }
    v33[2] = v36;
    v42 = v98;
    v33[1] = v41 + 2 * v40;
    sub_8B15E0((__int64)v42, v36, 3u, (__int64)v33, v30);
    v32 = *(_QWORD *)(a1 + 224);
    ++v34;
    if ( !v32 )
      goto LABEL_36;
  }
  v69 = *(_DWORD *)(v32 - 4);
  v101 = &v108;
  *(_DWORD *)(a1 + 2464) = v69;
  v70 = 0;
  do
  {
    if ( v70 >= *(_DWORD *)(v32 - 4) )
      goto LABEL_37;
    v71 = v32 + 24LL * v70;
    if ( v35 )
      v72 = *(_DWORD *)(v35 - 4);
    else
      v72 = 0;
    v73 = *(_BYTE *)(v71 + 20) == 0;
    v94.m128i_i32[0] = v72 + 2 * v70;
    if ( v73 )
    {
      v74 = v98[199] + 232LL * v94.m128i_u32[0];
      *(_BYTE *)(v74 + 3) &= ~0x80u;
    }
    else
    {
      v84 = *(_DWORD *)(v71 + 8);
      LODWORD(v100) = v70;
      v106 &= 0xFCu;
      v105 = v84;
      v109 &= 0xFCu;
      v107 = 0;
      v108 = 1;
      v110 = 0;
      sub_182CBA0(qword_1C7F2C0, v101);
      v108 = 1;
      v109 &= ~1u;
      v112 &= 0xFCu;
      v115 &= 0xFCu;
      v113 = 0;
      v114 = 1;
      v116 = 0;
      v111 = dword_1C7F370;
      sub_182CBA0(qword_1C7F2C0, &v114);
      v114 = 1;
      v115 &= ~1u;
      v117 = 0;
      v118 = 0;
      v119 = 1;
      v120 = 0;
      v121 = 0;
      v122 = 0;
      v123 = 1;
      v124 = 0;
      v99 = &v105;
      sub_8ADE80((__int64)v95, (__int64)v96, &v105);
      sub_8ADE80((__int64)v95, (__int64)&v121, &v111);
      sub_8B3EE0(v98, v94.m128i_u32[0], (__int64)v96);
      sub_8AD4E0((__int64)v95, (__int64)v96);
      sub_25A130((char *)&v111);
      sub_25A130((char *)&v105);
      v35 = *(_QWORD *)(a1 + 768);
      v32 = *(_QWORD *)(a1 + 224);
      v70 = v100;
    }
    ++v70;
  }
  while ( v32 );
  v43 = *(_QWORD *)(a1 + 792);
  if ( v43 )
    goto LABEL_38;
LABEL_75:
  LODWORD(v101) = 0;
  if ( v35 )
  {
LABEL_39:
    v94 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v31);
    if ( (unsigned int)v101 >= *(_DWORD *)(v35 - 4) )
      goto LABEL_76;
    v99 = (void *)(v35 + 8LL * (unsigned int)v101);
    if ( v30 )
      goto LABEL_41;
    while ( !v33 )
    {
LABEL_47:
      v47 = *(int **)v99;
      if ( *(_QWORD *)v99 )
      {
        v48 = &v47[10 * *(v47 - 1)];
        if ( v48 != v47 )
        {
          while ( 1 )
          {
            v104 = _mm_load_si128(&v94);
            sub_8ADEE0(v97, v47 + 2);
            v50 = *(_QWORD *)(a1 + 768);
            v31 = v104.m128i_i64[1];
            v30 = (int *)v104.m128i_i64[0];
            v51 = *v47;
            v94 = _mm_load_si128(&v104);
            if ( v50 )
            {
              v52 = *(_DWORD *)(v50 - 4) + 2 * v51 + 1;
              if ( !v33 )
                goto LABEL_84;
            }
            else
            {
              v52 = 2 * v51 + 1;
              if ( !v33 )
              {
LABEL_84:
                LODWORD(v99) = v52;
                v79 = (_QWORD *)sub_186B270(0x10u);
                v33 = v79 + 1;
                *v79 = 2;
                v52 = (int)v99;
                v49 = (int *)(v79 + 1);
                goto LABEL_51;
              }
            }
            v53 = (unsigned int)*(v33 - 1);
            if ( (_DWORD)v53 == *(v33 - 2) )
            {
              v54 = (unsigned int)(3 * v53 + 1) >> 1;
              v55 = 4 * v54 + 8;
              if ( 4 * (int)v53 + 8 >= (unsigned int)v55 || (unsigned int)v53 >= v54 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_12D192(v96, "Overflow encountered when expanding vector", v87);
                v88 = v96;
                v89 = v96;
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v89);
                sub_233E40((__int64)v88);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v100) = (unsigned int)(3 * v53 + 1) >> 1;
              LODWORD(v99) = v52;
              v56 = (_DWORD *)sub_186B300(v33 - 2, v55);
              v33 = v56 + 2;
              v57 = (int)v99;
              v47 += 10;
              *v56 = v100;
              v56[v56[1]++ + 2] = v57;
              if ( v47 == v48 )
                break;
            }
            else
            {
              v49 = &v33[v53];
LABEL_51:
              v47 += 10;
              *v49 = v52;
              ++*(v33 - 1);
              if ( v47 == v48 )
                break;
            }
          }
        }
      }
      v117 = 1;
      v118 = 0;
      v119 = 1;
      v120 = 0;
      v104.m128i_i64[0] = (__int64)v30;
      v104.m128i_i64[1] = v31;
      sub_8ADEE0(v97, (int *)v96);
      v31 = v104.m128i_i64[1];
      v30 = (int *)v104.m128i_i64[0];
      if ( !v33 || (v58 = (unsigned int)*(v33 - 1), (_DWORD)v58 == *(v33 - 2)) )
      {
        v103 = v33;
        sub_2FD3F0(v102);
        v33 = v103;
        v58 = (unsigned int)*(v103 - 1);
      }
      v59 = (unsigned int)v101;
      v60 = v98;
      v33[v58] = (_DWORD)v101;
      v61 = *(v33 - 1) + 1;
      *(v33 - 1) = v61;
      v62 = sub_8B15E0((__int64)v60, v59, v61, (__int64)v33, v30);
      v63 = *(_QWORD **)(a1 + 792);
      v64 = v62;
      if ( v63 )
      {
        v65 = *((unsigned int *)v63 - 1);
        if ( (_DWORD)v65 == *((_DWORD *)v63 - 2) )
        {
          v80 = (unsigned int)(3 * v65 + 1) >> 1;
          v81 = 4 * v80 + 8;
          if ( 4 * (int)v65 + 8 >= (unsigned int)v81 || (unsigned int)v65 >= v80 )
          {
            v90 = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(v96, "Overflow encountered when expanding vector", v91);
            v92 = v96;
            v93 = v96;
            *v90 = (char *)off_1C63128;
            sub_2333C0(v90 + 1, v93);
            sub_233E40((__int64)v92);
            __cxa_throw(v90, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v82 = (unsigned int *)sub_186B300(v63 - 1, v81);
          v63 = v82 + 2;
          *v82 = v80;
          v83 = v82[1];
          *(_QWORD *)(a1 + 792) = v63;
          v66 = (_DWORD *)v63 + v83;
        }
        else
        {
          v66 = (_DWORD *)v63 + v65;
        }
      }
      else
      {
        v85 = (_QWORD *)sub_186B270(0x10u);
        v63 = v85 + 1;
        *v85 = 2;
        *(_QWORD *)(a1 + 792) = v85 + 1;
        v66 = v85 + 1;
      }
      *v66 = v64;
      v67 = *(_QWORD *)(a1 + 768);
      LODWORD(v101) = (_DWORD)v101 + 1;
      v68 = (unsigned int)v101;
      ++*((_DWORD *)v63 - 1);
      if ( !v67 )
      {
        if ( !v30 )
          goto LABEL_95;
        v75 = (unsigned int)*(v30 - 1);
        if ( !(_DWORD)v75 )
        {
          sub_186B220(v30 - 2);
          goto LABEL_95;
        }
LABEL_78:
        v76 = v30;
        v77 = &v30[8 * v75];
        do
        {
          sub_182EF00(v31, v76);
          v78 = v76 + 4;
          v76 += 8;
          sub_182EF00(v31, v78);
        }
        while ( v77 != v76 );
        goto LABEL_80;
      }
      v94 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v31);
      if ( v68 >= *(_DWORD *)(v67 - 4) )
        goto LABEL_76;
      v99 = (void *)(v67 + 8LL * v68);
      if ( !v30 )
        break;
LABEL_41:
      v44 = (unsigned int)*(v30 - 1);
      if ( (_DWORD)v44 )
      {
        v45 = v30;
        v46 = &v30[8 * v44];
        do
        {
          sub_182EF00(v31, v45);
          sub_182EF00(v31, v45 + 4);
          v45 += 8;
        }
        while ( v45 != v46 );
      }
      *(v30 - 1) = 0;
    }
    *(v33 - 1) = 0;
    goto LABEL_47;
  }
LABEL_76:
  if ( !v30 )
    goto LABEL_81;
  v75 = (unsigned int)*(v30 - 1);
  if ( (_DWORD)v75 )
    goto LABEL_78;
LABEL_80:
  *(v30 - 1) = 0;
  sub_186B220(v30 - 2);
LABEL_81:
  if ( v33 )
LABEL_95:
    sub_186B220(v33 - 2);
  sub_184C8D0(v95);
}

