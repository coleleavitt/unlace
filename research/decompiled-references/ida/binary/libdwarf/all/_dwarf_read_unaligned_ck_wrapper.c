__int64 __fastcall dwarf_read_unaligned_ck_wrapper(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

  v11[1] = __readfsqword(0x28u);
  v8 = a4;
  v11[0] = 0;
  v9 = a4 + a3;
  if ( __CFADD__(v8, a3) )
  {
    _dwarf_error_string(a1, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
  }
  else
  {
    if ( a5 >= v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(a1 + 8296))(v11);
      *a2 = v11[0];
      return 0;
    }
    _dwarf_error_string(a1, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
  }
  return 1;
}

