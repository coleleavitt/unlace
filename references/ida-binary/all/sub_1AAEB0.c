bool __fastcall choose_std_enum_by_value(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  bool result; // al
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( (*a4 & 0x3F) != 0x3D || !(unsigned int)get_named_type(a2, a3, 66, 0, 0, 0, 0, 0, v5) )
    return 0;
  result = 1;
  if ( *(_QWORD *)(a1 + 8) != v5[0] )
    return *(_QWORD *)(a1 + 16) == v5[0];
  return result;
}
