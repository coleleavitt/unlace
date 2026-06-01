unsigned __int8 __fastcall vault_is_valid_name(unsigned __int8 *a1, unsigned __int64 a2)
{
  unsigned __int8 result; // al
  __int64 v3; // r8
  int v4; // edx
  unsigned __int8 *v5; // rcx
  unsigned __int64 v6; // rcx

  if ( !a1 )
    return 0;
  result = 0;
  if ( (unsigned __int8)(*a1 - 65) <= 0x39u )
  {
    v3 = 0x3FFFFFF43FFFFFFLL;
    result = _bittest64(&v3, (unsigned int)*a1 - 65);
    if ( result )
    {
      v4 = a1[1];
      v5 = a1 + 1;
      if ( (_BYTE)v4 )
      {
        do
        {
          ++v5;
          if ( (unsigned __int8)(v4 - 65) > 0x39u )
          {
            result = (_BYTE)v4 == 45 || (unsigned __int8)(v4 - 48) <= 9u;
            if ( !result )
              return result;
          }
          else
          {
            result = _bittest64(&v3, (unsigned int)(v4 - 65));
            if ( !result )
              return result;
          }
          v4 = *v5;
        }
        while ( (_BYTE)v4 );
        v6 = v5 - a1;
      }
      else
      {
        v6 = 1;
      }
      return a2 >= v6;
    }
  }
  return result;
}
