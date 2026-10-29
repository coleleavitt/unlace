__int64 __fastcall dwarf_offdie_b(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 **a4,
        Dwarf_Error *a5)
{
  char *v8; // r14
  char *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r14
  unsigned __int64 *alloc; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rbp
  int abbrev_for_code; // eax
  unsigned int die_containing_section; // r9d
  unsigned __int64 v21; // rax
  __int64 v23; // rdi
  unsigned __int64 cu_context_offset; // r8
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // ebx
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // [rsp-8h] [rbp-A0h]
  unsigned int v35; // [rsp+0h] [rbp-98h]
  __int64 v37; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v38; // [rsp+18h] [rbp-80h] BYREF
  unsigned __int64 v39; // [rsp+20h] [rbp-78h] BYREF
  __int64 v40; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v41[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_offdie_b()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a3 )
  {
    v8 = (char *)(a1 + 13);
    v9 = (char *)(a1 + 45);
    if ( a1[45] )
      goto LABEL_5;
  }
  else
  {
    v8 = (char *)(a1 + 19);
    v9 = (char *)(a1 + 74);
    if ( a1[74] )
      goto LABEL_5;
  }
  die_containing_section = _dwarf_load_die_containing_section((Dwarf_Debug)a1);
  if ( die_containing_section )
    return die_containing_section;
LABEL_5:
  v37 = sub_158B0((__int64)a1, a2, a3);
  v12 = v37;
  if ( v37 )
  {
LABEL_6:
    v13 = _dwarf_calculate_info_section_end_ptr(v12);
    alloc = (unsigned __int64 *)_dwarf_get_alloc(a1, 8, 1);
    if ( alloc )
    {
      v15 = v37;
      *((_DWORD *)alloc + 8) = a3;
      alloc[2] = v15;
      if ( a3 )
        v16 = a1[45] + a2;
      else
        v16 = a1[74] + a2;
      v38 = v16;
      *alloc = v16;
      v17 = _dwarf_leb128_uword_wrapper(a1, &v38, v13, &v39, a5);
      if ( v17 )
      {
        v35 = v17;
        dwarf_dealloc_die(alloc);
        return v35;
      }
      v18 = v39;
      if ( !v39 )
      {
        dwarf_dealloc_die(alloc);
        return (unsigned int)-1;
      }
      alloc[3] = v39;
      abbrev_for_code = _dwarf_get_abbrev_for_code(v37, v18, alloc + 1, &v40, a5);
      die_containing_section = 0;
      if ( abbrev_for_code == 1 )
      {
        dwarf_dealloc_die(alloc);
      }
      else
      {
        if ( abbrev_for_code != -1 )
        {
          v21 = alloc[1];
          if ( *(_QWORD *)(v21 + 72)
            || (v28 = *(_QWORD *)(v21 + 40),
                v29 = _dwarf_calculate_abbrev_section_end_ptr(alloc[2]),
                v30 = _dwarf_fill_in_attr_form_abtable(alloc[2], v28, v29, alloc[1], a5),
                die_containing_section = 0,
                (v31 = v30) == 0) )
          {
            *a4 = alloc;
          }
          else
          {
            dwarf_dealloc_die(alloc);
            return v31;
          }
          return die_containing_section;
        }
        dwarf_dealloc_die(alloc);
        dwarfstring_constructor(v41);
        dwarfstring_append_printf_u(
          v41,
          "DW_DLE_DIE_ABBREV_LIST_NULL: There is no abbrev present for code %u in this compilation unit when calling dwarf_offdie_b(). ",
          v18);
        dwarfstring_append_printf_u(v41, "The highest known code in any compilation unit is %u .", v40);
        v33 = dwarfstring_string(v41, "The highest known code in any compilation unit is %u .", v32);
        _dwarf_error_string(a1, a5, 151, v33);
        dwarfstring_destructor(v41);
      }
    }
    else
    {
      _dwarf_error(a1, a5, 62);
    }
    return 1;
  }
  v23 = *((_QWORD *)v8 + 2);
  cu_context_offset = 0;
  if ( v23 )
    cu_context_offset = _dwarf_calculate_next_cu_context_offset(v23, a2, v10, v11, 0);
  v25 = *((_QWORD *)v9 + 1);
  while ( 1 )
  {
    die_containing_section = _dwarf_create_a_new_cu_context_record_on_list(
                               (Dwarf_Debug)a1,
                               (__int64)v8,
                               a3,
                               v25,
                               cu_context_offset,
                               (__int64)&v37,
                               0,
                               a5);
    if ( die_containing_section )
      return die_containing_section;
    cu_context_offset = _dwarf_calculate_next_cu_context_offset(v37, v8, v34, v26, v27);
    if ( a2 < cu_context_offset )
    {
      v12 = v37;
      goto LABEL_6;
    }
  }
}

