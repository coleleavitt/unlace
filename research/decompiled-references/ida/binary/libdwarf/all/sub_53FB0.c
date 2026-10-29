__int64 __fastcall sub_53FB0(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        __int64 a10)
{
  _DWORD *v10; // r11
  _QWORD *v11; // r10
  int v12; // r13d
  unsigned __int8 *v13; // r12
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int8 *v18; // r12
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // edx
  __int64 v28; // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-B0h]
  __int64 v31; // [rsp+8h] [rbp-B0h]
  unsigned __int8 *v32; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v33; // [rsp+8h] [rbp-B0h]
  __int64 v34; // [rsp+8h] [rbp-B0h]
  __int64 v35; // [rsp+10h] [rbp-A8h]
  unsigned __int8 *v36; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+10h] [rbp-A8h]
  __int64 v38; // [rsp+10h] [rbp-A8h]
  __int64 v39; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+18h] [rbp-A0h]
  __int64 v41; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+18h] [rbp-A0h]
  __int64 v43; // [rsp+18h] [rbp-A0h]
  unsigned __int8 *v44; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+20h] [rbp-98h]
  __int64 v46; // [rsp+28h] [rbp-90h]
  __int64 v47; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v48[13]; // [rsp+50h] [rbp-68h] BYREF

  v10 = a7;
  v11 = a8;
  v48[5] = __readfsqword(0x28u);
  if ( (unsigned __int64)a2 >= a4 )
  {
    _dwarf_error_string(
      a1,
      a10,
      468,
      "DW_DLE_RNGLISTS_ERROR: An rle entry begins past the end of its allowed space. Corrupt DWARF.");
  }
  else
  {
    v12 = *a2;
    v13 = a2 + 1;
    switch ( (char)v12 )
    {
      case 0:
        v21 = 0;
        v20 = 0;
        v22 = 1;
        goto LABEL_8;
      case 1:
        v33 = a4;
        v47 = 0;
        v48[0] = 0;
        v24 = dwarf_decode_leb128(v13, &v47, v48, a4);
        a4 = v33;
        v10 = a7;
        v11 = a8;
        if ( v24 == 1 )
          goto LABEL_31;
        v20 = v48[0];
        v21 = 0;
        v13 += v47;
        v22 = v47 + 1;
        goto LABEL_8;
      case 2:
      case 3:
      case 4:
        v40 = a4;
        v47 = 0;
        v48[0] = 0;
        v16 = dwarf_decode_leb128(v13, &v47, v48, a4);
        v17 = v40;
        if ( v16 == 1 )
          goto LABEL_31;
        v18 = &v13[v47];
        v41 = v48[0];
        v35 = v47;
        v30 = v17;
        v47 = 0;
        v48[0] = 0;
        v19 = dwarf_decode_leb128(v18, &v47, v48, v17);
        a4 = v30;
        v20 = v41;
        v10 = a7;
        v11 = a8;
        if ( v19 == 1 )
          goto LABEL_31;
        v21 = v48[0];
        v13 = &v18[v47];
        v22 = v35 + v47 + 1;
        goto LABEL_8;
      case 5:
        v48[0] = 0;
        if ( __CFADD__(a5, v13) )
          goto LABEL_29;
        if ( a4 < (unsigned __int64)&v13[a5] )
          goto LABEL_27;
        v42 = a4;
        v36 = &v13[a5];
        v31 = a5;
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *))(a1 + 8296))(v48, a2 + 1);
        v20 = v48[0];
        v21 = 0;
        v13 = v36;
        a4 = v42;
        v10 = a7;
        v11 = a8;
        v22 = v31 + 1;
        goto LABEL_8;
      case 6:
        v48[0] = 0;
        if ( __CFADD__(a5, v13) )
          goto LABEL_29;
        if ( a4 < (unsigned __int64)&v13[a5] )
          goto LABEL_27;
        v45 = a4;
        v44 = &v13[a5];
        v38 = a5;
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *))(a1 + 8296))(v48, a2 + 1);
        v25 = v38;
        v26 = v48[0];
        v48[0] = 0;
        v13 = &v44[v38];
        if ( __CFADD__(v38, v44) )
        {
LABEL_29:
          _dwarf_error_string(a1, a10, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
        }
        else
        {
          if ( v45 >= (unsigned __int64)v13 )
          {
            v39 = v26;
            v34 = v25;
            (*(void (__fastcall **)(_QWORD *, unsigned __int8 *))(a1 + 8296))(v48, v44);
            v21 = v48[0];
            v20 = v39;
            a4 = v45;
            v10 = a7;
            v11 = a8;
            v22 = 2 * v34 + 1;
            goto LABEL_8;
          }
LABEL_27:
          _dwarf_error_string(a1, a10, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        }
        return 1;
      case 7:
        v48[0] = 0;
        v32 = &v13[a5];
        if ( __CFADD__(a5, v13) )
          goto LABEL_29;
        if ( a4 < (unsigned __int64)v32 )
          goto LABEL_27;
        v46 = a5;
        v37 = a4;
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, _QWORD))(a1 + 8296))(v48, a2 + 1, a5);
        v47 = 0;
        v43 = v48[0];
        v48[0] = 0;
        v23 = dwarf_decode_leb128(v32, &v47, v48, v37);
        a4 = v37;
        v20 = v43;
        v10 = a7;
        v11 = a8;
        if ( v23 == 1 )
        {
LABEL_31:
          _dwarf_error_string(a1, a10, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
        }
        else
        {
          v21 = v48[0];
          v13 = &v32[v47];
          v22 = v46 + v47 + 1;
LABEL_8:
          if ( a4 < (unsigned __int64)v13 || v13 < a2 )
          {
            _dwarf_error_string(
              a1,
              a10,
              468,
              "DW_DLE_RNGLISTS_ERROR: The end of an rle entry is past the end of its allowed space");
          }
          else
          {
            if ( *(_QWORD *)(a1 + 3616) >= v22 )
            {
              *a6 = v22;
              *v10 = v12;
              *v11 = v20;
              *a9 = v21;
              return 0;
            }
            _dwarf_error_string(
              a1,
              a10,
              468,
              "DW_DLE_RNGLISTS_ERROR: The number of bytes in a single rnglist entry is too large to be reasonable");
          }
        }
        break;
      default:
        dwarfstring_constructor(v48);
        dwarfstring_append_printf_u(
          v48,
          "DW_DLE_RNGLISTS_ERROR: The rangelists entry at .debug_rnglists[.dwo] offset 0x%x",
          a3);
        dwarfstring_append_printf_u(v48, " has code 0x%x which is unknown", (unsigned __int8)v12);
        v28 = dwarfstring_string(v48, " has code 0x%x which is unknown", v27);
        _dwarf_error_string(a1, a10, 468, v28);
        dwarfstring_destructor(v48);
        return 1;
    }
  }
  return 1;
}

