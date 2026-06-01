__int64 __fastcall dwarf_get_ranges_baseaddress(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        Dwarf_Bool *a5,
        Dwarf_Off *a6,
        Dwarf_Error *a7)
{
  int v12; // eax
  Dwarf_Bool *v13; // r8
  Dwarf_Bool v14; // edx
  __int64 v15; // rax
  Dwarf_Off v16; // rcx
  int v17; // eax
  Dwarf_Error v18; // rsi
  Dwarf_Bool *v20; // [rsp+8h] [rbp-60h]
  Dwarf_Bool v21; // [rsp+14h] [rbp-54h] BYREF
  Dwarf_Attribute v22; // [rsp+18h] [rbp-50h] BYREF
  Dwarf_Off v23[9]; // [rsp+20h] [rbp-48h] BYREF

  v23[1] = __readfsqword(0x28u);
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a7,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_ranges_baseaddress()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a2 )
  {
    v21 = 0;
    v22 = nullptr;
    v23[0] = 0;
    v12 = dwarf_hasattr((Dwarf_Die)a2, 0x55u, &v21, a7);
    v13 = a5;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_19;
      v18 = *a7;
    }
    else
    {
      v14 = v21;
      if ( !v21 )
      {
        v15 = *(_QWORD *)(a2 + 16);
        if ( v15 )
        {
LABEL_9:
          v16 = 0;
LABEL_10:
          if ( a6 )
            *a6 = v16;
          if ( v13 )
            *v13 = v14;
          if ( *(_DWORD *)(v15 + 344) )
          {
            *a4 = *(_QWORD *)(v15 + 392);
            *a3 = *(_DWORD *)(v15 + 344);
          }
          return 0;
        }
        goto LABEL_30;
      }
      v17 = dwarf_attr((Dwarf_Die)a2, 0x55u, &v22, a7);
      v13 = a5;
      if ( v17 )
      {
        if ( v17 != 1 )
          goto LABEL_19;
      }
      else
      {
        if ( dwarf_global_formref(v22, v23, a7) != 1 )
        {
          dwarf_dealloc_attribute(v22);
          v15 = *(_QWORD *)(a2 + 16);
          v16 = v23[0];
          v14 = 1;
          v13 = a5;
          if ( v15 )
            goto LABEL_10;
          goto LABEL_30;
        }
        dwarf_dealloc_attribute(v22);
      }
      dwarf_dealloc_error(a1, *a7);
      *a7 = nullptr;
      v13 = a5;
      v18 = nullptr;
    }
    v20 = v13;
    dwarf_dealloc_error(a1, v18);
    *a7 = nullptr;
    v13 = v20;
LABEL_19:
    v15 = *(_QWORD *)(a2 + 16);
    if ( v15 )
    {
      v14 = 0;
      goto LABEL_9;
    }
LABEL_30:
    _dwarf_error_string(a1, a7, 104, "DW_DLE_DIE_NO_CU_CONTEXT: in a call to dwarf_get_ranges_baseaddress");
    return 1;
  }
  if ( a3 )
  {
    *a3 = 0;
    *a5 = 0;
  }
  if ( !a4 )
    return 0;
  *a4 = 0;
  *a6 = 0;
  return 0;
}

