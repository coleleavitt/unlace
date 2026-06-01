void __fastcall sub_1678570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  _BYTE *v8; // rdx
  __int64 v9; // r12
  void *v10; // r13
  int v11; // r15d
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rbx
  __int32 v17; // r13d
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 *v21; // rax
  char v22; // al
  const char *v23; // rbx
  size_t v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // r15
  __int64 v31; // rdi
  _BOOL8 v32; // r8
  int v33; // ebx
  int v34; // ecx
  __int64 v35; // rcx
  __m128i *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __m128i *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __m128i v64; // xmm0
  int v65; // r15d
  __int64 v66; // rdi
  __int32 v67; // eax
  int v68; // ebx
  int v69; // ecx
  __m128i *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  size_t v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  _QWORD *v87; // rax
  __int64 *v88; // rdx
  __int64 *v89; // rbx
  _QWORD *v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rsi
  _QWORD *v93; // rcx
  _QWORD *v94; // rax
  __int64 *v95; // rdx
  __int64 *v96; // rbx
  _QWORD *v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rsi
  _QWORD *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  char *v104; // rax
  char *v105; // rdx
  __m128i si128; // xmm0
  void *v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  _QWORD *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  void *v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  _QWORD *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  int v127; // ebx
  int v128; // ecx
  __int64 v129; // rcx
  __m128i *v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // [rsp+28h] [rbp-450h]
  __int64 v136; // [rsp+30h] [rbp-448h]
  char v137; // [rsp+30h] [rbp-448h]
  unsigned __int8 v138; // [rsp+3Fh] [rbp-439h]
  __int64 v140; // [rsp+58h] [rbp-420h]
  unsigned int v141; // [rsp+60h] [rbp-418h]
  __int32 v142; // [rsp+64h] [rbp-414h]
  int v143; // [rsp+68h] [rbp-410h]
  int v144; // [rsp+6Ch] [rbp-40Ch]
  int v145; // [rsp+70h] [rbp-408h]
  int v146; // [rsp+74h] [rbp-404h]
  char v147; // [rsp+78h] [rbp-400h]
  char v148; // [rsp+78h] [rbp-400h]
  __int64 v149; // [rsp+78h] [rbp-400h]
  __int64 v150; // [rsp+78h] [rbp-400h]
  __int64 v151; // [rsp+80h] [rbp-3F8h]
  int v152; // [rsp+88h] [rbp-3F0h]
  int v153; // [rsp+8Ch] [rbp-3ECh]
  __int64 v154; // [rsp+98h] [rbp-3E0h] BYREF
  __int64 *v155; // [rsp+A0h] [rbp-3D8h] BYREF
  __int64 v156; // [rsp+A8h] [rbp-3D0h]
  __m128i v157; // [rsp+B0h] [rbp-3C8h] BYREF
  unsigned int v158; // [rsp+C0h] [rbp-3B8h]
  __m128i v159; // [rsp+D0h] [rbp-3A8h] BYREF
  __int32 v160; // [rsp+E0h] [rbp-398h]
  void *v161[2]; // [rsp+F0h] [rbp-388h] BYREF
  unsigned int v162; // [rsp+100h] [rbp-378h] BYREF
  void *v163[2]; // [rsp+110h] [rbp-368h] BYREF
  __m128i v164; // [rsp+120h] [rbp-358h] BYREF
  void *v165[2]; // [rsp+130h] [rbp-348h] BYREF
  __int128 v166; // [rsp+140h] [rbp-338h] BYREF
  unsigned int v167; // [rsp+150h] [rbp-328h]
  _BYTE *v168; // [rsp+158h] [rbp-320h]
  __int64 v169; // [rsp+160h] [rbp-318h]
  _BYTE v170[96]; // [rsp+168h] [rbp-310h] BYREF
  char v171; // [rsp+1C8h] [rbp-2B0h]
  char v172; // [rsp+1F0h] [rbp-288h]
  char v173; // [rsp+218h] [rbp-260h]
  char v174; // [rsp+240h] [rbp-238h]
  char v175; // [rsp+268h] [rbp-210h]
  char v176; // [rsp+290h] [rbp-1E8h]
  char v177; // [rsp+29Ch] [rbp-1DCh]
  char *v178; // [rsp+2A0h] [rbp-1D8h] BYREF
  __int64 v179; // [rsp+2A8h] [rbp-1D0h]
  _BYTE v180[16]; // [rsp+2B0h] [rbp-1C8h] BYREF
  char v181; // [rsp+2C0h] [rbp-1B8h]
  _QWORD v182[2]; // [rsp+2C8h] [rbp-1B0h] BYREF
  char v183; // [rsp+2D8h] [rbp-1A0h] BYREF
  _BYTE v184[40]; // [rsp+2E8h] [rbp-190h] BYREF
  _BYTE v185[40]; // [rsp+310h] [rbp-168h] BYREF
  char v186; // [rsp+338h] [rbp-140h]
  _BYTE v187[32]; // [rsp+340h] [rbp-138h] BYREF
  char v188; // [rsp+360h] [rbp-118h]
  _BYTE v189[32]; // [rsp+368h] [rbp-110h] BYREF
  char v190; // [rsp+388h] [rbp-F0h]
  _BYTE v191[32]; // [rsp+390h] [rbp-E8h] BYREF
  char v192; // [rsp+3B0h] [rbp-C8h]
  _BYTE v193[32]; // [rsp+3B8h] [rbp-C0h] BYREF
  char v194; // [rsp+3D8h] [rbp-A0h]
  _BYTE v195[32]; // [rsp+3E0h] [rbp-98h] BYREF
  char v196; // [rsp+400h] [rbp-78h]
  __int64 v197; // [rsp+408h] [rbp-70h]
  __int64 v198; // [rsp+430h] [rbp-48h]

  v7 = *(_DWORD *)(a3 + 8);
  v135 = a2;
  if ( !*(_BYTE *)(a1 + 289) )
  {
    v8 = v180;
    v178 = v180;
    v179 = 0x100000000LL;
    if ( v7 )
    {
      a2 = a3;
      sub_A2FD60((__int64)&v178, (__int64 *)a3);
    }
    v198 = *(_QWORD *)(a3 + 400);
    if ( (*(_BYTE *)(v135 + 29) & 1) != 0 && sub_1671280(v135, a2, (__int64)v8, a4, a5, a6) || !BYTE4(v198) )
      goto LABEL_8;
    LOBYTE(v167) = v167 & 0xF0;
    v171 &= 0xC0u;
    v165[0] = &v166;
    v168 = v170;
    v165[1] = nullptr;
    LOBYTE(v166) = 0;
    v169 = 0;
    v170[0] = 0;
    v170[48] = 0;
    v170[88] = 0;
    v172 = 0;
    v173 = 0;
    v174 = 0;
    v175 = 0;
    v176 = 0;
    v177 = 0;
    v9 = *(_QWORD *)&v178[384 * (unsigned int)v198];
    v10 = *(void **)&v178[384 * (unsigned int)v198 + 8];
    v11 = *(_DWORD *)&v178[384 * (unsigned int)v198];
    sub_A2FBE0((__int64)v165, (__int64)&v178[384 * (unsigned int)v198 + 16]);
    if ( !(v11 | (HIDWORD(v10) | (unsigned int)v10 | HIDWORD(v9)) & 0x7FFFFFFF) || !v169 )
    {
LABEL_7:
      sub_A0A3E0((__int64)v165);
LABEL_8:
      sub_1672680(&v178);
      v7 = *(_DWORD *)(a3 + 8);
      goto LABEL_9;
    }
    v104 = v178;
    v105 = &v178[384 * (unsigned int)v179];
    if ( v178 != v105 )
    {
      while ( *(_DWORD *)v104
           || (*((_DWORD *)v104 + 1) & 0x7FFFFFFF) != 0
           || (*((_DWORD *)v104 + 2) & 0x7FFFFFFF) != 0
           || (*((_DWORD *)v104 + 3) & 0x7FFFFFFF) != 0
           || !*((_QWORD *)v104 + 8) )
      {
        v104 += 384;
        if ( v105 == v104 )
          goto LABEL_133;
      }
      goto LABEL_7;
    }
LABEL_133:
    v161[1] = v10;
    HIDWORD(v161[0]) = (v9 & 0xFFFFFFFF00000000LL) >> 32;
    LODWORD(v161[0]) = v11;
    si128 = _mm_load_si128((const __m128i *)v161);
    LOBYTE(v162) = v162 & 0xFC | 2;
    *(__m128i *)v163 = si128;
    v164.m128i_i32[0] = v162;
    sub_1672C20(
      a1,
      v135,
      (__int64)&loc_2E926E,
      (__int64)&v159,
      (__int64)sub_16716D0,
      (__int64)&v157,
      si128.m128i_i64[0],
      si128.m128i_i64[1],
      v162);
    sub_A0A3E0((__int64)v165);
    sub_1672680(&v178);
    v7 = *(_DWORD *)(a3 + 8);
  }
LABEL_9:
  v179 = 0;
  v180[0] = 0;
  v12 = *(_QWORD *)(a3 + 400);
  v183 = 0;
  v182[1] = 0;
  v13 = v12;
  v184[32] = 0;
  v178 = v180;
  v182[0] = &v183;
  if ( !BYTE4(v12) )
    v13 = v7;
  v185[32] = 0;
  v181 &= 0xF0u;
  v141 = v13;
  v186 &= 0xC0u;
  v188 = 0;
  v190 = 0;
  v192 = 0;
  v194 = 0;
  v196 = 0;
  BYTE4(v197) = 0;
  if ( v7 )
  {
    v14 = 0;
    v140 = v7 - 1;
    v151 = 384LL * v13;
    while ( 1 )
    {
      v15 = *(_QWORD *)a3 + 384 * v14;
      v16 = *(_QWORD *)v15;
      v17 = *(_DWORD *)v15;
      v136 = *(_QWORD *)(v15 + 8);
      sub_9EE8A0((__int64)&v178, v15 + 16);
      v181 = *(_BYTE *)(v15 + 48) & 0xF | v181 & 0xF0;
      sub_9EE8A0((__int64)v182, v15 + 56);
      sub_A21AD0((__int64)v184, v15 + 88);
      sub_A21AD0((__int64)v185, v15 + 128);
      v186 = *(_BYTE *)(v15 + 168) & 0x3F | v186 & 0xC0;
      sub_A21AD0((__int64)v187, v15 + 176);
      sub_A21AD0((__int64)v189, v15 + 216);
      sub_A21AD0((__int64)v191, v15 + 256);
      sub_A21AD0((__int64)v193, v15 + 296);
      sub_A21AD0((__int64)v195, v15 + 336);
      v20 = v136;
      v197 = *(_QWORD *)(v15 + 376);
      if ( v141 == (_DWORD)v14 )
      {
        v138 = 0;
        v137 = *(_BYTE *)(a1 + 289) ^ 1;
      }
      else
      {
        v138 = 0;
        v137 = *(_BYTE *)(a1 + 289);
        if ( v137 )
        {
          v137 = 0;
        }
        else if ( !v17 )
        {
          v138 = 0;
          if ( ((HIDWORD(v20) | (unsigned int)v20 | HIDWORD(v16)) & 0x7FFFFFFF) == 0 )
          {
            v138 = 1;
            v21 = (__int64 *)(*(_QWORD *)a3 + v151);
            v16 = *v21;
            v20 = v21[1];
            v17 = *(_DWORD *)v21;
          }
        }
      }
      v157.m128i_i64[1] = v20;
      LOBYTE(v167) = 0;
      v157.m128i_i64[0] = __PAIR64__(HIDWORD(v16), v17);
      v159 = _mm_load_si128(&v157);
      LOBYTE(v158) = (2 * v138) | v137 & 1 | v158 & 0xFC;
      v160 = v158;
      if ( v188 )
      {
        sub_1671490((__int64)v165, (__int64)v187);
        if ( (_BYTE)v167 )
        {
          sub_C05100((__int64)v163, "import_", (__int64)v165);
          v59 = sub_B36010(*(_QWORD *)(a1 + 248), v163[0], (__int64)v163[1], 0);
          sub_B8CC60(v135, v59, v60, v61, v62, v63);
          if ( v163[0] != &v164 )
            operator delete(v163[0]);
          if ( (_BYTE)v167 && v165[0] != &v166 )
            operator delete(v165[0]);
        }
      }
      LOBYTE(v167) = 0;
      if ( v190 )
      {
        sub_1671490((__int64)v165, (__int64)v189);
        if ( (_BYTE)v167 )
        {
          sub_C05100((__int64)v163, "retain:", (__int64)v165);
          v54 = sub_B36010(*(_QWORD *)(a1 + 248), v163[0], (__int64)v163[1], 0);
          sub_B8CC60(v135, v54, v55, v56, v57, v58);
          if ( v163[0] != &v164 )
            operator delete(v163[0]);
          if ( (_BYTE)v167 && v165[0] != &v166 )
            operator delete(v165[0]);
        }
      }
      LOBYTE(v167) = 0;
      if ( v192 )
      {
        sub_1671490((__int64)v165, (__int64)v191);
        if ( (_BYTE)v167 )
        {
          sub_C05100((__int64)v163, "release:", (__int64)v165);
          v49 = sub_B36010(*(_QWORD *)(a1 + 248), v163[0], (__int64)v163[1], 0);
          sub_B8CC60(v135, v49, v50, v51, v52, v53);
          if ( v163[0] != &v164 )
            operator delete(v163[0]);
          if ( (_BYTE)v167 && v165[0] != &v166 )
            operator delete(v165[0]);
        }
      }
      LOBYTE(v167) = 0;
      if ( v194 )
      {
        sub_1671490((__int64)v165, (__int64)v193);
        if ( (_BYTE)v167 )
        {
          sub_C05100((__int64)v161, "returned_as_", (__int64)v165);
          v42 = j__strlen("_by_default");
          if ( v42 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v161[1] )
            std::__throw_length_error("basic_string::append");
          v43 = (__m128i *)sub_9EE560(v161, "_by_default", v42);
          v163[0] = &v164;
          if ( (__m128i *)v43->m128i_i64[0] == &v43[1] )
          {
            v164 = _mm_loadu_si128(v43 + 1);
          }
          else
          {
            v163[0] = (void *)v43->m128i_i64[0];
            v164.m128i_i64[0] = v43[1].m128i_i64[0];
          }
          v163[1] = (void *)v43->m128i_i64[1];
          v43->m128i_i64[0] = (__int64)v43[1].m128i_i64;
          v43->m128i_i64[1] = 0;
          v43[1].m128i_i8[0] = 0;
          v44 = sub_B36010(*(_QWORD *)(a1 + 248), v163[0], (__int64)v163[1], 0);
          sub_B8CC60(v135, v44, v45, v46, v47, v48);
          if ( v163[0] != &v164 )
            operator delete(v163[0]);
          if ( v161[0] != &v162 )
            operator delete(v161[0]);
          if ( (_BYTE)v167 && v165[0] != &v166 )
            operator delete(v165[0]);
        }
      }
      LOBYTE(v167) = 0;
      if ( v196 )
      {
        sub_1671490((__int64)v165, (__int64)v195);
        if ( (_BYTE)v167 )
        {
          sub_C05100((__int64)v163, "conforms_to:", (__int64)v165);
          v76 = sub_B36010(*(_QWORD *)(a1 + 248), v163[0], (__int64)v163[1], 0);
          sub_B8CC60(v135, v76, v77, v78, v79, v80);
          if ( v163[0] != &v164 )
            operator delete(v163[0]);
          if ( (_BYTE)v167 && v165[0] != &v166 )
            operator delete(v165[0]);
        }
      }
      v22 = v186;
      if ( (v186 & 4) != 0 && (v186 & 8) == 0 )
      {
        v81 = j__strlen("~Copyable");
        v82 = sub_B36010(*(_QWORD *)(a1 + 248), "~Copyable", v81, 0);
        sub_B8CC60(v135, v82, v83, v84, v85, v86);
        v22 = v186;
      }
      if ( (v22 & 0x10) != 0 )
      {
        v23 = "Escapable";
        if ( (v22 & 0x20) == 0 )
          v23 = "~Escapable";
        v24 = j__strlen(v23);
        v25 = sub_B36010(*(_QWORD *)(a1 + 248), v23, v24, 0);
        sub_B8CC60(v135, v25, v26, v27, v28, v29);
      }
      v154 = v197;
      if ( !BYTE4(v197) )
        goto LABEL_31;
      v159.m128i_i32[0] = v17;
      v155 = &v154;
      v64 = _mm_load_si128(&v159);
      v65 = v154;
      v156 = a1;
      *(__m128i *)v161 = v64;
      *(__m128i *)v163 = v64;
      LOBYTE(v160) = (2 * v138) | v137 & 1 | v160 & 0xFC;
      v162 = v160;
      v164.m128i_i32[0] = v160;
      if ( (v160 & 1) != 0 )
        break;
      v66 = *(_QWORD *)(a1 + 248);
      if ( !(_DWORD)v154 )
      {
        v101 = sub_B35E00(v66, (__int64)v163[0], (__int64)v163[1], 209, (v160 & 2) != 0, 0);
LABEL_124:
        sub_B8CC60(v135, v101, v102, v103, v18, v19);
        goto LABEL_31;
      }
      if ( (_DWORD)v154 == 1 )
      {
        v142 = 1;
      }
      else
      {
        v67 = 0;
        if ( (_DWORD)v154 != 2 )
          v67 = v142;
        v142 = v67;
      }
      v68 = v145;
      v69 = v146;
      v148 = (v160 & 2) != 0;
      BYTE1(v68) = BYTE1(v145) & 0xFC;
      *(_OWORD *)v165 = 0;
      BYTE1(v69) = BYTE1(v146) & 0xFC;
      v145 = v68;
      v167 = v167 & 0xFF000000 | 0x101A4;
      v146 = v69;
      v166 = 0;
      HIBYTE(v167) = (2 * ((v68 & 0x200) != 0)) | BYTE1(v69) & 1 | HIBYTE(v167) & 0xFC;
      v70 = (__m128i *)sub_1673960((__int64 *)(v66 + 2352), 48, 3u);
      sub_B12590(v70, *(_QWORD *)(v156 + 248), (const __m128i *)v165, v142);
      v71 = sub_B35EA0(*(_QWORD *)(a1 + 248), (__int64)v163[0], (__int64)v163[1], (__int64)v70, v148, 0);
      sub_B8CC60(v135, v71, v72, v73, v74, v75);
LABEL_31:
      if ( (v186 & 1) == 0 )
        goto LABEL_36;
      v159.m128i_i32[0] = v17;
      v30 = (v186 & 2) != 0;
      *(__m128i *)v161 = _mm_load_si128(&v159);
      *(_OWORD *)v163 = *(_OWORD *)v161;
      LOBYTE(v160) = (2 * v138) | v137 & 1 | v160 & 0xFC;
      v162 = v160;
      v164.m128i_i32[0] = v160;
      if ( (v160 & 1) == 0 )
      {
        v31 = *(_QWORD *)(a1 + 248);
        v32 = (v160 & 2) != 0;
        if ( (v186 & 2) != 0 )
        {
          v33 = v143;
          v34 = v144;
          v147 = (v160 & 2) != 0;
          BYTE1(v33) = BYTE1(v143) & 0xFC;
          *(_OWORD *)v165 = 0;
          BYTE1(v34) = BYTE1(v144) & 0xFC;
          v143 = v33;
          v167 = v167 & 0xFF000000 | 0x101A4;
          v144 = v34;
          v35 = BYTE1(v34) & 1;
          v166 = 0;
          HIBYTE(v167) = (2 * ((v33 & 0x200) != 0)) | v35 | HIBYTE(v167) & 0xFC;
          v36 = (__m128i *)sub_1672F50((__int64 *)(v31 + 2352), 40, 3u, v35, v32, v19);
          sub_B12D50(v36, *(_QWORD *)(a1 + 248), (const __m128i *)v165);
          v37 = sub_B35EA0(*(_QWORD *)(a1 + 248), (__int64)v163[0], (__int64)v163[1], (__int64)v36, v147, 0);
        }
        else
        {
          v37 = sub_B35E00(v31, (__int64)v163[0], (__int64)v163[1], 215, v32, 0);
        }
        sub_B8CC60(v135, v37, v38, v39, v40, v41);
        goto LABEL_36;
      }
      v94 = (_QWORD *)sub_9C8850(v135);
      v96 = v95;
      v97 = v94;
      v98 = ((char *)v96 - (char *)v94) >> 5;
      v99 = v96 - v94;
      if ( v98 > 0 )
      {
        if ( *(_WORD *)(*v94 + 36LL) != 215 )
        {
          if ( *(_WORD *)(v94[1] + 36LL) == 215 )
          {
            v96 = v94 + 1;
          }
          else if ( *(_WORD *)(v94[2] + 36LL) == 215 )
          {
            v96 = v94 + 2;
          }
          else
          {
            v100 = &v94[4 * v98];
            if ( *(_WORD *)(v94[3] + 36LL) == 215 )
            {
              v96 = v94 + 3;
            }
            else
            {
              while ( 1 )
              {
                v94 = v97 + 4;
                if ( v100 == v97 + 4 )
                {
                  v99 = v96 - v94;
                  goto LABEL_115;
                }
                if ( *(_WORD *)(v97[4] + 36LL) == 215 )
                  goto LABEL_141;
                if ( *(_WORD *)(v97[5] + 36LL) == 215 )
                {
                  v96 = v97 + 5;
                  goto LABEL_142;
                }
                if ( *(_WORD *)(v97[6] + 36LL) == 215 )
                {
                  v96 = v97 + 6;
                  goto LABEL_142;
                }
                if ( *(_WORD *)(v97[7] + 36LL) == 215 )
                  break;
                v97 += 4;
              }
              v96 = v97 + 7;
            }
          }
          goto LABEL_142;
        }
        goto LABEL_141;
      }
LABEL_115:
      switch ( v99 )
      {
        case 2LL:
          goto LABEL_156;
        case 3LL:
          if ( *(_WORD *)(*v94 + 36LL) != 215 )
          {
            ++v94;
LABEL_156:
            if ( *(_WORD *)(*v94 + 36LL) != 215 )
            {
              ++v94;
LABEL_118:
              if ( *(_WORD *)(*v94 + 36LL) == 215 )
                v96 = v94;
              break;
            }
          }
LABEL_141:
          v96 = v94;
          break;
        case 1LL:
          goto LABEL_118;
      }
LABEL_142:
      if ( (__int64 *)sub_9C88C0(v135) != v96 )
      {
        v117 = v163[0];
        v150 = sub_B35EA0(*(_QWORD *)(a1 + 248), (__int64)v163[0], (__int64)v163[1], *v96, 1, 0);
        v122 = sub_B8C3D0(v135, (__int64)v117, v118, v119, v120, v121);
        sub_1672BE0((__int64)v122, (__int64)v96);
        sub_B8CC60(v135, v150, v123, v124, v125, v126);
      }
      if ( v30 )
      {
        v127 = v152;
        v128 = v153;
        *(_OWORD *)v165 = 0;
        BYTE1(v127) = BYTE1(v152) & 0xFC;
        v166 = 0;
        BYTE1(v128) = BYTE1(v153) & 0xFC;
        v152 = v127;
        v167 = v167 & 0xFF000000 | 0x101A4;
        v153 = v128;
        v129 = BYTE1(v128) & 1;
        HIBYTE(v167) = (2 * ((v127 & 0x200) != 0)) | v129 | HIBYTE(v167) & 0xFC;
        v130 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v129, v18, v19);
        sub_B12D50(v130, *(_QWORD *)(a1 + 248), (const __m128i *)v165);
        sub_B8CC60(v135, (__int64)v130, v131, v132, v133, v134);
      }
LABEL_36:
      v159.m128i_i32[0] = v17;
      LOBYTE(v160) = (2 * v138) | v137 & 1 | v160 & 0xFC;
      sub_1674810(a1, v135, (__int64)&v178, 2 * (unsigned int)v138, v18, v19, (__int128)_mm_load_si128(&v159), v160);
      if ( v14 == v140 )
        goto LABEL_82;
      ++v14;
    }
    v87 = (_QWORD *)sub_9C8850(v135);
    v89 = v88;
    v90 = v87;
    v91 = ((char *)v89 - (char *)v87) >> 5;
    v92 = v89 - v87;
    if ( v91 > 0 )
    {
      if ( *(_WORD *)(*v87 + 36LL) != 209 )
      {
        if ( *(_WORD *)(v87[1] + 36LL) == 209 )
        {
          v89 = v87 + 1;
        }
        else if ( *(_WORD *)(v87[2] + 36LL) == 209 )
        {
          v89 = v87 + 2;
        }
        else
        {
          v93 = &v87[4 * v91];
          if ( *(_WORD *)(v87[3] + 36LL) == 209 )
          {
            v89 = v87 + 3;
          }
          else
          {
            while ( 1 )
            {
              v87 = v90 + 4;
              if ( v93 == v90 + 4 )
              {
                v92 = v89 - v87;
                goto LABEL_96;
              }
              if ( *(_WORD *)(v90[4] + 36LL) == 209 )
                goto LABEL_135;
              if ( *(_WORD *)(v90[5] + 36LL) == 209 )
              {
                v89 = v90 + 5;
                goto LABEL_136;
              }
              if ( *(_WORD *)(v90[6] + 36LL) == 209 )
              {
                v89 = v90 + 6;
                goto LABEL_136;
              }
              if ( *(_WORD *)(v90[7] + 36LL) == 209 )
                break;
              v90 += 4;
            }
            v89 = v90 + 7;
          }
        }
LABEL_136:
        if ( (__int64 *)sub_9C88C0(v135) != v89 )
        {
          v107 = v163[0];
          v149 = sub_B35EA0(*(_QWORD *)(a1 + 248), (__int64)v163[0], (__int64)v163[1], *v89, 1, 0);
          v112 = sub_B8C3D0(v135, (__int64)v107, v108, v109, v110, v111);
          sub_1672BE0((__int64)v112, (__int64)v89);
          sub_B8CC60(v135, v149, v113, v114, v115, v116);
        }
        if ( v65 )
        {
          v101 = (__int64)sub_16739A0((int **)&v155);
          if ( v101 )
            goto LABEL_124;
        }
        goto LABEL_31;
      }
LABEL_135:
      v89 = v87;
      goto LABEL_136;
    }
LABEL_96:
    if ( v92 != 2 )
    {
      if ( v92 != 3 )
      {
        if ( v92 != 1 )
          goto LABEL_136;
        goto LABEL_99;
      }
      if ( *(_WORD *)(*v87 + 36LL) == 209 )
        goto LABEL_135;
      ++v87;
    }
    if ( *(_WORD *)(*v87 + 36LL) == 209 )
      goto LABEL_135;
    ++v87;
LABEL_99:
    if ( *(_WORD *)(*v87 + 36LL) == 209 )
      v89 = v87;
    goto LABEL_136;
  }
LABEL_82:
  sub_A0A3E0((__int64)&v178);
}
