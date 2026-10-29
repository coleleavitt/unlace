__int64 __fastcall sub_5312C0(char a1, __int64 a2)
{
  char v2; // di
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 i; // rax
  unsigned __int64 v7; // rdx

  v2 = a1 & 0x3F;
  if ( v2 == 11 )
  {
    v7 = *(_QWORD *)a2;
    result = 31;
    if ( ((unsigned __int8)*(_QWORD *)a2 & 0xFu) <= 9 && v7 <= 0xFF && !*(_QWORD *)(a2 + 8) )
    {
      switch ( v7 )
      {
        case '2':
          return 10;
        case '"':
          return 11;
        case 'r':
          return 12;
        case 'b':
          return 13;
      }
    }
  }
  else
  {
    result = 31;
    if ( v2 == 10 )
    {
      v4 = *(_QWORD *)a2;
      if ( (*(_BYTE *)a2 & 0xFu) > 9 || v4 > 0xFF )
      {
        return 31;
      }
      else
      {
        v5 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFLL;
        if ( !v5 && !*(_BYTE *)(a2 + 8) && !*(_BYTE *)(a2 + 16) )
        {
          for ( i = 50; i != v4; i = *((unsigned __int8 *)*(&off_2B2E180 + v5) + 1) )
          {
            if ( ++v5 == 10 )
              return 31;
          }
          return (unsigned int)v5;
        }
      }
    }
  }
  return result;
}
