__int64 __fastcall dwarf_get_section_info_by_index_a(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // [rsp+1Ch] [rbp-9Ch] BYREF
  _QWORD v17[19]; // [rsp+20h] [rbp-98h] BYREF

  v17[11] = __readfsqword(0x28u);
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    LODWORD(v13) = dwarf_get_section_count((Dwarf_Debug)a1);
    v14 = v13;
    if ( a4 )
      *a4 = 0;
    if ( a5 )
      *a5 = 0;
    if ( a3 )
      *a3 = 0;
    if ( a6 )
      *a6 = 0;
    if ( a7 )
      *a7 = 0;
    result = 0xFFFFFFFFLL;
    if ( a2 >= 0 && a2 < v14 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v16 = 0;
      if ( v15 )
      {
        if ( (**(unsigned int (__fastcall ***)(_QWORD, _QWORD, _QWORD *, int *))(v15 + 8))(
               *(_QWORD *)v15,
               a2,
               v17,
               &v16) == 1 )
        {
          _dwarf_error(a1, a8, v16);
          return 1;
        }
        else
        {
          if ( a4 )
            *a4 = v17[3];
          if ( a5 )
            *a5 = v17[5];
          if ( a3 )
            *a3 = v17[0];
          if ( a6 )
            *a6 = v17[2];
          if ( a7 )
            *a7 = v17[4];
          return 0;
        }
      }
    }
  }
  else
  {
    _dwarf_error_string(
      0,
      a8,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_section_info_by_index_a()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  return result;
}

