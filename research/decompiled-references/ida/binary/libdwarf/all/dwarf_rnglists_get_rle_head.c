__int64 __fastcall dwarf_rnglists_get_rle_head(
        __int64 a1,
        __int16 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        _QWORD *a7)
{
  __int64 v7; // r15
  struct Dwarf_Debug_s *v11; // rbx
  __int64 result; // rax
  struct Dwarf_Debug_s *v13; // rdx
  struct Dwarf_Debug_s *v14; // rcx
  struct Dwarf_Debug_s *v15; // rax
  struct Dwarf_Debug_s *v16; // rdx

  if ( !a1 )
  {
    _dwarf_error_string(0, a7, 81, "DW_DLE_DBG_NULL NULL attribute argument passed to dwarf_rnglists_get_rle_head()");
    return 1;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v11 = *(struct Dwarf_Debug_s **)v7;
  if ( a2 == 35 )
  {
    if ( !v11 || *(_QWORD *)v11 != 3959286781LL )
      goto LABEL_5;
    if ( !*(_DWORD *)(v7 + 576) && *((_QWORD *)v11 + 828) != 1 )
    {
      v15 = *((struct Dwarf_Debug_s **)v11 + 4);
      if ( v15 )
      {
        if ( v15 != v11 )
        {
          v16 = *((struct Dwarf_Debug_s **)v15 + 4);
          if ( v15 == v16 )
          {
            if ( v16 )
            {
              v11 = *((struct Dwarf_Debug_s **)v11 + 4);
              if ( *(_QWORD *)v11 != 3959286781LL )
              {
                _dwarf_error_string(
                  0,
                  a7,
                  81,
                  "DW_DLE_DBG_NULL: dbg argument to dwarf_rnglists_get_rle_head() via attribute(sec)either null or it con"
                  "tainsa stale Dwarf_Debug pointer");
                return 1;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    if ( !v11 || *(_QWORD *)v11 != 3959286781LL )
    {
LABEL_5:
      _dwarf_error_string(
        0,
        a7,
        81,
        "DW_DLE_DBG_NULL: dbg argument to dwarf_rnglists_get_rle_head() via attributeeither null or it containsa stale Dw"
        "arf_Debug pointer");
      return 1;
    }
    if ( a3 >= *((_QWORD *)v11 + 452) )
    {
      v13 = *((struct Dwarf_Debug_s **)v11 + 4);
      if ( v13 != v11 )
      {
        if ( v13 )
        {
          v14 = *((struct Dwarf_Debug_s **)v13 + 4);
          if ( v13 == v14 )
          {
            if ( v14 )
            {
              v11 = *((struct Dwarf_Debug_s **)v11 + 4);
              if ( *(_QWORD *)v13 != 3959286781LL )
              {
                _dwarf_error_string(
                  0,
                  a7,
                  81,
                  "DW_DLE_DBG_NULL: dbg argument to dwarf_rnglists_get_rle_head() via attribute(secb)either null or it co"
                  "ntainsa stale Dwarf_Debug pointer");
                return 1;
              }
            }
          }
        }
      }
    }
  }
  result = _dwarf_load_section(v11, (char *)v11 + 3608, a7);
  if ( (_DWORD)result == 1 )
    return 1;
  if ( !(_DWORD)result )
  {
    if ( *((_QWORD *)v11 + 452) )
      return sub_54540(v11, a2, a3, v7, a4, a5, a6, a7);
  }
  return result;
}

