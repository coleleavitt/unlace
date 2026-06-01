__int64 __fastcall sub_369A0(
        struct Dwarf_Debug_s *a1,
        const char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int16 a6,
        int a7,
        int a8,
        int a9,
        __int32 a10,
        __int64 a11)
{
  _QWORD *v11; // r15
  struct Dwarf_Debug_s *v14; // rbp
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // r13
  unsigned __int8 v20; // al
  unsigned __int8 v21; // dl
  __int64 v22; // rdi
  unsigned __int8 v23; // cl
  __int64 v24; // rax
  unsigned __int64 v25; // rtt
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int8 v30; // dl
  const char *v31; // r15
  const char *v32; // r10
  unsigned __int8 v33; // dl
  struct Dwarf_Debug_s *v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // r13
  const char *v37; // rsi
  __int64 v38; // rax
  int v39; // edx
  int v40; // r13d
  int v41; // ebp
  struct Dwarf_Debug_s *v42; // rbp
  const char *v43; // rcx
  __int64 v45; // rax
  __m128i *v46; // r14
  char v47; // dl
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rdx
  __int64 alloc; // r13
  void *v53; // rsi
  __int64 v54; // rbx
  void **v55; // rsi
  int v56; // eax
  int v57; // r13d
  __int64 v58; // rax
  void *v59; // r12
  char v60; // dl
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // r12
  unsigned int v64; // eax
  size_t v65; // r14
  __int64 v66; // rax
  size_t v67; // r14
  size_t v68; // r14
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  char v72; // dl
  __int64 v73; // rax
  char v74; // si
  bool v75; // sf
  struct Dwarf_Debug_s *v76; // rbp
  const char *v77; // rsi
  unsigned __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rax
  unsigned __int64 v81; // rtt
  unsigned __int64 v82; // rax
  bool v83; // cf
  bool v84; // zf
  __int64 v85; // rax
  const char *v86; // r15
  const __m128i **v87; // rax
  __int64 v88; // rcx
  const __m128i *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  const char *v94; // rdx
  const char *v95; // r13
  __int64 v96; // rdx
  __int64 v97; // r13
  __int64 v98; // rdx
  __int64 v99; // r13
  __int64 v100; // rdx
  __int64 v101; // r13
  unsigned __int64 v103; // [rsp+8h] [rbp-200h]
  unsigned int v104; // [rsp+10h] [rbp-1F8h]
  char v105; // [rsp+18h] [rbp-1F0h]
  unsigned __int8 v106; // [rsp+18h] [rbp-1F0h]
  __int64 v107; // [rsp+18h] [rbp-1F0h]
  __int64 v108; // [rsp+18h] [rbp-1F0h]
  __int64 v109; // [rsp+20h] [rbp-1E8h]
  unsigned __int64 v111; // [rsp+30h] [rbp-1D8h]
  unsigned __int64 v112; // [rsp+38h] [rbp-1D0h]
  __int64 v113; // [rsp+40h] [rbp-1C8h]
  _QWORD *v114; // [rsp+48h] [rbp-1C0h]
  void *v115; // [rsp+58h] [rbp-1B0h] BYREF
  void *v116; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v117; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v118; // [rsp+70h] [rbp-198h] BYREF
  __int64 v119; // [rsp+78h] [rbp-190h] BYREF
  __int64 v120; // [rsp+80h] [rbp-188h] BYREF
  __int64 v121; // [rsp+88h] [rbp-180h] BYREF
  __int64 v122; // [rsp+90h] [rbp-178h] BYREF
  __int64 v123; // [rsp+98h] [rbp-170h] BYREF
  __int64 v124; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v125; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v126; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v127; // [rsp+B8h] [rbp-150h] BYREF
  unsigned __int64 v128; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v129; // [rsp+C8h] [rbp-140h] BYREF
  __int64 v130; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-130h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-120h] BYREF
  __int64 v134; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v135; // [rsp+F8h] [rbp-110h] BYREF
  __int64 v136; // [rsp+100h] [rbp-108h] BYREF
  __int64 v137; // [rsp+108h] [rbp-100h] BYREF
  __int64 v138; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v139; // [rsp+118h] [rbp-F0h] BYREF
  __int64 v140; // [rsp+120h] [rbp-E8h] BYREF
  __int64 v141; // [rsp+128h] [rbp-E0h] BYREF
  __int64 v142; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v143; // [rsp+138h] [rbp-D0h] BYREF
  __int64 v144; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v145; // [rsp+148h] [rbp-C0h] BYREF
  _QWORD v146[4]; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v147; // [rsp+170h] [rbp-98h] BYREF
  __m128i v148; // [rsp+178h] [rbp-90h]
  __int64 v149; // [rsp+188h] [rbp-80h]
  int v150; // [rsp+190h] [rbp-78h]
  int v151; // [rsp+194h] [rbp-74h]
  int v152; // [rsp+198h] [rbp-70h]
  __int64 v153; // [rsp+19Ch] [rbp-6Ch]
  __int16 v154; // [rsp+1A4h] [rbp-64h]
  unsigned __int64 v155; // [rsp+1A8h] [rbp-60h]
  __int64 v156; // [rsp+1B0h] [rbp-58h]
  __int64 v157; // [rsp+1B8h] [rbp-50h]
  __int64 v158; // [rsp+1C0h] [rbp-48h]
  unsigned __int64 v159; // [rsp+1C8h] [rbp-40h]

  v11 = (_QWORD *)a5;
  v14 = a1;
  v16 = *(unsigned __int8 *)(a5 + 120);
  v17 = *(unsigned __int16 *)(a5 + 24);
  v159 = __readfsqword(0x28u);
  v18 = *(_QWORD *)(a5 + 304);
  v115 = nullptr;
  v116 = nullptr;
  v113 = v18;
  v112 = *(_QWORD *)(a5 + 312);
  _dwarf_set_line_table_regs_default_values(&v147, v17, v16);
  if ( (unsigned __int64)a2 >= a3 )
  {
    v103 = 0;
    alloc = _dwarf_get_alloc(a1, 15, 0);
    if ( alloc )
    {
LABEL_47:
      if ( a9 | a10 ^ 1 )
      {
        v11[38] = alloc;
        v11[39] = v103;
      }
      else
      {
        v11[40] = alloc;
        v11[41] = v103;
      }
      return 0;
    }
    v53 = v115;
LABEL_137:
    v116 = v53;
    goto LABEL_134;
  }
  v111 = a4;
  v19 = v11;
  v105 = 0;
  v103 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v29 = *(unsigned __int8 *)a2;
      v30 = *((_BYTE *)v19 + 123);
      v31 = a2 + 1;
      if ( (unsigned __int8)v29 >= v30 )
      {
        v20 = v29 - v30;
        v21 = *((_BYTE *)v19 + 81);
        v22 = *((unsigned __int8 *)v19 + 80);
        v23 = v20 % *((_BYTE *)v19 + 122);
        v24 = (unsigned __int8)(v20 / *((_BYTE *)v19 + 122));
        if ( v21 <= 1u )
        {
          v26 = v22 * v24;
        }
        else
        {
          v25 = v155 + v24;
          v26 = v22 * ((v155 + v24) / v21);
          v155 = v25 % v21;
        }
        v27 = v26 + v147;
        v28 = v148.m128i_i64[1] + *((char *)v19 + 121);
        v147 = v27;
        v148.m128i_i64[1] = v28 + v23;
        if ( v148.m128i_i64[1] < 0 )
        {
          v76 = a1;
          dwarfstring_constructor(v146);
          v77 = "\n"
                "ERROR: DW_DLE_LINE_TABLE_LINENO_ERROR The line number computes as %d and negative line numbers are not correct.";
          dwarfstring_append_printf_i(
            v146,
            "\n"
            "ERROR: DW_DLE_LINE_TABLE_LINENO_ERROR The line number computes as %d and negative line numbers are not correct.",
            v148.m128i_i64[1]);
LABEL_125:
          v93 = dwarfstring_string(v146, v77);
          _dwarf_error_string(v76, a11, 430, v93);
          dwarfstring_destructor(v146);
          v148.m128i_i64[1] = 0;
          _dwarf_free_chain_entries(v76, v115);
          return 1;
        }
        if ( a8 )
        {
          v45 = _dwarf_get_alloc(a1, 9, 1);
          v46 = (__m128i *)v45;
          if ( !v45 )
            goto LABEL_133;
          v47 = *(_BYTE *)(v45 + 56);
          *(_QWORD *)v45 = v147;
          *(__m128i *)(v45 + 16) = v148;
          *(_WORD *)(v45 + 32) = v149;
          *(_BYTE *)(v45 + 56) = (32 * v105)
                               | v47 & 0xC0
                               | (16 * (BYTE4(v153) & 1))
                               | (8 * (v153 & 1))
                               | (4 * (BYTE4(v153) & 1))
                               | v150 & 1
                               | (2 * (v151 & 1));
          *(_WORD *)(v45 + 34) = v154;
          *(_QWORD *)(v45 + 8) = v156;
          *(_QWORD *)(v45 + 40) = v157;
          v48 = v158;
          v46[4].m128i_i64[0] = (__int64)v19;
          v46[3].m128i_i64[0] = v48;
          v46[4].m128i_i32[2] = a10;
LABEL_37:
          ++v103;
          v49 = _dwarf_get_alloc(a1, 31, 1);
          if ( !v49 )
          {
            v14 = a1;
            dwarf_dealloc(a1, v46, 9u);
            v53 = v115;
            goto LABEL_134;
          }
          *(_QWORD *)v49 = v46;
          *(_DWORD *)(v49 + 8) = 9;
          _dwarf_update_chain_list(v49, &v115, &v116);
          v105 = 0;
        }
LABEL_7:
        v151 = 0;
        a2 = v31;
        v153 = 0;
        v156 = 0;
        goto LABEL_8;
      }
      if ( (_BYTE)v29 )
      {
        if ( *((unsigned __int8 *)v19 + 136) + 1 < v30 )
        {
          v39 = *(unsigned __int8 *)(v19[16] + v29);
          if ( *(_BYTE *)(v19[16] + v29) )
          {
            v114 = v19;
            v40 = 0;
            v41 = v39;
            do
            {
              v117 = 0;
              v118 = 0;
              if ( (unsigned int)dwarf_decode_leb128(v31, &v117, &v118, a3) == 1 )
                goto LABEL_32;
              ++v40;
              v31 += v117;
            }
            while ( v41 != v40 );
            v19 = v114;
            a2 = v31;
          }
          else
          {
LABEL_67:
            ++a2;
          }
        }
        else
        {
          switch ( *a2 )
          {
            case 1:
              if ( !a8 )
                goto LABEL_7;
              v71 = _dwarf_get_alloc(a1, 9, 1);
              v46 = (__m128i *)v71;
              if ( !v71 )
                goto LABEL_133;
              v72 = *(_BYTE *)(v71 + 56);
              v73 = v147;
              v46[4].m128i_i64[0] = (__int64)v19;
              v46->m128i_i64[0] = v73;
              v46[1] = v148;
              v46[2].m128i_i16[0] = v149;
              v74 = v150;
              v46[4].m128i_i32[2] = a10;
              v46[3].m128i_i8[8] = (32 * v105)
                                 | v72 & 0xC0
                                 | (16 * (BYTE4(v153) & 1))
                                 | (8 * (v153 & 1))
                                 | (4 * (v152 & 1))
                                 | v74 & 1
                                 | (2 * (v151 & 1));
              v46[2].m128i_i16[1] = v154;
              v46->m128i_i64[1] = v156;
              v46[2].m128i_i64[1] = v157;
              v46[3].m128i_i64[0] = v158;
              goto LABEL_37;
            case 2:
              v119 = 0;
              v120 = 0;
              if ( (unsigned int)dwarf_decode_leb128(a2 + 1, &v119, &v120, a3) == 1 )
                goto LABEL_32;
              a2 = &v31[v119];
              v147 += v120 * *((unsigned __int8 *)v19 + 80);
              goto LABEL_8;
            case 3:
              v121 = 0;
              v122 = 0;
              if ( (unsigned int)dwarf_decode_signed_leb128(a2 + 1, &v121, &v122, a3) == 1 )
                goto LABEL_132;
              v75 = v122 + v148.m128i_i64[1] < 0;
              v148.m128i_i64[1] += v122;
              a2 = &v31[v121];
              if ( !v75 )
                goto LABEL_8;
              v107 = v122;
              v76 = a1;
              dwarfstring_constructor(v146);
              dwarfstring_append_printf_i(
                v146,
                "\n"
                "ERROR: DW_DLE_LINE_TABLE_LINENO_ERROR The line number is %d and negative line numbers after DW_LNS_ADVANCE_LINE ",
                v148.m128i_i32[2]);
              v77 = " of %d are not correct.";
              dwarfstring_append_printf_i(v146, " of %d are not correct.", v107);
              goto LABEL_125;
            case 4:
              v123 = 0;
              v124 = 0;
              if ( (unsigned int)dwarf_decode_leb128(a2 + 1, &v123, &v124, a3) == 1 )
                goto LABEL_32;
              a2 = &v31[v123];
              if ( v124 < 0 )
              {
                _dwarf_free_chain_entries(a1, v115);
                _dwarf_error_string(
                  a1,
                  a11,
                  499,
                  "DW_DLE_LINE_INDEX_WRONG A DW_LNS_set_file has an Impossible file number ");
                return 1;
              }
              v148.m128i_i64[0] = v124;
              goto LABEL_8;
            case 5:
              v125 = 0;
              v126 = 0;
              if ( (unsigned int)dwarf_decode_leb128(a2 + 1, &v125, &v126, a3) == 1 )
                goto LABEL_32;
              a2 = &v31[v125];
              if ( v126 < 0 )
              {
                _dwarf_free_chain_entries(a1, v115);
                _dwarf_error_string(
                  a1,
                  a11,
                  499,
                  "DW_DLE_LINE_INDEX_WRONG A DW_LNS_set_column has an impossible column number ");
                return 1;
              }
              v149 = v126;
              goto LABEL_8;
            case 6:
              ++a2;
              v150 = v150 == 0;
              goto LABEL_8;
            case 7:
              v151 = 1;
              ++a2;
              goto LABEL_8;
            case 8:
              v78 = *((unsigned __int8 *)v19 + 81);
              v79 = *((unsigned __int8 *)v19 + 80);
              v80 = (unsigned __int8)((unsigned __int8)~v30 / *((_BYTE *)v19 + 122));
              if ( (unsigned __int8)v78 <= 1u )
              {
                v82 = v79 * v80;
              }
              else
              {
                v81 = v155 + v80;
                v82 = v79 * ((v155 + v80) / v78);
                v155 = v81 % v78;
              }
              v147 += v82;
              goto LABEL_67;
            case 9:
              v145 = 0;
              if ( (unsigned int)_dwarf_read_unaligned_ck_wrapper(a1, &v145, a2 + 1, 2, a3, a11) == 1 )
                goto LABEL_140;
              a2 += 3;
              if ( a3 < (unsigned __int64)a2 )
              {
                v34 = a1;
                v100 = 0xFFFFFFF;
                if ( (unsigned __int64)a2 >= v111 )
                  v100 = (__int64)&a2[-v111];
                v101 = v100;
                dwarfstring_constructor(v146);
                v37 = "DW_DLE_LINE_TABLE_BAD reading DW_LNS_fixed_advance_pc we are off this line table at section offset. 0x%x .";
                dwarfstring_append_printf_u(
                  v146,
                  "DW_DLE_LINE_TABLE_BAD reading DW_LNS_fixed_advance_pc we are off this line table at section offset. 0x%x .",
                  v101);
                goto LABEL_26;
              }
              v83 = __CFADD__(v145, v147);
              v147 += v145;
              if ( !v83 )
                goto LABEL_96;
              _dwarf_error_string(
                a1,
                a11,
                357,
                "DW_DLE_LINE_TABLE_BAD: DW_LNS_fixed_advance_pc overflows when added to current line table pc.");
              return 1;
            case 0xA:
              LODWORD(v153) = 1;
              goto LABEL_67;
            case 0xB:
              HIDWORD(v153) = 1;
              ++a2;
              goto LABEL_8;
            case 0xC:
              v127 = 0;
              v128 = 0;
              if ( (unsigned int)dwarf_decode_leb128(a2 + 1, &v127, &v128, a3) == 1 )
                goto LABEL_32;
              a2 = &v31[v127];
              v154 = v128;
              if ( v128 <= 0xFFFF )
                goto LABEL_8;
              _dwarf_free_chain_entries(a1, v115);
              _dwarf_error(a1, a11, 56);
              return 1;
            case 0xD:
              if ( a10 )
              {
                v129 = 0;
                v130 = 0;
                if ( (unsigned int)dwarf_decode_signed_leb128(a2 + 1, &v129, &v130, a3) == 1 )
                {
LABEL_132:
                  v42 = a1;
                  v43 = "DW_DLE_LEB_IMPROPER: decode sleb runs past allowed area.e";
                  goto LABEL_33;
                }
                a2 = &v31[v129];
                v84 = v148.m128i_i64[1] + v130 == 0;
                v75 = v148.m128i_i64[1] + v130 < 0;
                v85 = v148.m128i_i64[1] + v130;
                v148.m128i_i64[1] += v130;
                if ( v75 )
                {
                  v108 = v130;
                  v76 = a1;
                  dwarfstring_constructor(v146);
                  dwarfstring_append_printf_i(
                    v146,
                    "\n"
                    "ERROR: DW_DLE_LINE_TABLE_LINENO_ERROR The line number is %d and negative line numbers after DW_LNS_set_subprogram ",
                    v148.m128i_i32[2]);
                  v77 = " of %d applied are not correct.";
                  dwarfstring_append_printf_i(v146, " of %d applied are not correct.", v108);
                  goto LABEL_125;
                }
                if ( !v84 && v85 - 1 < v112 )
                {
                  v147 = **(_QWORD **)(v113 + 8 * v85 - 8);
LABEL_96:
                  v155 = 0;
                }
              }
              else
              {
                v157 = 0;
                v131 = 0;
                v132 = 0;
                if ( (unsigned int)dwarf_decode_leb128(a2 + 1, &v131, &v132, a3) == 1 )
                  goto LABEL_32;
                a2 = &v31[v131];
                v158 = v132;
              }
              break;
            case 0xE:
              v133 = 0;
              v134 = 0;
              if ( (unsigned int)dwarf_decode_signed_leb128(a2 + 1, &v133, &v134, a3) == 1 )
                goto LABEL_132;
              v86 = &v31[v133];
              v135 = 0;
              v157 = v134 + v103;
              v136 = 0;
              if ( (unsigned int)dwarf_decode_leb128(v86, &v135, &v136, a3) == 1 )
              {
                _dwarf_error_string(a1, a11, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
                v158 = 0;
                _dwarf_free_chain_entries(a1, v115);
                return 1;
              }
              a2 = &v86[v135];
              v158 = v136;
              goto LABEL_8;
            case 0xF:
              if ( v157 - 1 < v103 )
              {
                v87 = (const __m128i **)v115;
                if ( v157 != 1 )
                {
                  v88 = 1;
                  if ( (v157 & 1) != 0 || (v87 = *((const __m128i ***)v115 + 2), v88 = 2, v157 != 2) )
                  {
                    do
                    {
                      v88 += 2;
                      v87 = (const __m128i **)v87[2][1].m128i_i64[0];
                    }
                    while ( v157 != v88 );
                  }
                }
                v89 = *v87;
                v90 = v89[2].m128i_u16[0];
                v148 = _mm_loadu_si128(v89 + 1);
                v149 = v90;
                v156 = v89->m128i_i64[1];
                v150 = v89[3].m128i_i8[8] & 1;
                v157 = v89[2].m128i_i64[1];
                v158 = v89[3].m128i_i64[0];
              }
              goto LABEL_67;
            default:
              _dwarf_error_string(a1, a11, 357, "DW_DLE_LINE_TABLE_BAD: Impossible standard line table operator");
              return 1;
          }
        }
        goto LABEL_8;
      }
      v137 = 0;
      v138 = 0;
      if ( (unsigned int)dwarf_decode_leb128(a2 + 1, &v137, &v138, a3) == 1 )
        goto LABEL_32;
      v32 = &v31[v137];
      if ( (unsigned __int64)&v31[v137] >= a3 )
      {
        v94 = nullptr;
        v34 = a1;
        if ( (unsigned __int64)v32 >= v111 )
          v94 = &v32[-v111];
        v95 = v94;
        dwarfstring_constructor(v146);
        v37 = "DW_DLE_LINE_TABLE_BAD reading extended op we are off this line table at section offset 0x%x .";
        dwarfstring_append_printf_u(
          v146,
          "DW_DLE_LINE_TABLE_BAD reading extended op we are off this line table at section offset 0x%x .",
          v95);
        goto LABEL_26;
      }
      a2 = v32 + 1;
      v33 = *v32;
      if ( a3 < (unsigned __int64)(v32 + 1) )
      {
        v34 = a1;
        v96 = 0xFFFFFFF;
        if ( (unsigned __int64)a2 >= v111 )
          v96 = (__int64)&a2[-v111];
        v97 = v96;
        dwarfstring_constructor(v146);
        v37 = "DW_DLE_LINE_TABLE_BAD reading extended op opcode we are off this line table at section offset 0x%x .";
        dwarfstring_append_printf_u(
          v146,
          "DW_DLE_LINE_TABLE_BAD reading extended op opcode we are off this line table at section offset 0x%x .",
          v97);
        goto LABEL_26;
      }
      if ( v33 == 3 )
      {
        if ( a8 )
        {
          v62 = calloc(0x60u, 1u);
          v63 = v62;
          if ( !v62 )
          {
            _dwarf_error(a1, a11, 62);
            _dwarf_free_chain_entries(a1, v115);
            return 1;
          }
          _dwarf_add_to_files_list(v19, v62);
          v63[1] = a2;
          v64 = _dwarf_check_string_valid(a1, a2, a2, a3, 365, a11);
          if ( v64 )
          {
            v104 = v64;
            _dwarf_free_chain_entries(a1, v115);
            return v104;
          }
          v65 = (size_t)&a2[strlen(a2) + 1];
          v139 = 0;
          v140 = 0;
          if ( (unsigned int)dwarf_decode_leb128(v65, &v139, &v140, a3) == 1
            || (v66 = v140,
                *((_BYTE *)v63 + 88) = 1,
                v67 = v139 + v65,
                v141 = 0,
                v63[3] = v66,
                v142 = 0,
                (unsigned int)dwarf_decode_leb128(v67, &v141, &v142, a3) == 1)
            || (v68 = v141 + v67,
                v143 = 0,
                v63[4] = v142,
                v144 = 0,
                (unsigned int)dwarf_decode_leb128(v68, &v143, &v144, a3) == 1) )
          {
LABEL_32:
            v42 = a1;
            v43 = "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c";
LABEL_33:
            _dwarf_error_string(v42, a11, 329, v43);
            _dwarf_free_chain_entries(v42, v115);
            return 1;
          }
          v69 = v144;
          *((_BYTE *)v63 + 90) = 1;
          a2 = (const char *)(v143 + v68);
          v63[5] = v69;
          *((_WORD *)v63 + 44) = 257;
        }
        goto LABEL_8;
      }
      if ( v33 <= 3u )
        break;
      if ( v33 != 4 )
      {
LABEL_50:
        if ( !v138 )
          goto LABEL_51;
        v70 = a3 - (_QWORD)a2;
        if ( a3 - (unsigned __int64)a2 > 0x64 )
          v70 = 100;
        if ( v70 >= v138 - 1 )
        {
          a2 = &v32[v138];
          if ( a3 >= (unsigned __int64)&v32[v138] )
          {
            _dwarf_printf(a1, "\n");
            goto LABEL_8;
          }
          v34 = a1;
          v98 = 0xFFFFFFF;
          if ( (unsigned __int64)a2 >= v111 )
            v98 = (__int64)&a2[-v111];
          v99 = v98;
          dwarfstring_constructor(v146);
          v37 = "DW_DLE_LINE_TABLE_BAD reading DW_LNE extended op remaining bytes we are off this line table at section offset 0x%x .";
          dwarfstring_append_printf_u(
            v146,
            "DW_DLE_LINE_TABLE_BAD reading DW_LNE extended op remaining bytes we are off this line table at section offset 0x%x .",
            v99);
        }
        else
        {
LABEL_51:
          v56 = 0xFFFFFFF;
          v106 = *v32;
          v34 = a1;
          v109 = v138;
          if ( (unsigned __int64)a2 >= v111 )
            v56 = (_DWORD)a2 - v111;
          v57 = v56;
          dwarfstring_constructor(v146);
          dwarfstring_append_printf_u(
            v146,
            "DW_DLE_LINE_TABLE_BAD reading unknown DW_LNE_extended op opcode 0x%x ",
            v106);
          dwarfstring_append_printf_u(v146, "we are off this line table at section offset 0x%x and ", v57);
          v37 = "instruction length %u.";
          dwarfstring_append_printf_u(v146, "instruction length %u.", v109);
        }
LABEL_26:
        v38 = dwarfstring_string(v146, v37);
        _dwarf_error_string(v34, a11, 357, v38);
        dwarfstring_destructor(v146);
        _dwarf_free_chain_entries(v34, v115);
        return 1;
      }
      v145 = 0;
      v146[0] = 0;
      if ( (unsigned int)dwarf_decode_leb128(v32 + 1, &v145, v146, a3) == 1 )
        goto LABEL_32;
      a2 += v145;
      v156 = v146[0];
      if ( (unsigned __int64)a2 >= a3 )
      {
LABEL_42:
        v14 = a1;
        v11 = v19;
        v50 = _dwarf_get_alloc(a1, 15, v103);
        v51 = v115;
        alloc = v50;
        v53 = v115;
        if ( v50 )
        {
          v116 = v115;
          if ( v103 )
          {
            v54 = 0;
            while ( 1 )
            {
              *(_QWORD *)(alloc + 8 * v54++) = *v51;
              *(_QWORD *)v116 = 0;
              v55 = (void **)v116;
              *((_DWORD *)v116 + 2) = 0;
              v116 = v55[2];
              dwarf_dealloc(a1, v55, 0x1Fu);
              if ( v54 == v103 )
                break;
              v51 = v116;
            }
          }
          goto LABEL_47;
        }
        goto LABEL_137;
      }
    }
    if ( v33 == 1 )
      break;
    if ( v33 != 2 )
      goto LABEL_50;
    if ( (unsigned int)_dwarf_read_unaligned_ck_wrapper(a1, &v147, v32 + 1, a6, a3, a11) == 1 )
    {
LABEL_140:
      _dwarf_free_chain_entries(a1, v115);
      return 1;
    }
    v105 = 1;
    if ( a7 )
    {
      v91 = _dwarf_get_alloc(a1, 9, 1);
      v59 = (void *)v91;
      if ( !v91 )
      {
LABEL_133:
        v14 = a1;
        v53 = v115;
        goto LABEL_134;
      }
      *(_BYTE *)(v91 + 56) |= 0x20u;
      ++v103;
      *(_QWORD *)v91 = v147;
      v92 = _dwarf_get_alloc(a1, 31, 1);
      if ( !v92 )
        goto LABEL_144;
      *(_QWORD *)v92 = v59;
      *(_DWORD *)(v92 + 8) = 9;
      _dwarf_update_chain_list(v92, &v115, &v116);
      v105 = 0;
    }
    v155 = 0;
    a2 += a6;
    if ( a3 < (unsigned __int64)a2 )
    {
      v34 = a1;
      v35 = 0xFFFFFFF;
      if ( (unsigned __int64)a2 >= v111 )
        v35 = (__int64)&a2[-v111];
      v36 = v35;
      dwarfstring_constructor(v146);
      v37 = "DW_DLE_LINE_TABLE_BAD reading DW_LNE_set_address we are off this line table at section offset 0x%x .";
      dwarfstring_append_printf_u(
        v146,
        "DW_DLE_LINE_TABLE_BAD reading DW_LNE_set_address we are off this line table at section offset 0x%x .",
        v36);
      goto LABEL_26;
    }
LABEL_8:
    if ( (unsigned __int64)a2 >= a3 )
      goto LABEL_42;
  }
  v152 = 1;
  if ( !a8 )
  {
LABEL_58:
    _dwarf_set_line_table_regs_default_values(&v147, *((unsigned __int16 *)v19 + 12), *((unsigned __int8 *)v19 + 120));
    goto LABEL_8;
  }
  v58 = _dwarf_get_alloc(a1, 9, 1);
  v59 = (void *)v58;
  if ( !v58 )
    goto LABEL_133;
  *(_QWORD *)(v58 + 64) = v19;
  ++v103;
  *(_QWORD *)v58 = v147;
  *(__m128i *)(v58 + 16) = v148;
  *(_WORD *)(v58 + 32) = v149;
  v60 = v150;
  *(_DWORD *)(v58 + 72) = a10;
  *(_BYTE *)(v58 + 56) = *(_BYTE *)(v58 + 56) & 0xE0
                       | (16 * (BYTE4(v153) & 1))
                       | (8 * (v153 & 1))
                       | (4 * (v152 & 1))
                       | v60 & 1
                       | (2 * (v151 & 1));
  *(_WORD *)(v58 + 34) = v154;
  *(_QWORD *)(v58 + 8) = v156;
  *(_QWORD *)(v58 + 40) = v157;
  *(_QWORD *)(v58 + 48) = v158;
  v61 = _dwarf_get_alloc(a1, 31, 1);
  if ( v61 )
  {
    *(_QWORD *)v61 = v59;
    *(_DWORD *)(v61 + 8) = 9;
    _dwarf_update_chain_list(v61, &v115, &v116);
    goto LABEL_58;
  }
LABEL_144:
  v14 = a1;
  dwarf_dealloc(a1, v59, 9u);
  v53 = v115;
LABEL_134:
  _dwarf_free_chain_entries(v14, v53);
  _dwarf_error(v14, a11, 62);
  return 1;
}

