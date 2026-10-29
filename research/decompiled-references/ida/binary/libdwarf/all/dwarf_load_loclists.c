__int64 __fastcall dwarf_load_loclists(struct Dwarf_Debug_s *a1, struct Dwarf_Debug_s *a2, __int64 a3)
{
  __int64 v3; // r9
  struct Dwarf_Debug_s *v4; // r14
  __int64 result; // rax
  struct Dwarf_Debug_s *v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rbp
  void **v12; // r12
  int v13; // ebx
  void **alloc; // rax
  void **v15; // rax
  void **v16; // r14
  void **v17; // rbx
  struct Dwarf_Debug_s *v18; // r14
  __int64 v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // r12
  struct Dwarf_Debug_s *v22; // r9
  _QWORD *v23; // r15
  void ***v24; // rsi
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  void *v27; // rsi
  __int64 v28; // rdx
  _QWORD *v29; // rax
  struct Dwarf_Debug_s *v30; // rdi
  const char *v31; // rcx
  struct Dwarf_Debug_s *v32; // [rsp+0h] [rbp-88h]
  Dwarf_Debug v34; // [rsp+0h] [rbp-88h]
  Dwarf_Debug v35; // [rsp+0h] [rbp-88h]
  __int64 v36; // [rsp+8h] [rbp-80h]
  struct Dwarf_Debug_s *v37; // [rsp+8h] [rbp-80h]
  struct Dwarf_Debug_s *v38; // [rsp+8h] [rbp-80h]
  struct Dwarf_Debug_s *v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+38h] [rbp-50h] BYREF
  void *v41[9]; // [rsp+40h] [rbp-48h] BYREF

  v41[1] = (void *)__readfsqword(0x28u);
  v3 = a3;
  if ( !a1 || (v4 = a1, *(_QWORD *)a1 != 3959286781LL) )
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_load_loclists()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v6 = a2;
  if ( *((_QWORD *)a1 + 831) )
  {
    if ( a2 )
      *(_QWORD *)a2 = *((_QWORD *)a1 + 830);
    return 0;
  }
  v7 = *((_QWORD *)a1 + 423);
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = *((_QWORD *)v4 + 422);
  if ( v8 )
  {
LABEL_12:
    v40 = 0;
    v9 = v8 + v7;
    v41[0] = nullptr;
    if ( v8 >= v8 + v7 )
    {
      v38 = (struct Dwarf_Debug_s *)v3;
      v34 = v6;
      v29 = malloc(0);
      v25 = v34;
      v22 = v38;
      v23 = v29;
      if ( !v29 )
      {
        v24 = (void ***)v41[0];
LABEL_37:
        v35 = v22;
        sub_3C040(v4, v24);
        v31 = "Allocation of Loclists_Context pointer array failed";
LABEL_35:
        _dwarf_error_string(v4, v35, 62, v31);
        return 1;
      }
      v19 = 0;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      v12 = v41;
      v13 = v8;
      v32 = v4;
      v39 = v6;
      v36 = v3;
      while ( 1 )
      {
        v15 = (void **)calloc(0x78u, 1u);
        v16 = v15;
        if ( !v15 )
        {
          v4 = v32;
          v30 = v32;
          v35 = (Dwarf_Debug)v36;
          sub_3C040(v30, (void ***)v41[0]);
          v31 = "DW_DLE_ALLOC_FAIL: Allocation of Loclists_Context failed";
          goto LABEL_35;
        }
        if ( (unsigned int)_dwarf_internal_read_loclists_header(
                             (int)v32,
                             1,
                             v11,
                             v7,
                             v13,
                             v9,
                             v10,
                             (__int64)v15,
                             (__int64)&v40,
                             v36) == 1 )
        {
          v17 = v16;
          v18 = v32;
LABEL_20:
          sub_3C040(v18, (void ***)v41[0]);
          free(v17[7]);
          free(v17);
          return 1;
        }
        v16[4] = &dword_ADAB4;
        alloc = (void **)_dwarf_get_alloc(v32, 31, 1);
        if ( !alloc )
        {
          v17 = v16;
          v18 = v32;
          _dwarf_error_string(v32, v36, 62, "DW_DLE_ALLOC_FAIL: allocating Loclists_Context chain entry");
          goto LABEL_20;
        }
        *alloc = v16;
        *v12 = alloc;
        v12 = alloc + 2;
        v10 = v40;
        v13 = v8 + v40;
        if ( v8 + v40 >= v9 )
          break;
        ++v11;
      }
      v19 = v11 + 1;
      v4 = v32;
      v20 = malloc(8 * (v11 + 1));
      v21 = v41[0];
      v22 = (struct Dwarf_Debug_s *)v36;
      v23 = v20;
      v24 = (void ***)v41[0];
      if ( !v20 )
        goto LABEL_37;
      v25 = v39;
      if ( v11 != -1 )
      {
        v26 = 0;
        do
        {
          v27 = v21;
          v23[v26] = *v21;
          *v21 = 0;
          v21 = (_QWORD *)v21[2];
          dwarf_dealloc(v32, v27, 0x1Fu);
          v28 = v26++;
        }
        while ( v28 != v11 );
        v19 = v11 + 1;
        v25 = v39;
      }
    }
    *((_QWORD *)v4 + 831) = v23;
    *((_QWORD *)v4 + 830) = v19;
    if ( v25 )
    {
      *v25 = v19;
      return 0;
    }
    return 0;
  }
  v37 = v6;
  result = _dwarf_load_section(v4, (char *)v4 + 3376, a3);
  if ( !(_DWORD)result )
  {
    v8 = *((_QWORD *)v4 + 422);
    v7 = *((_QWORD *)v4 + 423);
    v6 = v37;
    v3 = a3;
    goto LABEL_12;
  }
  return result;
}

