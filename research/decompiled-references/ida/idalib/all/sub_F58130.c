__int64 __fastcall sub_F58130(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  char v3; // dl
  unsigned __int16 v4; // dx
  __int64 result; // rax
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v2 = *(_QWORD *)v1;
  v3 = *(_BYTE *)(*(_QWORD *)v1 + 16LL);
  if ( v3 == 13 )
  {
    v4 = (*(_WORD *)(v2 + 18) >> 3) & 0x1FF;
    if ( v4 == 436 )
    {
      return 4;
    }
    else
    {
      result = 0;
      if ( v4 != 488 )
      {
        result = 9;
        if ( v4 > 0x1B3u )
        {
          result = 5;
          if ( v4 > 0x1C7u )
            return ((v4 + 32) & 0x1FFu) < 8 ? 6 : 9;
        }
      }
    }
  }
  else
  {
    result = 0;
    if ( v3 != 42 )
    {
      result = 1;
      if ( v3 != 11 )
      {
        if ( v3 == 34 )
        {
          return 2;
        }
        else if ( v3 == 33 )
        {
          return 3;
        }
        else
        {
          result = 5;
          if ( v3 == 14 )
          {
            v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
            result = 7;
            if ( *(_BYTE *)(v6 + 16) == 13 )
              return (unsigned int)((((*(_WORD *)(v6 + 18) >> 3) + 32) & 0x1FFu) < 8) + 7;
          }
        }
      }
    }
  }
  return result;
}
