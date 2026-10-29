int __fastcall dwarf_get_fde_for_die(__int64 a1, Dwarf_Die a2, _QWORD *a3, Dwarf_Error *a4)
{
  int result; // eax
  int v8; // eax
  int die_address_size; // eax
  int v10; // r15d
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  int cie_fde_prefix; // eax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rcx
  __int64 v18; // r14
  int fde_from_after_start; // eax
  _QWORD *v20; // rsi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  int v24; // r10d
  void *v25; // rsi
  int v26; // [rsp+8h] [rbp-110h]
  int v27; // [rsp+8h] [rbp-110h]
  int v28; // [rsp+8h] [rbp-110h]
  Dwarf_Half v29; // [rsp+1Eh] [rbp-FAh] BYREF
  Dwarf_Attribute v30; // [rsp+20h] [rbp-F8h] BYREF
  Dwarf_Signed v31; // [rsp+28h] [rbp-F0h] BYREF
  void *v32; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-E0h] BYREF
  _OWORD v34[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v35; // [rsp+60h] [rbp-B8h]
  __int128 v36; // [rsp+70h] [rbp-A8h]
  __int64 v37; // [rsp+80h] [rbp-98h]
  _OWORD v38[2]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-68h]
  __int128 v40; // [rsp+C0h] [rbp-58h]
  __int64 v41; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v29 = 0;
  v31 = 0;
  v32 = nullptr;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_fde_for_die()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( !a2 )
  {
    _dwarf_error_string(0, a4, 52, "DW_DLE_DIE_NUL: in dwarf_get_fde_for_die(): Called with Dwarf_Die argument null");
    return 1;
  }
  result = dwarf_attr(a2, 0x2001u, &v30, a4);
  if ( !result )
  {
    v8 = dwarf_formsdata(v30, &v31, a4);
    if ( v8 )
    {
      v26 = v8;
      dwarf_dealloc_attribute(v30);
      return v26;
    }
    die_address_size = dwarf_get_die_address_size(a2, &v29, a4);
    if ( die_address_size )
    {
      v27 = die_address_size;
      dwarf_dealloc_attribute(v30);
      return v27;
    }
    dwarf_dealloc_attribute(v30);
    result = _dwarf_load_section(a1, a1 + 3840, a4);
    if ( !result )
    {
      v10 = v31;
      v11 = *(_QWORD *)(a1 + 3840);
      v12 = *(_QWORD *)(a1 + 3848);
      if ( (unsigned int)_dwarf_validate_register_numbers(a1, a4) == 1 )
        return 1;
      memset(v38, 0, sizeof(v38));
      v13 = *(_QWORD *)(a1 + 3864);
      v14 = *(_QWORD *)(a1 + 3840);
      v39 = 0;
      v40 = 0;
      v41 = 0;
      memset(v34, 0, sizeof(v34));
      v35 = 0;
      v36 = 0;
      v37 = 0;
      cie_fde_prefix = _dwarf_read_cie_fde_prefix(
                         a1,
                         (int)v11 + v10,
                         v14,
                         v13,
                         *(_QWORD *)(a1 + 3848),
                         (int)v34,
                         (__int64)a4);
      if ( cie_fde_prefix == 1 )
        return 1;
      if ( cie_fde_prefix == -1 )
        return -1;
      v16 = v35;
      v17 = *(_QWORD *)(a1 + 3848);
      if ( (unsigned __int64)v35 < v17 )
      {
        v18 = v11 + v12;
        fde_from_after_start = _dwarf_create_fde_from_after_start(
                                 a1,
                                 (__int64)v34,
                                 v11,
                                 v17,
                                 *((__int64 *)&v34[0] + 1),
                                 v18,
                                 0,
                                 0,
                                 v29,
                                 (__int64)&v32,
                                 (__int64)a4);
        if ( fde_from_after_start == 1 )
          return 1;
        if ( fde_from_after_start == -1 )
          return -1;
        v20 = v32;
        *((_DWORD *)v32 + 75) = 1;
        v21 = *(_QWORD *)(a1 + 3848);
        if ( v16 < v21 )
        {
          v22 = v20[18];
          v23 = v22 + v16;
          if ( v22 < v16 )
            v22 = v16;
          if ( v23 < v22 )
          {
            dwarf_dealloc((Dwarf_Debug)a1, v20, 0x15u);
            v32 = nullptr;
            goto LABEL_22;
          }
          v24 = _dwarf_read_cie_fde_prefix(
                  a1,
                  v23,
                  *(_QWORD *)(a1 + 3840),
                  *(_QWORD *)(a1 + 3864),
                  v21,
                  (int)v38,
                  (__int64)a4);
          if ( v24 == 1 )
          {
            dwarf_dealloc((Dwarf_Debug)a1, v32, 0x15u);
            return 1;
          }
          if ( v24 != -1 )
          {
            v28 = v24;
            if ( (_QWORD)v39 != -1 )
            {
              dwarf_dealloc((Dwarf_Debug)a1, v32, 0x15u);
              v32 = nullptr;
              _dwarf_error_string(a1, a4, 150, "DW_DLE_NO_CIE_FOR_FDE: The CIE id is not a true cid id. Corrupt DWARF.");
              return 1;
            }
            v33 = 0;
            result = _dwarf_create_cie_from_after_start(
                       a1,
                       (__int64)v38,
                       v11,
                       *((__int64 *)&v38[0] + 1),
                       v18,
                       0,
                       0,
                       (__int64)&v33,
                       (__int64)a4);
            v25 = v32;
            if ( result )
            {
              dwarf_dealloc((Dwarf_Debug)a1, v32, 0x15u);
              return v28;
            }
            else
            {
              *((_QWORD *)v32 + 3) = v33;
              *a3 = v25;
            }
            return result;
          }
          dwarf_dealloc((Dwarf_Debug)a1, v32, 0x15u);
          return -1;
        }
      }
LABEL_22:
      _dwarf_error_string(
        a1,
        a4,
        150,
        "DW_DLE_NO_CIE_FOR_FDE: dwarf_get_fde_for_die fails as the CIE id offset is impossibly large");
      return 1;
    }
  }
  return result;
}

