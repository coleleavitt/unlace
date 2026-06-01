__int64 __fastcall sub_6CBCD0(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(unsigned __int8 *)(a2 + 16);
  if ( (_BYTE)v2 == 13 )
  {
    v3 = *(unsigned __int16 *)(a2 + 18);
    LOWORD(v3) = ((unsigned __int16)v3 >> 3) & 0x1FF;
    if ( (unsigned __int16)v3 <= 0x23u )
    {
      return 3;
    }
    else if ( (((_WORD)v3 + 21) & 0x1FFu) > 4 )
    {
      return 0;
    }
    else
    {
      v4 = (unsigned int)(v3 + 20);
      LOWORD(v4) = v4 & 0x1FF;
      switch ( v4 )
      {
        case 0LL:
          result = 2;
          break;
        case 1LL:
          result = 1;
          break;
        case 2LL:
          result = 5;
          break;
        case 3LL:
          result = 6;
          break;
        default:
          result = 7;
          break;
      }
    }
  }
  else
  {
    LOBYTE(v2) = (_BYTE)v2 == 40;
    return (unsigned int)(4 * v2);
  }
  return result;
}

