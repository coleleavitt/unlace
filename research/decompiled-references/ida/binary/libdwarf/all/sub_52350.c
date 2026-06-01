__int64 __fastcall sub_52350(__int64 *a1, __int16 a2, __int64 *a3, __int64 a4)
{
  _QWORD *v6; // rdi
  unsigned int v8; // ebx
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  int v12; // r13d
  int v13; // edx
  __int64 v14; // rax
  __int16 v15; // [rsp+6h] [rbp-82h] BYREF
  __int64 v16; // [rsp+8h] [rbp-80h] BYREF
  __int64 v17; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v19[13]; // [rsp+20h] [rbp-68h] BYREF

  v19[5] = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( a1 )
  {
    v6 = (_QWORD *)a1[2];
    if ( v6 )
    {
      if ( *v6 && *(_QWORD *)*v6 == 3959286781LL )
      {
        v10 = _dwarf_calculate_info_section_end_ptr(v6);
        v11 = *(_QWORD *)a1[2];
        v8 = sub_51B30(a1, a2, &v15, &v16, &v17, a4);
        if ( v8 )
          return v8;
        switch ( v15 )
        {
          case 5:
            v19[0] = 0;
            if ( v10 < v16 + 2 )
              goto LABEL_25;
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v11 + 8296))(v19, v16, 2);
            *a3 = v19[0];
            return v8;
          case 6:
            v19[0] = 0;
            if ( v10 < v16 + 4 )
              goto LABEL_25;
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v11 + 8296))(v19, v16, 4);
            *a3 = v19[0];
            return v8;
          case 7:
            v19[0] = 0;
            if ( v10 < v16 + 8 )
              goto LABEL_25;
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v11 + 8296))(v19, v16, 8);
            *a3 = v19[0];
            return v8;
          case 11:
            v19[0] = 0;
            if ( v10 >= v16 + 1 )
            {
              (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v11 + 8296))(v19, v16, 1);
              *a3 = v19[0];
              return v8;
            }
LABEL_25:
            _dwarf_error_string(v11, a4, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
            return 1;
          case 15:
            v18 = 0;
            v19[0] = 0;
            if ( (unsigned int)dwarf_decode_leb128(v16, &v18, v19, v10) != 1 )
            {
              *a3 = v19[0];
              return v8;
            }
            _dwarf_error_string(v11, a4, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
            return 1;
          case 33:
            v12 = v17;
            if ( v17 >= 0 )
            {
              *a3 = v17;
              return v8;
            }
            dwarfstring_constructor(v19);
            dwarfstring_append_printf_i(
              v19,
              "DW_DLE_NEGATIVE_SIZE An implicit const value of %d is inappropriate as a size",
              v12);
            v14 = dwarfstring_string(
                    v19,
                    "DW_DLE_NEGATIVE_SIZE An implicit const value of %d is inappropriate as a size",
                    v13);
            _dwarf_error_string(v11, a4, 482, v14);
            dwarfstring_destructor(v19);
            break;
          default:
            _dwarf_error(v11, a4, 112);
            return 1;
        }
      }
      else
      {
        _dwarf_error_string(
          0,
          a4,
          81,
          "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
      }
    }
    else
    {
      _dwarf_error(0, a4, 104);
    }
  }
  else
  {
    _dwarf_error(0, a4, 52);
  }
  return 1;
}

