__int64 __fastcall dwarf_leb128_uword_wrapper(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v8; // r14
  __int64 v10; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = *a2;
  v11[1] = __readfsqword(0x28u);
  v10 = 0;
  v11[0] = 0;
  if ( (unsigned int)dwarf_decode_leb128(v6, &v10, v11, a3) == 1 )
  {
    _dwarf_error_string(a1, a5, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
    return 1;
  }
  else
  {
    v8 = v10 + v6;
    *a4 = v11[0];
    *a2 = v8;
    return 0;
  }
}

