char __fastcall sub_3ACDC0(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned __int8 v3; // dl

  result = 0;
  if ( !*(_DWORD *)(a2 + 24) )
    return result;
  v3 = *(_BYTE *)(a2 + 31);
  if ( v3 == 29 )
    goto LABEL_10;
  result = 1;
  if ( v3 > 0x1Du )
  {
    if ( v3 == 45 )
      return result;
    if ( v3 != 61 )
      return *(_QWORD *)(a2 + 32) != -1;
LABEL_10:
    if ( *(_QWORD *)(a2 + 16) != -2 )
      return *(_QWORD *)(a2 + 32) != -1;
    return 1;
  }
  if ( v3 == 12 )
  {
    if ( !*(_QWORD *)(a2 + 296) )
      return *(_QWORD *)(a2 + 16) == -2;
  }
  else if ( v3 != 13 )
  {
    return *(_QWORD *)(a2 + 32) != -1;
  }
  return result;
}
