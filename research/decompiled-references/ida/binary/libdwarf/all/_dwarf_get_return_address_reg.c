__int64 __fastcall dwarf_get_return_address_reg(
        unsigned __int8 *a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)a1 < a4 )
    {
      *a5 = 1;
      *a6 = *a1;
      return 0;
    }
    _dwarf_error(0, a7, 193);
  }
  else
  {
    v11 = 0;
    v12[0] = 0;
    if ( (unsigned int)dwarf_decode_leb128(a1, &v11, v12, a4) != 1 )
    {
      *a5 = v11;
      *a6 = v12[0];
      return 0;
    }
    _dwarf_error_string(a3, a7, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
  }
  return 1;
}

