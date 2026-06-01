bool __fastcall sub_3D9E70(__int64 a1, int a2)
{
  bool result; // al
  _BYTE *v3; // rax
  unsigned __int64 v4; // rdx

  result = 0;
  if ( a2 > 1 )
  {
    if ( *(_BYTE *)a1 == 36 && *(_BYTE *)(a1 + 1) == 32 )
    {
      v3 = (_BYTE *)(a1 + 2);
      v4 = a1 + 2 + a2 - 2;
      if ( a1 + 2 >= v4 )
        return 1;
      while ( *v3 != 46 )
      {
        if ( (_BYTE *)v4 == ++v3 )
          return 1;
      }
    }
    result = 0;
    if ( a2 > 5 )
      return strncmp((const char *)a1, "$lib ", 5u) == 0;
  }
  return result;
}
