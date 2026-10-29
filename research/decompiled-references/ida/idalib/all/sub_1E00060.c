__int64 __fastcall sub_1E00060(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // al
  int v3; // edx

  switch ( *(_WORD *)(a1 + 36) )
  {
    case '\\':
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
      {
        if ( (unsigned int)sub_FA77D0(a1) != 2 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
            v3 = sub_FA77D0(a1);
          else
            v3 = *(_BYTE *)(a1 + 34) >> 4;
          goto LABEL_7;
        }
        return 5;
      }
      v2 = *(_BYTE *)(a1 + 34) >> 4;
      v3 = v2;
      if ( v2 == 2 )
        return 5;
LABEL_7:
      result = 0;
      if ( v3 == 1 )
        return 6;
      return result;
    case ']':
      return 4;
    case '^':
      return 3;
    case '_':
      return 2;
    case '`':
      return 1;
  }
}
