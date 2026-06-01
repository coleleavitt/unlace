__int64 __fastcall sub_B76F60(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // dl

  result = a1;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v2 - 40 > 6 )
  {
    if ( v2 == 52 )
    {
      result = *(_QWORD *)(a1 + 56);
      if ( result )
      {
        if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 40 >= 7 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

