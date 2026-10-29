bool __fastcall sub_155490(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  bool result; // al
  __int64 v5; // [rsp+0h] [rbp-18h]

  if ( (*a4 & 0x3F) != 0x3D || !(unsigned int)get_named_type() )
    return 0;
  result = 1;
  if ( *(_QWORD *)(a1 + 8) != v5 )
    return *(_QWORD *)(a1 + 16) == v5;
  return result;
}

