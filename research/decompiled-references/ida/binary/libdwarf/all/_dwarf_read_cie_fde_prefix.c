__int64 __fastcall dwarf_read_cie_fde_prefix(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v8; // r14
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // eax
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // edx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rsi
  unsigned __int64 v24; // [rsp+8h] [rbp-B0h]
  __int64 v26; // [rsp+20h] [rbp-98h]
  unsigned __int64 v27; // [rsp+28h] [rbp-90h]
  __int64 v28; // [rsp+30h] [rbp-88h]
  int v29; // [rsp+38h] [rbp-80h]
  int v30; // [rsp+3Ch] [rbp-7Ch]
  __int64 v31; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v32[13]; // [rsp+50h] [rbp-68h] BYREF

  v8 = a3 + a5;
  v32[5] = __readfsqword(0x28u);
  v31 = 0;
  if ( a2 >= a3 && a2 < v8 )
  {
    if ( v8 < a2 + 4 )
    {
      dwarfstring_constructor(v32);
      dwarfstring_append_printf_u(
        v32,
        "DW_DLE_DEBUG_FRAME_LENGTH_BAD: Reading the cie/fde prefix would put us %u bytes past the end of the frame sectio"
        "n.  Corrupt Dwarf.",
        a2 - v8 + 4);
      v21 = dwarfstring_string(
              v32,
              "DW_DLE_DEBUG_FRAME_LENGTH_BAD: Reading the cie/fde prefix would put us %u bytes past the end of the frame "
              "section.  Corrupt Dwarf.",
              v20);
      _dwarf_error_string(a1, a7, 89, v21);
      dwarfstring_destructor(v32);
      return 1;
    }
    v32[0] = 0;
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v32, a2, 4);
    v12 = v32[0];
    v13 = a2 + 4;
    if ( v32[0] == 0xFFFFFFFFLL )
    {
      v32[0] = 0;
      if ( v8 < a2 + 12 )
        goto LABEL_31;
      (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v32, v13, 8);
      v12 = v32[0];
      if ( a5 >= v32[0] )
      {
        if ( !v32[0] )
          return 0xFFFFFFFFLL;
        if ( v32[0] >= *(_QWORD *)(a1 + 240) )
          goto LABEL_32;
        v13 = a2 + 12;
        v15 = 12;
        v16 = 8;
        v17 = 4;
        v18 = 8;
LABEL_13:
        if ( a5 >= v12 + v15 && v13 + v16 < v8 )
        {
          v32[0] = 0;
          if ( v13 + v16 < v13 )
          {
            _dwarf_error_string(a1, a7, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
            return 1;
          }
          v30 = v17;
          v29 = v18;
          v28 = v12;
          v27 = v13 + v16;
          v26 = v16;
          v24 = v13;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64))(a1 + 8296))(v32, v13);
          v31 = v32[0];
          if ( *((char *)&v31 + v29 - 1) < 0 && (_DWORD)v26 != 8 )
          {
            v22 = 0;
            do
            {
              v23 = v22++;
              *((_BYTE *)&v32[-1] + v26 + v23) = *((_BYTE *)&qword_8DCB0 + v23);
            }
            while ( v22 < 8 - (int)v26 );
          }
          *(_QWORD *)(a6 + 16) = v28;
          *(_QWORD *)a6 = a2;
          *(_QWORD *)(a6 + 8) = v27;
          if ( v8 >= v24 + v28 )
          {
            *(_DWORD *)(a6 + 28) = v30;
            v19 = v31;
            *(_DWORD *)(a6 + 24) = v29;
            *(_QWORD *)(a6 + 32) = v19;
            *(_QWORD *)(a6 + 56) = a4;
            *(_QWORD *)(a6 + 40) = v24;
            *(_QWORD *)(a6 + 48) = a3;
            *(_QWORD *)(a6 + 64) = a5;
            return 0;
          }
        }
        goto LABEL_32;
      }
    }
    else
    {
      if ( !v32[0] )
      {
        if ( !*(_BYTE *)(a1 + 8360) || *(_BYTE *)(a1 + 232) != 8 )
          return 0xFFFFFFFFLL;
        if ( v8 >= a2 + 8 )
        {
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v32, a2, 8);
          v12 = v32[0];
          v13 = a2 + 8;
          if ( a5 >= v32[0] )
          {
            if ( v32[0] )
            {
              if ( v32[0] < *(_QWORD *)(a1 + 240) )
              {
                v15 = 8;
                v16 = 8;
                v17 = 0;
                v18 = 8;
                goto LABEL_13;
              }
LABEL_32:
              _dwarf_error(a1, a7, 89);
              return 1;
            }
            return 0xFFFFFFFFLL;
          }
          goto LABEL_30;
        }
LABEL_31:
        _dwarf_error_string(a1, a7, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
      if ( a5 >= v32[0] )
      {
        if ( v32[0] >= *(_QWORD *)(a1 + 240) )
          goto LABEL_32;
        v15 = 4;
        v16 = 4;
        v17 = 0;
        v18 = 4;
        goto LABEL_13;
      }
    }
LABEL_30:
    _dwarf_create_area_len_error(a1, a7, v12, a5);
    return 1;
  }
  _dwarf_error_string(
    a1,
    a7,
    89,
    "DW_DLE_DEBUG_FRAME_LENGTH_BAD: The frame point given _dwarf_read_cie_fde_prefix() is invalid");
  return 1;
}

