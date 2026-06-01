__int64 __fastcall dwarf_get_debugfission_for_offset(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // [rsp+8h] [rbp-A0h]
  __int64 v13; // [rsp+38h] [rbp-70h] BYREF
  __int64 v14; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+48h] [rbp-60h] BYREF
  __int64 v16; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v18[9]; // [rsp+60h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  v13 = 0;
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to _dwarf_get_debugfission_for_offset()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v17 = 0;
  result = sub_5C630((__int64)a1, a3, &v13, a5);
  if ( !(_DWORD)result )
  {
    v8 = v13;
    if ( !*(_QWORD *)(v13 + 32) )
    {
LABEL_23:
      _dwarf_error(a1, a5, 295);
      return 1;
    }
    v9 = 0;
    while ( 1 )
    {
      v15 = 0;
      v16 = 0;
      result = dwarf_get_xu_section_names(v8, v9, &v16, &v15, a5);
      if ( (_DWORD)result )
        break;
      if ( v16 == 1 )
      {
        if ( !*(_QWORD *)(v8 + 48) )
          return 0xFFFFFFFFLL;
        v11 = v9;
        v10 = 0;
        while ( 1 )
        {
          v14 = 0;
          v15 = 0;
          v16 = 0;
          result = dwarf_get_xu_hash_entry(v8, v10, v18, &v14, a5);
          if ( (_DWORD)result )
            break;
          if ( v14 || v18[0] )
          {
            result = dwarf_get_xu_section_offset(v8, v14, v11, &v15, &v16, a5);
            if ( (_DWORD)result )
              return result;
            if ( a2 == v15 )
            {
              v17 = v18[0];
              return sub_5D7E0(v8, v14, &v17, (__int64)a3, a4, a5);
            }
          }
          if ( (unsigned __int64)++v10 >= *(_QWORD *)(v8 + 48) )
            return 0xFFFFFFFFLL;
        }
        return result;
      }
      if ( (unsigned __int64)++v9 >= *(_QWORD *)(v8 + 32) )
        goto LABEL_23;
    }
  }
  return result;
}

