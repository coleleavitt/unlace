__int64 __fastcall dwarf_srclines_files_data_b(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v17[9]; // [rsp+20h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0;
  v17[0] = 0;
  if ( a2 < 0 )
  {
    _dwarf_error_string(
      *(_QWORD *)(a1 + 288),
      a8,
      499,
      "DW_DLE_LINE_INDEX_WRONG Call to dwarf_srclines_files_data_b passes an Impossible index argument value");
    return 1;
  }
  if ( !a1 || *(_DWORD *)a1 != -804450031 )
  {
    _dwarf_error(0, a8, 305);
    return 1;
  }
  result = dwarf_srclines_files_indexes(a1, &v15, &v16, v17, a8);
  if ( !(_DWORD)result )
  {
    v12 = v15;
    if ( v15 < 0 )
    {
      _dwarf_error_string(
        *(_QWORD *)(a1 + 288),
        a8,
        499,
        "DW_DLE_LINE_INDEX_WRONG Call to dwarf_srclines_file_data_b finds an Impossible file entry index value");
      return 1;
    }
    if ( v16 < 0 )
    {
      _dwarf_error_string(
        *(_QWORD *)(a1 + 288),
        a8,
        500,
        "DW_DLE_LINE_COUNT_WRONG Call to dwarf_srclines_file_data_b finds an Impossible file count value");
      return 1;
    }
    if ( v17[0] < 0LL )
    {
      _dwarf_error_string(
        *(_QWORD *)(a1 + 288),
        a8,
        499,
        "DW_DLE_LINE_INDEX_WRONG Call to dwarf_srclines_file_data_b finds an Impossible endindex value");
      return 1;
    }
    if ( v15 > a2 || v17[0] <= a2 )
    {
      _dwarf_error(*(_QWORD *)(a1 + 288), a8, 306);
      return 1;
    }
    v13 = *(__int64 **)(a1 + 216);
    if ( v15 < a2 )
    {
      while ( 1 )
      {
        v13 = (__int64 *)*v13;
        if ( !v13 )
          break;
        if ( a2 <= ++v12 )
          goto LABEL_20;
      }
      _dwarf_error(*(_QWORD *)(a1 + 288), a8, 401);
      return 1;
    }
LABEL_20:
    if ( a3 )
      *a3 = v13[1];
    if ( a4 )
      *a4 = v13[3];
    if ( a5 )
      *a5 = v13[4];
    if ( a6 )
      *a6 = v13[5];
    if ( a7 )
    {
      if ( *((_BYTE *)v13 + 91) )
        *a7 = v13 + 9;
      else
        *a7 = 0;
    }
  }
  return result;
}

