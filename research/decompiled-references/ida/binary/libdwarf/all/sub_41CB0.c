__int64 __fastcall sub_41CB0(
        struct Dwarf_Die_s *a1,
        int a2,
        unsigned __int64 a3,
        __int64 *a4,
        size_t **a5,
        Dwarf_Off *a6,
        _QWORD *a7,
        _QWORD *a8,
        Dwarf_Error *a9)
{
  Dwarf_Debug *v11; // r8
  Dwarf_Debug v12; // r12
  unsigned int section; // ebp
  Dwarf_Debug v15; // rdi
  int v16; // eax
  Dwarf_Debug *v17; // r8
  int v18; // r11d
  Dwarf_Off v19; // r10
  int die_comp_dir; // eax
  Dwarf_Signed v21; // rcx
  void **v22; // rax
  struct Dwarf_Debug_s *v23; // rcx
  __int64 v24; // rbx
  struct Dwarf_Debug_s *v25; // rbp
  const char *v26; // r14
  size_t v27; // rax
  size_t v28; // r13
  size_t v29; // r15
  void *v30; // rax
  void *v31; // r12
  Dwarf_Debug v32; // rax
  Dwarf_Signed v33; // rax
  unsigned __int64 v34; // r8
  int v35; // ebp
  char **v36; // r14
  __int64 v37; // r13
  struct Dwarf_Debug_s *v38; // r15
  Dwarf_Signed v39; // rbx
  char *v40; // rsi
  struct Dwarf_Debug_s *v41; // r8
  Dwarf_Signed v42; // r15
  Dwarf_Off v43; // r13
  unsigned __int64 v44; // r10
  char *v45; // rax
  unsigned __int64 v46; // r14
  __int64 alloc; // rax
  char *v48; // r10
  unsigned int v49; // eax
  unsigned __int64 v50; // r11
  struct Dwarf_Debug_s *v51; // r10
  unsigned int v52; // eax
  Dwarf_Debug v53; // r10
  char *v54; // rax
  char *v55; // rbp
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // edx
  char *v62; // rbx
  unsigned int v63; // eax
  Dwarf_Debug v64; // r13
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rax
  struct Dwarf_Debug_s *v67; // r10
  __int64 v68; // rax
  int v69; // r12d
  Dwarf_Debug v70; // rbp
  int v71; // ebx
  __int64 v72; // r13
  Dwarf_Debug v73; // r11
  int v74; // eax
  int v75; // eax
  char **v76; // rbp
  __int64 v77; // rbx
  Dwarf_Signed v78; // r13
  char *v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rax
  __int16 v82; // ax
  unsigned int v83; // eax
  unsigned int v84; // eax
  __int64 v85; // r12
  char *v86; // rax
  Dwarf_Debug v87; // r11
  Dwarf_Debug v88; // r10
  char *v89; // r14
  unsigned __int64 v90; // rdi
  struct Dwarf_Debug_s *v91; // rax
  unsigned __int64 v92; // r12
  unsigned __int64 v93; // r10
  unsigned __int64 v94; // rbx
  unsigned __int8 v95; // bp
  int v96; // eax
  __int64 v97; // r9
  unsigned __int64 v98; // rdx
  __int64 v99; // rbx
  __int64 v100; // rcx
  unsigned int v101; // esi
  __int64 *v102; // rax
  __int64 v103; // rdx
  char v104; // bl
  int v105; // esi
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  Dwarf_Signed v108; // r13
  char **v109; // rbp
  char *v110; // rsi
  Dwarf_Debug v112; // [rsp+10h] [rbp-118h]
  void *v113; // [rsp+10h] [rbp-118h]
  struct Dwarf_Debug_s *v114; // [rsp+10h] [rbp-118h]
  Dwarf_Debug v115; // [rsp+10h] [rbp-118h]
  struct Dwarf_Debug_s *v116; // [rsp+10h] [rbp-118h]
  Dwarf_Debug v117; // [rsp+10h] [rbp-118h]
  Dwarf_Debug v118; // [rsp+10h] [rbp-118h]
  Dwarf_Debug v119; // [rsp+10h] [rbp-118h]
  Dwarf_Debug v120; // [rsp+10h] [rbp-118h]
  Dwarf_Debug *ptr; // [rsp+30h] [rbp-F8h]
  struct Dwarf_Debug_s *ptra; // [rsp+30h] [rbp-F8h]
  struct Dwarf_Debug_s *ptrh; // [rsp+30h] [rbp-F8h]
  char **ptrb; // [rsp+30h] [rbp-F8h]
  void **ptrc; // [rsp+30h] [rbp-F8h]
  struct Dwarf_Debug_s *ptrd; // [rsp+30h] [rbp-F8h]
  char *ptre; // [rsp+30h] [rbp-F8h]
  Dwarf_Debug *ptrf; // [rsp+30h] [rbp-F8h]
  size_t *ptrg; // [rsp+30h] [rbp-F8h]
  Dwarf_Debug v131; // [rsp+38h] [rbp-F0h] BYREF
  unsigned __int64 v132; // [rsp+40h] [rbp-E8h]
  char *v133; // [rsp+48h] [rbp-E0h]
  Dwarf_Debug v134; // [rsp+50h] [rbp-D8h]
  void *v135; // [rsp+58h] [rbp-D0h]
  char *v136; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v137; // [rsp+68h] [rbp-C0h]
  Dwarf_Off v138; // [rsp+70h] [rbp-B8h] BYREF
  Dwarf_Attribute v139; // [rsp+78h] [rbp-B0h] BYREF
  Dwarf_Signed v140; // [rsp+80h] [rbp-A8h] BYREF
  char **v141; // [rsp+88h] [rbp-A0h] BYREF
  unsigned __int64 v142; // [rsp+90h] [rbp-98h]
  struct Dwarf_Debug_s *v143; // [rsp+98h] [rbp-90h]
  __int64 v144; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v145; // [rsp+A8h] [rbp-80h] BYREF
  unsigned __int64 v146; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v147; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v148[13]; // [rsp+C0h] [rbp-68h] BYREF

  v148[5] = __readfsqword(0x28u);
  v138 = 0;
  v139 = nullptr;
  v140 = 0;
  v141 = nullptr;
  v142 = 0;
  v143 = nullptr;
  if ( a9 )
    *a9 = nullptr;
  if ( !a1 )
  {
    _dwarf_error(0, a9, 52);
    return 1;
  }
  v11 = *((Dwarf_Debug **)a1 + 2);
  if ( !v11 )
  {
    _dwarf_error(0, a9, 104);
    return 1;
  }
  v12 = *v11;
  if ( !*v11 || *(_QWORD *)v12 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a9,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v15 = *v11;
  v132 = a3;
  LODWORD(v131) = a2;
  ptr = v11;
  v133 = (char *)v12 + 2216;
  section = _dwarf_load_section(v15, (char *)v12 + 2216, a9);
  if ( !section )
  {
    if ( !*((_QWORD *)v12 + 278) )
      return (unsigned int)-1;
    v16 = dwarf_attr(a1, 0x79u, &v139, a9);
    v17 = ptr;
    v18 = (int)v131;
    v19 = v132;
    section = v16;
    if ( v16 == -1 )
    {
      v75 = dwarf_attr(a1, 0x2119u, &v139, a9);
      v19 = v132;
      v18 = (int)v131;
      v17 = ptr;
      section = v75;
    }
    if ( !section )
    {
      if ( !v18 )
      {
        ptrf = v17;
        v74 = dwarf_global_formref(v139, &v138, a9);
        if ( v74 )
        {
          section = v74;
          dwarf_dealloc(v12, v139, 0xAu);
          return section;
        }
        v19 = v138;
        v17 = ptrf;
      }
      ptra = (struct Dwarf_Debug_s *)v17;
      v138 = (Dwarf_Off)v17[64] + v19;
      if ( dwarf_srcfiles(a1, &v141, &v140, a9) != 1 )
      {
        die_comp_dir = _dwarf_internal_get_die_comp_dir(a1);
        v21 = v140;
        if ( die_comp_dir != 1 )
        {
          *a6 = v138;
          if ( v21 <= 0 )
          {
            v24 = 0;
            v42 = 0;
            dwarf_dealloc(v12, v141, 0xFu);
            v41 = ptra;
            v141 = nullptr;
            v140 = 0;
            goto LABEL_29;
          }
          v131 = ptra;
          ptrh = (struct Dwarf_Debug_s *)v21;
          v22 = (void **)calloc(v21, 8u);
          v23 = ptrh;
          v24 = (__int64)v22;
          if ( !v22 )
          {
            dwarf_dealloc(v12, v139, 0xAu);
            v108 = v140;
            v109 = v141;
            while ( v108 > v24 )
            {
              v110 = v109[v24];
              if ( v110 )
                dwarf_dealloc(v12, v110, 1u);
              ++v24;
            }
            dwarf_dealloc(v12, v109, 0xFu);
            _dwarf_error(v12, a9, 62);
            return 1;
          }
          v132 = (unsigned __int64)v131;
          v134 = v12;
          ptrb = v141;
          v131 = v23;
          LODWORD(v135) = 0;
          v25 = nullptr;
          while ( 1 )
          {
            v26 = ptrb[(_QWORD)v25];
            v27 = strlen(v26);
            v28 = v27 + 1;
            v29 = v27;
            v30 = calloc(1u, v27 + 1);
            v31 = v30;
            if ( !v30 )
              break;
            _dwarf_safe_strcpy(v30, v28, v26, v29);
            v32 = v131;
            *(_QWORD *)(v24 + 8LL * (_QWORD)v25) = v31;
            v25 = (struct Dwarf_Debug_s *)((char *)v25 + 1);
            if ( v25 == v32 )
            {
              v33 = v140;
              v34 = v132;
              v12 = v134;
              v35 = (int)v135;
              v36 = v141;
              if ( v140 <= 0 )
              {
                dwarf_dealloc(v134, v141, 0xFu);
                v42 = v140;
                v41 = (struct Dwarf_Debug_s *)v132;
                v141 = nullptr;
                v140 = 0;
                goto LABEL_29;
              }
LABEL_24:
              ptrc = (void **)v24;
              v37 = 0;
              v38 = (struct Dwarf_Debug_s *)v34;
              v39 = v33;
              do
              {
                v40 = v36[v37];
                if ( v40 )
                  dwarf_dealloc(v12, v40, 1u);
                ++v37;
              }
              while ( v37 != v39 );
              v24 = (__int64)ptrc;
              dwarf_dealloc(v12, v36, 0xFu);
              v41 = v38;
              v42 = v140;
              v141 = nullptr;
              v140 = 0;
              if ( !v35 )
              {
LABEL_29:
                ptrd = v41;
                dwarf_dealloc(v12, v139, 0xAu);
                v144 = 0;
                v131 = v143;
                v145 = 0;
                v43 = v138;
                v132 = v142;
                v146 = 0;
                section = _dwarf_load_section(v12, v133, a9);
                if ( section )
                {
                  sub_40740((void **)v24, v42);
                  return section;
                }
                v44 = *((_QWORD *)v12 + 278);
                if ( !v44 )
                {
                  section = -1;
                  sub_40740((void **)v24, v42);
                  return section;
                }
                if ( v43 >= v44 || v43 + 3 >= v44 )
                {
                  sub_40740((void **)v24, v42);
                  _dwarf_error(v12, a9, 318);
                  return 1;
                }
                v45 = *((char **)v12 + 277);
                v134 = ptrd;
                v133 = (char *)v44;
                v46 = (unsigned __int64)&v45[v44];
                ptre = v45;
                alloc = _dwarf_get_alloc(v12, 60, 1);
                v48 = v133;
                if ( !alloc )
                {
LABEL_71:
                  sub_40740((void **)v24, v42);
                  _dwarf_error(v12, a9, 62);
                  return 1;
                }
                if ( v46 < (unsigned __int64)(ptre + 3) )
                {
                  v113 = (void *)alloc;
                  sub_40740((void **)v24, v42);
                  v50 = (unsigned __int64)v113;
                }
                else
                {
                  *(_QWORD *)(alloc + 176) = v134;
                  *(_QWORD *)(alloc + 128) = v24;
                  *(_QWORD *)(alloc + 136) = v42;
                  v135 = v48;
                  v134 = (Dwarf_Debug)alloc;
                  v133 = &ptre[v43];
                  v49 = _dwarf_read_unaligned_ck_wrapper(v12, &v145, &ptre[v43], 2, v46, a9);
                  v50 = (unsigned __int64)v134;
                  v51 = (struct Dwarf_Debug_s *)v135;
                  section = v49;
                  if ( v49 )
                    goto LABEL_75;
                  if ( (unsigned __int64)(v145 - 4) > 1 )
                  {
                    dwarfstring_constructor(v148);
                    dwarfstring_append_printf_u(v148, "DW_DLE_MACRO_VERSION_ERROR: version 0x%x ", v145);
                    dwarfstring_append_printf_u(
                      v148,
                      "at section offset 0x%08llx is incorrect, only 5 or the GNU extension value of 4 are valid. Corrupt dwarf.",
                      v43);
                    v81 = dwarfstring_string(
                            v148,
                            "at section offset 0x%08llx is incorrect, only 5 or the GNU extension value of 4 are valid. Corrupt dwarf.",
                            v80);
                    _dwarf_error_string(v12, a9, 481, v81);
                    dwarfstring_destructor(v148);
                    dwarf_dealloc_macro_context(v134);
                    return 1;
                  }
                  v135 = v134;
                  v134 = v51;
                  v52 = _dwarf_read_unaligned_ck_wrapper(v12, &v146, v133 + 2, 1, v46, a9);
                  v53 = v134;
                  v50 = (unsigned __int64)v135;
                  section = v52;
                  if ( v52 )
                    goto LABEL_75;
                  v54 = v133;
                  *((_QWORD *)v135 + 21) = v12;
                  *(_QWORD *)(v50 + 112) = v54;
                  v55 = v54 + 3;
                  LOWORD(v54) = v145;
                  *(__m128 *)(v50 + 144) = _mm_loadh_ps((const double *)&v131);
                  *(_WORD *)(v50 + 8) = (_WORD)v54;
                  v56 = v146;
                  *(__m128i *)(v50 + 16) = _mm_unpacklo_epi64((__m128i)v43, (__m128i)(unsigned __int64)v53);
                  v57 = v56;
                  *(_BYTE *)(v50 + 42) = v56;
                  v58 = v56 & 1;
                  v59 = (v56 >> 2) & 1;
                  v60 = (v57 >> 1) & 1;
                  *(_DWORD *)(v50 + 56) = v58;
                  *(_DWORD *)(v50 + 60) = v60;
                  *(_DWORD *)(v50 + 68) = v59;
                  v61 = v58 == 0 ? 4 : 8;
                  *(_BYTE *)(v50 + 64) = v61;
                  if ( !(_DWORD)v60 )
                    goto LABEL_42;
                  v62 = &v55[(unsigned __int8)v61];
                  if ( v62 - ptre < (unsigned __int64)v53 )
                  {
                    v132 = v50;
                    v131 = v53;
                    v63 = _dwarf_read_unaligned_ck_wrapper(v12, &v144, v55, (unsigned __int8)v61, v46, a9);
                    v53 = v131;
                    v50 = v132;
                    section = v63;
                    if ( !v63 )
                    {
                      v55 = v62;
                      *(_QWORD *)(v132 + 48) = v144;
                      LODWORD(v59) = *(_DWORD *)(v50 + 68);
LABEL_42:
                      if ( (_DWORD)v59 )
                      {
                        v64 = *(Dwarf_Debug *)(v50 + 168);
                        if ( *(_QWORD *)v50 != 2778 )
                        {
                          v114 = (struct Dwarf_Debug_s *)v50;
                          _dwarf_error_string(
                            *(_QWORD *)(v50 + 168),
                            a9,
                            322,
                            "DW_DLE_BAD_MACRO_HEADER_POINTER  NULL header or corrupt header");
                          v73 = v114;
                          goto LABEL_54;
                        }
                        v65 = (unsigned __int64)(v55 + 1);
                        if ( v55 + 1 - v133 >= (unsigned __int64)v53 )
                          goto LABEL_86;
                        v66 = *(_QWORD *)(v50 + 112) + *(_QWORD *)(v50 + 32);
                        LOBYTE(v148[0]) = 0;
                        v132 = v66;
                        if ( v66 < v65 )
                        {
LABEL_89:
                          v116 = (struct Dwarf_Debug_s *)v50;
                          _dwarf_error_string(
                            v64,
                            a9,
                            331,
                            "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
                          v73 = v116;
                          goto LABEL_54;
                        }
                        v134 = (Dwarf_Debug)v50;
                        v131 = v53;
                        (*((void (__fastcall **)(_QWORD *, char *, __int64))v64 + 1037))(v148, v55, 1);
                        v67 = v131;
                        v50 = (unsigned __int64)v134;
                        LOBYTE(v135) = v148[0];
                        if ( v65 + 4 * LOBYTE(v148[0]) - (unsigned __int64)ptre >= (unsigned __int64)v131 )
                        {
LABEL_86:
                          v115 = (Dwarf_Debug)v50;
LABEL_87:
                          _dwarf_error(v64, a9, 318);
                          v73 = v115;
                          goto LABEL_54;
                        }
                        if ( !LOBYTE(v148[0]) )
                        {
LABEL_91:
                          v85 = (unsigned __int8)v135;
                          v134 = (Dwarf_Debug)v50;
                          v131 = v67;
                          v86 = (char *)calloc((unsigned __int8)v135, 0x10u);
                          v87 = v134;
                          v88 = v131;
                          v89 = v86;
                          *((_QWORD *)v134 + 10) = v86;
                          if ( !v86 )
                          {
                            v120 = v87;
                            _dwarf_error(v64, a9, 62);
                            v73 = v120;
                            goto LABEL_54;
                          }
                          v131 = v87;
                          v90 = v65;
                          v136 = v55;
                          *((_BYTE *)v87 + 72) = (_BYTE)v135;
                          v91 = (struct Dwarf_Debug_s *)&v86[16 * v85];
                          v92 = (unsigned __int64)v88;
                          v93 = v65;
                          v134 = v91;
                          v135 = &v147;
                          while ( 1 )
                          {
                            if ( v89 == (char *)v134 )
                            {
                              v50 = (unsigned __int64)v131;
                              v55 = &v136[v90 - v93];
                              goto LABEL_80;
                            }
                            if ( v90 + 2 - (unsigned __int64)ptre >= v92 )
                            {
LABEL_85:
                              v50 = (unsigned __int64)v131;
                              goto LABEL_86;
                            }
                            LOBYTE(v148[0]) = 0;
                            v94 = v90 + 1;
                            if ( v132 < v90 + 1 )
                            {
                              v50 = (unsigned __int64)v131;
                              goto LABEL_89;
                            }
                            v137 = v93;
                            (*((void (__fastcall **)(_QWORD *, unsigned __int64, __int64))v64 + 1037))(v148, v90, 1);
                            v147 = 0;
                            v95 = v148[0];
                            v148[0] = 0;
                            v96 = dwarf_decode_leb128(v94, v135, v148, v132);
                            v93 = v137;
                            v97 = 1149304824;
                            if ( v96 == 1 )
                            {
                              v112 = v131;
                              goto LABEL_53;
                            }
                            v98 = v148[0];
                            v99 = v147 + v94;
                            *v89 = v95;
                            v100 = v99;
                            v90 = v99 + v98;
                            v89[1] = v98;
                            v101 = (unsigned __int8)v98;
                            if ( v99 + v98 - (unsigned __int64)ptre >= v92 )
                              goto LABEL_85;
                            *((_QWORD *)v89 + 1) = v99;
                            if ( v95 > 0xCu )
                            {
                              v105 = 0;
                              v106 = 0;
                              if ( v98 )
                              {
                                while ( 1 )
                                {
                                  v107 = *(unsigned __int8 *)(v99 + v106);
                                  if ( (unsigned __int8)v107 > 0x1Eu || !_bittest64(&v97, v107) )
                                    break;
                                  v106 = (unsigned __int16)++v105;
                                  if ( (unsigned __int16)v105 >= v98 )
                                    goto LABEL_111;
                                }
                                v117 = v131;
                                _dwarf_error(v64, a9, 324);
                                v73 = v117;
                                goto LABEL_54;
                              }
LABEL_111:
                              if ( v95 <= 0xDFu )
                              {
LABEL_112:
                                v118 = v131;
                                _dwarf_error(*((_QWORD *)v131 + 21), a9, 319);
                                v73 = v118;
                                goto LABEL_54;
                              }
                            }
                            else
                            {
                              if ( !v95 )
                                goto LABEL_112;
                              v102 = &dw5formsarray[2 * v95];
                              if ( (_BYTE)v98 != *((_BYTE *)v102 + 1) )
                              {
LABEL_113:
                                v119 = v131;
                                _dwarf_error(*((_QWORD *)v131 + 21), a9, 320);
                                v73 = v119;
                                goto LABEL_54;
                              }
                              v103 = 0;
                              while ( (unsigned int)v103 < v101 )
                              {
                                v104 = *(_BYTE *)(v100 + v103++);
                                if ( v104 != *(_BYTE *)(v102[1] + 1) )
                                  goto LABEL_113;
                              }
                            }
                            v89 += 16;
                          }
                        }
                        v136 = v55;
                        v68 = (__int64)(v55 + 1);
                        v69 = 0;
                        v70 = v131;
                        v137 = v65;
                        v71 = LOBYTE(v148[0]);
                        v131 = v134;
                        v134 = v64;
                        while ( 1 )
                        {
                          v72 = v68 + 1;
                          v147 = 0;
                          v148[0] = 0;
                          if ( (unsigned int)dwarf_decode_leb128(v68 + 1, &v147, v148, v132) == 1 )
                            break;
                          v68 = v72 + v147 + v148[0];
                          if ( v68 - (__int64)ptre >= (unsigned __int64)v70 )
                          {
                            v64 = v134;
                            v115 = v131;
                            goto LABEL_87;
                          }
                          if ( v71 == ++v69 )
                          {
                            v67 = v70;
                            v50 = (unsigned __int64)v131;
                            v55 = v136;
                            v65 = v137;
                            v64 = v134;
                            goto LABEL_91;
                          }
                        }
                        v64 = v134;
                        v112 = v131;
LABEL_53:
                        _dwarf_error_string(v64, a9, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
                        v73 = v112;
LABEL_54:
                        dwarf_dealloc_macro_context(v73);
                        return 1;
                      }
LABEL_80:
                      v82 = (__int16)v133;
                      *(_QWORD *)(v50 + 120) = v55;
                      ptrg = (size_t *)v50;
                      *(_WORD *)(v50 + 40) = (_WORD)v55 - v82;
                      v83 = sub_407A0((size_t *)v50, 0, (__int64)a9);
                      v50 = (unsigned __int64)ptrg;
                      section = v83;
                      if ( !v83 )
                      {
                        v84 = sub_407A0(ptrg, 1, (__int64)a9);
                        v50 = (unsigned __int64)ptrg;
                        section = v84;
                        if ( !v84 )
                        {
                          *a7 = ptrg[11];
                          *a8 = ptrg[12];
                          *a4 = v145;
                          *a5 = ptrg;
                          return section;
                        }
                      }
                    }
LABEL_75:
                    dwarf_dealloc_macro_context((void *)v50);
                    return section;
                  }
                }
                dwarf_dealloc_macro_context((void *)v50);
                _dwarf_error(v12, a9, 318);
                return 1;
              }
LABEL_70:
              dwarf_dealloc(v12, v139, 0xAu);
              goto LABEL_71;
            }
          }
          v34 = v132;
          v33 = v140;
          v35 = 1;
          v12 = v134;
          v36 = v141;
          if ( v140 > 0 )
            goto LABEL_24;
          dwarf_dealloc(v134, v141, 0xFu);
          v42 = v140;
          v141 = nullptr;
          v140 = 0;
          goto LABEL_70;
        }
        v76 = v141;
        v77 = 0;
        v78 = v140;
        if ( v140 > 0 )
        {
          do
          {
            v79 = v76[v77];
            if ( v79 )
              dwarf_dealloc(v12, v79, 1u);
            ++v77;
          }
          while ( v77 != v78 );
        }
        dwarf_dealloc(v12, v76, 0xFu);
        v141 = nullptr;
        v140 = 0;
      }
      dwarf_dealloc(v12, v139, 0xAu);
      return 1;
    }
  }
  return section;
}

