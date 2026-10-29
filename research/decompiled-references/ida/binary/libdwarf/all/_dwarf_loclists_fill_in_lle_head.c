__int64 __fastcall dwarf_loclists_fill_in_lle_head(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned __int64 a4,
        __int64 a5,
        struct Dwarf_Debug_s *a6)
{
  __int64 v7; // r15
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // r13d
  int v16; // eax
  unsigned __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __m128i v21; // xmm0
  unsigned __int64 v22; // xmm1_8
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v27; // r13
  __int64 v28; // r10
  unsigned __int64 v29; // r8
  __int64 v30; // rsi
  struct Dwarf_Debug_s *v31; // r8
  __int16 v32; // ax
  int v33; // ecx
  __int64 v34; // rsi
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // r15
  unsigned __int8 *v38; // r15
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdi
  int v42; // ecx
  __int64 v43; // rsi
  __int64 v44; // rax
  __m128 v45; // xmm0
  __int64 v46; // rdi
  __m128i v47; // xmm0
  __int64 v48; // rdi
  __int64 v49; // rax
  __m128i si128; // xmm0
  __m128i *v51; // rax
  __m128i *v52; // r12
  bool v53; // zf
  int v54; // edx
  __int64 v55; // rax
  unsigned int v56; // ecx
  struct Dwarf_Debug_s *v57; // r12
  __int64 v58; // rdi
  __int64 alloc; // rax
  unsigned int v60; // ecx
  unsigned __int16 v61; // r10
  Dwarf_Debug v62; // r9
  const __m128i *v63; // rbx
  unsigned int v64; // r14d
  __int64 v65; // r13
  Dwarf_Debug v66; // r15
  unsigned __int64 v67; // r12
  __m128i *v68; // rdi
  unsigned __int64 v69; // rdx
  unsigned __int16 v70; // r10
  __int64 v71; // r9
  struct Dwarf_Debug_s *v72; // r12
  unsigned int v73; // ebx
  __int64 v74; // r13
  unsigned __int64 v75; // r15
  __int64 v76; // rbp
  unsigned int v77; // eax
  unsigned __int64 v78; // [rsp+8h] [rbp-100h]
  struct Dwarf_Debug_s *v79; // [rsp+8h] [rbp-100h]
  __int64 v80; // [rsp+8h] [rbp-100h]
  int v81; // [rsp+8h] [rbp-100h]
  unsigned int v82; // [rsp+8h] [rbp-100h]
  unsigned __int16 v83; // [rsp+8h] [rbp-100h]
  unsigned int v84; // [rsp+8h] [rbp-100h]
  unsigned __int64 v85; // [rsp+10h] [rbp-F8h] BYREF
  struct Dwarf_Debug_s *v86; // [rsp+18h] [rbp-F0h]
  Dwarf_Debug v87; // [rsp+20h] [rbp-E8h]
  __int64 *v88; // [rsp+28h] [rbp-E0h]
  __int64 *v89; // [rsp+30h] [rbp-D8h]
  unsigned __int8 **v90; // [rsp+38h] [rbp-D0h]
  unsigned int *v91; // [rsp+40h] [rbp-C8h]
  int *v92; // [rsp+48h] [rbp-C0h]
  __int64 *v93; // [rsp+50h] [rbp-B8h]
  __int64 *v94; // [rsp+58h] [rbp-B0h]
  struct Dwarf_Debug_s *v95; // [rsp+60h] [rbp-A8h]
  int v96; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v97; // [rsp+70h] [rbp-98h] BYREF
  int v98; // [rsp+74h] [rbp-94h] BYREF
  __int64 v99; // [rsp+78h] [rbp-90h] BYREF
  __int64 v100; // [rsp+80h] [rbp-88h] BYREF
  __int64 v101; // [rsp+88h] [rbp-80h] BYREF
  __int64 v102; // [rsp+90h] [rbp-78h] BYREF
  __int64 v103; // [rsp+98h] [rbp-70h] BYREF
  __m128i v104; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v105[24]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v106; // [rsp+C8h] [rbp-40h]

  v106 = __readfsqword(0x28u);
  if ( !a2 )
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL NULL attribute argument passed to _dwarf_loclists_fill_in_lle_head()");
    return 1;
  }
  v7 = *(_QWORD *)(a2 + 8);
  v11 = *(_QWORD *)(a1 + 3384);
  v12 = *(_QWORD *)(a1 + 6648);
  if ( *(_QWORD *)v7 == a1 )
  {
LABEL_5:
    v16 = *(_DWORD *)(v7 + 440);
    v17 = a4;
    if ( v16 )
      v17 = *(_QWORD *)(v7 + 424);
    if ( v17 >= v11 )
    {
      _dwarf_error_string(
        a1,
        a6,
        505,
        "DW_DLE_LLE_ERROR: a .debug_loclists offset is greater than the loclists section size");
      return 1;
    }
    v18 = *(_QWORD *)(a1 + 6648);
    if ( v18 )
    {
      v19 = *(_QWORD *)(a1 + 6640);
      if ( v19 != 1 )
      {
        if ( v16 )
          v17 = *(_QWORD *)(v7 + 424);
        if ( !v19 )
        {
LABEL_17:
          v79 = a6;
          dwarfstring_constructor(&v104);
          dwarfstring_append_printf_u(
            &v104,
            "DW_DLE_LOCLISTS_ERROR: loclist ran off end  finding target offset of 0x%08llx",
            v17);
          dwarfstring_append();
          v23 = dwarfstring_string(&v104, " Not found anywhere in .debug_loclists[.dwo] data. Corrupted data?");
          v24 = (unsigned __int64)v79;
          v25 = v23;
          goto LABEL_18;
        }
        v20 = 0;
        while ( 1 )
        {
          v21 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v18 + 8 * v20) + 16LL));
          v22 = _mm_add_epi64(_mm_srli_si128(v21, 8), v21).m128i_u64[0];
          if ( v17 >= v21.m128i_i64[0] && v17 < v22 )
            break;
          if ( v19 == ++v20 )
            goto LABEL_17;
        }
        v12 += 8 * v20;
LABEL_27:
        v27 = *(_QWORD *)v12;
        v28 = *(unsigned __int8 *)(*(_QWORD *)v12 + 40LL);
        v29 = *(_QWORD *)(*(_QWORD *)v12 + 48LL);
        if ( a4 < v29 || a3 != 34 )
        {
          v30 = *(_QWORD *)(v27 + 72);
          v31 = *(struct Dwarf_Debug_s **)(v27 + 112);
          *(_QWORD *)(a5 + 72) = v27;
          *(_QWORD *)(a5 + 64) = v20;
          v32 = *(_WORD *)(v27 + 44);
          *(_DWORD *)(a5 + 28) = v28;
          *(_WORD *)(a5 + 20) = v32;
          v33 = *(unsigned __int8 *)(v27 + 42);
          *(_DWORD *)(a5 + 24) = v33;
          *(_DWORD *)(a5 + 104) = *(unsigned __int8 *)(v27 + 43);
          if ( a3 == 34 )
          {
            v104.m128i_i64[0] = 0;
            v34 = v28 * a4 + v30;
            if ( __CFADD__(v28, v34) )
            {
              _dwarf_error_string(a1, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
            }
            else if ( (unsigned __int64)v31 < v28 + v34 )
            {
              _dwarf_error_string(a1, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
            }
            else
            {
              v87 = a6;
              v86 = v31;
              v85 = v11;
              (*(void (__fastcall **)(__m128i *))(a1 + 8296))(&v104);
              v31 = v86;
              a6 = v87;
              if ( v104.m128i_i64[0] >= *(_QWORD *)(v27 + 24) )
              {
                _dwarf_error_string(
                  a1,
                  v87,
                  469,
                  "DW_DLE_LOCLISTS_ERROR: A DW_FORM_loclistx value is too large for the space in .debug_loclists[.dwo]");
              }
              else
              {
                a4 = *(_QWORD *)(v27 + 64) + v104.m128i_i64[0];
                if ( a4 < v85 )
                {
                  LODWORD(v28) = *(_DWORD *)(a5 + 28);
                  v33 = *(unsigned __int16 *)(a5 + 24);
                  goto LABEL_36;
                }
                _dwarf_error_string(
                  a1,
                  v87,
                  469,
                  "DW_DLE_LOCLISTS_ERROR: A DW_FORM_loclistx global offset is too large to  the space in .debug_loclists[.dwo]");
              }
            }
          }
          else
          {
            if ( a4 < v11 )
            {
LABEL_36:
              *(_QWORD *)(a5 + 168) = v31;
              v35 = *(_DWORD *)(v7 + 344);
              v91 = &v97;
              *(_DWORD *)(a5 + 120) = v35;
              v36 = *(_QWORD *)(v7 + 392);
              v90 = (unsigned __int8 **)&v103;
              v89 = &v102;
              *(_QWORD *)(a5 + 128) = v36;
              *(_QWORD *)(a5 + 160) = a4;
              *(_QWORD *)(a5 + 48) = a1;
              v37 = *(_QWORD *)(a1 + 3376);
              v88 = &v101;
              v94 = &v100;
              v38 = (unsigned __int8 *)(a4 + v37);
              v93 = &v99;
              v92 = &v98;
              v85 = a4;
              v39 = 0;
              *(_QWORD *)(a5 + 152) = v38;
              LODWORD(v87) = v33;
              v96 = v28;
              v95 = v31;
              v80 = a1;
              v86 = a6;
              do
              {
                v97 = 0;
                v98 = 0;
                v99 = 0;
                v100 = 0;
                v101 = 0;
                v102 = 0;
                v103 = 0;
                v104 = 0;
                memset(v105, 0, sizeof(v105));
                v15 = sub_3C0D0(
                        v80,
                        v38,
                        v85,
                        (unsigned __int64)v95,
                        (unsigned __int16)v87,
                        v91,
                        v92,
                        v93,
                        v94,
                        v88,
                        v89,
                        v90,
                        (__int64)v86);
                if ( v15 )
                  return 1;
                v51 = (__m128i *)calloc(0x98u, 1u);
                v52 = v51;
                if ( !v51 )
                {
                  _dwarf_error_string(
                    v80,
                    v86,
                    62,
                    "DW_DLE_ALLOC_FAIL: Out of memory in building list of loclists entries on a DIE.");
                  return 1;
                }
                _dwarf_locdesc_c_constructor(v80, v51);
                v53 = *(_QWORD *)(a5 + 80) == 0;
                v52[1].m128i_i64[0] = (__int64)&dword_ADAB4;
                if ( v53 )
                  *(_QWORD *)(a5 + 80) = v52;
                else
                  *(_QWORD *)(*(_QWORD *)(a5 + 88) + 144LL) = v52;
                v40 = *(_QWORD *)(a5 + 8);
                v41 = v99;
                *(_QWORD *)(a5 + 88) = v52;
                v42 = v98;
                v52[1].m128i_i64[0] = (__int64)&dword_ADAB4;
                v43 = v40 + 1;
                v44 = v101;
                v52[1].m128i_i64[1] = v41;
                v45 = _mm_loadh_ps((const double *)&v85);
                v46 = v100;
                *(_QWORD *)(a5 + 8) = v43;
                v104.m128i_i64[0] = v44;
                *(__m128 *)&v105[8] = v45;
                v104.m128i_i64[1] = v103;
                LOWORD(v44) = *(_WORD *)(a5 + 40);
                v47 = _mm_load_si128(&v104);
                v52[2].m128i_i64[1] = v46;
                *(_WORD *)v105 = v44;
                v48 = *(_QWORD *)&v105[16];
                v52->m128i_i16[0] = v44;
                v49 = v97;
                v52[4] = v47;
                si128 = _mm_load_si128((const __m128i *)v105);
                v52->m128i_i8[2] = v42;
                v38 += v49;
                v39 += v49;
                v52[3].m128i_i64[1] = v49;
                v52[6].m128i_i64[0] = v48;
                v52->m128i_i64[1] = v49;
                v52[5] = si128;
              }
              while ( v42 );
              v56 = (unsigned int)v87;
              v85 = v39;
              v57 = (struct Dwarf_Debug_s *)v80;
              if ( !v43 )
              {
LABEL_49:
                *(_QWORD *)(a5 + 96) = v85;
                return v15;
              }
              v58 = v80;
              v87 = v86;
              LODWORD(v86) = v96;
              v82 = v56;
              alloc = _dwarf_get_alloc(v58, 58, v43);
              v60 = v82;
              v61 = (unsigned __int16)v86;
              v62 = v87;
              if ( alloc )
              {
                v53 = *(_QWORD *)(a5 + 8) == 0;
                v63 = *(const __m128i **)(a5 + 80);
                *(_QWORD *)a5 = alloc;
                if ( v53 )
                {
                  *(_OWORD *)(a5 + 80) = 0;
                }
                else
                {
                  v83 = v61;
                  v64 = v60;
                  LODWORD(v86) = v15;
                  v65 = alloc;
                  v66 = v62;
                  v87 = v57;
                  v67 = 0;
                  do
                  {
                    v68 = (__m128i *)v63;
                    ++v67;
                    v65 += 152;
                    *(__m128i *)(v65 - 152) = _mm_loadu_si128(v63);
                    *(__m128i *)(v65 - 136) = _mm_loadu_si128(v63 + 1);
                    *(__m128i *)(v65 - 120) = _mm_loadu_si128(v63 + 2);
                    *(__m128i *)(v65 - 104) = _mm_loadu_si128(v63 + 3);
                    *(__m128i *)(v65 - 88) = _mm_loadu_si128(v63 + 4);
                    *(__m128i *)(v65 - 72) = _mm_loadu_si128(v63 + 5);
                    *(__m128i *)(v65 - 56) = _mm_loadu_si128(v63 + 6);
                    *(__m128i *)(v65 - 40) = _mm_loadu_si128(v63 + 7);
                    *(__m128i *)(v65 - 24) = _mm_loadu_si128(v63 + 8);
                    *(_QWORD *)(v65 - 8) = v63[9].m128i_i64[0];
                    v63 = (const __m128i *)v63[9].m128i_i64[0];
                    free(v68);
                    v69 = *(_QWORD *)(a5 + 8);
                  }
                  while ( v67 < v69 );
                  v70 = v83;
                  v15 = (unsigned int)v86;
                  v71 = (__int64)v66;
                  v72 = v87;
                  *(_OWORD *)(a5 + 80) = 0;
                  if ( v69 )
                  {
                    v84 = v15;
                    v73 = v70;
                    v74 = a5;
                    v75 = 0;
                    v76 = v71;
                    do
                    {
                      v77 = _dwarf_fill_in_locdesc_op_c(
                              v72,
                              v75,
                              v74,
                              *(_QWORD *)v74 + 152 * v75 + 64,
                              v64,
                              v73,
                              *(unsigned __int16 *)(v74 + 20),
                              *(_QWORD *)(*(_QWORD *)v74 + 152 * v75 + 24),
                              *(_QWORD *)(*(_QWORD *)v74 + 152 * v75 + 40),
                              *(unsigned __int8 *)(*(_QWORD *)v74 + 152 * v75 + 2),
                              v76);
                      if ( v77 )
                        return v77;
                      ++v75;
                    }
                    while ( v75 < *(_QWORD *)(v74 + 8) );
                    a5 = v74;
                    v15 = v84;
                  }
                }
                goto LABEL_49;
              }
              _dwarf_error_string(
                v57,
                v87,
                62,
                "DW_DLE_ALLOC_FAIL: Out of memory in copying list of locdescs into array ");
              return 1;
            }
            _dwarf_error_string(
              a1,
              a6,
              469,
              "DW_DLE_LOCLISTS_ERROR: A loclist global offset is too large for the space in .debug_loclists[.dwo]");
          }
          return 1;
        }
        v85 = (unsigned __int64)a6;
        v81 = v29;
        dwarfstring_constructor(&v104);
        dwarfstring_append_printf_u(&v104, "DW_DLE_LOCLISTS_ERROR: loclists table index of %u", a4);
        dwarfstring_append_printf_u(&v104, " too large for table of %u entries.", v81);
        v55 = dwarfstring_string(&v104, " too large for table of %u entries.", v54);
        v24 = v85;
        v25 = v55;
LABEL_18:
        _dwarf_error_string(a1, v24, 469, v25);
        dwarfstring_destructor(&v104);
        return 1;
      }
    }
    else if ( !v12 )
    {
      _dwarf_error_string(a1, a6, 469, "DW_DLE_LOCLISTS_ERROR: no .debug_loclists context available");
      return 1;
    }
    v20 = 0;
    goto LABEL_27;
  }
  v104.m128i_i64[0] = 0;
  v13 = *(_DWORD *)(v7 + 336);
  v85 = v12;
  v78 = v11;
  if ( v13 )
  {
    v86 = a6;
    v14 = _dwarf_search_for_signature((Dwarf_Debug)a1);
    a6 = v86;
    v11 = v78;
    v7 = v104.m128i_i64[0];
    v12 = v85;
    v15 = v14;
    if ( !v14 )
      goto LABEL_5;
    if ( v14 == 1 )
      _dwarf_error_string(
        a1,
        v86,
        505,
        "DW_DLE_RLE_ERROR: a .debug_loclists cu context cannot be found with the correct signature");
  }
  else
  {
    v15 = 1;
    _dwarf_error_string(
      a1,
      a6,
      505,
      "DW_DLE_LLE_ERROR: a .debug_loclists cu context cannot be found as there is no signature to use");
  }
  return v15;
}

