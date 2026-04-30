__int64 __fastcall sub_3ACD40(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned int v4; // edx

  v2 = *(_BYTE *)(a2 + 31);
  if ( v2 == 29 )
    goto LABEL_11;
  if ( v2 <= 0x1Du )
  {
    if ( v2 == 12 )
    {
      v4 = 1;
      if ( !*(_QWORD *)(a2 + 296) )
        return *(_QWORD *)(a2 + 16) == -2;
      return v4;
    }
    if ( v2 == 13 )
    {
      if ( *(_QWORD *)(a2 + 16) != -2 )
        return 1;
      return 2;
    }
    return *(_QWORD *)(a2 + 32) != -1;
  }
  v4 = 2;
  if ( v2 != 45 )
  {
    if ( v2 != 61 )
      return *(_QWORD *)(a2 + 32) != -1;
LABEL_11:
    if ( *(_QWORD *)(a2 + 16) == -2 )
      return 2;
    return *(_QWORD *)(a2 + 32) != -1;
  }
  return v4;
}
