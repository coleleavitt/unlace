__int64 __fastcall sub_54540(
        Dwarf_Debug a1,
        __int16 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        unsigned __int64 *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // r11
  __int64 v9; // r10
  unsigned __int64 v12; // r14
  int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // r15d
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  const __m128i **v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  const __m128i *v21; // rbp
  __m128i v22; // xmm0
  unsigned __int64 v23; // xmm1_8
  const char *v24; // rsi
  __int64 v25; // rax
  unsigned __int64 v27; // r15
  unsigned __int8 v28; // r9
  unsigned __int64 v29; // r15
  __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  __int64 alloc; // rax
  __m128i si128; // xmm0
  unsigned __int8 *v35; // rbp
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  _QWORD *v38; // r15
  unsigned __int64 v39; // r12
  unsigned int v40; // r14d
  __m128i *v41; // rax
  __m128i *v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rax
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  __m128i v48; // xmm2
  int v49; // eax
  int v50; // eax
  int v51; // eax
  __m128i *v52; // r9
  _QWORD *v53; // r12
  unsigned __int64 v54; // r11
  __int64 v55; // rax
  __m128i v56; // xmm0
  int v57; // eax
  __int64 v58; // rbp
  _QWORD *v59; // rax
  _QWORD *v60; // rsi
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  int v63; // r15d
  int v64; // edx
  __int64 v65; // rax
  int v67; // [rsp+0h] [rbp-1C8h]
  __int64 v68; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v69; // [rsp+0h] [rbp-1C8h]
  __int64 v70; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v73; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v74; // [rsp+20h] [rbp-1A8h]
  unsigned int v75; // [rsp+2Ch] [rbp-19Ch]
  int v76; // [rsp+50h] [rbp-178h]
  int v77; // [rsp+58h] [rbp-170h]
  __m128i v78; // [rsp+60h] [rbp-168h]
  int v79; // [rsp+70h] [rbp-158h]
  __m128i *v80; // [rsp+70h] [rbp-158h]
  __m128i *v81; // [rsp+78h] [rbp-150h]
  __m128i *v82; // [rsp+78h] [rbp-150h]
  unsigned int v83; // [rsp+88h] [rbp-140h] BYREF
  unsigned int v84; // [rsp+8Ch] [rbp-13Ch] BYREF
  __m128i v85; // [rsp+90h] [rbp-138h] BYREF
  __m128i v86; // [rsp+A0h] [rbp-128h] BYREF
  _QWORD v87[4]; // [rsp+B0h] [rbp-118h] BYREF
  __m128i v88[11]; // [rsp+D0h] [rbp-F8h] BYREF
  unsigned __int64 v89; // [rsp+188h] [rbp-40h]

  v8 = a3;
  v9 = a4;
  v12 = *((_QWORD *)a1 + 452);
  v89 = __readfsqword(0x28u);
  if ( *(Dwarf_Debug *)a4 != a1 )
  {
    v13 = *(_DWORD *)(a4 + 336);
    v88[0].m128i_i64[0] = 0;
    if ( !v13 )
    {
      _dwarf_error_string(
        a1,
        a8,
        506,
        "DW_DLE_RLE_ERROR: a .debug_rnglists[.dwo] cu context cannot be found as there is no signature to use");
      return 1;
    }
    v14 = _dwarf_search_for_signature(a1);
    v9 = v88[0].m128i_i64[0];
    v8 = a3;
    v15 = v14;
    if ( v14 )
    {
      if ( v14 != -1 )
        _dwarf_error_string(
          a1,
          a8,
          506,
          "DW_DLE_RLE_ERROR: a .debug_rnglists[.dwo] cu context cannot be found with the correct signature");
      return v15;
    }
  }
  v16 = *(_DWORD *)(v9 + 576);
  v17 = v8;
  if ( v16 )
    v17 = *(_QWORD *)(v9 + 560);
  if ( v17 >= v12 )
  {
    _dwarf_error_string(
      a1,
      a8,
      506,
      "DW_DLE_RLE_ERROR: a .debug_rnglists[.dwo] offset is greater than the rnglists section size");
    return 1;
  }
  v18 = *((const __m128i ***)a1 + 829);
  v19 = *((_QWORD *)a1 + 828);
  if ( !v18 || v19 == 1 )
  {
    v21 = *v18;
    v20 = 0;
  }
  else
  {
    if ( v16 )
      v17 = *(_QWORD *)(v9 + 560);
    if ( !v19 )
    {
LABEL_16:
      dwarfstring_constructor(v88);
      dwarfstring_append_printf_u(
        v88,
        "DW_DLE_RNGLISTS_ERROR: rnglist ran off end  finding target offset of 0x%08llx",
        v17);
      v24 = " Not found anywhere in .debug_rnglists[.dwo] data. Corrupted data?";
      dwarfstring_append();
LABEL_17:
      v25 = dwarfstring_string(v88, v24);
      _dwarf_error_string(a1, a8, 468, v25);
      dwarfstring_destructor(v88);
      return 1;
    }
    v20 = 0;
    while ( 1 )
    {
      v21 = v18[v20];
      v22 = _mm_loadu_si128(v21 + 1);
      v23 = _mm_add_epi64(_mm_srli_si128(v22, 8), v22).m128i_u64[0];
      if ( v17 >= v22.m128i_i64[0] && v17 < v23 )
        break;
      if ( v19 == ++v20 )
        goto LABEL_16;
    }
  }
  v27 = v21[4].m128i_u64[0];
  if ( v8 >= v27 && a2 == 35 )
  {
    v67 = v8;
    dwarfstring_constructor(v88);
    dwarfstring_append_printf_u(v88, "DW_DLE_RNGLISTS_ERROR: rnglists table index of %u", v67);
    v24 = " too large for table of %u entries.";
    dwarfstring_append_printf_u(v88, " too large for table of %u entries.", v27);
    goto LABEL_17;
  }
  v28 = v21[2].m128i_u8[0];
  v29 = v21[8].m128i_u64[0];
  v68 = v21[5].m128i_i64[1];
  memset(v88, 0, sizeof(v88));
  v88[5].m128i_i64[0] = v20;
  v88[3].m128i_i64[0] = v9;
  v88[2].m128i_i64[1] = 43981;
  v88[4].m128i_i64[0] = (__int64)v21;
  v30 = v21[3].m128i_u32[1];
  v88[5].m128i_i64[1] = v28;
  v88[4].m128i_i64[1] = v30;
  v88[6].m128i_i64[0] = v21[3].m128i_u8[8];
  v88[6].m128i_i64[1] = __PAIR64__(v16, v21[3].m128i_u8[9]);
  v88[7].m128i_i64[0] = *(_QWORD *)(v9 + 560);
  v88[7].m128i_i32[2] = *(_DWORD *)(v9 + 344);
  v88[8].m128i_i64[0] = *(_QWORD *)(v9 + 392);
  v88[9].m128i_i64[0] = *(_QWORD *)(v9 + 384);
  v88[8].m128i_i32[2] = *(_DWORD *)(v9 + 372);
  if ( a2 == 35 )
  {
    v87[0] = 0;
    v31 = v28 * v8 + v68;
    if ( __CFADD__(v28, v31) )
    {
      _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
      return 1;
    }
    if ( v29 < v28 + v31 )
    {
      _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      return 1;
    }
    (*((void (__fastcall **)(_QWORD *))a1 + 1037))(v87);
    if ( v87[0] >= v12 )
    {
      _dwarf_error_string(
        a1,
        a8,
        506,
        "DW_DLE_RLE_ERROR: a .debug_rnglists[.dwo] table entry value is impossibly large");
      return 1;
    }
    v8 = v21[5].m128i_i64[0] + v87[0];
    if ( v8 >= v12 )
    {
      _dwarf_error_string(
        a1,
        a8,
        506,
        "DW_DLE_RLE_ERROR: a .debug_rnglist[.dwo]s table entry value + section offset  is impossibly large");
      return 1;
    }
  }
  v32 = *((_QWORD *)a1 + 451) + v8;
  v88[10].m128i_i64[0] = v8;
  v69 = v8;
  v88[10].m128i_i64[1] = v29;
  v88[9].m128i_i64[1] = v32;
  alloc = _dwarf_get_alloc(a1, 54, 1);
  if ( !alloc )
  {
    _dwarf_error_string(
      a1,
      a8,
      62,
      "Allocating a Dwarf_Rnglists_Head struct fails in libdwarf function dwarf_rnglists_index_get_rle_head()");
    return 1;
  }
  si128 = _mm_load_si128(v88);
  v88[3].m128i_i64[1] = (__int64)a1;
  *(__m128i *)alloc = si128;
  *(__m128i *)(alloc + 16) = _mm_load_si128(&v88[1]);
  *(__m128i *)(alloc + 32) = _mm_load_si128(&v88[2]);
  *(__m128i *)(alloc + 48) = _mm_load_si128(&v88[3]);
  *(__m128i *)(alloc + 64) = _mm_load_si128(&v88[4]);
  *(__m128i *)(alloc + 80) = _mm_load_si128(&v88[5]);
  *(__m128i *)(alloc + 96) = _mm_load_si128(&v88[6]);
  *(__m128i *)(alloc + 112) = _mm_load_si128(&v88[7]);
  *(__m128i *)(alloc + 128) = _mm_load_si128(&v88[8]);
  *(__m128i *)(alloc + 144) = _mm_load_si128(&v88[9]);
  v35 = *(unsigned __int8 **)(alloc + 152);
  v36 = _mm_load_si128(&v88[10]);
  *(__m128i *)(alloc + 160) = v36;
  v76 = v36.m128i_i32[0];
  v37 = 0;
  v73 = *(_QWORD *)(alloc + 168);
  v75 = *(_DWORD *)(alloc + 96);
  v79 = *(_DWORD *)(alloc + 120);
  if ( v79 )
  {
    v79 = 1;
    v37 = _mm_loadl_epi64((const __m128i *)(alloc + 128));
  }
  v38 = (_QWORD *)alloc;
  v77 = 0;
  v39 = v69;
  v70 = 0;
  v78 = _mm_unpacklo_epi64(v37, v37);
  while ( 1 )
  {
    v83 = 0;
    v84 = 0;
    v85 = 0u;
    v86 = 0u;
    v40 = sub_53FB0((__int64)a1, v35, v76, v73, v75, &v83, &v84, &v85, &v85.m128i_i64[1], (__int64)a8);
    if ( v40 )
    {
      v53 = v38;
LABEL_72:
      dwarf_dealloc(a1, v53, 0x36u);
      return 1;
    }
    v41 = (__m128i *)calloc(0x38u, 1u);
    v42 = v41;
    if ( !v41 )
    {
      v53 = v38;
      _dwarf_error_string(a1, a8, 62, "DW_DLE_ALLOC_FAIL: Out of memory in building list of rnglists entries on a DIE.");
      goto LABEL_72;
    }
    if ( v38[1] )
      *(_QWORD *)(v38[2] + 48LL) = v41;
    else
      v38[1] = v41;
    v43 = v84;
    v44 = v83;
    v38[2] = v42;
    v45 = _mm_cvtsi32_si128(v83);
    ++v38[3];
    v70 += v44;
    v35 += v44;
    v46 = _mm_loadl_epi64((const __m128i *)&v85.m128i_u64[1]);
    v42->m128i_i64[0] = _mm_unpacklo_epi32(v45, _mm_cvtsi32_si128(v43)).m128i_u64[0];
    v47 = _mm_loadl_epi64(&v85);
    v48 = _mm_unpacklo_epi64(v47, v46);
    v42[1] = v48;
    if ( !(_DWORD)v43 )
      break;
    switch ( v43 )
    {
      case 1LL:
        if ( v77 )
        {
          v42->m128i_i32[2] = 1;
          v42[2].m128i_i64[0] = 0;
          v79 = 0;
          continue;
        }
        v80 = v42;
        v51 = _dwarf_look_in_local_and_tied_by_index(a1, v38[6], v47.m128i_i64[0], &v86, a8);
        v52 = v80;
        if ( v51 )
        {
          v80->m128i_i32[2] = 1;
          v80[2].m128i_i64[0] = 0;
          if ( v51 != 1 )
          {
            v79 = 0;
            goto LABEL_53;
          }
          dwarf_dealloc_error(a1, *a8);
          *a8 = 0;
          v79 = 0;
          v77 = 1;
        }
        else
        {
          v56 = _mm_loadl_epi64(&v86);
          v79 = 1;
          v52[2].m128i_i64[0] = v56.m128i_i64[0];
          v78 = _mm_unpacklo_epi64(v56, v56);
        }
        continue;
      case 2LL:
        if ( v77 )
        {
          v42[2].m128i_i64[0] = 0;
LABEL_52:
          v42->m128i_i32[2] = 1;
          v42[2].m128i_i64[1] = 0;
          goto LABEL_53;
        }
        v82 = v42;
        v50 = _dwarf_look_in_local_and_tied_by_index(a1, v38[6], v47.m128i_i64[0], &v86, a8);
        v42 = v82;
        if ( v50 )
        {
          v82->m128i_i32[2] = 1;
          v82[2].m128i_i64[0] = 0;
          if ( v50 == 1 )
          {
            dwarf_dealloc_error(a1, *a8);
            *a8 = 0;
            v42 = v82;
          }
          goto LABEL_52;
        }
        v82[2].m128i_i64[0] = v86.m128i_i64[0];
        v57 = _dwarf_look_in_local_and_tied_by_index(a1, v38[6], v46.m128i_i64[0], &v86.m128i_u64[1], a8);
        v77 = v57;
        if ( v57 )
        {
          v82->m128i_i32[2] = 1;
          v82[2].m128i_i64[1] = 0;
          if ( v57 == 1 )
          {
            dwarf_dealloc_error(a1, *a8);
            *a8 = 0;
          }
          else
          {
LABEL_53:
            v77 = 1;
          }
        }
        else
        {
          v82[2].m128i_i64[1] = v86.m128i_i64[1];
LABEL_82:
          v77 = 0;
        }
        break;
      case 3LL:
        if ( v77 )
        {
          v42->m128i_i32[2] = 1;
          v42[2] = 0;
          goto LABEL_53;
        }
        v81 = v42;
        v49 = _dwarf_look_in_local_and_tied_by_index(a1, v38[6], v47.m128i_i64[0], &v86, a8);
        if ( !v49 )
        {
          v81[2] = _mm_unpacklo_epi64(
                     (__m128i)v86.m128i_u64[0],
                     (__m128i)(unsigned __int64)(v86.m128i_i64[0] + v46.m128i_i64[0]));
          goto LABEL_82;
        }
        v81->m128i_i32[2] = 1;
        v81[2] = 0;
        if ( v49 == 1 )
        {
          dwarf_dealloc_error(a1, *a8);
          *a8 = 0;
        }
        goto LABEL_53;
      case 4LL:
        if ( v79 )
        {
          v42[2] = _mm_add_epi64(v48, v78);
        }
        else
        {
          v42->m128i_i32[2] = 1;
          v42[2] = 0;
        }
        continue;
      case 5LL:
        v79 = 1;
        v42[2].m128i_i64[0] = v47.m128i_i64[0];
        v78 = _mm_unpacklo_epi64(v47, v47);
        continue;
      case 6LL:
        v42[2] = v48;
        continue;
      case 7LL:
        v42[2] = _mm_unpacklo_epi64(v47, (__m128i)(unsigned __int64)(v47.m128i_i64[0] + v46.m128i_i64[0]));
        continue;
      default:
        v53 = v38;
        v63 = v43;
        dwarfstring_constructor(v87);
        dwarfstring_append_printf_u(
          v87,
          " DW_DLE_RNGLISTS_ERROR:  The .debug_rnglists[.dwo]  rangelist code 0x%x is unknown,  DWARF5 is corrupted.",
          v63);
        v65 = dwarfstring_string(
                v87,
                " DW_DLE_RNGLISTS_ERROR:  The .debug_rnglists[.dwo]  rangelist code 0x%x is unknown,  DWARF5 is corrupted.",
                v64);
        _dwarf_error_string(a1, a8, 468, v65);
        dwarfstring_destructor(v87);
        goto LABEL_72;
    }
  }
  v54 = v39;
  v53 = v38;
  v15 = v40;
  v55 = v53[3];
  if ( !v55 )
    goto LABEL_75;
  v58 = v55;
  v74 = v54;
  v59 = malloc(8 * v55);
  v54 = v74;
  v60 = v59;
  if ( !v59 )
  {
    _dwarf_error_string(
      a1,
      a8,
      62,
      "DW_DLE_ALLOC_FAIL: Out of memory in turning list of rnglists entries on a DIEinto a pointer array");
    goto LABEL_72;
  }
  v61 = v53[1];
  v62 = &v59[v58];
  do
  {
    *v59++ = v61;
    v61 = *(_QWORD *)(v61 + 48);
  }
  while ( v62 != v59 );
  *v53 = v60;
  v53[1] = 0;
  v53[2] = 0;
LABEL_75:
  v53[4] = v70;
  if ( a7 )
    *a7 = v54;
  *a5 = v53;
  if ( a6 )
    *a6 = v53[3];
  return v15;
}

