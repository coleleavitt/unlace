_BOOL8 __fastcall sub_7E600(_BYTE *a1, _BYTE *a2)
{
  _BOOL8 result; // rax
  char v3; // dl

  result = 0;
  if ( a2[32] )
  {
    if ( (unsigned __int8)(a2[1] - 3) <= 1u )
    {
      v3 = a1[32];
      if ( !v3 || v3 == 31 )
      {
        if ( (a1[28] & 0x10) == 0 )
          return (a2[33] & 7) == 4;
        result = 0;
        if ( (a1[33] & 1) == 0 )
          return (a2[33] & 7) == 4;
      }
    }
  }
  return result;
}
