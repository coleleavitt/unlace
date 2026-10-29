__int64 __fastcall dwarf_next_cu_header_internal(
        Dwarf_Debug a1,
        unsigned int a2,
        void **a3,
        _QWORD *a4,
        _WORD *a5,
        _QWORD *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _QWORD *a10,
        _DWORD *a11,
        _QWORD *a12,
        _QWORD *a13,
        _WORD *a14,
        Dwarf_Error *a15)
{
  char *v18; // r15
  __int64 v19; // rax
  __int64 cu_context_offset; // r13
  unsigned __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 result; // rax
  char *v29; // [rsp+58h] [rbp-60h]
  void *v30; // [rsp+68h] [rbp-50h] BYREF
  __int64 v31[9]; // [rsp+70h] [rbp-48h] BYREF

  v31[1] = __readfsqword(0x28u);
  v30 = nullptr;
  v31[0] = 0;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a15,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_next_cuheader_[d,e]()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a2 )
  {
    v18 = (char *)a1 + 360;
    v29 = (char *)a1 + 104;
    v19 = *((_QWORD *)a1 + 45);
  }
  else
  {
    v18 = (char *)a1 + 592;
    v29 = (char *)a1 + 152;
    v19 = *((_QWORD *)a1 + 74);
  }
  if ( v19 || (result = _dwarf_load_die_containing_section(a1), !(_DWORD)result) )
  {
    cu_context_offset = 0;
    if ( *(_QWORD *)v29 )
      cu_context_offset = _dwarf_calculate_next_cu_context_offset();
    v21 = *((_QWORD *)v18 + 1);
    if ( cu_context_offset + _dwarf_length_of_cu_header_simple(a1, a2) >= v21 )
    {
      *(_QWORD *)v29 = 0;
      return 0xFFFFFFFFLL;
    }
    v31[0] = sub_158B0((__int64)a1, cu_context_offset, a2);
    v22 = v31[0];
    if ( !v31[0] )
    {
      result = _dwarf_create_a_new_cu_context_record_on_list(
                 a1,
                 (__int64)v29,
                 a2,
                 v21,
                 cu_context_offset,
                 (__int64)v31,
                 (__int64)&v30,
                 a15);
      if ( (_DWORD)result )
        return result;
      v22 = v31[0];
    }
    *(_QWORD *)v29 = v22;
    if ( a4 )
      *a4 = *(_QWORD *)(v22 + 8);
    if ( a5 )
      *a5 = *(_WORD *)(v22 + 18);
    if ( a6 )
      *a6 = *(_QWORD *)(v22 + 24);
    if ( a7 )
      *a7 = *(unsigned __int8 *)(v22 + 32);
    if ( a8 )
      *a8 = *(unsigned __int8 *)(v22 + 16);
    if ( a9 )
      *a9 = *(unsigned __int8 *)(v22 + 17);
    if ( a14 )
      *a14 = *(_WORD *)(v22 + 652);
    if ( a12 )
      *a12 = *(_QWORD *)(v22 + 96);
    if ( a10 )
      *a10 = *(_QWORD *)(v22 + 82);
    if ( a11 )
      *a11 = *(_DWORD *)(v22 + 336);
    if ( a13 )
      *a13 = *(unsigned __int8 *)(v22 + 17) + *(_QWORD *)(v22 + 8) + cu_context_offset + *(unsigned __int8 *)(v22 + 16);
    v23 = *((_QWORD *)a1 + 4);
    if ( v23 )
    {
      if ( a1 != (Dwarf_Debug)v23 )
      {
        v24 = *(_QWORD *)(v23 + 32);
        if ( v24 )
        {
          if ( v24 == v23 && (unsigned int)_dwarf_merge_all_base_attrs_of_cu_die() == 1 && a15 )
          {
            dwarf_dealloc_error(a1, *a15);
            *a15 = nullptr;
          }
        }
      }
    }
    if ( a3 )
    {
      if ( !v30 )
      {
        result = sub_16100(a1, 0, v31[0], a2, &v30, (__int64)a15);
        if ( !(_DWORD)result )
          *a3 = v30;
        return result;
      }
      *a3 = v30;
    }
    else if ( v30 )
    {
      dwarf_dealloc_die(v30);
      return 0;
    }
    return 0;
  }
  return result;
}

