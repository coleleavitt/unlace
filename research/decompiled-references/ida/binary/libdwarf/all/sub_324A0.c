__int64 __fastcall sub_324A0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v10; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = *a1;
  v11[1] = __readfsqword(0x28u);
  v10 = 0;
  v11[0] = 0;
  if ( (unsigned int)dwarf_decode_leb128(v7, &v10, v11, a5) == 1 )
  {
    _dwarf_error_string(a3, a4, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
    return 1;
  }
  else
  {
    v8 = v11[0];
    *a1 = v10 + v7;
    *a2 = v8;
    return 0;
  }
}

