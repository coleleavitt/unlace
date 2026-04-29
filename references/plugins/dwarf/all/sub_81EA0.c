__int64 __fastcall sub_81EA0(int a1, __int64 a2, char *a3)
{
  __int64 result; // rax
  char v4; // cl

  if ( a1 <= 18 )
  {
    if ( a1 > 5 )
    {
      switch ( a1 )
      {
        case 6:
          result = 7;
          v4 = 0;
          break;
        case 7:
          result = 0;
          v4 = 0;
          break;
        case 8:
          result = 12;
          v4 = 0;
          break;
        case 11:
          result = 25;
          v4 = 0;
          break;
        case 12:
          result = 13;
          v4 = 0;
          break;
        case 14:
          result = 23;
          v4 = 0;
          break;
        case 15:
          result = 2;
          v4 = 0;
          break;
        case 18:
          result = 15;
          v4 = 0;
          break;
        default:
          goto LABEL_4;
      }
      goto LABEL_5;
    }
LABEL_4:
    result = 0xFFFFFFFFLL;
    v4 = 0;
    goto LABEL_5;
  }
  if ( a1 == 16777228 )
  {
    result = 13;
    v4 = 1;
    goto LABEL_5;
  }
  if ( a1 <= 16777228 )
  {
    if ( a1 == 16777223 )
    {
      result = 0;
      v4 = 1;
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  result = 15;
  v4 = 0;
  if ( a1 != 16777234 )
  {
    result = 0xFFFFFFFFLL;
    if ( a1 == 33554444 )
      result = 13;
  }
LABEL_5:
  if ( a3 )
    *a3 = v4;
  return result;
}
