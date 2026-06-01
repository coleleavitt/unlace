__int64 __fastcall dwarf_get_ranges_b(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v8; // r10
  unsigned int v9; // ecx
  int version_of_die; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int16 v15; // bx
  int section; // eax
  __int64 v17; // r10
  __int64 v18; // r9
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // rdi
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  unsigned int v25; // ebx
  _QWORD *v26; // rbp
  _BOOL4 v27; // edx
  void *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r10
  _QWORD *v36; // r15
  void *v37; // rdi
  __int64 v38; // rax
  void *v39; // rbx
  _QWORD *v40; // r15
  __int64 v41; // r10
  void *v42; // rdi
  void *v43; // rbx
  _QWORD *v44; // r15
  void *v45; // rdi
  void *v46; // rbx
  _QWORD *v47; // r15
  void *v48; // rdi
  _QWORD *v49; // r15
  __int64 v50; // r10
  unsigned int v51; // r8d
  unsigned __int64 v52; // rbp
  __int64 v53; // rbx
  __int64 alloc; // rax
  __int64 v55; // rdx
  unsigned int v56; // esi
  _QWORD *v57; // rax
  void *v58; // rdi
  _DWORD *v59; // rbx
  __int64 v60; // rbx
  void *v61; // rdi
  __int64 v62; // r10
  _QWORD *v63; // r15
  void *v64; // rdi
  __int64 v65; // [rsp+0h] [rbp-E8h]
  __int64 v66; // [rsp+0h] [rbp-E8h]
  __int64 v67; // [rsp+0h] [rbp-E8h]
  __int64 v68; // [rsp+0h] [rbp-E8h]
  __int64 v69; // [rsp+0h] [rbp-E8h]
  __int64 v70; // [rsp+0h] [rbp-E8h]
  unsigned int v71; // [rsp+8h] [rbp-E0h]
  __int64 v72; // [rsp+8h] [rbp-E0h]
  __int64 v73; // [rsp+8h] [rbp-E0h]
  unsigned int v74; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v75; // [rsp+10h] [rbp-D8h]
  _QWORD *ptr; // [rsp+18h] [rbp-D0h]
  __int64 v77; // [rsp+20h] [rbp-C8h]
  __int64 v81; // [rsp+58h] [rbp-90h]
  __int64 v82; // [rsp+60h] [rbp-88h]
  __int64 v83; // [rsp+68h] [rbp-80h]
  Dwarf_Half v84; // [rsp+7Ch] [rbp-6Ch] BYREF
  Dwarf_Half v85; // [rsp+7Eh] [rbp-6Ah] BYREF
  _BYTE v86[40]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v87; // [rsp+A8h] [rbp-40h]

  v75 = a2;
  v87 = __readfsqword(0x28u);
  v84 = 3;
  v85 = 4;
  if ( !a1 || (v8 = a1, *(_QWORD *)a1 != 3959286781LL) )
  {
    _dwarf_error_string(
      0,
      a8,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_ranges_b()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a3 )
  {
    version_of_die = dwarf_get_version_of_die((Dwarf_Die)a3, &v84, &v85);
    v8 = a1;
    if ( version_of_die == 1 || (v13 = *(_QWORD *)(a3 + 16)) == 0 )
    {
      _dwarf_error(a1, a8, 104);
      return 1;
    }
    v14 = 0;
    if ( *(_WORD *)(v13 + 652) != 4 )
    {
      v14 = *(_QWORD *)(v13 + 544);
      v75 = v14 + a2;
    }
    v15 = *(unsigned __int8 *)(v13 + 32);
  }
  else
  {
    v15 = *(unsigned __int8 *)(a1 + 280);
    v14 = 0;
  }
  v65 = v8;
  section = _dwarf_load_section(v8, v8 + 5928, a8);
  if ( section == 1 )
    return 1;
  v17 = v65;
  v18 = v65;
  if ( section == -1 )
  {
    v30 = *(_QWORD *)(v65 + 32);
    if ( !v30 )
      return (unsigned int)-1;
    if ( v30 == v65 )
      return (unsigned int)-1;
    v31 = *(_QWORD *)(v30 + 32);
    if ( !v31 || v30 != v31 )
      return (unsigned int)-1;
    v72 = v65;
    v67 = *(_QWORD *)(v65 + 32);
    v32 = _dwarf_load_section(v67, v30 + 5928, a8);
    if ( v32 == 1 )
      return 1;
    v18 = v67;
    v17 = v72;
    if ( v32 == -1 )
      return (unsigned int)-1;
  }
  v19 = *(_QWORD *)(v18 + 5936);
  if ( v75 >= v19 )
    return (unsigned int)-1;
  if ( v14 >= v19 )
  {
    v73 = v17;
    v68 = v18;
    dwarfstring_constructor(v86);
    dwarfstring_append_printf_u(v86, "DW_DLE_DEBUG_RANGES_OFFSET_BAD:  ranges base is 0x%lx ", v14);
    dwarfstring_append_printf_u(v86, " and section size is 0x%lx.", *(_QWORD *)(v68 + 5936));
    v34 = dwarfstring_string(v86, " and section size is 0x%lx.", v33);
    _dwarf_error_string(v73, a8, 206, v34);
    dwarfstring_destructor(v86);
    return 1;
  }
  v20 = *(_QWORD *)(v18 + 5928);
  v71 = v15;
  v21 = v20 + v19;
  v22 = v15;
  v83 = v20 + v75;
  v23 = v20 + v75;
  v77 = 2 * v15;
  v24 = 0xFFFFFFFFLL;
  if ( v15 == 8 )
    v24 = -1;
  v66 = v18;
  ptr = nullptr;
  v25 = 0;
  v81 = v24;
  v26 = nullptr;
  v82 = v17;
  while ( 1 )
  {
    if ( v21 < v23 )
    {
      v35 = v82;
      v36 = ptr;
      if ( ptr )
      {
        do
        {
          v37 = v36;
          v36 = (_QWORD *)*v36;
          free(v37);
        }
        while ( v36 );
        v35 = v82;
      }
      v69 = v35;
      dwarfstring_constructor(v86);
      dwarfstring_append();
      v38 = dwarfstring_string(v86, "DW_DLE_DEBUG_RANGES_OFFSET_BAD:  ranges pointer ran off the end of the  section");
      _dwarf_error_string(v69, a8, 206, v38);
      dwarfstring_destructor(v86);
      return 1;
    }
    v28 = calloc(1u, 0x20u);
    if ( !v28 )
    {
      v63 = ptr;
      v62 = v82;
      if ( ptr )
      {
        v60 = v82;
        do
        {
          v64 = v63;
          v63 = (_QWORD *)*v63;
          free(v64);
        }
        while ( v63 );
LABEL_71:
        v62 = v60;
      }
      _dwarf_error(v62, a8, 208);
      return 1;
    }
    if ( v21 < v23 + v77 )
    {
      v39 = v28;
      v40 = ptr;
      free(v39);
      v41 = v82;
      if ( ptr )
      {
        do
        {
          v42 = v40;
          v40 = (_QWORD *)*v40;
          free(v42);
        }
        while ( v40 );
        v41 = v82;
      }
      _dwarf_error_string(
        v41,
        a8,
        206,
        "DW_DLE_DEBUG_RANGES_OFFSET_BAD:  Not at the end of the ranges section  but there is not enough room in the secti"
        "on  for the next ranges entry");
      return 1;
    }
    ++v25;
    if ( (unsigned int)sub_535C0(v66, (_QWORD *)v28 + 1, v23, v71, a8, v21) )
    {
      v43 = v28;
      v44 = ptr;
      free(v43);
      if ( ptr )
      {
        do
        {
          v45 = v44;
          v44 = (_QWORD *)*v44;
          free(v45);
        }
        while ( v44 );
      }
      return 1;
    }
    if ( (unsigned int)sub_535C0(v66, (_QWORD *)v28 + 2, v23 + v22, v71, a8, v21) )
    {
      v46 = v28;
      v47 = ptr;
      free(v46);
      if ( ptr )
      {
        do
        {
          v48 = v47;
          v47 = (_QWORD *)*v47;
          free(v48);
        }
        while ( v47 );
      }
      return 1;
    }
    v23 += 2 * v22;
    if ( ptr )
      *v26 = v28;
    else
      ptr = v28;
    v29 = *((_QWORD *)v28 + 1);
    if ( !v29 )
      break;
    v27 = v29 == v81;
LABEL_21:
    *((_DWORD *)v28 + 6) = v27;
    if ( v21 == v23 )
    {
      v49 = ptr;
      v50 = v82;
      v51 = v25;
      v52 = v23;
      goto LABEL_59;
    }
    v26 = v28;
  }
  if ( *((_QWORD *)v28 + 2) )
  {
    v27 = 0;
    goto LABEL_21;
  }
  v51 = v25;
  v59 = v28;
  v50 = v82;
  v49 = ptr;
  v59[6] = 2;
  v52 = v23;
LABEL_59:
  v53 = v51;
  v74 = v51;
  v70 = v50;
  alloc = _dwarf_get_alloc(v50, 29, v51);
  v55 = alloc;
  if ( !alloc )
  {
    v60 = v70;
    do
    {
      v61 = v49;
      v49 = (_QWORD *)*v49;
      free(v61);
    }
    while ( v49 );
    goto LABEL_71;
  }
  v56 = 0;
  *a5 = alloc;
  *a6 = v53;
  v57 = v49;
  if ( v74 )
  {
    do
    {
      ++v56;
      v55 += 24;
      *(__m128i *)(v55 - 24) = _mm_loadu_si128((const __m128i *)(v57 + 1));
      *(_QWORD *)(v55 - 8) = v57[3];
      v57 = (_QWORD *)*v57;
    }
    while ( v57 && v56 < v74 );
  }
  do
  {
    v58 = v49;
    v49 = (_QWORD *)*v49;
    free(v58);
  }
  while ( v49 );
  v9 = 0;
  if ( a4 )
    *a4 = v75;
  if ( a7 )
    *a7 = v52 - v83;
  return v9;
}

