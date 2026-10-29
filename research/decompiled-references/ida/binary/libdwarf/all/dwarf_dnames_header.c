__int64 __fastcall dwarf_dnames_header(__int64 a1, unsigned __int64 a2, void **a3, __int64 a4, __int64 a5)
{
  unsigned int section; // r8d
  unsigned __int64 v12; // rax
  __int64 alloc; // rax
  char *v14; // r10
  struct Dwarf_Debug_s *v15; // r11
  unsigned __int16 *v16; // r15
  __m128i v17; // xmm0
  __m128i si128; // xmm3
  Dwarf_Debug v19; // r11
  void **v20; // rax
  void *v21; // r10
  struct Dwarf_Debug_s *v22; // rcx
  unsigned __int64 v23; // r9
  __int16 v24; // si
  __int64 v25; // rdx
  char *v26; // rdx
  unsigned __int64 v27; // r12
  Dwarf_Debug v28; // rdx
  size_t v29; // r12
  size_t v30; // r11
  __int64 v31; // r10
  bool v32; // cf
  size_t v33; // r9
  size_t v34; // r9
  size_t v35; // r9
  size_t *v36; // r10
  unsigned __int64 v37; // r9
  void **v38; // r10
  unsigned __int64 v39; // r9
  void **v40; // r11
  void **v41; // r10
  unsigned __int64 v42; // r9
  int v43; // r8d
  struct Dwarf_Debug_s *v44; // rcx
  char *v45; // r11
  void **v46; // r10
  size_t v47; // rax
  char *v48; // r12
  size_t *v49; // rax
  __int64 v50; // rax
  char *v51; // rsi
  struct Dwarf_Debug_s *v52; // r9
  __int64 v53; // rsi
  char *v54; // rdi
  char *v55; // rdx
  char *v56; // rcx
  char *v57; // rdi
  struct Dwarf_Debug_s *v58; // r9
  struct Dwarf_Debug_s *v59; // rdx
  size_t v60; // rsi
  size_t v61; // rax
  char *v62; // r9
  char *v63; // rsi
  void **v64; // rax
  char *v65; // rdi
  char *v66; // rax
  Dwarf_Debug v67; // rsi
  size_t *v68; // rax
  size_t v69; // rcx
  char *v70; // rdi
  bool v71; // zf
  __int64 v72; // rcx
  __int64 v73; // r9
  size_t v74; // rsi
  __int64 v75; // rcx
  unsigned __int64 v76; // rax
  size_t v77; // rsi
  char *v78; // r12
  size_t v79; // rdi
  unsigned __int64 v80; // rax
  __int64 v81; // r9
  unsigned __int64 v82; // rax
  char *v83; // rsi
  char *v84; // rsi
  char *v85; // r12
  struct Dwarf_Debug_s *v86; // rax
  char *v87; // rbp
  struct Dwarf_Debug_s *v88; // r15
  char *v89; // r13
  char *v90; // rbx
  char *v91; // r13
  char *v92; // rax
  _QWORD *v93; // rbx
  __m128i v94; // xmm6
  char *v95; // r13
  int v96; // eax
  __int64 v97; // r8
  __int64 v98; // rax
  __int64 v99; // rdx
  _QWORD *v100; // rbx
  void *v101; // rdi
  _QWORD *n; // rdi
  _QWORD *v103; // rbx
  bool v104; // cc
  void **v105; // rax
  __int64 v106; // rdx
  void *v107; // rax
  Dwarf_Debug v108; // rcx
  __int64 *v109; // rdx
  __int64 v110; // rdx
  struct Dwarf_Debug_s *v111; // rax
  char *i; // rax
  _QWORD *m; // rdi
  _QWORD *v114; // rbx
  struct Dwarf_Debug_s *v115; // rbp
  void *v116; // rdi
  _QWORD *ii; // rdi
  _QWORD *v118; // rbx
  size_t *v119; // rbp
  _QWORD *kk; // rdi
  _QWORD *v121; // rbx
  _QWORD *v122; // rbx
  void *v123; // rdi
  _QWORD *jj; // rdi
  _QWORD *v125; // rbx
  _QWORD *k; // rdi
  _QWORD *v127; // rbx
  char *v128; // r9
  struct Dwarf_Debug_s *v129; // rdx
  void **v130; // r11
  struct Dwarf_Debug_s *v131; // r10
  unsigned __int64 v132; // r12
  int v133; // r8d
  struct Dwarf_Debug_s *v134; // rbx
  void *v135; // r13
  char *v136; // rbx
  int v137; // r14d
  unsigned __int64 v138; // r13
  void **v139; // r12
  void **v140; // rbp
  __int64 v141; // rdx
  char *v142; // rax
  void *v143; // rax
  _QWORD *v144; // r11
  struct Dwarf_Debug_s *v145; // r10
  _QWORD *v146; // r9
  unsigned int v147; // r8d
  char *v148; // rdx
  _QWORD *v149; // rdi
  struct Dwarf_Debug_s *v150; // r13
  struct Dwarf_Debug_s *v151; // rbx
  unsigned int v152; // ebp
  struct Dwarf_Debug_s *v153; // rax
  _DWORD *v154; // rsi
  __int64 v155; // rcx
  unsigned __int64 v156; // r10
  __int64 v157; // rdi
  _DWORD *v158; // rdi
  struct Dwarf_Debug_s *v159; // r10
  struct Dwarf_Debug_s *v160; // rbx
  struct Dwarf_Debug_s *v161; // rbp
  char **v162; // r13
  struct Dwarf_Debug_s *v163; // r11
  _QWORD *v164; // rbx
  struct Dwarf_Debug_s *v165; // rbp
  _QWORD *j; // rdi
  _QWORD *v167; // rbx
  _QWORD *v168; // r14
  int v169; // edx
  __int64 v170; // rax
  __m128i ptr; // [rsp+8h] [rbp-1A0h] BYREF
  Dwarf_Debug v172; // [rsp+18h] [rbp-190h]
  void *v173[2]; // [rsp+20h] [rbp-188h] BYREF
  struct Dwarf_Debug_s *v174; // [rsp+30h] [rbp-178h]
  _QWORD *v175; // [rsp+38h] [rbp-170h]
  char *v176; // [rsp+40h] [rbp-168h]
  size_t nmemb; // [rsp+48h] [rbp-160h]
  size_t v178; // [rsp+50h] [rbp-158h]
  void **v179; // [rsp+58h] [rbp-150h]
  __m128i v180; // [rsp+60h] [rbp-148h] BYREF
  size_t *v181; // [rsp+70h] [rbp-138h]
  __int64 *v182; // [rsp+78h] [rbp-130h]
  void **v183; // [rsp+80h] [rbp-128h]
  void **v184; // [rsp+88h] [rbp-120h]
  void **v185; // [rsp+90h] [rbp-118h]
  unsigned __int64 v186; // [rsp+98h] [rbp-110h]
  int v187; // [rsp+A4h] [rbp-104h]
  struct Dwarf_Debug_s *v188; // [rsp+A8h] [rbp-100h]
  __int64 v189; // [rsp+B0h] [rbp-F8h]
  __int64 v190; // [rsp+B8h] [rbp-F0h]
  char *v191; // [rsp+C0h] [rbp-E8h] BYREF
  size_t v192; // [rsp+C8h] [rbp-E0h] BYREF
  void **v193; // [rsp+D0h] [rbp-D8h] BYREF
  size_t v194; // [rsp+D8h] [rbp-D0h] BYREF
  unsigned __int64 v195; // [rsp+E0h] [rbp-C8h] BYREF
  size_t *v196; // [rsp+E8h] [rbp-C0h] BYREF
  struct Dwarf_Debug_s *v197; // [rsp+F0h] [rbp-B8h] BYREF
  size_t v198; // [rsp+F8h] [rbp-B0h] BYREF
  void *v199; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v200; // [rsp+108h] [rbp-A0h] BYREF
  size_t v201; // [rsp+110h] [rbp-98h] BYREF
  __int64 v202; // [rsp+118h] [rbp-90h] BYREF
  size_t v203; // [rsp+120h] [rbp-88h] BYREF
  __int64 v204; // [rsp+128h] [rbp-80h] BYREF
  __int64 v205; // [rsp+130h] [rbp-78h] BYREF
  __int64 v206; // [rsp+138h] [rbp-70h] BYREF
  _QWORD v207[13]; // [rsp+140h] [rbp-68h] BYREF

  v207[5] = __readfsqword(0x28u);
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    section = _dwarf_load_section(a1, a1 + 2448, a5);
    if ( section )
      return section;
    ptr.m128i_i64[0] = *(_QWORD *)(a1 + 2456);
    if ( !ptr.m128i_i64[0] )
      return (unsigned int)-1;
    if ( (unsigned int)_dwarf_load_section(a1, a1 + 2912, a5) == 1 )
      return 1;
    if ( a2 >= ptr.m128i_i64[0] )
      return (unsigned int)-1;
    v12 = *(_QWORD *)(a1 + 2448);
    v172 = (Dwarf_Debug)(v12 + a2);
    ptr.m128i_i64[1] = v12 + ptr.m128i_i64[0];
    *(__m128i *)v173 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v12);
    alloc = _dwarf_get_alloc(a1, 63, 1);
    v14 = (char *)ptr.m128i_i64[1];
    v15 = v172;
    v16 = (unsigned __int16 *)alloc;
    if ( !alloc )
    {
      _dwarf_error_string(a1, a5, 62, "DW_DLE_ALLOC_FAIL: dwarf_get_alloc of a Dwarf_Dnames_Head record failed.");
      return 1;
    }
    v17 = _mm_loadl_epi64(&ptr);
    si128 = _mm_load_si128((const __m128i *)v173);
    *(_QWORD *)alloc = 43981;
    *(_QWORD *)(alloc + 24) = v14;
    *(_QWORD *)(alloc + 48) = v15;
    *(__m128i *)(alloc + 8) = si128;
    *(__m128i *)(alloc + 32) = _mm_unpacklo_epi64(v17, (__m128i)a2);
    v191 = nullptr;
    v192 = 0;
    v193 = nullptr;
    v194 = 0;
    v195 = 0;
    v196 = nullptr;
    v197 = nullptr;
    v198 = (size_t)v15;
    v207[0] = 0;
    if ( v14 < (char *)v15 + 4 )
      goto LABEL_68;
    v174 = (struct Dwarf_Debug_s *)((char *)v15 + 4);
    v173[0] = v14;
    v172 = v15;
    ptr.m128i_i64[1] = ptr.m128i_i64[0] - a2;
    v175 = v207;
    (*(void (__fastcall **)(_QWORD *, struct Dwarf_Debug_s *, __int64))(a1 + 8296))(v207, v15, 4);
    v19 = v172;
    v20 = (void **)v207[0];
    v21 = v173[0];
    v22 = v174;
    if ( v207[0] == 0xFFFFFFFFLL )
    {
      v198 = (size_t)v174;
      v207[0] = 0;
      if ( v173[0] < (char *)v172 + 12 )
        goto LABEL_68;
      v174 = (Dwarf_Debug)((char *)v172 + 12);
      (*(void (__fastcall **)(_QWORD *, struct Dwarf_Debug_s *, __int64))(a1 + 8296))(v175, v22, 8);
      v19 = v172;
      v21 = v173[0];
      v20 = (void **)v207[0];
      if ( ptr.m128i_i64[1] < v207[0] )
        goto LABEL_79;
      v23 = v207[0] + 12LL;
      v22 = v174;
      v24 = 8;
      v174 = (struct Dwarf_Debug_s *)(a2 + 12);
      v25 = 4;
      v173[0] = byte_9 + 3;
    }
    else
    {
      if ( v207[0] )
      {
        if ( ptr.m128i_i64[1] >= v207[0] )
        {
          v23 = v207[0] + 4LL;
          v24 = 4;
          v173[0] = &byte_4;
          v174 = (struct Dwarf_Debug_s *)(a2 + 4);
          v25 = 0;
          goto LABEL_16;
        }
LABEL_79:
        _dwarf_create_area_len_error(a1, a5, v20, ptr.m128i_i64[1]);
        goto LABEL_69;
      }
      if ( !*(_BYTE *)(a1 + 8360) || *(_BYTE *)(a1 + 232) != 8 )
      {
        v104 = ptr.m128i_i64[1] <= 3uLL;
        v198 = (size_t)v174;
        v16[40] = 4;
        if ( !v104 )
        {
          v172 = v22;
          v23 = 4;
          v174 = (struct Dwarf_Debug_s *)(a2 + 4);
          v27 = a2 + 4;
          v26 = nullptr;
          v173[0] = &byte_4;
LABEL_18:
          *((_QWORD *)v16 + 7) = v26;
          v28 = v172;
          *((_QWORD *)v16 + 9) = v27;
          v29 = (size_t)v22 + 2;
          *((_QWORD *)v16 + 8) = v28;
          LOWORD(v207[0]) = 0;
          if ( v28 >= (struct Dwarf_Debug_s *)((char *)v22 + 2) )
          {
            v180.m128i_i64[0] = v23;
            v179 = v20;
            v178 = (size_t)v21;
            nmemb = (size_t)v19;
            v176 = (char *)v22;
            (*(void (__fastcall **)(_QWORD *, struct Dwarf_Debug_s *, __int64))(a1 + 8296))(v175, v22, 2);
            v198 = v29;
            v30 = nmemb;
            v31 = v178;
            if ( v179 == (void **)((char *)&dword_0 + 2) )
              goto LABEL_81;
            if ( LOWORD(v207[0]) != 5 )
            {
              _dwarf_error(a1, a5, 48);
              goto LABEL_69;
            }
            LOWORD(v207[0]) = 0;
            if ( v172 < (Dwarf_Debug)(v176 + 4) )
              goto LABEL_68;
            nmemb = (size_t)(v176 + 4);
            v176 = (char *)v179;
            v178 = v180.m128i_i64[0];
            v180.m128i_i64[0] = v31;
            v179 = (void **)v30;
            (*(void (__fastcall **)(_QWORD *, size_t, __int64))(a1 + 8296))(v175, v29, 2);
            v198 = nmemb;
            if ( v176 == &byte_4 || LOWORD(v207[0]) )
              goto LABEL_81;
            nmemb = v178;
            if ( (unsigned int)sub_129B0(a1, (__int64 *)&v198, (unsigned __int64)v172, 372, &v191, v178, a5) )
              goto LABEL_69;
            v32 = *((_QWORD *)v16 + 4) < (unsigned __int64)v191;
            v33 = nmemb;
            v176 = v191;
            if ( v32 )
            {
              _dwarf_error_string(a1, a5, 484, "DW_DLE_DEBUG_NAMES_ERROR comp_unit_count too large");
              goto LABEL_69;
            }
            *((_QWORD *)v16 + 11) = v176;
            nmemb = v33;
            if ( (unsigned int)sub_129B0(a1, (__int64 *)&v198, (unsigned __int64)v172, 372, &v192, v33, a5) )
              goto LABEL_69;
            v32 = *((_QWORD *)v16 + 4) < v192;
            v34 = nmemb;
            v178 = v192;
            if ( v32 )
            {
              _dwarf_error_string(a1, a5, 484, "DW_DLE_DEBUG_NAMES_ERROR local_type_unit_count large");
              goto LABEL_69;
            }
            v181 = (size_t *)v180.m128i_i64[0];
            v180.m128i_i64[0] = (__int64)v179;
            *((_QWORD *)v16 + 12) = v178;
            nmemb = v34;
            if ( (unsigned int)sub_129B0(a1, (__int64 *)&v198, (unsigned __int64)v172, 372, &v193, v34, a5) )
              goto LABEL_69;
            v32 = *((_QWORD *)v16 + 4) < (unsigned __int64)v193;
            v35 = nmemb;
            v179 = v193;
            v36 = v181;
            if ( v32 )
            {
              _dwarf_error_string(a1, a5, 484, "DW_DLE_DEBUG_NAMES_ERROR: foreign_type_unit_count large");
              goto LABEL_69;
            }
            v181 = (size_t *)v180.m128i_i64[0];
            v182 = (__int64 *)v36;
            *((_QWORD *)v16 + 13) = v179;
            v180.m128i_i64[0] = v35;
            if ( (unsigned int)sub_129B0(a1, (__int64 *)&v198, (unsigned __int64)v172, 372, &v194, v35, a5) )
              goto LABEL_69;
            v32 = *((_QWORD *)v16 + 4) < v194;
            v37 = v180.m128i_i64[0];
            nmemb = v194;
            v38 = (void **)v182;
            if ( v32 )
            {
              _dwarf_error_string(a1, a5, 484, "DW_DLE_DEBUG_NAMES_ERROR bucketcount too large");
              goto LABEL_69;
            }
            v182 = (__int64 *)v181;
            v183 = v38;
            *((_QWORD *)v16 + 14) = nmemb;
            v181 = (size_t *)v37;
            if ( (unsigned int)sub_129B0(a1, (__int64 *)&v198, (unsigned __int64)v172, 372, &v195, v37, a5) )
              goto LABEL_69;
            v32 = *((_QWORD *)v16 + 4) < v195;
            v39 = (unsigned __int64)v181;
            v40 = (void **)v182;
            v180.m128i_i64[0] = v195;
            v41 = v183;
            *((_QWORD *)v16 + 16) = v195;
            if ( v32 )
            {
              _dwarf_error_string(a1, a5, 484, "DW_DLE_DEBUG_NAMES_ERROR name_count too large");
              goto LABEL_69;
            }
            v184 = v41;
            v183 = v40;
            v182 = (__int64 *)v39;
            if ( (unsigned int)sub_129B0(a1, (__int64 *)&v198, (unsigned __int64)v172, 372, &v196, v39, a5) )
              goto LABEL_69;
            v32 = *((_QWORD *)v16 + 4) < (unsigned __int64)v196;
            v42 = (unsigned __int64)v182;
            v181 = v196;
            if ( v32 )
            {
              _dwarf_error_string(a1, a5, 484, "DW_DLE_DEBUG_NAMES_ERROR abbrev_table_size too large");
              goto LABEL_69;
            }
            v182 = (__int64 *)v183;
            v183 = v184;
            *((_QWORD *)v16 + 17) = v181;
            v43 = sub_129B0(a1, (__int64 *)&v198, (unsigned __int64)v172, 372, &v197, v42, a5);
            if ( v43 )
            {
LABEL_69:
              dwarf_dealloc_dnames(v16);
              return 1;
            }
            v44 = v197;
            v45 = (char *)v182;
            v46 = v183;
            if ( *((_QWORD *)v16 + 4) < (unsigned __int64)v197 )
            {
              _dwarf_error_string(a1, a5, 484, "DW_DLE_DEBUG_NAMES_ERROR augmentation string too long");
              goto LABEL_69;
            }
            v47 = v198;
            *((_QWORD *)v16 + 19) = v197;
            v48 = (char *)v44 + v47;
            v182 = (__int64 *)v47;
            v198 = (size_t)v44 + v47;
            if ( (struct Dwarf_Debug_s *)((char *)v44 + v47) >= v172 )
            {
LABEL_81:
              _dwarf_error(a1, a5, 372);
              goto LABEL_69;
            }
            v49 = v181;
            v16[41] = 5;
            *((_QWORD *)v16 + 17) = v49;
            if ( v44 )
            {
              LODWORD(v185) = v43;
              v184 = v46;
              v183 = (void **)v45;
              v172 = v44;
              v181 = (size_t *)((char *)v44 + 1);
              v107 = calloc(1u, (size_t)v44 + 1);
              v108 = v172;
              v109 = v182;
              *((_QWORD *)v16 + 20) = v107;
              _dwarf_safe_strcpy(v107, v181, v109, v108);
              v110 = *((_QWORD *)v16 + 20);
              v111 = nullptr;
              v44 = v172;
              v45 = (char *)v183;
              v46 = v184;
              v43 = (int)v185;
              while ( (char *)v111 + v110 < (char *)v172 + v110 && *((_BYTE *)v111 + v110) )
                v111 = (struct Dwarf_Debug_s *)((char *)v111 + 1);
              if ( ((unsigned __int8)v172 & 3) != 0 )
              {
                v168 = v175;
                ptr.m128i_i64[0] = (__int64)v172;
                dwarfstring_constructor(v175);
                dwarfstring_append_printf_u(
                  v168,
                  "DW_DLE_DEBUG_NAMES_PAD_NON_ZERO: The augmentation_string_size  is %u, not a multiple of four",
                  ptr.m128i_i32[0]);
                v170 = dwarfstring_string(
                         v168,
                         "DW_DLE_DEBUG_NAMES_PAD_NON_ZERO: The augmentation_string_size  is %u, not a multiple of four",
                         v169);
                _dwarf_error_string(a1, a5, 374, v170);
                dwarfstring_destructor(v168);
                goto LABEL_69;
              }
              if ( v172 != v111 )
              {
                for ( i = (char *)v182 + (_QWORD)v111; i < v48; ++i )
                {
                  if ( *i )
                  {
                    _dwarf_error_string(
                      a1,
                      a5,
                      374,
                      "DW_DLE_DEBUG_NAMES_PAD_NON_ZERO: padding in augmentation string not zeros");
                    goto LABEL_69;
                  }
                }
              }
            }
            v50 = v16[40];
            v51 = v176;
            *((_QWORD *)v16 + 30) = v48;
            v52 = v174;
            v53 = v50 * (_QWORD)v51;
            v54 = (char *)v44 + (unsigned __int64)v173[0] + 32;
            *((_QWORD *)v16 + 21) = v54;
            v55 = (char *)v44 + v53 + 32;
            v56 = &v48[v53];
            v173[0] = (void *)v53;
            v57 = &v54[v53];
            v58 = (struct Dwarf_Debug_s *)((char *)v52 + (_QWORD)v55);
            v59 = *((struct Dwarf_Debug_s **)v16 + 9);
            v198 = (size_t)&v48[v53];
            v172 = v58;
            if ( v58 >= v59 )
            {
              _dwarf_error_string(a1, a5, 372, "DW_DLE_DEBUG_NAMES_HEADER_ERROR: comp_unit array error");
              goto LABEL_69;
            }
            v60 = v178;
            *((_QWORD *)v16 + 22) = v57;
            *((_QWORD *)v16 + 31) = v56;
            v61 = v50 * v60;
            v62 = &v56[v61];
            v63 = &v57[v61];
            v198 = (size_t)&v56[v61];
            v174 = (Dwarf_Debug)((char *)v172 + v61);
            if ( (Dwarf_Debug)((char *)v172 + v61) >= v59 )
            {
              _dwarf_error_string(a1, a5, 372, "DW_DLE_DEBUG_NAMES_HEADER_ERROR: local_type__unit array error");
              goto LABEL_69;
            }
            v64 = v179;
            *((_QWORD *)v16 + 23) = v63;
            *((_QWORD *)v16 + 32) = v62;
            v64 = (void **)(8LL * (_QWORD)v64);
            v65 = (char *)v64 + (_QWORD)v62;
            v172 = (Dwarf_Debug)&v63[(_QWORD)v64];
            v198 = (size_t)v64 + (_QWORD)v62;
            v66 = (char *)v174 + (_QWORD)v64;
            if ( v66 >= (char *)v59 )
            {
              _dwarf_error_string(a1, a5, 372, "DW_DLE_DEBUG_NAMES_HEADER_ERROR: foreign_type__unit array error");
              goto LABEL_69;
            }
            v67 = v172;
            *((_QWORD *)v16 + 33) = v65;
            *((_QWORD *)v16 + 24) = v67;
            v68 = (size_t *)&v66[4 * nmemb];
            v174 = (struct Dwarf_Debug_s *)(4 * nmemb);
            v178 = (size_t)&v65[4 * nmemb];
            v198 = v178;
            if ( v68 >= (size_t *)v59 )
            {
              _dwarf_error_string(a1, a5, 372, "DW_DLE_DEBUG_NAMES_HEADER_ERROR:  bucket array error");
              goto LABEL_69;
            }
            if ( v176 != (_BYTE *)&dword_0 + 1 )
              goto LABEL_45;
            v207[0] = 0;
            if ( v56 < v48 )
            {
              _dwarf_error_string(a1, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
              goto LABEL_69;
            }
            if ( v62 >= v56 )
            {
              LODWORD(v182) = v43;
              v181 = v68;
              v179 = v46;
              v176 = v45;
              (*(void (__fastcall **)(_QWORD *, char *, void *))(a1 + 8296))(v175, v48, v173[0]);
              v43 = (int)v182;
              v68 = v181;
              v106 = v207[0];
              v46 = v179;
              *((_DWORD *)v16 + 82) = 1;
              v45 = v176;
              *((_QWORD *)v16 + 42) = v106;
              v59 = *((struct Dwarf_Debug_s **)v16 + 9);
LABEL_45:
              v69 = v178;
              v70 = (char *)v172 + (_QWORD)v174;
              v71 = nmemb == 0;
              *((_QWORD *)v16 + 34) = v178;
              *((_QWORD *)v16 + 25) = v70;
              if ( !v71 )
              {
                v70 += 4 * v180.m128i_i64[0];
                v68 = (size_t *)((char *)v68 + 4 * v180.m128i_i64[0]);
                v198 = 4 * v180.m128i_i64[0] + v69;
              }
              if ( v68 >= (size_t *)v59 )
              {
                _dwarf_error_string(a1, a5, 372, "DW_DLE_DEBUG_NAMES_HEADER_ERROR: hashes array error");
                goto LABEL_69;
              }
              v72 = v16[40];
              v73 = v180.m128i_i64[0];
              *((_QWORD *)v16 + 26) = v70;
              v74 = v198;
              v75 = v73 * v72;
              *((_QWORD *)v16 + 35) = v198;
              v76 = (unsigned __int64)v68 + v75;
              v77 = v75 + v74;
              v78 = &v70[v75];
              v198 = v77;
              if ( v76 >= (unsigned __int64)v59 )
              {
                _dwarf_error_string(a1, a5, 372, "DW_DLE_DEBUG_NAMES_HEADER_ERROR: string offsets array error");
                goto LABEL_69;
              }
              v79 = v77 + v75;
              v80 = v75 + v76;
              *((_QWORD *)v16 + 36) = v77;
              *((_QWORD *)v16 + 27) = v78;
              v198 = v77 + v75;
              if ( v80 >= (unsigned __int64)v59 )
              {
                _dwarf_error_string(a1, a5, 372, "DW_DLE_DEBUG_NAMES_HEADER_ERROR: entry offsets array error");
                goto LABEL_69;
              }
              v81 = *((_QWORD *)v16 + 17);
              *((_QWORD *)v16 + 28) = v80;
              *((_QWORD *)v16 + 37) = v79;
              v82 = v81 + v80;
              v176 = (char *)(v79 + v81);
              v198 = v79 + v81;
              if ( v82 < (unsigned __int64)v59 )
              {
                v83 = v176;
                *((_QWORD *)v16 + 29) = v82;
                v184 = (void **)v45;
                *((_QWORD *)v16 + 38) = v83;
                v84 = (char *)v59 - v82;
                v185 = v46;
                v187 = v43;
                v188 = (struct Dwarf_Debug_s *)a1;
                v198 = (size_t)&v176[(_QWORD)v59 - v82];
                v199 = nullptr;
                v85 = &v78[v75 + v81 + (_QWORD)v59 - v82];
                v86 = *((struct Dwarf_Debug_s **)v16 + 1);
                v174 = (struct Dwarf_Debug_s *)a5;
                v87 = v176;
                *((_QWORD *)v16 + 18) = v84;
                v172 = v86;
                v179 = &v199;
                nmemb = 0;
                v181 = &v201;
                v182 = &v200;
                v183 = (void **)&v206;
                v173[0] = v16;
                v88 = v59;
                v186 = (unsigned __int64)v85;
                v189 = a4;
                v89 = (char *)v79;
LABEL_52:
                if ( v89 >= v87 )
                {
                  v16 = (unsigned __int16 *)v173[0];
                  v165 = v174;
                  for ( j = v199; j; j = v167 )
                  {
                    v167 = (_QWORD *)*j;
                    free(j);
                  }
                  _dwarf_error_string(
                    v172,
                    v165,
                    377,
                    "DW_DLE_DEBUG_NAMES_ABBREV_CORRUPTION: Never foundabbrev final NUL byte");
                  goto LABEL_128;
                }
                v200 = 0;
                v201 = 0;
                v90 = &v89[-v79];
                if ( (unsigned int)dwarf_decode_leb128(v89, v182, v181, v87) == 1 )
                {
                  v16 = (unsigned __int16 *)v173[0];
                  _dwarf_error_string(v172, v174, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
                  for ( k = v199; k; k = v127 )
                  {
                    v127 = (_QWORD *)*k;
                    free(k);
                  }
                  goto LABEL_128;
                }
                v91 = &v89[v200];
                v178 = v201;
                v180 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v90, (__m128i)v201);
                if ( v201 )
                {
                  v202 = 0;
                  v203 = 0;
                  if ( (unsigned int)dwarf_decode_leb128(v91, &v202, &v203, v87) == 1 )
                  {
                    v16 = (unsigned __int16 *)v173[0];
                    _dwarf_error_string(v172, v174, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
                    for ( m = v199; m; m = v114 )
                    {
                      v114 = (_QWORD *)*m;
                      free(m);
                    }
                    goto LABEL_128;
                  }
                  v89 = &v91[v202];
                  v178 = v203;
                  v92 = (char *)calloc(1u, 0x50u);
                  v93 = v92;
                  if ( v92 )
                  {
                    v94 = _mm_load_si128(&v180);
                    *((_QWORD *)v92 + 3) = v178;
                    *(__m128i *)(v92 + 8) = v94;
                    v180.m128i_i64[0] = (__int64)&v205;
                    v178 = (size_t)&v204;
                    while ( 1 )
                    {
                      v204 = 0;
                      v205 = 0;
                      if ( (unsigned int)dwarf_decode_leb128(v89, v178, v180.m128i_i64[0], v87) == 1 )
                      {
                        ptr.m128i_i64[0] = (__int64)v93;
                        v16 = (unsigned __int16 *)v173[0];
                        _dwarf_error_string(
                          v172,
                          v174,
                          329,
                          "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
                        v100 = (_QWORD *)ptr.m128i_i64[0];
                        do
                        {
                          v101 = v100;
                          v100 = (_QWORD *)*v100;
                          free(v101);
                        }
                        while ( v100 );
                        for ( n = v199; n; n = v103 )
                        {
                          v103 = (_QWORD *)*n;
                          free(n);
                        }
                        goto LABEL_128;
                      }
                      v95 = &v89[v204];
                      v206 = 0;
                      v207[0] = 0;
                      v190 = v205;
                      v96 = dwarf_decode_leb128(v95, v183, v175, v87);
                      v97 = v190;
                      if ( v96 == 1 )
                        break;
                      v98 = v93[4];
                      v99 = v207[0];
                      v89 = &v95[v206];
                      if ( v98 == 10 )
                      {
                        v16 = (unsigned __int16 *)v173[0];
                        v115 = v174;
                        do
                        {
                          v116 = v93;
                          v93 = (_QWORD *)*v93;
                          free(v116);
                        }
                        while ( v93 );
                        for ( ii = v199; ii; ii = v118 )
                        {
                          v118 = (_QWORD *)*ii;
                          free(ii);
                        }
                        _dwarf_error_string(
                          v172,
                          v115,
                          377,
                          "DW_DLE_DEBUG_NAMES_ABBREV_CORRUPTION: Impossible: too many idxattr/form pairscorrupt abbrevs");
                        goto LABEL_128;
                      }
                      *((_WORD *)v93 + v98 + 30) = v207[0];
                      *((_WORD *)v93 + v98 + 20) = v97;
                      v93[4] = v98 + 1;
                      if ( !(v97 | v99) )
                      {
                        v105 = v179;
                        ++nmemb;
                        v179 = (void **)v93;
                        *v105 = v93;
                        goto LABEL_52;
                      }
                    }
                    ptr.m128i_i64[0] = (__int64)v93;
                    v16 = (unsigned __int16 *)v173[0];
                    _dwarf_error_string(v172, v174, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
                    v122 = (_QWORD *)ptr.m128i_i64[0];
                    do
                    {
                      v123 = v122;
                      v122 = (_QWORD *)*v122;
                      free(v123);
                    }
                    while ( v122 );
                    for ( jj = v199; jj; jj = v125 )
                    {
                      v125 = (_QWORD *)*jj;
                      free(jj);
                    }
                    goto LABEL_128;
                  }
                  v16 = (unsigned __int16 *)v173[0];
                  v119 = (size_t *)v174;
                  for ( kk = v199; kk; kk = v121 )
                  {
                    v121 = (_QWORD *)*kk;
                    free(kk);
                  }
                }
                else
                {
                  v128 = v91;
                  v129 = v88;
                  v119 = (size_t *)v174;
                  v130 = v184;
                  v131 = (struct Dwarf_Debug_s *)v185;
                  v132 = v186;
                  v133 = v187;
                  v134 = v188;
                  v135 = (void *)v189;
                  v16 = (unsigned __int16 *)v173[0];
                  if ( v128 < v176 )
                  {
                    v182 = (__int64 *)v129;
                    v174 = v188;
                    v136 = v128;
                    LODWORD(v173[0]) = 1 - (_DWORD)v128;
                    v179 = a3;
                    v137 = v187;
                    v180.m128i_i64[0] = v189;
                    v138 = v186;
                    v139 = v185;
                    v181 = v119;
                    v140 = v184;
                    do
                    {
                      if ( *v136 )
                      {
                        dwarfstring_constructor(v175);
                        dwarfstring_append_printf_u(
                          v175,
                          "WARNING NON NULL debug_names abbreviation pad. padcount %u at ",
                          LODWORD(v173[0]) + (_DWORD)v136);
                        dwarfstring_append_printf_u(v175, ".debug_names sec_offset 0x%lx", &v136[-*((_QWORD *)v16 + 2)]);
                        v142 = (char *)dwarfstring_string(v175, ".debug_names sec_offset 0x%lx", v141);
                        dwarf_insert_harmless_error(v172, v142);
                        dwarfstring_destructor(v175);
                      }
                      ++v136;
                    }
                    while ( v176 != v136 );
                    v130 = v140;
                    v131 = (struct Dwarf_Debug_s *)v139;
                    v133 = v137;
                    v132 = v138;
                    v134 = v174;
                    a3 = v179;
                    v135 = (void *)v180.m128i_i64[0];
                    v119 = v181;
                    v129 = (struct Dwarf_Debug_s *)v182;
                  }
                  v176 = (char *)v129;
                  LODWORD(v175) = v133;
                  v174 = v131;
                  v173[0] = v130;
                  v143 = calloc(nmemb, 0x50u);
                  v144 = v173[0];
                  v145 = v174;
                  v146 = v199;
                  v147 = (unsigned int)v175;
                  *((_QWORD *)v16 + 39) = v143;
                  v148 = v176;
                  v149 = v146;
                  if ( v143 )
                  {
                    v173[0] = v135;
                    v150 = v134;
                    v151 = v145;
                    v174 = (struct Dwarf_Debug_s *)v119;
                    v152 = v147;
                    *((_QWORD *)v16 + 40) = nmemb;
                    while ( nmemb != v178 )
                    {
                      v153 = (struct Dwarf_Debug_s *)*v146;
                      v154 = v146;
                      v155 = 20;
                      v176 = v148;
                      v156 = 80 * v178;
                      v157 = *((_QWORD *)v16 + 39);
                      v175 = v144;
                      v172 = v153;
                      v158 = (_DWORD *)(80 * v178 + v157);
                      while ( v155 )
                      {
                        *v158++ = *v154++;
                        --v155;
                      }
                      *(_QWORD *)(*((_QWORD *)v16 + 39) + v156) = 0;
                      free(v146);
                      ++v178;
                      v146 = v172;
                      v148 = v176;
                      v144 = v175;
                    }
                    v159 = v151;
                    section = v152;
                    v160 = v150;
                    v161 = v174;
                    v162 = (char **)v173[0];
                    if ( ptr.m128i_i64[0] >= v132 )
                    {
                      if ( ptr.m128i_i64[1] - 1 - v132 > 0xD
                        || (v163 = (struct Dwarf_Debug_s *)((char *)v144 + v132), v163 >= v159) )
                      {
LABEL_163:
                        *a3 = v16;
                        *v162 = v148;
                        return section;
                      }
                      while ( !*(_BYTE *)v163 )
                      {
                        v163 = (struct Dwarf_Debug_s *)((char *)v163 + 1);
                        if ( v159 == v163 )
                          goto LABEL_163;
                      }
                      dwarf_dealloc_dnames(v16);
                      _dwarf_error_string(
                        v160,
                        v161,
                        374,
                        "DW_DLE_DEBUG_NAMES_PAD_NON_ZERO: space at end of valid tables not zeros");
                    }
                    else
                    {
                      dwarf_dealloc_dnames(v16);
                      _dwarf_error_string(v160, v161, 375, "DW_DLE_DEBUG_NAMES_OFF_END:  used space > section size");
                    }
                    return 1;
                  }
                  while ( v149 )
                  {
                    v164 = (_QWORD *)*v149;
                    free(v149);
                    v149 = v164;
                  }
                }
                _dwarf_error(v172, v119, 62);
LABEL_128:
                free(*((void **)v16 + 20));
                *((_QWORD *)v16 + 20) = 0;
                goto LABEL_69;
              }
              _dwarf_error_string(a1, a5, 372, "DW_DLE_DEBUG_NAMES_HEADER_ERROR: abbrev table error");
              goto LABEL_69;
            }
          }
LABEL_68:
          _dwarf_error_string(a1, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
          goto LABEL_69;
        }
LABEL_78:
        _dwarf_error_string(
          a1,
          a5,
          372,
          "DW_DLE_DEBUG_NAMES_HEADER_ERROR: The index table runs off the end of the .debug_names section. Corrupt data.");
        goto LABEL_69;
      }
      v207[0] = 0;
      if ( v173[0] < (char *)v172 + 8 )
        goto LABEL_68;
      v174 = (Dwarf_Debug)((char *)v172 + 8);
      (*(void (__fastcall **)(_QWORD *, Dwarf_Debug, __int64))(a1 + 8296))(v175, v172, 8);
      v19 = v172;
      v21 = v173[0];
      v20 = (void **)v207[0];
      v22 = v174;
      if ( ptr.m128i_i64[1] < v207[0] )
        goto LABEL_79;
      v23 = v207[0] + 8LL;
      v24 = 8;
      v173[0] = &byte_8;
      v174 = (struct Dwarf_Debug_s *)(a2 + 8);
      v25 = 0;
    }
LABEL_16:
    v198 = (size_t)v22;
    v16[40] = v24;
    if ( ptr.m128i_i64[1] >= v23 )
    {
      v26 = (char *)v20 + v25;
      v27 = v23 + a2;
      v172 = (Dwarf_Debug)((char *)v20 + (_QWORD)v22);
      goto LABEL_18;
    }
    goto LABEL_78;
  }
  _dwarf_error_string(
    0,
    a5,
    81,
    "DW_DLE_DBG_NULL: dbg argument to dwarf_dnames_header()either null or it containsa stale Dwarf_Debug pointer");
  return 1;
}

