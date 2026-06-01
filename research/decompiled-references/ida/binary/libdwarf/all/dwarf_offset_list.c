__int64 __fastcall dwarf_offset_list(
        Dwarf_Debug a1,
        Dwarf_Off a2,
        Dwarf_Bool a3,
        __int64 *a4,
        _QWORD *a5,
        Dwarf_Error *a6)
{
  unsigned int v7; // r15d
  unsigned int v11; // eax
  Dwarf_Die v12; // r12
  unsigned int v13; // eax
  void **alloc; // rax
  void *v15; // rbp
  void *v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // rbp
  void *v20; // rsi
  void *v21; // rsi
  void *v22; // r13
  void *v23; // rsi
  void *v24; // rbp
  void *v25; // rsi
  unsigned int v26; // [rsp+0h] [rbp-88h]
  unsigned int v27; // [rsp+0h] [rbp-88h]
  __int64 v28; // [rsp+0h] [rbp-88h]
  void **v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+10h] [rbp-78h]
  Dwarf_Die v31; // [rsp+20h] [rbp-68h] BYREF
  Dwarf_Die v32; // [rsp+28h] [rbp-60h] BYREF
  struct Dwarf_Die_s *v33; // [rsp+30h] [rbp-58h] BYREF
  void *v34; // [rsp+38h] [rbp-50h] BYREF
  Dwarf_Off v35[9]; // [rsp+40h] [rbp-48h] BYREF

  v35[1] = __readfsqword(0x28u);
  v31 = nullptr;
  v32 = nullptr;
  v33 = nullptr;
  v34 = nullptr;
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    *a4 = 0;
    *a5 = 0;
    v7 = dwarf_offdie_b(a1, a2, a3, &v31, a6);
    if ( !v7 )
    {
      v11 = dwarf_child(v31, &v32, a6);
      if ( ((v11 + 1) & 0xFFFFFFFD) != 0 )
      {
        v26 = v11;
        dwarf_dealloc_die(v31);
        v12 = v32;
        v30 = 0;
        v29 = &v34;
        v13 = v26;
        v32 = nullptr;
        while ( 1 )
        {
          if ( !v13 )
          {
            v35[0] = 0;
            if ( dwarf_dieoffset(v12, v35, a6) == 1 )
            {
              v24 = v34;
              while ( v24 )
              {
                v25 = v24;
                v24 = *((void **)v24 + 1);
                dwarf_dealloc(a1, v25, 0x3Du);
              }
              dwarf_dealloc_die(v12);
              return 1;
            }
            alloc = (void **)_dwarf_get_alloc(a1, 61, 1);
            if ( !alloc )
            {
              v22 = v34;
              while ( v22 )
              {
                v23 = v22;
                v22 = *((void **)v22 + 1);
                dwarf_dealloc(a1, v23, 0x3Du);
              }
              dwarf_dealloc_die(v12);
              _dwarf_error(a1, a6, 62);
              return 1;
            }
            ++v30;
            *alloc = (void *)v35[0];
            *v29 = alloc;
            v29 = alloc + 1;
          }
          v33 = nullptr;
          v13 = dwarf_siblingof_c(v12, &v33, a6);
          if ( v31 != v12 )
          {
            v27 = v13;
            dwarf_dealloc(a1, v12, 8u);
            v13 = v27;
          }
          if ( v13 == 1 )
          {
            v15 = v34;
            while ( v15 )
            {
              v16 = v15;
              v15 = *((void **)v15 + 1);
              dwarf_dealloc(a1, v16, 0x3Du);
            }
            return 1;
          }
          if ( v13 == -1 )
            break;
          v12 = v33;
        }
        v17 = _dwarf_get_alloc(a1, 25, v30);
        v18 = v34;
        v28 = v17;
        if ( !v17 )
        {
          while ( v18 )
          {
            v21 = v18;
            v18 = (_QWORD *)v18[1];
            dwarf_dealloc(a1, v21, 0x3Du);
          }
          _dwarf_error(a1, a6, 62);
          return 1;
        }
        v19 = 0;
        if ( v30 )
        {
          do
          {
            v20 = v18;
            *(_QWORD *)(v28 + 8 * v19) = *v18;
            v18 = (_QWORD *)v18[1];
            ++v19;
            dwarf_dealloc(a1, v20, 0x3Du);
          }
          while ( v30 != v19 );
        }
        *a4 = v28;
        *a5 = v30;
      }
      else
      {
        return v11;
      }
    }
  }
  else
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_offset_list()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  return v7;
}

