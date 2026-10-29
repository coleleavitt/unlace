__int64 __fastcall sub_4B3E0(
        Dwarf_Debug a1,
        const char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int16 a6,
        int a7,
        int a8,
        __int64 a9,
        _DWORD *a10)
{
  _QWORD *v10; // r15
  struct Dwarf_Debug_s *v11; // r13
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  const char *v18; // r13
  _QWORD *v19; // rbp
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // r13
  __int64 v22; // rdi
  unsigned __int16 v23; // ax
  unsigned __int8 v24; // cl
  __int64 v25; // rax
  unsigned __int64 v26; // rtt
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // edx
  const char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rbx
  char v34; // dl
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  const char *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned __int8 v42; // al
  const char *v43; // rbx
  unsigned __int8 v44; // al
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 alloc; // rbp
  _QWORD *v48; // rax
  char *v49; // rsi
  __int64 v50; // rbx
  unsigned __int8 v52; // r13
  int v53; // edx
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rbp
  __int64 v57; // rdx
  __int64 v58; // rax
  struct Dwarf_Debug_s *v59; // r13
  const char *v60; // rcx
  __int64 v61; // rbx
  const char *v62; // rsi
  __int64 v63; // rax
  char v64; // dl
  __int64 v65; // rax
  int v66; // r15d
  unsigned __int64 v67; // rax
  const char *v68; // rsi
  __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rbx
  unsigned int v72; // eax
  size_t v73; // r13
  __int64 v74; // rax
  size_t v75; // r13
  size_t v76; // r13
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  char v80; // dl
  char v81; // si
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  struct Dwarf_Debug_s *v88; // r13
  const char *v89; // rsi
  const char *v90; // rsi
  __int64 v91; // rax
  unsigned __int8 v92; // dl
  __int64 v93; // rsi
  __int64 v94; // rax
  unsigned __int64 v95; // rtt
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // r15
  bool v101; // cf
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rax
  bool v105; // zf
  bool v106; // sf
  __int64 v107; // rax
  __int64 v108; // rbx
  const char *v109; // r13
  __int64 v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rbx
  const __m128i **v114; // rax
  __int64 v115; // rdx
  const __m128i *v116; // rax
  __int64 v117; // rdx
  unsigned __int8 *v118; // r15
  unsigned __int8 *v119; // rbx
  int v120; // edx
  __int64 v121; // rax
  __int64 v122; // rax
  struct Dwarf_Debug_s *v123; // r13
  const char *v124; // rax
  const char *v125; // rbx
  const char *v126; // rsi
  __int64 v127; // rax
  _BYTE *v128; // rbp
  __int64 v129; // rbx
  _BYTE *v130; // rbp
  __int64 v131; // r12
  int v132; // ebx
  __int64 v133; // rax
  const char *v134; // rbp
  __int64 v135; // rbx
  const char *v136; // rbp
  __int64 v137; // rbx
  __int64 v138; // r12
  unsigned int v140; // [rsp+0h] [rbp-238h]
  unsigned __int64 v141; // [rsp+8h] [rbp-230h]
  __int64 v143; // [rsp+38h] [rbp-200h]
  __int64 v144; // [rsp+38h] [rbp-200h]
  __int64 v145; // [rsp+38h] [rbp-200h]
  __int64 v146; // [rsp+40h] [rbp-1F8h]
  char v147; // [rsp+48h] [rbp-1F0h]
  unsigned __int64 v149; // [rsp+58h] [rbp-1E0h]
  __int64 v150; // [rsp+60h] [rbp-1D8h]
  _QWORD *v151; // [rsp+68h] [rbp-1D0h]
  void *v152; // [rsp+70h] [rbp-1C8h] BYREF
  void *v153; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 v154; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v155; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v156; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v157; // [rsp+98h] [rbp-1A0h] BYREF
  __int64 v158; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v159; // [rsp+A8h] [rbp-190h] BYREF
  __int64 v160; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v161; // [rsp+B8h] [rbp-180h] BYREF
  __int64 v162; // [rsp+C0h] [rbp-178h] BYREF
  __int64 v163; // [rsp+C8h] [rbp-170h] BYREF
  __int64 v164; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v165; // [rsp+D8h] [rbp-160h] BYREF
  __int64 v166; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v167; // [rsp+E8h] [rbp-150h] BYREF
  __int64 v168; // [rsp+F0h] [rbp-148h] BYREF
  __int64 v169; // [rsp+F8h] [rbp-140h] BYREF
  __int64 v170; // [rsp+100h] [rbp-138h] BYREF
  __int64 v171; // [rsp+108h] [rbp-130h] BYREF
  __int64 v172; // [rsp+110h] [rbp-128h] BYREF
  __int64 v173; // [rsp+118h] [rbp-120h] BYREF
  __int64 v174; // [rsp+120h] [rbp-118h] BYREF
  __int64 v175; // [rsp+128h] [rbp-110h] BYREF
  __int64 v176; // [rsp+130h] [rbp-108h] BYREF
  __int64 v177; // [rsp+138h] [rbp-100h] BYREF
  __int64 v178; // [rsp+140h] [rbp-F8h] BYREF
  __int64 v179; // [rsp+148h] [rbp-F0h] BYREF
  __int64 v180; // [rsp+150h] [rbp-E8h] BYREF
  __int64 v181; // [rsp+158h] [rbp-E0h] BYREF
  time_t timer[4]; // [rsp+160h] [rbp-D8h] BYREF
  _QWORD v183[4]; // [rsp+180h] [rbp-B8h] BYREF
  __int64 v184; // [rsp+1A0h] [rbp-98h] BYREF
  __m128i v185; // [rsp+1A8h] [rbp-90h]
  __int64 v186; // [rsp+1B8h] [rbp-80h]
  int v187; // [rsp+1C0h] [rbp-78h]
  int v188; // [rsp+1C4h] [rbp-74h]
  int v189; // [rsp+1C8h] [rbp-70h]
  __int64 v190; // [rsp+1CCh] [rbp-6Ch]
  unsigned __int16 v191; // [rsp+1D4h] [rbp-64h]
  unsigned __int64 v192; // [rsp+1D8h] [rbp-60h]
  __int64 v193; // [rsp+1E0h] [rbp-58h]
  __int64 v194; // [rsp+1E8h] [rbp-50h]
  __int64 v195; // [rsp+1F0h] [rbp-48h]
  unsigned __int64 v196; // [rsp+1F8h] [rbp-40h]

  v10 = (_QWORD *)a5;
  v11 = a1;
  v14 = *(unsigned __int16 *)(a5 + 24);
  v15 = *(unsigned __int8 *)(a5 + 120);
  v196 = __readfsqword(0x28u);
  v16 = *(_QWORD *)(a5 + 304);
  v152 = nullptr;
  v153 = nullptr;
  v150 = v16;
  v149 = *(_QWORD *)(a5 + 312);
  _dwarf_set_line_table_regs_default_values(&v184, v14, v15);
  if ( (unsigned __int64)a2 >= a3 )
  {
    v49 = (char *)v152;
    alloc = _dwarf_get_alloc(a1, 15, 0);
    if ( alloc )
    {
      v153 = v152;
      v141 = 0;
      goto LABEL_30;
    }
    goto LABEL_148;
  }
  v147 = 0;
  v141 = 0;
  v18 = a2;
  v19 = v10;
  do
  {
    while ( 1 )
    {
      v38 = v18 + 1;
      dwarfstring_constructor(v183);
      dwarfstring_append_printf_u(v183, " [0x%06llx] ", &v18[-a4]);
      v40 = dwarfstring_string(v183, " [0x%06llx] ", v39);
      _dwarf_printf(a1, v40);
      dwarfstring_destructor(v183);
      v41 = *(unsigned __int8 *)v18;
      v42 = *((_BYTE *)v19 + 123);
      if ( (unsigned __int8)v41 >= v42 )
      {
        v20 = *((_BYTE *)v19 + 81);
        v21 = v41 - v42;
        v22 = *((unsigned __int8 *)v19 + 80);
        v23 = (unsigned __int8)(v41 - v42);
        v24 = v23 % *((unsigned __int8 *)v19 + 122);
        v25 = (unsigned __int8)(v23 / *((unsigned __int8 *)v19 + 122));
        if ( v20 <= 1u )
        {
          v27 = v22 * v25;
        }
        else
        {
          v26 = v192 + v25;
          v27 = v22 * ((v192 + v25) / v20);
          v192 = v26 % v20;
        }
        v28 = v27 + v184;
        v29 = v185.m128i_i64[1] + *((char *)v19 + 121);
        v184 = v28;
        v185.m128i_i64[1] = v29 + v24;
        if ( v185.m128i_i64[1] < 0 )
        {
          v88 = a1;
          dwarfstring_constructor(v183);
          v89 = "\n"
                "ERROR: DW_DLE_LINE_TABLE_LINENO_ERROR The line number computes as %d and negative line numbers are not correct.";
          dwarfstring_append_printf_i(
            v183,
            "\n"
            "ERROR: DW_DLE_LINE_TABLE_LINENO_ERROR The line number computes as %d and negative line numbers are not correct.",
            v185.m128i_i64[1]);
LABEL_127:
          v121 = dwarfstring_string(v183, v89);
          _dwarf_error_string(v88, a9, 430, v121);
          dwarfstring_destructor(v183);
          v185.m128i_i64[1] = 0;
          _dwarf_free_chain_entries(v88, v152);
          return 1;
        }
        dwarfstring_constructor(timer);
        dwarfstring_constructor(v183);
        dwarfstring_append_printf_u(v183, "Specialop %3u", (unsigned __int8)v41);
        v31 = (const char *)dwarfstring_string(timer, "Specialop %3u", v30);
        _dwarf_printf(a1, v31);
        dwarfstring_destructor(timer);
        v32 = dwarfstring_string(v183, v31);
        sub_4ABF0((__int64)a1, v32, v21, v141 + 1, &v184, a7, a8);
        dwarfstring_destructor(v183);
        dwarfstring_destructor(timer);
        v33 = _dwarf_get_alloc(a1, 9, 1);
        if ( !v33 )
          goto LABEL_106;
        v34 = *(_BYTE *)(v33 + 56);
        ++v141;
        *(_QWORD *)v33 = v184;
        *(__m128i *)(v33 + 16) = v185;
        *(_WORD *)(v33 + 32) = v186;
        *(_BYTE *)(v33 + 56) = (32 * v147)
                             | v34 & 0xC0
                             | (16 * (BYTE4(v190) & 1))
                             | (8 * (v190 & 1))
                             | (4 * (BYTE4(v190) & 1))
                             | v187 & 1
                             | (2 * (v188 & 1));
        *(_WORD *)(v33 + 34) = v191;
        *(_QWORD *)(v33 + 8) = v193;
        *(_QWORD *)(v33 + 40) = v194;
        v35 = v195;
        *(_QWORD *)(v33 + 64) = v19;
        *(_QWORD *)(v33 + 48) = v35;
        *(_DWORD *)(v33 + 72) = a8;
        v36 = _dwarf_get_alloc(a1, 31, 1);
        v37 = v36;
        if ( !v36 )
        {
LABEL_149:
          v11 = a1;
          dwarf_dealloc(a1, (void *)v33, 9u);
          v49 = (char *)v152;
          goto LABEL_107;
        }
        *(_QWORD *)v36 = v33;
        *(_DWORD *)(v36 + 8) = 9;
LABEL_9:
        _dwarf_update_chain_list(v37, &v152, &v153);
        v147 = 0;
        v18 = v38;
        v188 = 0;
        v190 = 0;
        v193 = 0;
        goto LABEL_10;
      }
      if ( (_BYTE)v41 )
      {
        if ( *((unsigned __int8 *)v19 + 136) + 1 < v42 )
        {
          v52 = *(_BYTE *)(v19[16] + v41);
          dwarfstring_constructor(v183);
          dwarfstring_append_printf_i(v183, "*** DWARF CHECK: DISCARD standard opcode %d ", v41);
          dwarfstring_append_printf_i(v183, "with %d operands: not understood.", v52);
          v54 = dwarfstring_string(v183, "with %d operands: not understood.", v53);
          _dwarf_printf(a1, v54);
          ++*a10;
          dwarfstring_destructor(v183);
          if ( v52 )
          {
            v151 = v19;
            v55 = 0;
            do
            {
              v154 = 0;
              v155 = 0;
              if ( (unsigned int)dwarf_decode_leb128(v38, &v154, &v155, a3) == 1 )
                goto LABEL_42;
              v56 = v155;
              v38 += v154;
              ++v55;
              dwarfstring_constructor(v183);
              dwarfstring_append_printf_u(v183, " %llu", v56);
              dwarfstring_append_printf_u(v183, " (0x%08llx)", v56);
              v58 = dwarfstring_string(v183, " (0x%08llx)", v57);
              _dwarf_printf(a1, v58);
              dwarfstring_destructor(v183);
            }
            while ( v52 != v55 );
            v19 = v151;
          }
          v18 = v38;
          _dwarf_printf(a1, "***\n");
          goto LABEL_10;
        }
        switch ( *v18 )
        {
          case 1:
            sub_4ABF0((__int64)a1, (__int64)"DW_LNS_copy", 1, v141 + 1, &v184, a7, a8);
            v79 = _dwarf_get_alloc(a1, 9, 1);
            v33 = v79;
            if ( !v79 )
              goto LABEL_106;
            v80 = *(_BYTE *)(v79 + 56);
            *(_QWORD *)(v79 + 64) = v19;
            ++v141;
            *(_QWORD *)v79 = v184;
            *(__m128i *)(v79 + 16) = v185;
            *(_WORD *)(v79 + 32) = v186;
            v81 = v187;
            *(_DWORD *)(v79 + 72) = a8;
            *(_BYTE *)(v79 + 56) = (32 * v147)
                                 | v80 & 0xC0
                                 | (16 * (BYTE4(v190) & 1))
                                 | (8 * (v190 & 1))
                                 | (4 * (v189 & 1))
                                 | v81 & 1
                                 | (2 * (v188 & 1));
            *(_WORD *)(v79 + 34) = v191;
            *(_QWORD *)(v79 + 8) = v193;
            *(_QWORD *)(v79 + 40) = v194;
            *(_QWORD *)(v79 + 48) = v195;
            v82 = _dwarf_get_alloc(a1, 31, 1);
            v37 = v82;
            if ( !v82 )
              goto LABEL_149;
            *(_QWORD *)v82 = v33;
            *(_DWORD *)(v82 + 8) = 9;
            goto LABEL_9;
          case 2:
            v156 = 0;
            v157 = 0;
            if ( (unsigned int)dwarf_decode_leb128(v18 + 1, &v156, &v157, a3) == 1 )
              goto LABEL_42;
            v83 = v157;
            v18 = &v38[v156];
            dwarfstring_constructor(timer);
            dwarfstring_append_printf_i(timer, "DW_LNS_advance_pc val %lld", v83);
            dwarfstring_append_printf_u(timer, " 0x%08llx\n", v83);
            v85 = dwarfstring_string(timer, " 0x%08llx\n", v84);
            _dwarf_printf(a1, v85);
            dwarfstring_destructor(timer);
            v184 += v83 * *((unsigned __int8 *)v19 + 80);
            goto LABEL_10;
          case 3:
            v158 = 0;
            v159 = 0;
            if ( (unsigned int)dwarf_decode_signed_leb128(v18 + 1, &v158, &v159, a3) == 1 )
              goto LABEL_135;
            v18 = &v38[v158];
            v144 = v159;
            dwarfstring_constructor(timer);
            dwarfstring_append_printf_i(timer, "DW_LNS_advance_line val %lld", v144);
            dwarfstring_append_printf_u(timer, " 0x%08llx\n", v144);
            v87 = dwarfstring_string(timer, " 0x%08llx\n", v86);
            _dwarf_printf(a1, v87);
            dwarfstring_destructor(timer);
            v185.m128i_i64[1] += v144;
            if ( v185.m128i_i64[1] >= 0 )
              goto LABEL_10;
            v88 = a1;
            dwarfstring_constructor(v183);
            dwarfstring_append_printf_i(
              v183,
              "\n"
              "ERROR: DW_DLE_LINE_TABLE_LINENO_ERROR The line number is %d and negative line numbers after DW_LNS_ADVANCE_LINE ",
              v185.m128i_i32[2]);
            v89 = " of %d are not correct.";
            dwarfstring_append_printf_i(v183, " of %d are not correct.", v144);
            goto LABEL_127;
          case 4:
            v160 = 0;
            v161 = 0;
            if ( (unsigned int)dwarf_decode_leb128(v18 + 1, &v160, &v161, a3) == 1 )
              goto LABEL_42;
            v18 = &v38[v160];
            if ( v161 >= 0 )
            {
              v185.m128i_i64[0] = v161;
              dwarfstring_constructor(timer);
              v90 = "DW_LNS_set_file  %ld\n";
              dwarfstring_append_printf_i(timer, "DW_LNS_set_file  %ld\n", v185.m128i_i64[0]);
LABEL_75:
              v91 = dwarfstring_string(timer, v90);
              _dwarf_printf(a1, v91);
              dwarfstring_destructor(timer);
              goto LABEL_10;
            }
            _dwarf_free_chain_entries(a1, v152);
            _dwarf_error_string(a1, a9, 499, "DW_DLE_LINE_INDEX_WRONG A DW_LNS_set_file has an Impossible file number ");
            break;
          case 5:
            v162 = 0;
            v163 = 0;
            if ( (unsigned int)dwarf_decode_leb128(v18 + 1, &v162, &v163, a3) == 1 )
              goto LABEL_42;
            v18 = &v38[v162];
            if ( v163 >= 0 )
            {
              v186 = v163;
              dwarfstring_constructor(timer);
              dwarfstring_append_printf_i(timer, "DW_LNS_set_column val %lld", v186);
              v90 = " 0x%08llx\n";
              dwarfstring_append_printf_u(timer, " 0x%08llx\n", v186);
              goto LABEL_75;
            }
            _dwarf_free_chain_entries(a1, v152);
            _dwarf_error_string(
              a1,
              a9,
              499,
              "DW_DLE_LINE_INDEX_WRONG A DW_LNS_set_column has an impossible column number ");
            break;
          case 6:
            v187 = v187 == 0;
            _dwarf_printf(a1, "DW_LNS_negate_stmt\n");
            goto LABEL_77;
          case 7:
            v188 = 1;
            _dwarf_printf(a1, "DW_LNS_set_basic_block\n");
            goto LABEL_77;
          case 8:
            v92 = *((_BYTE *)v19 + 81);
            v93 = *((unsigned __int8 *)v19 + 80);
            v94 = (unsigned __int8)((unsigned __int8)~v42 / *((_BYTE *)v19 + 122));
            if ( v92 <= 1u )
            {
              v96 = v93 * v94;
            }
            else
            {
              v95 = v192 + v94;
              v96 = v93 * ((v192 + v94) / v92);
              v192 = v95 % v92;
            }
            v184 += v96;
            dwarfstring_constructor(timer);
            dwarfstring_append_printf_u(timer, "DW_LNS_const_add_pc new address 0x%08llx\n", v184);
            v98 = dwarfstring_string(timer, "DW_LNS_const_add_pc new address 0x%08llx\n", v97);
            _dwarf_printf(a1, v98);
            dwarfstring_destructor(timer);
            goto LABEL_77;
          case 9:
            v181 = 0;
            v99 = _dwarf_read_unaligned_ck_wrapper(a1, &v181, v18 + 1, 2, a3, a9);
            v100 = v181;
            if ( v99 == 1 )
              goto LABEL_143;
            v18 += 3;
            if ( a3 < (unsigned __int64)v18 )
            {
              v136 = v18;
              v123 = a1;
              v137 = (__int64)&v136[-a4];
              if ( (unsigned __int64)v136 < a4 )
                v137 = 0xFFFFFFF;
              dwarfstring_constructor(v183);
              v126 = "DW_DLE_LINE_TABLE_BAD reading DW_LNS_fixed_advance_pc we are off this line table at section offset. 0x%x .";
              dwarfstring_append_printf_u(
                v183,
                "DW_DLE_LINE_TABLE_BAD reading DW_LNS_fixed_advance_pc we are off this line table at section offset. 0x%x .",
                v137);
              goto LABEL_131;
            }
            v101 = __CFADD__(v181, v184);
            v184 += v181;
            if ( !v101 )
            {
              v192 = 0;
              dwarfstring_constructor(timer);
              dwarfstring_append_printf_i(timer, "DW_LNS_fixed_advance_pc val %lld", v100);
              dwarfstring_append_printf_u(timer, " 0x%08llx", v100);
              v90 = " new address 0x%08llx\n";
              dwarfstring_append_printf_u(timer, " new address 0x%08llx\n", v184);
              goto LABEL_75;
            }
            _dwarf_error_string(
              a1,
              a9,
              357,
              "DW_DLE_LINE_TABLE_BAD: DW_LNS_fixed_advance_pc overflows when added to current line table pc.");
            return 1;
          case 0xA:
            LODWORD(v190) = 1;
            goto LABEL_77;
          case 0xB:
            HIDWORD(v190) = 1;
            _dwarf_printf(a1, "DW_LNS_set_prologue_end set true.\n");
            goto LABEL_77;
          case 0xC:
            v164 = 0;
            v165 = 0;
            if ( (unsigned int)dwarf_decode_leb128(v18 + 1, &v164, &v165, a3) == 1 )
              goto LABEL_42;
            v102 = v165;
            v18 = &v38[v164];
            v191 = v165;
            dwarfstring_constructor(timer);
            dwarfstring_append_printf_u(timer, "DW_LNS_set_isa new value 0x%08llx.\n", v102);
            v104 = dwarfstring_string(timer, "DW_LNS_set_isa new value 0x%08llx.\n", v103);
            _dwarf_printf(a1, v104);
            dwarfstring_destructor(timer);
            if ( v191 == v102 )
              goto LABEL_10;
            _dwarf_free_chain_entries(a1, v152);
            _dwarf_error(a1, a9, 56);
            return 1;
          case 0xD:
            if ( a8 )
            {
              v166 = 0;
              v167 = 0;
              if ( (unsigned int)dwarf_decode_signed_leb128(v18 + 1, &v166, &v167, a3) == 1 )
              {
LABEL_135:
                v59 = a1;
                v60 = "DW_DLE_LEB_IMPROPER: decode sleb runs past allowed area.e";
                goto LABEL_43;
              }
              v18 = &v38[v166];
              v105 = v185.m128i_i64[1] + v167 == 0;
              v106 = v185.m128i_i64[1] + v167 < 0;
              v107 = v185.m128i_i64[1] + v167;
              v185.m128i_i64[1] += v167;
              if ( v106 )
              {
                v88 = a1;
                v138 = v167;
                dwarfstring_constructor(v183);
                dwarfstring_append_printf_i(
                  v183,
                  "\n"
                  "ERROR: DW_DLE_LINE_TABLE_LINENO_ERROR The line number is %d and negative line numbers after DW_LNS_set_subprogram ",
                  v185.m128i_i32[2]);
                v89 = " of %d applied are not correct.";
                dwarfstring_append_printf_i(v183, " of %d applied are not correct.", v138);
                goto LABEL_127;
              }
              if ( v105 || v107 - 1 >= v149 )
              {
                dwarfstring_constructor(timer);
                dwarfstring_append_printf_i(timer, "DW_LNS_set_address_from_logical line is %lld", v185.m128i_i64[1]);
                v90 = " 0x%08llx.\n";
                dwarfstring_append_printf_u(timer, " 0x%08llx.\n", v185.m128i_i64[1]);
              }
              else
              {
                v145 = v167;
                v133 = **(_QWORD **)(v150 + 8 * v107 - 8);
                v192 = 0;
                v184 = v133;
                dwarfstring_constructor(timer);
                dwarfstring_append_printf_i(timer, "DW_LNS_set_address_from_logical %lld", v145);
                dwarfstring_append_printf_u(timer, " 0x%08llx", v145);
                v90 = "  newaddr= 0x%08llx.\n";
                dwarfstring_append_printf_u(timer, "  newaddr= 0x%08llx.\n", v184);
              }
            }
            else
            {
              v194 = 0;
              v168 = 0;
              v169 = 0;
              if ( (unsigned int)dwarf_decode_leb128(v18 + 1, &v168, &v169, a3) == 1 )
                goto LABEL_42;
              v113 = v169;
              v18 = &v38[v168];
              v195 = v169;
              dwarfstring_constructor(timer);
              dwarfstring_append_printf_i(timer, "DW_LNS_set_subprogram %lld", v113);
              v90 = " 0x%08llx\n";
              dwarfstring_append_printf_u(timer, " 0x%08llx\n", v113);
            }
            goto LABEL_75;
          case 0xE:
            v170 = 0;
            v171 = 0;
            if ( (unsigned int)dwarf_decode_signed_leb128(v18 + 1, &v170, &v171, a3) == 1 )
              goto LABEL_135;
            v108 = v171;
            v172 = 0;
            v109 = &v38[v170];
            v173 = 0;
            v194 = v171 + v141;
            if ( (unsigned int)dwarf_decode_leb128(&v38[v170], &v172, &v173, a3) != 1 )
            {
              v18 = &v109[v172];
              v195 = v173;
              dwarfstring_constructor(timer);
              dwarfstring_append_printf_i(timer, "DW_LNS_inlined_call %lld", v108);
              dwarfstring_append_printf_u(timer, " (0x%08llx),", v108);
              dwarfstring_append_printf_i(timer, "%lld", v195);
              dwarfstring_append_printf_u(timer, " (0x%08llx)", v195);
              dwarfstring_append_printf_i(timer, "  callcontext=%lld", v194);
              v90 = " (0x%08llx)\n";
              dwarfstring_append_printf_u(timer, " (0x%08llx)\n", v194);
              goto LABEL_75;
            }
            _dwarf_error_string(a1, a9, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
            v195 = 0;
            _dwarf_free_chain_entries(a1, v152);
            return 1;
          case 0xF:
            v110 = v194;
            if ( v194 - 1 < v141 )
            {
              v114 = (const __m128i **)v152;
              if ( v194 != 1 )
              {
                v115 = 1;
                if ( (v194 & 1) != 0 || (v114 = *((const __m128i ***)v152 + 2), v115 = 2, v194 != 2) )
                {
                  do
                  {
                    v115 += 2;
                    v114 = (const __m128i **)v114[2][1].m128i_i64[0];
                  }
                  while ( v194 != v115 );
                }
              }
              v116 = *v114;
              v117 = v116[2].m128i_u16[0];
              v185 = _mm_loadu_si128(v116 + 1);
              v186 = v117;
              v193 = v116->m128i_i64[1];
              v187 = v116[3].m128i_i8[8] & 1;
              v194 = v116[2].m128i_i64[1];
              v195 = v116[3].m128i_i64[0];
              dwarfstring_constructor(v183);
              dwarfstring_append_printf_u(v183, "DW_LNS_pop_context set from logical %llu", v110);
            }
            else
            {
              dwarfstring_constructor(v183);
              dwarfstring_append_printf_u(v183, "DW_LNS_pop_context does nothing, logical%llu", v110);
            }
            dwarfstring_append_printf_u(v183, " (0x%08llx)\n", v110);
            v112 = dwarfstring_string(v183, " (0x%08llx)\n", v111);
            _dwarf_printf(a1, v112);
            dwarfstring_destructor(v183);
LABEL_77:
            ++v18;
            goto LABEL_10;
          default:
            _dwarf_error_string(a1, a9, 357, "DW_DLE_LINE_TABLE_BAD: Impossible standard line table operator");
            return 1;
        }
        return 1;
      }
      v174 = 0;
      v175 = 0;
      if ( (unsigned int)dwarf_decode_leb128(v18 + 1, &v174, &v175, a3) == 1 )
        goto LABEL_42;
      v43 = &v38[v174];
      if ( (unsigned __int64)&v38[v174] >= a3 )
      {
        v123 = a1;
        v124 = &v43[-a4];
        v101 = (unsigned __int64)v43 < a4;
        v125 = nullptr;
        if ( !v101 )
          v125 = v124;
        dwarfstring_constructor(v183);
        v126 = "DW_DLE_LINE_TABLE_BAD reading extended op we are off this line table at section offset 0x%x .";
        dwarfstring_append_printf_u(
          v183,
          "DW_DLE_LINE_TABLE_BAD reading extended op we are off this line table at section offset 0x%x .",
          v125);
        goto LABEL_131;
      }
      v44 = *v43;
      v18 = v43 + 1;
      if ( a3 < (unsigned __int64)(v43 + 1) )
      {
        v128 = v43 + 1;
        v123 = a1;
        v129 = (__int64)&v43[-a4 + 1];
        if ( (unsigned __int64)v128 < a4 )
          v129 = 0xFFFFFFF;
        dwarfstring_constructor(v183);
        v126 = "DW_DLE_LINE_TABLE_BAD reading extended op opcode we are off this line table at section offset 0x%x .";
        dwarfstring_append_printf_u(
          v183,
          "DW_DLE_LINE_TABLE_BAD reading extended op opcode we are off this line table at section offset 0x%x .",
          v129);
        goto LABEL_131;
      }
      if ( v44 == 3 )
      {
        v70 = calloc(0x60u, 1u);
        v71 = v70;
        if ( !v70 )
        {
          _dwarf_error(a1, a9, 62);
          _dwarf_free_chain_entries(a1, v152);
          return 1;
        }
        _dwarf_add_to_files_list(v19, v70);
        v71[1] = v18;
        v72 = _dwarf_check_string_valid(a1, v18, v18, a3, 365, a9);
        if ( v72 )
        {
          v140 = v72;
          _dwarf_free_chain_entries(a1, v152);
          return v140;
        }
        v73 = (size_t)&v18[strlen(v18) + 1];
        v176 = 0;
        v177 = 0;
        if ( (unsigned int)dwarf_decode_leb128(v73, &v176, &v177, a3) == 1
          || (v74 = v177,
              *((_BYTE *)v71 + 88) = 1,
              v75 = v176 + v73,
              v178 = 0,
              v71[3] = v74,
              v179 = 0,
              (unsigned int)dwarf_decode_leb128(v75, &v178, &v179, a3) == 1)
          || (v76 = v178 + v75,
              v180 = 0,
              v71[4] = v179,
              v181 = 0,
              (unsigned int)dwarf_decode_leb128(v76, &v180, &v181, a3) == 1) )
        {
LABEL_42:
          v59 = a1;
          v60 = "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c";
LABEL_43:
          _dwarf_error_string(v59, a9, 329, v60);
          _dwarf_free_chain_entries(v59, v152);
          return 1;
        }
        v77 = v181;
        *((_BYTE *)v71 + 90) = 1;
        *((_WORD *)v71 + 44) = 257;
        v18 = (const char *)(v180 + v76);
        v71[5] = v77;
        dwarfstring_constructor(v183);
        dwarfstring_append_printf_s();
        dwarfstring_append_printf_i(v183, "    dir index %d\n", *((_DWORD *)v71 + 6));
        timer[0] = v71[4];
        dwarfstring_append_printf_u(v183, "    last time 0x%x ", LODWORD(timer[0]));
        ctime(timer);
        dwarfstring_append_printf_s();
        dwarfstring_append_printf_i(v183, "    file length %ld ", v71[5]);
        v62 = "0x%lx\n";
        dwarfstring_append_printf_u(v183, "0x%lx\n", v71[5]);
        goto LABEL_63;
      }
      if ( v44 > 3u )
      {
        if ( v44 == 4 )
        {
          timer[0] = 0;
          v183[0] = 0;
          if ( (unsigned int)dwarf_decode_leb128(v43 + 1, timer, v183, a3) == 1 )
            goto LABEL_42;
          v61 = v183[0];
          v18 += timer[0];
          v193 = v183[0];
          dwarfstring_constructor(v183);
          v62 = "DW_LNE_set_discriminator 0x%08llx\n";
          dwarfstring_append_printf_u(v183, "DW_LNE_set_discriminator 0x%08llx\n", v61);
LABEL_63:
          v78 = dwarfstring_string(v183, v62);
          _dwarf_printf(a1, v78);
          dwarfstring_destructor(v183);
          goto LABEL_10;
        }
LABEL_51:
        v66 = v44;
        if ( !v175 )
          goto LABEL_136;
        v146 = v175 - 1;
        v67 = a3 - (_QWORD)v18;
        if ( a3 - (unsigned __int64)v18 > 0x64 )
          v67 = 100;
        if ( v67 < v175 - 1 )
        {
LABEL_136:
          v130 = v43 + 1;
          v123 = a1;
          v131 = v175;
          v132 = (_DWORD)v43 + 1 - a4;
          if ( (unsigned __int64)v130 < a4 )
            v132 = 0xFFFFFFF;
          dwarfstring_constructor(v183);
          dwarfstring_append_printf_u(
            v183,
            "DW_DLE_LINE_TABLE_BAD reading unknown DW_LNE_extended op opcode 0x%x ",
            v66);
          dwarfstring_append_printf_u(v183, "we are off this line table at section offset 0x%x and ", v132);
          v126 = "instruction length %u.";
          dwarfstring_append_printf_u(v183, "instruction length %u.", v131);
          goto LABEL_131;
        }
        v143 = v175;
        dwarfstring_constructor(v183);
        dwarfstring_append_printf_u(v183, "DW_LNE extended op 0x%x ", v66);
        v68 = "Bytecount: %llu";
        dwarfstring_append_printf_u(v183, "Bytecount: %llu", v143);
        if ( v146 )
        {
          v118 = (unsigned __int8 *)(v43 + 1);
          dwarfstring_append();
          v119 = (unsigned __int8 *)&v43[v143];
          do
          {
            v120 = *v118;
            v68 = "%02x";
            ++v118;
            dwarfstring_append_printf_u(v183, "%02x", v120);
          }
          while ( v118 != v119 );
          v18 += v146;
        }
        v69 = dwarfstring_string(v183, v68);
        _dwarf_printf(a1, v69);
        dwarfstring_destructor(v183);
        _dwarf_printf(a1, "\n");
        goto LABEL_10;
      }
      if ( v44 != 1 )
        break;
      v189 = 1;
      v33 = _dwarf_get_alloc(a1, 9, 1);
      if ( !v33 )
      {
LABEL_106:
        v49 = (char *)v152;
        v11 = a1;
LABEL_107:
        _dwarf_free_chain_entries(v11, v49);
        _dwarf_error(v11, a9, 62);
        return 1;
      }
      sub_4ABF0((__int64)a1, (__int64)"DW_LNE_end_sequence extended", 1, v141 + 1, &v184, a7, a8);
      v63 = v184;
      *(_QWORD *)(v33 + 64) = v19;
      ++v141;
      *(_QWORD *)v33 = v63;
      *(__m128i *)(v33 + 16) = v185;
      *(_WORD *)(v33 + 32) = v186;
      v64 = v187;
      *(_DWORD *)(v33 + 72) = a8;
      *(_BYTE *)(v33 + 56) = *(_BYTE *)(v33 + 56) & 0xE0
                           | (16 * (BYTE4(v190) & 1))
                           | (8 * (v190 & 1))
                           | (4 * (v189 & 1))
                           | v64 & 1
                           | (2 * (v188 & 1));
      *(_WORD *)(v33 + 34) = v191;
      *(_QWORD *)(v33 + 8) = v193;
      *(_QWORD *)(v33 + 40) = v194;
      *(_QWORD *)(v33 + 48) = v195;
      v65 = _dwarf_get_alloc(a1, 31, 1);
      if ( !v65 )
        goto LABEL_149;
      *(_QWORD *)v65 = v33;
      *(_DWORD *)(v65 + 8) = 9;
      _dwarf_update_chain_list(v65, &v152, &v153);
      _dwarf_set_line_table_regs_default_values(&v184, *((unsigned __int16 *)v19 + 12), *((unsigned __int8 *)v19 + 120));
LABEL_10:
      if ( (unsigned __int64)v18 >= a3 )
        goto LABEL_25;
    }
    if ( v44 != 2 )
      goto LABEL_51;
    if ( (unsigned int)_dwarf_read_unaligned_ck_wrapper(a1, &v184, v43 + 1, a6, a3, a9) == 1 )
    {
LABEL_143:
      _dwarf_free_chain_entries(a1, v152);
      return 1;
    }
    dwarfstring_constructor(v183);
    dwarfstring_append_printf_u(v183, "DW_LNE_set_address address 0x%08llx\n", v184);
    v46 = dwarfstring_string(v183, "DW_LNE_set_address address 0x%08llx\n", v45);
    _dwarf_printf(a1, v46);
    dwarfstring_destructor(v183);
    v192 = 0;
    v18 += a6;
    if ( a3 < (unsigned __int64)v18 )
    {
      v134 = v18;
      v123 = a1;
      v135 = (__int64)&v134[-a4];
      if ( (unsigned __int64)v134 < a4 )
        v135 = 0xFFFFFFF;
      dwarfstring_constructor(v183);
      v126 = "DW_DLE_LINE_TABLE_BAD reading DW_LNE_set_address we are off this line table at section offset 0x%x .";
      dwarfstring_append_printf_u(
        v183,
        "DW_DLE_LINE_TABLE_BAD reading DW_LNE_set_address we are off this line table at section offset 0x%x .",
        v135);
LABEL_131:
      v127 = dwarfstring_string(v183, v126);
      _dwarf_error_string(v123, a9, 357, v127);
      dwarfstring_destructor(v183);
      _dwarf_free_chain_entries(v123, v152);
      return 1;
    }
    v147 = 1;
  }
  while ( (unsigned __int64)v18 < a3 );
LABEL_25:
  v11 = a1;
  v10 = v19;
  alloc = _dwarf_get_alloc(a1, 15, v141);
  v48 = v152;
  v49 = (char *)v152;
  if ( !alloc )
  {
LABEL_148:
    v153 = v49;
    goto LABEL_107;
  }
  v153 = v152;
  if ( v141 )
  {
    v50 = 0;
    while ( 1 )
    {
      *(_QWORD *)(alloc + 8 * v50++) = *v48;
      *(_QWORD *)v153 = 0;
      v49 = (char *)v153;
      *((_DWORD *)v153 + 2) = 0;
      v153 = *((void **)v49 + 2);
      dwarf_dealloc(a1, v49, 0x1Fu);
      if ( v50 == v141 )
        break;
      v48 = v153;
    }
  }
LABEL_30:
  if ( a7 | a8 ^ 1 )
  {
    v10[38] = alloc;
    v10[39] = v141;
    dwarfstring_constructor(v183);
    if ( a7 )
    {
      if ( !v141 )
      {
        v49 = " Line table is present (offset 0x%08llx) but no lines present\n";
        dwarfstring_append_printf_u(v183, " Line table is present (offset 0x%08llx) but no lines present\n", v10[2]);
      }
      goto LABEL_34;
    }
    if ( !a8 )
    {
      if ( !v141 )
      {
        v49 = " Line table present (offset 0x%08llx) but no logicals lines present\n";
        dwarfstring_append_printf_u(
          v183,
          " Line table present (offset 0x%08llx) but no logicals lines present\n",
          v10[2]);
      }
      goto LABEL_34;
    }
  }
  else
  {
    v10[40] = alloc;
    v10[41] = v141;
    dwarfstring_constructor(v183);
  }
  if ( !v141 )
  {
    v49 = " Line table present (offset 0x%08llx) but no actuals lines present\n";
    dwarfstring_append_printf_u(v183, " Line table present (offset 0x%08llx) but no actuals lines present\n", v10[2]);
  }
LABEL_34:
  if ( dwarfstring_strlen(v183) )
  {
    v122 = dwarfstring_string(v183, v49);
    _dwarf_printf(v11, v122);
  }
  dwarfstring_destructor(v183);
  return 0;
}

