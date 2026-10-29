int __fastcall dwarf_internal_find_die_given_sig8(
        char *a1,
        int a2,
        _QWORD *a3,
        Dwarf_Die *a4,
        Dwarf_Bool *a5,
        Dwarf_Error *a6)
{
  unsigned int v9; // eax
  unsigned int v10; // r15d
  char *v11; // r13
  char *v12; // rbp
  int die_containing_section; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  int result; // eax
  Dwarf_Bool v20; // r13d
  unsigned __int64 cu_context_offset; // r8
  unsigned __int64 i; // rbp
  int a_new_cu_context_record_on_list; // eax
  __int64 v24; // r8
  __int64 v25; // [rsp-10h] [rbp-88h]
  __int64 v26; // [rsp-8h] [rbp-80h]
  int v27; // [rsp+8h] [rbp-70h]
  Dwarf_Die v30; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v31[9]; // [rsp+30h] [rbp-48h] BYREF

  v31[1] = __readfsqword(0x28u);
  v9 = 0;
  v27 = 2;
  v30 = nullptr;
  v31[0] = 0;
  while ( 1 )
  {
    v10 = v9 ^ 1;
    if ( v9 == 1 )
    {
      v11 = a1 + 152;
      v12 = a1 + 592;
    }
    else
    {
      v11 = a1 + 104;
      v12 = a1 + 360;
    }
    die_containing_section = _dwarf_load_die_containing_section((Dwarf_Debug)a1);
    if ( die_containing_section == 1 )
      return 1;
    if ( die_containing_section == -1 )
      goto LABEL_13;
    v17 = *((_QWORD *)v11 + 1);
    v31[0] = v17;
    if ( v17 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v17 + 82) == *a3 && (*(_WORD *)(v17 + 652) & 0xFFFB) == 2 )
        {
LABEL_17:
          v20 = *(_DWORD *)(v17 + 648);
          result = dwarf_offdie_b((Dwarf_Debug)a1, *(_QWORD *)(v17 + 72) + *(_QWORD *)(v17 + 96), v20, &v30, a6);
          if ( !result )
          {
            *a4 = v30;
            *a5 = v20;
          }
          return result;
        }
        v18 = *(_QWORD *)(v17 + 640);
        v31[0] = v18;
        if ( !v18 )
          break;
        v17 = v18;
      }
      if ( a2 > 0 )
        goto LABEL_13;
      cu_context_offset = _dwarf_calculate_next_cu_context_offset(v17, (unsigned int)a2, v14, v15, v16);
    }
    else
    {
      cu_context_offset = 0;
      if ( a2 > 0 )
        goto LABEL_13;
    }
    for ( i = *((_QWORD *)v12 + 1);
          cu_context_offset < i;
          cu_context_offset = _dwarf_calculate_next_cu_context_offset(v31[0], v11, v25, v26, v24) )
    {
      a_new_cu_context_record_on_list = _dwarf_create_a_new_cu_context_record_on_list(
                                          (Dwarf_Debug)a1,
                                          (__int64)v11,
                                          v10,
                                          i,
                                          cu_context_offset,
                                          (__int64)v31,
                                          0,
                                          a6);
      if ( a_new_cu_context_record_on_list == 1 )
        return 1;
      if ( a_new_cu_context_record_on_list == -1 )
        break;
      v17 = v31[0];
      if ( *a3 == *(_QWORD *)(v31[0] + 82LL) && (*(_WORD *)(v31[0] + 652LL) & 0xFFFB) == 2 )
        goto LABEL_17;
    }
LABEL_13:
    if ( v27 == 1 )
      return -1;
    v27 = 1;
    v9 = v10;
  }
}

