__int64 __fastcall sub_129B0(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        _QWORD *a5,
        unsigned __int64 a6,
        __int64 a7)
{
  __int64 v9; // rsi
  __int64 v10; // r12
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = *a2;
  v10 = v9 + 4;
  v15[1] = __readfsqword(0x28u);
  v15[0] = 0;
  if ( a3 < v9 + 4 )
  {
    _dwarf_error_string(a1, a7, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v15, v9, 4);
    if ( v10 != a3 && a6 >= v15[0] )
    {
      *a5 = v15[0];
      *a2 = v10;
      return 0;
    }
    _dwarf_error(a1, a7, a4);
  }
  return 1;
}

