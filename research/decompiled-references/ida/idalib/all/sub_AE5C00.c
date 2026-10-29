void __fastcall sub_AE5C00(__int64 a1, __int64 a2)
{
  const __m128i *v3; // rax
  const __m128i *v4; // r15
  __m128i v5; // xmm3
  __int64 *v6; // rax
  __int64 v7; // rax
  void *v8; // rdx
  __m128i v9; // xmm4
  __m128i v10; // xmm5
  __m128i v11; // xmm7
  char *v12; // rdx
  __m128i *v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm3
  __int64 v16; // rdx
  bool v17; // zf
  __m128i si128; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __int8 v21; // al
  __m128i v22; // xmm4
  __m128i v23; // xmm5
  __m128i v24; // xmm6
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i *v28; // r13
  __int64 *v29; // rax
  __m128i v30; // xmm6
  __m128i v31; // xmm3
  __m128i v32; // xmm4
  __int64 v33; // rax
  __m128i v34; // xmm5
  __m128i v35; // xmm7
  __m128i v36; // xmm6
  __m128i v37; // xmm0
  char *v38; // rdx
  void *v39; // rax
  char *v40; // rbp
  size_t v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rdi
  void (__fastcall *v49)(__int64, __int64, __int64); // rax
  __int64 v50; // rax
  const __m128i *v51; // r12
  __int64 v52; // r15
  __m128i v53; // xmm4
  __int64 *v54; // rax
  __m128i v55; // xmm5
  __m128i v56; // xmm7
  __int64 v57; // rax
  void *v58; // rdx
  __m128i v59; // xmm6
  __m128i v60; // xmm4
  __m128i v61; // xmm5
  char *v62; // rdx
  __m128i v63; // xmm7
  __int64 v64; // rax
  __m128i v65; // xmm2
  __m128i v66; // xmm1
  __m128i v67; // xmm0
  size_t v68; // rax
  __int8 v69; // al
  __m128i v70; // xmm7
  __m128i v71; // xmm4
  __m128i v72; // xmm5
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __m128i *v76; // r13
  __int64 *v77; // rax
  __m128i v78; // xmm7
  __m128i v79; // xmm6
  __m128i v80; // xmm3
  __int64 v81; // rax
  __m128i v82; // xmm1
  __m128i v83; // xmm2
  __m128i v84; // xmm4
  __m128i v85; // xmm0
  char *v86; // rdx
  void *v87; // rax
  __int64 v88; // rbp
  char *v89; // r13
  size_t v90; // r9
  __int64 v91; // rbx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r13
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rdi
  __int64 v100; // rdi
  void (__fastcall *v101)(__int64, __int64, __int64); // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rbx
  const __m128i *v105; // rbp
  __m128i v106; // xmm6
  __int64 v107; // rdx
  __int128 v108; // xmm3
  __int128 v109; // xmm7
  __int128 v110; // xmm6
  __int64 v111; // [rsp+0h] [rbp-3E8h]
  __int64 m128i_i64; // [rsp+8h] [rbp-3E0h]
  __int64 v113; // [rsp+18h] [rbp-3D0h]
  __int64 v114; // [rsp+30h] [rbp-3B8h]
  const __m128i *v115; // [rsp+38h] [rbp-3B0h]
  char v116; // [rsp+5Dh] [rbp-38Bh] BYREF
  char v117; // [rsp+5Eh] [rbp-38Ah] BYREF
  char v118; // [rsp+5Fh] [rbp-389h] BYREF
  void *v119[2]; // [rsp+60h] [rbp-388h] BYREF
  _BYTE v120[16]; // [rsp+70h] [rbp-378h] BYREF
  void *v121[2]; // [rsp+80h] [rbp-368h] BYREF
  _BYTE v122[16]; // [rsp+90h] [rbp-358h] BYREF
  _BYTE v123[24]; // [rsp+A0h] [rbp-348h] BYREF
  __int64 v124; // [rsp+B8h] [rbp-330h]
  __m128i v125; // [rsp+C0h] [rbp-328h] BYREF
  __int64 v126; // [rsp+D0h] [rbp-318h]
  __m128i v127; // [rsp+E0h] [rbp-308h]
  __m128i v128; // [rsp+F0h] [rbp-2F8h]
  __m128i v129; // [rsp+100h] [rbp-2E8h]
  __int64 v130; // [rsp+110h] [rbp-2D8h]
  __m128i v131; // [rsp+120h] [rbp-2C8h] BYREF
  __m128i v132; // [rsp+130h] [rbp-2B8h] BYREF
  __m128i v133; // [rsp+140h] [rbp-2A8h] BYREF
  char *s; // [rsp+150h] [rbp-298h]
  _BYTE v135[24]; // [rsp+160h] [rbp-288h] BYREF
  __int64 v136; // [rsp+178h] [rbp-270h]
  __m128i v137; // [rsp+180h] [rbp-268h] BYREF
  __int64 v138; // [rsp+190h] [rbp-258h]
  __m128i v139; // [rsp+1A0h] [rbp-248h]
  __m128i v140; // [rsp+1B0h] [rbp-238h]
  __m128i v141; // [rsp+1C0h] [rbp-228h]
  __int64 v142; // [rsp+1D0h] [rbp-218h]
  __m128i v143; // [rsp+1E0h] [rbp-208h] BYREF
  __m128i v144; // [rsp+1F0h] [rbp-1F8h] BYREF
  __m128i v145; // [rsp+200h] [rbp-1E8h] BYREF
  char *v146; // [rsp+210h] [rbp-1D8h]
  _BYTE v147[24]; // [rsp+220h] [rbp-1C8h] BYREF
  __int64 v148; // [rsp+238h] [rbp-1B0h]
  __m128i v149; // [rsp+240h] [rbp-1A8h] BYREF
  __int64 v150; // [rsp+250h] [rbp-198h]
  __m128i v151; // [rsp+260h] [rbp-188h] BYREF
  void *v152; // [rsp+270h] [rbp-178h] BYREF
  __int64 *v153; // [rsp+278h] [rbp-170h]
  __m128i v154; // [rsp+280h] [rbp-168h] BYREF
  __m128i v155; // [rsp+290h] [rbp-158h] BYREF
  __m128i v156; // [rsp+2A0h] [rbp-148h] BYREF
  __m128i v157; // [rsp+2B0h] [rbp-138h] BYREF
  char *v158; // [rsp+2C0h] [rbp-128h]
  __m128i v159; // [rsp+2D0h] [rbp-118h] BYREF
  void *v160; // [rsp+2E0h] [rbp-108h] BYREF
  __int64 *v161; // [rsp+2E8h] [rbp-100h]
  __m128i v162; // [rsp+2F0h] [rbp-F8h] BYREF
  __m128i v163; // [rsp+300h] [rbp-E8h] BYREF
  __m128i v164; // [rsp+310h] [rbp-D8h] BYREF
  __m128i v165; // [rsp+320h] [rbp-C8h] BYREF
  char *v166; // [rsp+330h] [rbp-B8h]
  __int128 v167; // [rsp+340h] [rbp-A8h] BYREF
  void *v168[2]; // [rsp+350h] [rbp-98h]
  __int128 v169; // [rsp+360h] [rbp-88h] BYREF
  __m128i v170; // [rsp+370h] [rbp-78h] BYREF
  __m128i v171; // [rsp+380h] [rbp-68h] BYREF
  __m128i v172; // [rsp+390h] [rbp-58h] BYREF
  char *v173; // [rsp+3A0h] [rbp-48h]

  sub_ADDB10(a1, *(_QWORD *)(a2 + 24));
  v3 = *(const __m128i **)(*(_QWORD *)(a2 + 16) + 64LL);
  if ( v3 )
  {
    m128i_i64 = (__int64)v3[2 * v3->m128i_u32[2] + 1].m128i_i64;
    if ( (const __m128i *)m128i_i64 != &v3[1] )
    {
      v4 = v3 + 1;
      v113 = a1 + 8;
      do
      {
        while ( 1 )
        {
          v14 = sub_F1E510(v4);
          v15 = _mm_loadu_si128(v4);
          v16 = v4[1].m128i_i64[0];
          *(_QWORD *)v123 = a1;
          v125 = (__m128i)(unsigned __int64)v14;
          v17 = *(_BYTE *)(a1 + 9) == 0;
          *(__m128i *)&v123[8] = v15;
          si128 = _mm_load_si128((const __m128i *)v123);
          v124 = v16;
          v19 = _mm_load_si128((const __m128i *)&v123[16]);
          v20 = _mm_load_si128(&v125);
          v126 = 0;
          v127 = si128;
          v128 = v19;
          v129 = v20;
          v130 = 0;
          v131 = si128;
          v132 = v19;
          v133 = v20;
          s = nullptr;
          if ( !v17 )
            break;
          v119[0] = v120;
          sub_ACAA20(v119, (_BYTE *)"inner", (__int64)"");
          v21 = *(_BYTE *)(a1 + 8);
          v152 = &v154;
          v151.m128i_i8[0] = v21;
          v151.m128i_i64[1] = v113;
          sub_ACAAE0(&v152, (_BYTE *)v119[0], (__int64)v119[0] + (unsigned __int64)v119[1]);
          v17 = *(_BYTE *)(a1 + 8) == 0;
          v22 = _mm_load_si128(&v131);
          v23 = _mm_load_si128(&v132);
          v24 = _mm_load_si128(&v133);
          v158 = s;
          v155 = v22;
          v156 = v23;
          v157 = v24;
          if ( v17 )
          {
            v25 = *(unsigned int *)(a1 + 24);
            v26 = *(_QWORD *)(a1 + 16);
            v116 = 0;
            v27 = v26 + 32 * v25 - 32;
            if ( !*(_QWORD *)(v27 + 16) )
              goto LABEL_90;
            (*(void (__fastcall **)(__int64, char *))(v27 + 24))(v27, &v116);
            v28 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
            LOBYTE(v167) = v151.m128i_i8[0];
            *((_QWORD *)&v167 + 1) = v151.m128i_i64[1];
            v168[0] = &v169;
            if ( v152 == &v154 )
            {
              v169 = (__int128)_mm_load_si128(&v154);
            }
            else
            {
              v168[0] = v152;
              *(_QWORD *)&v169 = v154.m128i_i64[0];
            }
            v29 = v153;
            v30 = _mm_load_si128(&v155);
            v153 = nullptr;
            v31 = _mm_load_si128(&v156);
            v32 = _mm_load_si128(&v157);
            v154.m128i_i8[0] = 0;
            v168[1] = v29;
            v152 = &v154;
            v170 = v30;
            v171 = v31;
            v172 = v32;
            v173 = v158;
            v160 = nullptr;
            v33 = operator new(0x68u);
            *(_BYTE *)v33 = v167;
            *(_QWORD *)(v33 + 8) = *((_QWORD *)&v167 + 1);
            *(_QWORD *)(v33 + 16) = v33 + 32;
            if ( v168[0] == &v169 )
            {
              *(__m128i *)(v33 + 32) = _mm_load_si128((const __m128i *)&v169);
            }
            else
            {
              *(void **)(v33 + 16) = v168[0];
              *(_QWORD *)(v33 + 32) = v169;
            }
            v34 = _mm_load_si128(&v170);
            v159.m128i_i64[0] = v33;
            v35 = _mm_load_si128(&v171);
            v36 = _mm_load_si128(&v172);
            LOBYTE(v169) = 0;
            v37 = _mm_load_si128(&v159);
            *(void **)(v33 + 24) = v168[1];
            v168[0] = &v169;
            v38 = v173;
            *(__m128i *)(v33 + 48) = v34;
            *(_QWORD *)(v33 + 96) = v38;
            *(__m128i *)(v33 + 64) = v35;
            *(__m128i *)(v33 + 80) = v36;
            v168[1] = nullptr;
            v159 = _mm_loadu_si128(v28);
            v39 = (void *)v28[1].m128i_i64[0];
            *v28 = v37;
            v160 = v39;
            v28[1].m128i_i64[0] = (__int64)sub_ACB180;
            v161 = (__int64 *)v28[1].m128i_i64[1];
            v28[1].m128i_i64[1] = (__int64)qword_AE50F0;
            if ( v39 )
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v39)(&v159, &v159, 3);
          }
          else
          {
            LOBYTE(v167) = v151.m128i_i8[0];
            *((_QWORD *)&v167 + 1) = v151.m128i_i64[1];
            v168[0] = &v169;
            if ( v152 == &v154 )
            {
              v5 = v24;
              v169 = (__int128)_mm_load_si128(&v154);
            }
            else
            {
              v168[0] = v152;
              v5 = v24;
              *(_QWORD *)&v169 = v154.m128i_i64[0];
            }
            v6 = v153;
            v153 = nullptr;
            v154.m128i_i8[0] = 0;
            v168[1] = v6;
            v152 = &v154;
            v170 = v22;
            v171 = v23;
            v172 = v5;
            v173 = v158;
            v160 = nullptr;
            v7 = operator new(0x68u);
            *(_BYTE *)v7 = v167;
            *(_QWORD *)(v7 + 8) = *((_QWORD *)&v167 + 1);
            *(_QWORD *)(v7 + 16) = v7 + 32;
            if ( v168[0] == &v169 )
            {
              *(__m128i *)(v7 + 32) = _mm_load_si128((const __m128i *)&v169);
            }
            else
            {
              *(void **)(v7 + 16) = v168[0];
              *(_QWORD *)(v7 + 32) = v169;
            }
            v8 = v168[1];
            v9 = _mm_load_si128(&v170);
            v159.m128i_i64[0] = v7;
            v10 = _mm_load_si128(&v171);
            v11 = _mm_load_si128(&v172);
            v168[1] = nullptr;
            *(_QWORD *)(v7 + 24) = v8;
            v168[0] = &v169;
            v12 = v173;
            *(__m128i *)(v7 + 48) = v9;
            *(__m128i *)(v7 + 64) = v10;
            *(__m128i *)(v7 + 80) = v11;
            *(_QWORD *)(v7 + 96) = v12;
            LOBYTE(v169) = 0;
            v161 = qword_AE50F0;
            v160 = sub_ACB180;
            sub_ACD330(a1 + 16, &v159);
            if ( v160 )
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v160)(&v159, &v159, 3);
          }
          if ( v168[0] != &v169 )
            operator delete(v168[0]);
          v13 = (__m128i *)v152;
          *(_BYTE *)(a1 + 8) = 0;
          if ( v13 != &v154 )
            operator delete(v13);
          if ( v119[0] != v120 )
            operator delete(v119[0]);
          v4 += 2;
          if ( (const __m128i *)m128i_i64 == v4 )
            return;
        }
        *(_BYTE *)(a1 + 9) = 0;
        sub_22299F0(a1 + 1056);
        v40 = s;
        v41 = 0;
        v42 = v131.m128i_i64[0] + 8;
        if ( s )
          v41 = j__strlen(s);
        sub_E6B8F0(v42, &v131.m128i_u64[1], v133.m128i_i64[0], v133.m128i_i64[1], v40, v41);
        switch ( v131.m128i_i32[2] & 0x7FFFFFFF )
        {
          case 0:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            goto LABEL_30;
          case 1:
            sub_AE36F0(v131.m128i_i64[0], v132.m128i_i64[0]);
            goto LABEL_30;
          case 8:
            sub_ADE7F0(v131.m128i_i64[0] + 8, 0, 0, v132.m128i_i64[0], v131.m128i_i64[0]);
            goto LABEL_30;
          case 9:
            v114 = v131.m128i_i64[0] + 8;
            v51 = (const __m128i *)v132.m128i_i64[0];
            v111 = v132.m128i_i64[0] + 24LL * v131.m128i_u32[3];
            if ( v132.m128i_i64[0] == v111 )
              goto LABEL_30;
            v115 = v4;
            v52 = v131.m128i_i64[0];
            break;
        }
        do
        {
          while ( 1 )
          {
            v63 = _mm_loadu_si128(v51);
            v64 = v51[1].m128i_i64[0];
            *(_QWORD *)v135 = v52;
            v137 = 0u;
            *(__m128i *)&v135[8] = v63;
            v65 = _mm_load_si128((const __m128i *)v135);
            v136 = v64;
            v66 = _mm_load_si128((const __m128i *)&v135[16]);
            v67 = _mm_load_si128(&v137);
            v143 = v65;
            v144 = v66;
            v145 = v67;
            v146 = nullptr;
            v17 = *(_BYTE *)(v52 + 9) == 0;
            v138 = 0;
            v139 = v65;
            v140 = v66;
            v141 = v67;
            v142 = 0;
            if ( !v17 )
              break;
            v68 = j__strlen("inner");
            v121[0] = v122;
            sub_ACAA20(v121, "inner", (__int64)&aInner[v68]);
            v69 = *(_BYTE *)(v52 + 8);
            v160 = &v162;
            v159.m128i_i8[0] = v69;
            v159.m128i_i64[1] = v114;
            sub_ACAAE0(&v160, (_BYTE *)v121[0], (__int64)v121[0] + (unsigned __int64)v121[1]);
            v70 = _mm_load_si128(&v143);
            v71 = _mm_load_si128(&v144);
            v72 = _mm_load_si128(&v145);
            v163 = v70;
            v164 = v71;
            v165 = v72;
            v166 = v146;
            if ( *(_BYTE *)(v52 + 8) )
            {
              LOBYTE(v167) = v159.m128i_i8[0];
              *((_QWORD *)&v167 + 1) = v159.m128i_i64[1];
              v168[0] = &v169;
              if ( v160 == &v162 )
              {
                v53 = v70;
                v169 = (__int128)_mm_load_si128(&v162);
              }
              else
              {
                v168[0] = v160;
                v53 = v70;
                *(_QWORD *)&v169 = v162.m128i_i64[0];
              }
              v54 = v161;
              v55 = _mm_load_si128(&v164);
              v161 = nullptr;
              v56 = _mm_load_si128(&v165);
              v162.m128i_i8[0] = 0;
              v168[1] = v54;
              v160 = &v162;
              v170 = v53;
              v171 = v55;
              v172 = v56;
              v173 = v166;
              v152 = nullptr;
              v57 = operator new(0x68u);
              *(_BYTE *)v57 = v167;
              *(_QWORD *)(v57 + 8) = *((_QWORD *)&v167 + 1);
              *(_QWORD *)(v57 + 16) = v57 + 32;
              if ( v168[0] == &v169 )
              {
                *(__m128i *)(v57 + 32) = _mm_load_si128((const __m128i *)&v169);
              }
              else
              {
                *(void **)(v57 + 16) = v168[0];
                *(_QWORD *)(v57 + 32) = v169;
              }
              v58 = v168[1];
              v59 = _mm_load_si128(&v170);
              v151.m128i_i64[0] = v57;
              v60 = _mm_load_si128(&v171);
              v61 = _mm_load_si128(&v172);
              v168[1] = nullptr;
              *(_QWORD *)(v57 + 24) = v58;
              v168[0] = &v169;
              v62 = v173;
              *(__m128i *)(v57 + 48) = v59;
              *(__m128i *)(v57 + 64) = v60;
              *(__m128i *)(v57 + 80) = v61;
              *(_QWORD *)(v57 + 96) = v62;
              LOBYTE(v169) = 0;
              v153 = qword_AE50F0;
              v152 = sub_ACB180;
              sub_ACD330(v52 + 16, &v151);
              if ( v152 )
                ((void (__fastcall *)(__m128i *, __m128i *, __int64))v152)(&v151, &v151, 3);
            }
            else
            {
              v73 = *(unsigned int *)(v52 + 24);
              v74 = *(_QWORD *)(v52 + 16);
              v118 = 0;
              v75 = v74 + 32 * v73 - 32;
              if ( !*(_QWORD *)(v75 + 16) )
                goto LABEL_90;
              (*(void (__fastcall **)(__int64, char *))(v75 + 24))(v75, &v118);
              v76 = (__m128i *)(*(_QWORD *)(v52 + 16) + 32LL * *(unsigned int *)(v52 + 24) - 32);
              LOBYTE(v167) = v159.m128i_i8[0];
              *((_QWORD *)&v167 + 1) = v159.m128i_i64[1];
              v168[0] = &v169;
              if ( v160 == &v162 )
              {
                v169 = (__int128)_mm_load_si128(&v162);
              }
              else
              {
                v168[0] = v160;
                *(_QWORD *)&v169 = v162.m128i_i64[0];
              }
              v77 = v161;
              v78 = _mm_load_si128(&v163);
              v161 = nullptr;
              v79 = _mm_load_si128(&v164);
              v80 = _mm_load_si128(&v165);
              v162.m128i_i8[0] = 0;
              v168[1] = v77;
              v160 = &v162;
              v170 = v78;
              v171 = v79;
              v172 = v80;
              v173 = v166;
              v152 = nullptr;
              v81 = operator new(0x68u);
              *(_BYTE *)v81 = v167;
              *(_QWORD *)(v81 + 8) = *((_QWORD *)&v167 + 1);
              *(_QWORD *)(v81 + 16) = v81 + 32;
              if ( v168[0] == &v169 )
              {
                *(__m128i *)(v81 + 32) = _mm_load_si128((const __m128i *)&v169);
              }
              else
              {
                *(void **)(v81 + 16) = v168[0];
                *(_QWORD *)(v81 + 32) = v169;
              }
              v82 = _mm_load_si128(&v170);
              v151.m128i_i64[0] = v81;
              v83 = _mm_load_si128(&v171);
              v84 = _mm_load_si128(&v172);
              LOBYTE(v169) = 0;
              v85 = _mm_load_si128(&v151);
              *(void **)(v81 + 24) = v168[1];
              v168[0] = &v169;
              v86 = v173;
              *(__m128i *)(v81 + 48) = v82;
              *(_QWORD *)(v81 + 96) = v86;
              *(__m128i *)(v81 + 64) = v83;
              *(__m128i *)(v81 + 80) = v84;
              v168[1] = nullptr;
              v151 = _mm_loadu_si128(v76);
              v87 = (void *)v76[1].m128i_i64[0];
              *v76 = v85;
              v152 = v87;
              v76[1].m128i_i64[0] = (__int64)sub_ACB180;
              v153 = (__int64 *)v76[1].m128i_i64[1];
              v76[1].m128i_i64[1] = (__int64)qword_AE50F0;
              if ( v87 )
                ((void (__fastcall *)(__m128i *, __m128i *, __int64))v87)(&v151, &v151, 3);
            }
            if ( v168[0] != &v169 )
              operator delete(v168[0]);
            *(_BYTE *)(v52 + 8) = 0;
            if ( v160 != &v162 )
              operator delete(v160);
            if ( v121[0] != v122 )
              operator delete(v121[0]);
            v51 = (const __m128i *)((char *)v51 + 24);
            if ( (const __m128i *)v111 == v51 )
              goto LABEL_80;
          }
          *(_BYTE *)(v52 + 9) = 0;
          v88 = v52 + 1056;
          sub_22299F0(v52 + 1056);
          v89 = v146;
          v90 = 0;
          v91 = v143.m128i_i64[0] + 8;
          if ( v146 )
            v90 = j__strlen(v146);
          sub_E6B8F0(v91, &v143.m128i_u64[1], v145.m128i_i64[0], v145.m128i_i64[1], v89, v90);
          v94 = v143.m128i_i64[0];
          switch ( v143.m128i_i32[2] & 0x7FFFFFFF )
          {
            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
              break;
            case 1:
              sub_AE36F0(v143.m128i_i64[0], v144.m128i_i64[0]);
              break;
            case 8:
              sub_ADE7F0(v143.m128i_i64[0] + 8, 0, 0, v144.m128i_i64[0], v143.m128i_i64[0]);
              break;
            case 9:
              v103 = v143.m128i_i64[0] + 8;
              v104 = v144.m128i_i64[0] + 24LL * v143.m128i_u32[3];
              if ( v144.m128i_i64[0] != v104 )
              {
                v105 = (const __m128i *)v144.m128i_i64[0];
                do
                {
                  v106 = _mm_loadu_si128(v105);
                  v107 = v105[1].m128i_i64[0];
                  *(_QWORD *)v147 = v94;
                  v105 = (const __m128i *)((char *)v105 + 24);
                  *(__m128i *)&v147[8] = v106;
                  v108 = (__int128)_mm_load_si128((const __m128i *)v147);
                  v148 = v107;
                  v109 = (__int128)_mm_load_si128((const __m128i *)&v147[16]);
                  v149 = 0u;
                  v110 = (__int128)_mm_load_si128(&v149);
                  v150 = 0;
                  v167 = v108;
                  *(_OWORD *)v168 = v109;
                  v169 = v110;
                  v170.m128i_i64[0] = 0;
                  sub_AE3830((char *)(v94 + 8), (char *)&byte_22F0C30, 0, v103, v92, v93, v108, v109, v110, 0);
                }
                while ( (const __m128i *)v104 != v105 );
                v88 = v52 + 1056;
              }
              break;
          }
          v95 = *(unsigned int *)(v52 + 24);
          if ( (_DWORD)v95 )
          {
            v96 = *(_QWORD *)(v52 + 16);
            LOBYTE(v167) = 1;
            v97 = v96 + 32 * v95 - 32;
            if ( !*(_QWORD *)(v97 + 16) )
              goto LABEL_90;
            while ( 1 )
            {
              (*(void (__fastcall **)(__int64, __int128 *))(v97 + 24))(v97, &v167);
              v99 = (unsigned int)(*(_DWORD *)(v52 + 24) - 1);
              *(_DWORD *)(v52 + 24) = v99;
              v100 = *(_QWORD *)(v52 + 16) + 32 * v99;
              v101 = *(void (__fastcall **)(__int64, __int64, __int64))(v100 + 16);
              if ( v101 )
                v101(v100, v100, 3);
              v102 = *(unsigned int *)(v52 + 24);
              if ( !(_DWORD)v102 )
                break;
              v98 = *(_QWORD *)(v52 + 16);
              LOBYTE(v167) = 1;
              v97 = v98 + 32 * v102 - 32;
              if ( !*(_QWORD *)(v97 + 16) )
                goto LABEL_90;
            }
          }
          v51 = (const __m128i *)((char *)v51 + 24);
          sub_2229B60(v88);
          *(_BYTE *)(v52 + 9) = 1;
        }
        while ( (const __m128i *)v111 != v51 );
LABEL_80:
        v4 = v115;
LABEL_30:
        v43 = *(unsigned int *)(a1 + 24);
        if ( (_DWORD)v43 )
        {
          v44 = *(_QWORD *)(a1 + 16);
          v117 = 1;
          v45 = v44 + 32 * v43 - 32;
          if ( !*(_QWORD *)(v45 + 16) )
LABEL_90:
            std::__throw_bad_function_call();
          while ( 1 )
          {
            (*(void (__fastcall **)(__int64, char *))(v45 + 24))(v45, &v117);
            v47 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
            *(_DWORD *)(a1 + 24) = v47;
            v48 = *(_QWORD *)(a1 + 16) + 32 * v47;
            v49 = *(void (__fastcall **)(__int64, __int64, __int64))(v48 + 16);
            if ( v49 )
              v49(v48, v48, 3);
            v50 = *(unsigned int *)(a1 + 24);
            if ( !(_DWORD)v50 )
              break;
            v46 = *(_QWORD *)(a1 + 16);
            v117 = 1;
            v45 = v46 + 32 * v50 - 32;
            if ( !*(_QWORD *)(v45 + 16) )
              goto LABEL_90;
          }
        }
        v4 += 2;
        sub_2229B60(a1 + 1056);
        *(_BYTE *)(a1 + 9) = 1;
      }
      while ( (const __m128i *)m128i_i64 != v4 );
    }
  }
}
