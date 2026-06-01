__int64 __fastcall dwarf_attrlist(const __m128i *a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  struct Dwarf_Debug_s **v4; // rbx
  struct Dwarf_Debug_s *v6; // r13
  __int64 result; // rax
  int abbrev_for_code; // eax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __m128i v12; // xmm3
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // r12d
  int v18; // r15d
  __int64 alloc; // rax
  void **v20; // r14
  __m128i v21; // xmm2
  unsigned __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rax
  unsigned int size_of_val; // eax
  int v26; // edx
  __int64 v27; // rax
  void *v28; // rbx
  void *v29; // rsi
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  void *v34; // rbx
  void *v35; // rsi
  void *v36; // rbx
  void *v37; // rsi
  __int64 v38; // rax
  _QWORD *v39; // rbx
  _QWORD *v40; // rcx
  void *v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  void *v46; // rbx
  void *v47; // rsi
  void *v48; // rbx
  void *v49; // rsi
  void *v50; // rbx
  void *v51; // rsi
  void *v52; // rbx
  void *v53; // rsi
  void *v54; // rbx
  void *v55; // rsi
  void *v56; // rbx
  void *v57; // rsi
  unsigned int v59; // [rsp+8h] [rbp-F0h]
  __int64 v60; // [rsp+10h] [rbp-E8h]
  struct Dwarf_Debug_s *v61; // [rsp+18h] [rbp-E0h]
  void **v63; // [rsp+28h] [rbp-D0h]
  __int64 v64; // [rsp+30h] [rbp-C8h]
  __int64 v65; // [rsp+38h] [rbp-C0h]
  __m128i v66; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v67; // [rsp+50h] [rbp-A8h]
  _QWORD *v68; // [rsp+58h] [rbp-A0h]
  _QWORD *v69; // [rsp+60h] [rbp-98h] BYREF
  void *v70; // [rsp+68h] [rbp-90h] BYREF
  __int64 v71; // [rsp+70h] [rbp-88h] BYREF
  __int64 v72; // [rsp+78h] [rbp-80h] BYREF
  __int64 v73; // [rsp+80h] [rbp-78h] BYREF
  __int64 v74; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v75[13]; // [rsp+90h] [rbp-68h] BYREF

  v75[5] = __readfsqword(0x28u);
  v69 = nullptr;
  v70 = nullptr;
  v71 = 0;
  v72 = 0;
  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  v4 = (struct Dwarf_Debug_s **)a1[1].m128i_i64[0];
  if ( !v4 )
  {
    _dwarf_error(0, a4, 104);
    return 1;
  }
  v6 = *v4;
  if ( !*v4 || *(_QWORD *)v6 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v64 = _dwarf_calculate_info_section_end_ptr(a1[1].m128i_i64[0]);
  abbrev_for_code = _dwarf_get_abbrev_for_code(v4, *(_QWORD *)a1->m128i_i64[1], &v69, &v72, a4);
  if ( abbrev_for_code == 1 )
    return 1;
  if ( abbrev_for_code == -1 )
  {
    dwarfstring_constructor(v75);
    dwarfstring_append_printf_u(
      v75,
      "DW_DLE_ABBREV_MISSING There is no abbrev present for code %u in this compilation unit. ",
      *(_QWORD *)a1->m128i_i64[1]);
    dwarfstring_append_printf_u(v75, "The highest known code in any compilation unit is %u .", v72);
    v31 = dwarfstring_string(v75, "The highest known code in any compilation unit is %u .", v30);
    v32 = 394;
    v33 = v31;
LABEL_39:
    _dwarf_error_string(v6, a4, v32, v33);
    dwarfstring_destructor(v75);
    return 1;
  }
  v10 = a1->m128i_i64[0];
  v67 = &v74;
  v71 = v10;
  v73 = 0;
  v74 = 0;
  if ( (unsigned int)dwarf_decode_leb128(v10, &v74, &v73, v64) == 1 )
  {
    dwarfstring_constructor(v75);
    dwarfstring_append_printf_u(
      v75,
      "DW_DLE_DIE_BAD: In building an attrlist we run off the end of the DIE while skipping  the DIE tag, seeing the leb length as 0x%u ",
      v74);
    v45 = dwarfstring_string(
            v75,
            "DW_DLE_DIE_BAD: In building an attrlist we run off the end of the DIE while skipping  the DIE tag, seeing th"
            "e leb length as 0x%u ",
            v44);
    v32 = 112;
    v33 = v45;
    goto LABEL_39;
  }
  v71 += v74;
  v11 = v69;
  if ( !v69[9] )
  {
    v42 = v69[5];
    v43 = _dwarf_calculate_abbrev_section_end_ptr(v4);
    result = _dwarf_fill_in_attr_form_abtable(v4, v42, v43, v69, a4);
    if ( (_DWORD)result )
      return result;
    v11 = v69;
  }
  if ( v11[6] )
  {
    v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)a1);
    v61 = v6;
    v13 = 0;
    v63 = &v70;
    v65 = 0;
    v68 = a3;
    v66 = v12;
    while ( 1 )
    {
      v14 = *(unsigned __int16 *)(v11[9] + 2 * v13);
      v15 = v11[10];
      v16 = *(unsigned __int16 *)(v15 + 2 * v13);
      v17 = v14;
      v18 = *(unsigned __int16 *)(v15 + 2 * v13);
      if ( (unsigned __int16)v14 > 0x3FFFu )
      {
        v34 = v70;
        while ( v34 )
        {
          v35 = v34;
          v34 = *((void **)v34 + 6);
          dwarf_dealloc(v61, v35, 0xAu);
        }
        _dwarf_error(v61, a4, 451);
        return 1;
      }
      if ( v16 == 33 )
      {
        v60 = *(_QWORD *)(v11[11] + 8 * v13);
        if ( !(unsigned int)_dwarf_valid_form_we_know(33, *(unsigned __int16 *)(v11[9] + 2 * v13)) )
        {
LABEL_43:
          v36 = v70;
          while ( v36 )
          {
            v37 = v36;
            v36 = *((void **)v36 + 6);
            dwarf_dealloc(v61, v37, 0xAu);
          }
          _dwarf_error(v61, a4, 321);
          return 1;
        }
        v18 = 33;
        if ( !v14 )
          goto LABEL_17;
      }
      else
      {
        if ( !(unsigned int)_dwarf_valid_form_we_know(
                              *(unsigned __int16 *)(v15 + 2 * v13),
                              *(unsigned __int16 *)(v11[9] + 2 * v13)) )
          goto LABEL_43;
        v60 = 0;
        if ( v16 == 22 )
        {
          v74 = 0;
          if ( (unsigned int)_dwarf_reference_outside_section(a1, v71, v71 + 1) )
          {
            v48 = v70;
            while ( v48 )
            {
              v49 = v48;
              v48 = *((void **)v48 + 6);
              dwarf_dealloc(v61, v49, 0xAu);
            }
            _dwarf_error_string(
              v61,
              a4,
              281,
              "DW_DLE_ATTR_OUTSIDE_SECTION:  Reading Attriutes: For DW_FORM_indirect there is no room for the form. Corrupt Dwarf");
            return 1;
          }
          if ( (unsigned int)_dwarf_leb128_uword_wrapper(v61, &v71, v64, v67, a4) )
          {
            v52 = v70;
            while ( v52 )
            {
              v53 = v52;
              v52 = *((void **)v52 + 6);
              dwarf_dealloc(v61, v53, 0xAu);
            }
            _dwarf_error_string(
              v61,
              a4,
              281,
              "DW_DLE_ATTR_OUTSIDE_SECTION: Reading target of a DW_FORM_indirect from an abbreviation failed. Corrupt Dwarf");
            return 1;
          }
          v18 = v74;
          v16 = (unsigned __int16)v74;
          if ( (_WORD)v74 == 33 )
          {
            v50 = v70;
            while ( v50 )
            {
              v51 = v50;
              v50 = *((void **)v50 + 6);
              dwarf_dealloc(v61, v51, 0xAu);
            }
            _dwarf_error_string(
              v61,
              a4,
              281,
              "DW_DLE_ATTR_OUTSIDE_SECTION:  Reading Attriutes: an indirect form leads to a DW_FORM_implicit_const which "
              "is not handled. Corrupt Dwarf");
            return 1;
          }
          if ( !(unsigned int)_dwarf_valid_form_we_know((unsigned __int16)v74, v14) )
          {
            dwarfstring_constructor(v75);
            dwarfstring_append_printf_u(
              v75,
              "DW_DLE_UNKNOWN_FORM  form indirect leads to form of  0x%x which is unknown",
              v16);
            v27 = dwarfstring_string(
                    v75,
                    "DW_DLE_UNKNOWN_FORM  form indirect leads to form of  0x%x which is unknown",
                    v26);
            _dwarf_error_string(v61, a4, 321, v27);
            dwarfstring_destructor(v75);
            v28 = v70;
            while ( v28 )
            {
              v29 = v28;
              v28 = *((void **)v28 + 6);
              dwarf_dealloc(v61, v29, 0xAu);
            }
            return 1;
          }
        }
        if ( !v14 )
          goto LABEL_17;
      }
      alloc = _dwarf_get_alloc(v61, 10, 1);
      v20 = (void **)alloc;
      if ( !alloc )
      {
        v46 = v70;
        while ( v46 )
        {
          v47 = v46;
          v46 = *((void **)v46 + 6);
          dwarf_dealloc(v61, v47, 0xAu);
        }
        _dwarf_error_string(v61, a4, 62, "DW_DLE_ALLOC_FAIL: attempting to allocate a Dwarf_Attribute record");
        return 1;
      }
      *(_WORD *)(alloc + 4) = v16;
      v21 = _mm_load_si128(&v66);
      *(_DWORD *)alloc = v17 | (v18 << 16);
      v22 = v71;
      v23 = _mm_loadl_epi64(a1 + 1);
      *(__m128i *)(alloc + 32) = v21;
      *(__m128i *)(alloc + 8) = _mm_unpacklo_epi64(v23, (__m128i)v22);
      if ( v16 == 33 )
      {
        *(_QWORD *)(alloc + 24) = v60;
      }
      else
      {
        if ( (unsigned int)_dwarf_reference_outside_section(a1, v22, v22 + 1) )
        {
          dwarf_dealloc_attribute(v20);
          v54 = v70;
          while ( v54 )
          {
            v55 = v54;
            v54 = *((void **)v54 + 6);
            dwarf_dealloc(v61, v55, 0xAu);
          }
          _dwarf_error_string(
            v61,
            a4,
            281,
            "DW_DLE_ATTR_OUTSIDE_SECTION:  Reading Attriutes: We have run off the end of the section. Corrupt Dwarf");
          return 1;
        }
        v24 = a1[1].m128i_i64[0];
        v75[0] = 0;
        size_of_val = _dwarf_get_size_of_val(
                        (int)v61,
                        v16,
                        *(unsigned __int16 *)(v24 + 18),
                        *(unsigned __int8 *)(v24 + 32),
                        v71,
                        *(unsigned __int8 *)(v24 + 16),
                        (__int64)v75,
                        v64,
                        a4);
        if ( size_of_val )
        {
          v59 = size_of_val;
          dwarf_dealloc_attribute(v20);
          v56 = v70;
          result = v59;
          if ( v70 )
          {
            do
            {
              v57 = v56;
              v56 = *((void **)v56 + 6);
              dwarf_dealloc(v61, v57, 0xAu);
            }
            while ( v56 );
            return v59;
          }
          return result;
        }
        v71 += v75[0];
      }
      ++v65;
      *v63 = v20;
      v63 = v20 + 6;
LABEL_17:
      v11 = v69;
      if ( (unsigned __int64)++v13 >= v69[6] )
      {
        a3 = v68;
        if ( !v65 )
          break;
        v38 = _dwarf_get_alloc(v61, 15, v65);
        v39 = v70;
        v40 = (_QWORD *)v38;
        if ( v38 )
        {
          do
          {
            *v40++ = v39;
            v39 = (_QWORD *)v39[6];
          }
          while ( v40 != (_QWORD *)(v38 + 8 * v65) );
          *a2 = v38;
          *a3 = v65;
          return 0;
        }
        while ( v39 )
        {
          v41 = v39;
          v39 = (_QWORD *)v39[6];
          dwarf_dealloc(v61, v41, 0xAu);
        }
        _dwarf_error(v61, a4, 62);
        return 1;
      }
    }
  }
  *a2 = 0;
  *a3 = 0;
  return 0xFFFFFFFFLL;
}

