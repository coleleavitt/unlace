int __fastcall dwarf_formudata_internal(
        __int64 a1,
        struct Dwarf_Attribute_s *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        _QWORD *a7,
        Dwarf_Error *a8)
{
  int result; // eax
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  Dwarf_Signed v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 5u:
      v11[0] = 0;
      if ( a5 < a4 + 2 )
        goto LABEL_12;
      (*(void (__fastcall **)(Dwarf_Signed *, __int64, __int64))(a1 + 8296))(v11, a4, 2);
      *a6 = v11[0];
      *a7 = 2;
      return 0;
    case 6u:
      v11[0] = 0;
      if ( a5 < a4 + 4 )
        goto LABEL_12;
      (*(void (__fastcall **)(Dwarf_Signed *, __int64, __int64))(a1 + 8296))(v11, a4, 4);
      *a6 = v11[0];
      *a7 = 4;
      return 0;
    case 7u:
      v11[0] = 0;
      if ( a5 < a4 + 8 )
        goto LABEL_12;
      (*(void (__fastcall **)(Dwarf_Signed *, __int64, __int64))(a1 + 8296))(v11, a4, 8);
      *a6 = v11[0];
      *a7 = 8;
      return 0;
    case 0xBu:
    case 0xCu:
      v11[0] = 0;
      if ( a5 >= a4 + 1 )
      {
        (*(void (__fastcall **)(Dwarf_Signed *, __int64, __int64))(a1 + 8296))(v11, a4, 1);
        *a6 = v11[0];
        *a7 = 1;
        return 0;
      }
LABEL_12:
      _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      return 1;
    case 0xFu:
    case 0x22u:
    case 0x23u:
      v10 = 0;
      v11[0] = 0;
      if ( (unsigned int)dwarf_decode_leb128(a4, &v10, v11, a5) == 1 )
      {
        _dwarf_error_string(a1, a8, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
        return 1;
      }
      *a6 = v11[0];
      *a7 = v10;
      return 0;
    case 0x19u:
      *a6 = 1;
      *a7 = 0;
      return 0;
    default:
      if ( a2 )
      {
        v11[0] = 0;
        result = dwarf_formsdata(a2, v11, a8);
        if ( result )
          return result;
        if ( v11[0] >= 0 )
        {
          *a6 = v11[0];
          *a7 = 0;
          return result;
        }
        _dwarf_error(a1, a8, 483);
      }
      else
      {
        sub_1F300(a1, (__int64)a8, a3);
      }
      return 1;
  }
}

