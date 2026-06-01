__int64 __fastcall dwarf_gdbindex_header(
        struct Dwarf_Debug_s *a1,
        struct Dwarf_Debug_s ***a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        __int64 a11)
{
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned __int64 v15; // rax
  unsigned int *v17; // rcx
  struct Dwarf_Debug_s ***v18; // r10
  struct Dwarf_Debug_s **alloc; // rax
  unsigned int *v22; // rcx
  struct Dwarf_Debug_s ***v23; // r10
  _QWORD *v24; // r11
  __int64 v25; // r8
  struct Dwarf_Debug_s **v26; // rbp
  struct Dwarf_Debug_s *v27; // rdx
  struct Dwarf_Debug_s *v28; // rsi
  struct Dwarf_Debug_s *v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r9
  struct Dwarf_Debug_s *v32; // rdi
  __int64 v33; // rdx
  struct Dwarf_Debug_s *v34; // rax
  __int64 result; // rax
  const char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-A0h]
  struct Dwarf_Debug_s *v39; // [rsp+10h] [rbp-98h]
  struct Dwarf_Debug_s *v40; // [rsp+10h] [rbp-98h]
  struct Dwarf_Debug_s *v41; // [rsp+10h] [rbp-98h]
  __int64 v42; // [rsp+10h] [rbp-98h]
  unsigned int *v43; // [rsp+20h] [rbp-88h]
  unsigned __int64 v44; // [rsp+20h] [rbp-88h]
  struct Dwarf_Debug_s ***v45; // [rsp+28h] [rbp-80h]
  struct Dwarf_Debug_s *v46; // [rsp+28h] [rbp-80h]
  _QWORD *v47; // [rsp+30h] [rbp-78h]
  unsigned __int64 v48; // [rsp+30h] [rbp-78h]
  __int64 v49; // [rsp+38h] [rbp-70h]
  struct Dwarf_Debug_s *v50; // [rsp+38h] [rbp-70h]
  _BYTE v51[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v12 = a7;
  v52 = __readfsqword(0x28u);
  v13 = a11;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a11,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_gdbindex_header()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v15 = *((_QWORD *)a1 + 833);
  if ( !v15 )
    return 0xFFFFFFFFLL;
  v17 = *((unsigned int **)a1 + 832);
  v18 = a2;
  if ( v17 )
  {
LABEL_5:
    if ( v15 <= 0x17 )
    {
      _dwarf_error(a1, v13, 261);
    }
    else
    {
      v49 = v13;
      v47 = (_QWORD *)v12;
      v45 = v18;
      v43 = v17;
      alloc = (struct Dwarf_Debug_s **)_dwarf_get_alloc(a1, 55, 1);
      v22 = v43;
      v23 = v45;
      v24 = v47;
      v25 = v49;
      v26 = alloc;
      if ( !alloc )
      {
        _dwarf_error_string(a1, v49, 62, "DW_DLE_ALLOC_FAIL: allocating Dwarf_Gdbindex");
        return 1;
      }
      v27 = (struct Dwarf_Debug_s *)*v43;
      *alloc = a1;
      alloc[1] = (struct Dwarf_Debug_s *)v43;
      alloc[3] = v27;
      v28 = *((struct Dwarf_Debug_s **)a1 + 833);
      alloc[2] = v28;
      if ( (unsigned __int64)v27 - 7 > 1 )
      {
        v39 = v27;
        v38 = v49;
        dwarfstring_constructor(v51);
        v36 = "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION:  version number %u is not supported";
        dwarfstring_append_printf_u(v51, "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION:  version number %u is not supported", v39);
      }
      else
      {
        v29 = (struct Dwarf_Debug_s *)v43[1];
        alloc[4] = v29;
        if ( v28 < v29 )
        {
          v40 = v29;
          v38 = v49;
          dwarfstring_constructor(v51);
          v36 = "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION cu list offset of %u is too large for the section";
          dwarfstring_append_printf_u(
            v51,
            "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION cu list offset of %u is too large for the section",
            v40);
        }
        else
        {
          v30 = v43[2];
          v26[5] = (struct Dwarf_Debug_s *)v30;
          if ( (unsigned __int64)v28 < v30 )
          {
            v41 = v29;
            v38 = v49;
            dwarfstring_constructor(v51);
            v36 = "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION types cu list offset of %u is too large for the section";
            dwarfstring_append_printf_u(
              v51,
              "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION types cu list offset of %u is too large for the section",
              v41);
          }
          else
          {
            v31 = v43[3];
            v26[6] = (struct Dwarf_Debug_s *)v31;
            if ( (unsigned __int64)v28 < v31 )
            {
              v42 = v31;
              v38 = v49;
              dwarfstring_constructor(v51);
              v36 = "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION address area offset of %u is too large for the section";
              dwarfstring_append_printf_u(
                v51,
                "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION address area offset of %u is too large for the section",
                v42);
            }
            else
            {
              v44 = v43[4];
              v26[7] = (struct Dwarf_Debug_s *)v44;
              if ( (unsigned __int64)v28 < v44 )
              {
                v38 = v49;
                dwarfstring_constructor(v51);
                v36 = "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION symbol table offset of %u is too large for the section";
                dwarfstring_append_printf_u(
                  v51,
                  "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION symbol table offset of %u is too large for the section",
                  v44);
              }
              else
              {
                v48 = v22[5];
                v26[8] = (struct Dwarf_Debug_s *)v48;
                if ( (unsigned __int64)v28 >= v48 )
                {
                  v46 = (struct Dwarf_Debug_s *)((char *)v22 + v30);
                  if ( (struct Dwarf_Debug_s *)((unsigned __int64)v22 + v30) >= (struct Dwarf_Debug_s *)((char *)v29 + (_QWORD)v22) )
                  {
                    v26[9] = (struct Dwarf_Debug_s *)((char *)v29 + (_QWORD)v22);
                    v26[11] = (struct Dwarf_Debug_s *)&word_10;
                    v26[12] = (struct Dwarf_Debug_s *)0x100000008LL;
                    v26[10] = (struct Dwarf_Debug_s *)((v30 - (unsigned __int64)v29) >> 4);
                    v50 = (struct Dwarf_Debug_s *)((char *)v22 + v31);
                    if ( (char *)v22 + v31 >= (char *)v46 )
                    {
                      v26[15] = (struct Dwarf_Debug_s *)&qword_18;
                      v26[16] = (struct Dwarf_Debug_s *)0x100000008LL;
                      v26[13] = v46;
                      v32 = (struct Dwarf_Debug_s *)((char *)v22 + v44);
                      v26[14] = (struct Dwarf_Debug_s *)((v31 - v30) / 0x18);
                      v33 = 263;
                      v26[17] = v50;
                      if ( (char *)v22 + v44 < (char *)v50 )
                      {
LABEL_32:
                        _dwarf_error(a1, v25, v33);
                        dwarf_dealloc(a1, v26, 0x37u);
                        return 1;
                      }
                      v26[19] = (struct Dwarf_Debug_s *)&dword_14;
                      v26[20] = (struct Dwarf_Debug_s *)0x200000004LL;
                      v34 = (struct Dwarf_Debug_s *)((char *)v22 + v48);
                      v26[18] = (struct Dwarf_Debug_s *)((v44 - v31) / 0x14);
                      if ( (char *)v22 + v48 >= (char *)v32 )
                      {
                        v26[21] = v32;
                        v26[23] = (struct Dwarf_Debug_s *)&byte_8;
                        v26[22] = (struct Dwarf_Debug_s *)((v48 - v44) >> 3);
                        v26[24] = (struct Dwarf_Debug_s *)0x100000004LL;
                        if ( (char *)v22 + (unsigned __int64)v28 >= (char *)v34 )
                        {
                          v26[25] = v34;
                          v26[27] = (struct Dwarf_Debug_s *)&byte_4;
                          v26[26] = (struct Dwarf_Debug_s *)(((unsigned __int64)v28 - v48) >> 2);
                          v26[28] = (struct Dwarf_Debug_s *)0x300000004LL;
                          *v23 = v26;
                          *a3 = v26[3];
                          *a4 = v26[4];
                          *a5 = v26[5];
                          *a6 = v26[6];
                          *v24 = v26[7];
                          *a8 = v26[8];
                          *a9 = v26[2];
                          *a10 = *((_QWORD *)a1 + 855);
                          return 0;
                        }
                      }
                    }
                  }
                  v33 = 262;
                  goto LABEL_32;
                }
                v38 = v49;
                dwarfstring_constructor(v51);
                v36 = "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION constant pool offset of %u is too large for the section";
                dwarfstring_append_printf_u(
                  v51,
                  "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION constant pool offset of %u is too large for the section",
                  v48);
              }
            }
          }
        }
      }
      v37 = dwarfstring_string(v51, v36);
      _dwarf_error_string(a1, v38, 261, v37);
      dwarfstring_destructor(v51);
      dwarf_dealloc(a1, v26, 0x37u);
    }
    return 1;
  }
  result = _dwarf_load_section(a1, (char *)a1 + 6656, a11);
  if ( !(_DWORD)result )
  {
    v17 = *((unsigned int **)a1 + 832);
    v13 = a11;
    v18 = a2;
    v12 = a7;
    if ( !v17 )
    {
      _dwarf_error_string(
        a1,
        a11,
        261,
        "DW_DLE_ERRONEOUS_GDB_INDEX_SECTION: We have non-zero (section) dss_size but null dss_data pointer");
      return 1;
    }
    v15 = *((_QWORD *)a1 + 833);
    goto LABEL_5;
  }
  return result;
}

