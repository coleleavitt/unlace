__int64 __fastcall sub_20497C0(__int64 a1, __int64 *a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  char v8; // dl
  int v10; // edx
  __int64 v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  void *v24; // rdi
  _BYTE *v25; // rax
  __m128i *p_ptr; // r14
  __int64 v27; // rax
  void *v28; // rdi
  size_t v29; // rcx
  const void *v30; // rsi
  _BYTE *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // r8
  __int64 v37; // r9
  __int32 v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rax
  __int32 v49; // r10d
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  char *v59; // rbx
  size_t v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rbx
  size_t v65; // rax
  unsigned __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbx
  size_t v69; // r12
  __int64 v70; // rax
  _BYTE *v71; // rcx
  __int64 v72; // rdx
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  __m128i v77; // xmm1
  unsigned __int64 v78; // rsi
  __m128i v79; // xmm0
  __m128i v80; // xmm3
  unsigned __int64 v81; // rsi
  __int64 v82; // rax
  unsigned __int64 v83; // r14
  unsigned __int64 v84; // rdx
  _BYTE *v85; // rdi
  __int64 v86; // rbx
  size_t j; // rsi
  _BYTE *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned __int64 v91; // r14
  unsigned __int64 v92; // rdx
  _BYTE *v93; // rdi
  unsigned __int64 v94; // r14
  unsigned __int64 v95; // rdx
  __int64 v96; // rax
  char v97; // r13
  char v98; // al
  int i; // r14d
  unsigned int v100; // ecx
  const char *v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned int v109; // edx
  size_t v110; // rax
  const char *v111; // rsi
  size_t v112; // rax
  size_t v113; // rax
  size_t v114; // rax
  size_t v115; // rax
  size_t v116; // rax
  size_t v117; // rax
  __int64 v118; // r13
  __int128 *v119; // rax
  __int64 v120; // rdx
  unsigned __int64 v121; // rcx
  unsigned __int64 v122; // r13
  __int64 v123; // rdx
  unsigned int v124; // edx
  __int64 v125; // rsi
  __int128 *v126; // rax
  unsigned int v127; // edx
  __int64 v128; // r13
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // r13
  void *v144; // rdi
  __int64 v145; // [rsp+0h] [rbp-2F8h]
  __int64 v146; // [rsp+0h] [rbp-2F8h]
  __int64 v147; // [rsp+0h] [rbp-2F8h]
  __int64 v148; // [rsp+0h] [rbp-2F8h]
  __int64 v149; // [rsp+8h] [rbp-2F0h]
  char v150; // [rsp+8h] [rbp-2F0h]
  char v151; // [rsp+8h] [rbp-2F0h]
  char v152; // [rsp+8h] [rbp-2F0h]
  __int128 *v153; // [rsp+8h] [rbp-2F0h]
  unsigned __int64 v154; // [rsp+8h] [rbp-2F0h]
  unsigned __int64 v155; // [rsp+10h] [rbp-2E8h]
  _BYTE v156[4]; // [rsp+1Ch] [rbp-2DCh] BYREF
  __m128i v157[2]; // [rsp+20h] [rbp-2D8h] BYREF
  __int16 v158; // [rsp+40h] [rbp-2B8h]
  __m128i v159[2]; // [rsp+50h] [rbp-2A8h] BYREF
  __int16 v160; // [rsp+70h] [rbp-288h]
  __m128i v161[3]; // [rsp+80h] [rbp-278h] BYREF
  __m128i v162[2]; // [rsp+B0h] [rbp-248h] BYREF
  __int16 v163; // [rsp+D0h] [rbp-228h]
  __m128i v164[2]; // [rsp+E0h] [rbp-218h] BYREF
  __int16 v165; // [rsp+100h] [rbp-1F8h]
  __m128i v166[2]; // [rsp+110h] [rbp-1E8h] BYREF
  __int16 v167; // [rsp+130h] [rbp-1C8h]
  __m128i v168; // [rsp+140h] [rbp-1B8h] BYREF
  _QWORD v169[4]; // [rsp+150h] [rbp-1A8h] BYREF
  __m128i v170[2]; // [rsp+170h] [rbp-188h] BYREF
  __int16 v171; // [rsp+190h] [rbp-168h]
  __m128i v172[2]; // [rsp+1A0h] [rbp-158h] BYREF
  __int16 v173; // [rsp+1C0h] [rbp-138h]
  __m128i v174[2]; // [rsp+1D0h] [rbp-128h] BYREF
  __int16 v175; // [rsp+1F0h] [rbp-108h]
  __m128i v176; // [rsp+200h] [rbp-F8h] BYREF
  __m128i v177; // [rsp+210h] [rbp-E8h] BYREF
  __int16 v178; // [rsp+220h] [rbp-D8h]
  __m128i v179; // [rsp+230h] [rbp-C8h] BYREF
  __m128i v180; // [rsp+240h] [rbp-B8h] BYREF
  __int64 v181; // [rsp+250h] [rbp-A8h]
  char v182; // [rsp+258h] [rbp-A0h]
  int v183; // [rsp+25Ch] [rbp-9Ch]
  __m128i *v184; // [rsp+260h] [rbp-98h]
  __m128i ptr; // [rsp+270h] [rbp-88h] BYREF
  __int128 v186; // [rsp+280h] [rbp-78h] BYREF
  _BYTE *v187; // [rsp+290h] [rbp-68h]
  char v188; // [rsp+298h] [rbp-60h]
  int v189; // [rsp+29Ch] [rbp-5Ch]
  __m128i *v190; // [rsp+2A0h] [rbp-58h]

  v7 = *a2;
  v156[0] = a3;
  if ( !v7 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v8 = *(_BYTE *)(v7 + 8);
  switch ( v8 )
  {
    case 0:
      v12 = sub_2048830(*(_DWORD *)(v7 + 12));
      *(_QWORD *)a1 = a1 + 16;
      if ( v12 )
      {
        sub_20485A0((_QWORD *)a1, v12, (__int64)&v12[v13]);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
        *(_BYTE *)(a1 + 16) = 0;
      }
      return a1;
    case 3:
      v15 = sub_2048830(*(_DWORD *)(v7 + 12));
      if ( v15 )
      {
        v179.m128i_i64[0] = (__int64)&v180;
        sub_20485A0(&v179, v15, (__int64)&v15[v16]);
      }
      else
      {
        v180.m128i_i8[0] = 0;
        v179.m128i_i64[0] = (__int64)&v180;
        v179.m128i_i64[1] = 0;
      }
      sub_A6F610(&v179, 40);
      ptr.m128i_i32[2] = 0;
      v188 = 0;
      v189 = 1;
      v187 = nullptr;
      v186 = 0;
      ptr.m128i_i64[0] = (__int64)&off_2BEBE68;
      v190 = &v179;
      sub_A1F700(&ptr);
      v17 = *a2;
      if ( *a2 )
        v17 = *(_QWORD *)(v17 + 16);
      sub_2035A70(v17, (__int64)&ptr, 0, 1);
      if ( (_BYTE *)v186 != v187 )
        sub_227B9F0(&ptr, &ptr, v18, v19, v20, v21, v145);
      sub_A6F610(&v179, 41);
      *(_QWORD *)a1 = a1 + 16;
      v22 = v179.m128i_i64[0];
      if ( (__m128i *)v179.m128i_i64[0] == &v180 )
        goto LABEL_169;
      goto LABEL_21;
    case 2:
      v179.m128i_i64[1] = 0;
      v179.m128i_i64[0] = (__int64)&v180;
      ptr.m128i_i64[0] = (__int64)&off_2BEBE68;
      v180.m128i_i8[0] = 0;
      ptr.m128i_i32[2] = 0;
      v188 = 0;
      v189 = 1;
      v187 = nullptr;
      v186 = 0;
      v190 = &v179;
      sub_A1F700(&ptr);
      v25 = v187;
      if ( (unsigned __int64)v187 >= *((_QWORD *)&v186 + 1) )
      {
        p_ptr = (__m128i *)sub_227BA10(&ptr, 34);
      }
      else
      {
        p_ptr = &ptr;
        ++v187;
        *v25 = 34;
      }
      v27 = *a2;
      if ( *a2 )
      {
        v28 = (void *)p_ptr[2].m128i_i64[0];
        v29 = *(unsigned int *)(v27 + 12);
        v30 = (const void *)(v27 + 24);
        if ( v29 > p_ptr[1].m128i_i64[1] - (__int64)v28 )
        {
          p_ptr = (__m128i *)sub_227BF10(p_ptr, v30, v29);
        }
        else if ( *(_DWORD *)(v27 + 12) )
        {
          v146 = *(unsigned int *)(v27 + 12);
          memcpy(v28, v30, v29);
          p_ptr[2].m128i_i64[0] += v146;
        }
      }
      v31 = (_BYTE *)p_ptr[2].m128i_i64[0];
      if ( (unsigned __int64)v31 >= p_ptr[1].m128i_i64[1] )
      {
        sub_227BA10(p_ptr, 34);
      }
      else
      {
        p_ptr[2].m128i_i64[0] = (__int64)(v31 + 1);
        *v31 = 34;
      }
      v32 = *a2;
      v33 = *(unsigned int *)(*a2 + 12);
      v34 = *(unsigned int *)(*a2 + 16);
      v35 = v32 + v33 + 25;
      if ( v34 )
      {
        sub_995540((__int64)&ptr, "=\"");
        sub_22449A0(v35, v34, &ptr);
        sub_995540((__int64)&ptr, "\"");
      }
      ptr.m128i_i64[0] = (__int64)&off_2BEBE68;
      sub_227B7A0(&ptr);
      *(_QWORD *)a1 = a1 + 16;
      if ( (__m128i *)v179.m128i_i64[0] == &v180 )
      {
        *(__m128i *)(a1 + 16) = _mm_load_si128(&v180);
      }
      else
      {
        *(_QWORD *)a1 = v179.m128i_i64[0];
        *(_QWORD *)(a1 + 16) = v180.m128i_i64[0];
      }
      *(_QWORD *)(a1 + 8) = v179.m128i_i64[1];
      return a1;
  }
  v10 = *(_DWORD *)(v7 + 12);
  switch ( v10 )
  {
    case 'W':
      v11 = *(_QWORD *)(v7 + 16);
      if ( v156[0] )
      {
        v168.m128i_i64[0] = v11;
        v173 = 267;
        v172[0].m128i_i64[0] = (__int64)&v168;
        v174[0].m128i_i64[0] = (__int64)"align=";
        v175 = 259;
        sub_A41580(&ptr, v174, v172, a4, a5, a6);
      }
      else
      {
        v170[0].m128i_i64[0] = v11;
        v178 = 267;
        v176.m128i_i64[0] = (__int64)v170;
        v179.m128i_i64[0] = (__int64)"align ";
        LOWORD(v181) = 259;
        sub_A41580(&ptr, &v179, &v176, a4, a5, a6);
      }
LABEL_8:
      sub_2253560(a1, &ptr);
      return a1;
    case '_':
      sub_2048660(a1, v156, a2, "alignstack", a5, a6);
      return a1;
    case '[':
      sub_2048660(a1, v156, a2, "dereferenceable", a5, a6);
      return a1;
    case '\\':
      sub_2048660(a1, v156, a2, "dereferenceable_or_null", a5, a6);
      return a1;
    case 'Y':
      ptr.m128i_i64[0] = sub_2049340((__int64)a2);
      ptr.m128i_i32[2] = v38;
      if ( (_BYTE)v38 )
      {
        v166[0].m128i_i32[0] = ptr.m128i_i32[1];
        v157[0].m128i_i32[0] = ptr.m128i_i32[0];
        v162[0].m128i_i64[0] = (__int64)",";
        v170[0].m128i_i64[0] = (__int64)")";
        v158 = 265;
        v159[0].m128i_i64[0] = (__int64)"allocsize(";
        v160 = 259;
        v171 = 259;
        v167 = 265;
        v163 = 259;
        sub_A41580(v161, v159, v157, ptr.m128i_u32[0], v36, v37);
        sub_A41580(v164, v161, v162, v39, v40, v41);
        sub_A41580(&v168, v164, v166, v42, v43, v44);
        sub_A41580(&ptr, &v168, v170, v45, v46, v47);
      }
      else
      {
        v173 = 265;
        v179.m128i_i64[0] = (__int64)")";
        v175 = 259;
        LOWORD(v181) = 259;
        v172[0].m128i_i32[0] = ptr.m128i_i32[0];
        v174[0].m128i_i64[0] = (__int64)"allocsize(";
        sub_A41580(&v176, v174, v172, ptr.m128i_u32[0], v36, v37);
        sub_A41580(&ptr, &v176, &v179, v61, v62, v63);
      }
      goto LABEL_8;
    case 'a':
      v48 = sub_2049390((__int64)a2);
      LOWORD(v181) = 259;
      v175 = 265;
      v164[0].m128i_i32[0] = v49;
      if ( !BYTE4(v48) )
        LODWORD(v48) = 0;
      v179.m128i_i64[0] = (__int64)")";
      v171 = 259;
      v174[0].m128i_i32[0] = v48;
      v170[0].m128i_i64[0] = (__int64)",";
      v165 = 265;
      v166[0].m128i_i64[0] = (__int64)"vscale_range(";
      v167 = 259;
      sub_A41580(&v168, v166, v164, (__int64)")", 259, 265);
      sub_A41580(v172, &v168, v170, v50, v51, v52);
      sub_A41580(&v176, v172, v174, v53, v54, v55);
      sub_A41580(&ptr, &v176, &v179, v56, v57, v58);
      sub_2253560(a1, &ptr);
      return a1;
    case '`':
      v59 = "uwtable";
      if ( *(_DWORD *)(v7 + 16) != 2 )
        v59 = "uwtable(sync)";
      *(_QWORD *)a1 = a1 + 16;
      v60 = j__strlen(v59);
      sub_20485A0((_QWORD *)a1, v59, (__int64)&v59[v60]);
      return a1;
  }
  if ( v10 != 88 )
  {
    if ( v10 != 93 )
    {
      switch ( v10 )
      {
        case 'Z':
          v186 = 0;
          v179.m128i_i64[0] = (__int64)&v180;
          ptr.m128i_i64[0] = (__int64)&off_2BEBE68;
          v179.m128i_i64[1] = 0;
          v180.m128i_i8[0] = 0;
          ptr.m128i_i32[2] = 0;
          v188 = 0;
          v189 = 1;
          v187 = nullptr;
          v190 = &v179;
          sub_A1F700(&ptr);
          v109 = (unsigned __int8)((unsigned int)*(_QWORD *)(*a2 + 16) >> 4);
          BYTE1(v109) = *(_BYTE *)(*a2 + 16) & 0xF;
          sub_22313C0(&ptr, v109);
          *(_QWORD *)a1 = a1 + 16;
          v22 = v179.m128i_i64[0];
          if ( (__m128i *)v179.m128i_i64[0] != &v180 )
            goto LABEL_21;
          break;
        case '^':
          v179.m128i_i64[0] = (__int64)&v180;
          v110 = j__strlen("nofpclass");
          sub_20485A0(&v179, "nofpclass", (__int64)&aNofpclass[v110]);
          v186 = 0;
          ptr.m128i_i32[2] = 0;
          ptr.m128i_i64[0] = (__int64)&off_2BEBE68;
          v188 = 0;
          v189 = 1;
          v187 = nullptr;
          v190 = &v179;
          sub_A1F700(&ptr);
          sub_22229A0(&ptr);
          *(_QWORD *)a1 = a1 + 16;
          v22 = v179.m128i_i64[0];
          if ( (__m128i *)v179.m128i_i64[0] != &v180 )
            goto LABEL_21;
          break;
        case 'b':
          v186 = 0;
          v179.m128i_i64[0] = (__int64)&v180;
          ptr.m128i_i64[0] = (__int64)&off_2BEBE68;
          v179.m128i_i64[1] = 0;
          v180.m128i_i8[0] = 0;
          ptr.m128i_i32[2] = 0;
          v188 = 0;
          v189 = 1;
          v187 = nullptr;
          v190 = &v179;
          sub_A1F700(&ptr);
          v128 = *a2;
          sub_995540((__int64)&ptr, "range(");
          v129 = sub_995540((__int64)&ptr, "i");
          v130 = sub_227B910(v129, *(unsigned int *)(v128 + 24));
          sub_995540(v130, " ");
          sub_220C370(v128 + 16, &ptr, 1);
          v131 = sub_995540((__int64)&ptr, ", ");
          sub_220C370(v128 + 32, v131, 1);
          sub_995540((__int64)&ptr, ")");
          if ( v187 != (_BYTE *)v186 )
            sub_227B9F0(&ptr, ")", v132, v133, v134, v135, v145);
          *(_QWORD *)a1 = a1 + 16;
          v22 = v179.m128i_i64[0];
          if ( (__m128i *)v179.m128i_i64[0] == &v180 )
            break;
          goto LABEL_21;
        default:
          v176.m128i_i64[1] = 0;
          v176.m128i_i64[0] = (__int64)&v177;
          v179.m128i_i64[0] = (__int64)&off_2BEBE68;
          v177.m128i_i8[0] = 0;
          v179.m128i_i32[2] = 0;
          v182 = 0;
          v183 = 1;
          v181 = 0;
          v180 = 0;
          v184 = &v176;
          sub_A1F700(&v179);
          v118 = *a2;
          v119 = &v186;
          v120 = *(unsigned int *)(*a2 + 16);
          v121 = v118 + 24;
          ptr.m128i_i64[1] = 0x200000000LL;
          ptr.m128i_i64[0] = (__int64)&v186;
          v147 = v118 + 24 + 32 * v120;
          if ( v147 != v118 + 24 )
          {
            v122 = v118 + 56;
            v123 = 0;
            while ( 1 )
            {
              v126 = &v119[2 * v123];
              v127 = *(_DWORD *)(v121 + 8);
              *((_DWORD *)v126 + 2) = v127;
              if ( v127 <= 0x40 )
              {
                *(_QWORD *)v126 = *(_QWORD *)v121;
              }
              else
              {
                v155 = v121;
                v153 = v126;
                sub_2205510(v126);
                v121 = v155;
                v126 = v153;
              }
              v124 = *(_DWORD *)(v121 + 24);
              *((_DWORD *)v126 + 6) = v124;
              if ( v124 > 0x40 )
                sub_2205510(v126 + 1);
              else
                *((_QWORD *)v126 + 2) = *(_QWORD *)(v121 + 16);
              v121 = v122;
              v123 = (unsigned int)++ptr.m128i_i32[2];
              if ( v147 == v122 )
                break;
              v125 = v123 + 1;
              v119 = (__int128 *)ptr.m128i_i64[0];
              if ( v123 + 1 > (unsigned __int64)ptr.m128i_u32[3] )
              {
                if ( ptr.m128i_i64[0] > v122 || v122 >= ptr.m128i_i64[0] + 32 * v123 )
                {
                  sub_2015120((__int64)&ptr, v125);
                  v119 = (__int128 *)ptr.m128i_i64[0];
                  v121 = v122;
                  v123 = ptr.m128i_u32[2];
                }
                else
                {
                  v154 = v122 - ptr.m128i_i64[0];
                  sub_2015120((__int64)&ptr, v125);
                  v119 = (__int128 *)ptr.m128i_i64[0];
                  v123 = ptr.m128i_u32[2];
                  v121 = ptr.m128i_i64[0] + v154;
                }
              }
              v122 += 32LL;
            }
          }
          sub_995540((__int64)&v179, "initializes(");
          sub_2050A60(&ptr, &v179);
          sub_995540((__int64)&v179, ")");
          if ( v181 != v180.m128i_i64[0] )
            sub_227B9F0(&v179, ")", v136, v137, v138, v139, v147);
          *(_QWORD *)a1 = a1 + 16;
          if ( (__m128i *)v176.m128i_i64[0] == &v177 )
          {
            *(__m128i *)(a1 + 16) = _mm_load_si128(&v177);
          }
          else
          {
            *(_QWORD *)a1 = v176.m128i_i64[0];
            *(_QWORD *)(a1 + 16) = v177.m128i_i64[0];
          }
          v140 = v176.m128i_i64[1];
          v141 = ptr.m128i_i64[0];
          v176.m128i_i64[1] = 0;
          v177.m128i_i8[0] = 0;
          *(_QWORD *)(a1 + 8) = v140;
          v176.m128i_i64[0] = (__int64)&v177;
          v148 = v141;
          v142 = 32LL * ptr.m128i_u32[2];
          v143 = v141 + v142;
          if ( v141 != v141 + v142 )
          {
            do
            {
              v143 -= 32;
              if ( *(_DWORD *)(v143 + 24) > 0x40u )
              {
                v144 = *(void **)(v143 + 16);
                if ( v144 )
                  operator delete[](v144);
              }
              if ( *(_DWORD *)(v143 + 8) > 0x40u && *(_QWORD *)v143 )
                operator delete[](*(void **)v143);
            }
            while ( v148 != v143 );
          }
          if ( (__int128 *)ptr.m128i_i64[0] != &v186 )
            free((void *)ptr.m128i_i64[0]);
          v179.m128i_i64[0] = (__int64)&off_2BEBE68;
          sub_227B7A0(&v179);
          v24 = (void *)v176.m128i_i64[0];
          if ( (__m128i *)v176.m128i_i64[0] == &v177 )
            return a1;
LABEL_23:
          operator delete(v24);
          return a1;
      }
LABEL_169:
      *(__m128i *)(a1 + 16) = _mm_load_si128(&v180);
LABEL_22:
      v23 = v179.m128i_i64[1];
      v179.m128i_i64[1] = 0;
      v179.m128i_i64[0] = (__int64)&v180;
      *(_QWORD *)(a1 + 8) = v23;
      v180.m128i_i8[0] = 0;
      ptr.m128i_i64[0] = (__int64)&off_2BEBE68;
      sub_227B7A0(&ptr);
      v24 = (void *)v179.m128i_i64[0];
      if ( (__m128i *)v179.m128i_i64[0] == &v180 )
        return a1;
      goto LABEL_23;
    }
    v186 = 0;
    v179.m128i_i64[0] = (__int64)&v180;
    ptr.m128i_i64[0] = (__int64)&off_2BEBE68;
    v179.m128i_i64[1] = 0;
    v180.m128i_i8[0] = 0;
    ptr.m128i_i32[2] = 0;
    v188 = 0;
    v189 = 1;
    v187 = nullptr;
    v190 = &v179;
    sub_A1F700(&ptr);
    sub_995540((__int64)&ptr, "memory(");
    v96 = *(_QWORD *)(*a2 + 16);
    LODWORD(v145) = v96;
    v97 = (unsigned __int8)v96 >> 6;
    if ( (unsigned __int8)v96 >> 6 )
    {
      v111 = "write";
      if ( v97 != 2 )
      {
        v111 = "readwrite";
        if ( v97 != 3 )
          v111 = "read";
      }
    }
    else
    {
      if ( (((unsigned __int8)(v96 | ((unsigned int)v96 >> 2)) | (unsigned __int8)((unsigned int)v96 >> 4)) & 3) != 0 )
      {
        v98 = 1;
LABEL_115:
        for ( i = 0; i != 4; ++i )
        {
          v100 = ((unsigned int)v145 >> (2 * i)) & 3;
          if ( v97 != (((unsigned int)v145 >> (2 * i)) & 3) )
          {
            if ( !v98 )
            {
              sub_995540((__int64)&ptr, ", ");
              LOBYTE(v100) = ((unsigned int)v145 >> (2 * i)) & 3;
            }
            if ( i == 1 )
            {
              v151 = v100;
              sub_995540((__int64)&ptr, "inaccessiblemem: ");
              LOBYTE(v100) = v151;
            }
            else if ( i )
            {
              if ( i == 2 )
              {
                v150 = v100;
                sub_995540((__int64)&ptr, "errnomem: ");
                LOBYTE(v100) = v150;
              }
            }
            else
            {
              v152 = v100;
              sub_995540((__int64)&ptr, "argmem: ");
              LOBYTE(v100) = v152;
            }
            v101 = "read";
            if ( (_BYTE)v100 != 1 )
            {
              v101 = "none";
              if ( (_BYTE)v100 )
              {
                v101 = "readwrite";
                if ( (_BYTE)v100 == 2 )
                  v101 = "write";
              }
            }
            sub_995540((__int64)&ptr, v101);
            v98 = 0;
          }
        }
        sub_995540((__int64)&ptr, ")");
        if ( v187 != (_BYTE *)v186 )
          sub_227B9F0(&ptr, ")", v102, v103, v104, v105, v145);
        *(_QWORD *)a1 = a1 + 16;
        v22 = v179.m128i_i64[0];
        if ( (__m128i *)v179.m128i_i64[0] == &v180 )
          goto LABEL_169;
LABEL_21:
        *(_QWORD *)a1 = v22;
        *(_QWORD *)(a1 + 16) = v180.m128i_i64[0];
        goto LABEL_22;
      }
      v111 = "none";
    }
    sub_995540((__int64)&ptr, v111);
    v98 = 0;
    goto LABEL_115;
  }
  v64 = *(_QWORD *)(v7 + 16);
  ptr.m128i_i64[0] = (__int64)&v186;
  ptr.m128i_i64[1] = 0x300000000LL;
  if ( (v64 & 1) != 0 )
  {
    v113 = j__strlen("alloc");
    sub_111E070((__int64)&ptr, (__int64)"alloc", v113);
  }
  if ( (v64 & 2) != 0 )
  {
    v112 = j__strlen("realloc");
    sub_111E070((__int64)&ptr, (__int64)"realloc", v112);
  }
  if ( (v64 & 4) != 0 )
  {
    v117 = j__strlen("free");
    sub_111E070((__int64)&ptr, (__int64)"free", v117);
  }
  if ( (v64 & 8) != 0 )
  {
    v116 = j__strlen("uninitialized");
    sub_111E070((__int64)&ptr, (__int64)"uninitialized", v116);
  }
  if ( (v64 & 0x10) != 0 )
  {
    v115 = j__strlen("zeroed");
    sub_111E070((__int64)&ptr, (__int64)"zeroed", v115);
  }
  if ( (v64 & 0x20) != 0 )
  {
    v114 = j__strlen("aligned");
    sub_111E070((__int64)&ptr, (__int64)"aligned", v114);
  }
  v178 = 259;
  v176.m128i_i64[0] = (__int64)"\")";
  v65 = j__strlen(",");
  v68 = ptr.m128i_i64[0];
  v168.m128i_i64[1] = 0;
  v69 = v65;
  v168.m128i_i64[0] = (__int64)v169;
  LOBYTE(v169[0]) = 0;
  v70 = 16LL * ptr.m128i_u32[2];
  v71 = (_BYTE *)(ptr.m128i_i64[0] + v70);
  v149 = ptr.m128i_i64[0] + v70;
  if ( ptr.m128i_i64[0] != ptr.m128i_i64[0] + v70 )
  {
    v72 = v70 >> 4;
    v73 = v70 - 16;
    v74 = ptr.m128i_i64[0];
    v75 = v69 * (v72 - 1);
    v76 = (unsigned __int64)&v71[-ptr.m128i_i64[0] - 16] >> 4;
    if ( v73 > 0x40 )
    {
      v77 = 0;
      v78 = ptr.m128i_i64[0] + (v73 & 0xFFFFFFFFFFFFFFE0LL);
      do
      {
        v79 = _mm_loadu_si128((const __m128i *)(v74 + 8));
        v80 = _mm_loadu_si128((const __m128i *)(v74 + 24));
        v74 += 32LL;
        v77 = _mm_add_epi64(v77, _mm_unpacklo_epi64(v79, v80));
      }
      while ( v78 != v74 );
      v75 += _mm_add_epi64(v77, _mm_srli_si128(v77, 8)).m128i_u64[0];
      v74 = ptr.m128i_i64[0] + 16 * (v76 & 0xFFFFFFFFFFFFFFFELL);
    }
    v81 = v75 + *(_QWORD *)(v74 + 8);
    if ( v149 != v74 + 16 )
    {
      v81 += *(_QWORD *)(v74 + 24);
      if ( v149 != v74 + 32 )
      {
        v81 += *(_QWORD *)(v74 + 40);
        if ( v149 != v74 + 48 )
        {
          v81 += *(_QWORD *)(v74 + 56);
          if ( v149 != v74 + 64 )
            v81 += *(_QWORD *)(v74 + 72);
        }
      }
    }
    sub_995C30((__int64)&v168, v81);
    v66 = *(_QWORD *)(v68 + 8);
    v71 = *(_BYTE **)v68;
    if ( v66 > 0x7FFFFFFFFFFFFFFFLL - v168.m128i_i64[1] )
      goto LABEL_195;
    v82 = v168.m128i_i64[0];
    v83 = v66 + v168.m128i_i64[1];
    if ( (_QWORD *)v168.m128i_i64[0] == v169 )
      v84 = 15;
    else
      v84 = v169[0];
    if ( v83 > v84 )
    {
      sub_998B30((__int64)&v168, v168.m128i_u64[1], 0, v71, v66);
      v82 = v168.m128i_i64[0];
    }
    else if ( v66 )
    {
      v85 = (_BYTE *)(v168.m128i_i64[0] + v168.m128i_i64[1]);
      if ( v66 == 1 )
        *v85 = *v71;
      else
        memcpy(v85, *(const void **)v68, *(_QWORD *)(v68 + 8));
      v82 = v168.m128i_i64[0];
    }
    v168.m128i_i64[1] = v83;
    v86 = v68 + 16;
    *(_BYTE *)(v82 + v83) = 0;
    if ( v149 != v86 )
    {
      for ( j = v168.m128i_u64[1]; v69 <= 0x7FFFFFFFFFFFFFFFLL - v168.m128i_i64[1]; j = v168.m128i_u64[1] )
      {
        v89 = v168.m128i_i64[0];
        v94 = v69 + j;
        v95 = (_QWORD *)v168.m128i_i64[0] == v169 ? 15LL : v169[0];
        if ( v94 <= v95 )
        {
          if ( v69 )
          {
            v88 = (_BYTE *)(v168.m128i_i64[0] + j);
            if ( v69 == 1 )
              *v88 = 44;
            else
              memcpy(v88, ",", v69);
            v89 = v168.m128i_i64[0];
          }
        }
        else
        {
          sub_998B30((__int64)&v168, j, 0, ",", v69);
          v89 = v168.m128i_i64[0];
        }
        v168.m128i_i64[1] = v69 + j;
        *(_BYTE *)(v89 + v94) = 0;
        v66 = *(_QWORD *)(v86 + 8);
        v71 = *(_BYTE **)v86;
        if ( v66 > 0x7FFFFFFFFFFFFFFFLL - v168.m128i_i64[1] )
          break;
        v90 = v168.m128i_i64[0];
        v91 = v66 + v168.m128i_i64[1];
        if ( (_QWORD *)v168.m128i_i64[0] == v169 )
          v92 = 15;
        else
          v92 = v169[0];
        if ( v91 > v92 )
        {
          sub_998B30((__int64)&v168, v168.m128i_u64[1], 0, v71, v66);
          v90 = v168.m128i_i64[0];
        }
        else if ( v66 )
        {
          v93 = (_BYTE *)(v168.m128i_i64[0] + v168.m128i_i64[1]);
          if ( v66 == 1 )
            *v93 = *v71;
          else
            memcpy(v93, *(const void **)v86, *(_QWORD *)(v86 + 8));
          v90 = v168.m128i_i64[0];
        }
        v168.m128i_i64[1] = v91;
        v86 += 16;
        *(_BYTE *)(v90 + v91) = 0;
        if ( v149 == v86 )
          goto LABEL_135;
      }
LABEL_195:
      std::__throw_length_error("basic_string::append");
    }
  }
LABEL_135:
  v170[0].m128i_i64[0] = (__int64)&v168;
  v171 = 260;
  v173 = 259;
  v172[0].m128i_i64[0] = (__int64)"allockind(\"";
  sub_A41580(v174, v172, v170, (__int64)v71, v66, v67);
  sub_A41580(&v179, v174, &v176, v106, v107, v108);
  sub_2253560(a1, &v179);
  if ( (_QWORD *)v168.m128i_i64[0] != v169 )
    operator delete((void *)v168.m128i_i64[0]);
  if ( (__int128 *)ptr.m128i_i64[0] != &v186 )
    free((void *)ptr.m128i_i64[0]);
  return a1;
}
