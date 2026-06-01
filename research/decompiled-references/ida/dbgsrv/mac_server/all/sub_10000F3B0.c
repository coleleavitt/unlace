/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F3B0
// Address: 0x000000010000F3B0

//----- (000000010000F3B0) ----------------------------------------------------
__int64 __fastcall sub_10000F3B0(int a1, __int64 a2, char *a3)
{
  __int64 result; // rax
  char v4; // cl

  result = 0xFFFFFFFFLL;
  v4 = 0;
  if ( a1 > 16777222 )
  {
    if ( a1 > 16777233 )
    {
      if ( a1 == 16777234 )
      {
LABEL_11:
        result = 15;
      }
      else
      {
        if ( a1 != 33554444 )
          goto LABEL_19;
LABEL_10:
        result = 13;
      }
LABEL_18:
      v4 = 0;
    }
    else
    {
      if ( a1 == 16777223 )
      {
        result = 0;
LABEL_23:
        v4 = 1;
        if ( !a3 )
          return result;
LABEL_20:
        *a3 = v4;
        return result;
      }
      if ( a1 == 16777228 )
      {
        result = 13;
        goto LABEL_23;
      }
    }
LABEL_19:
    if ( !a3 )
      return result;
    goto LABEL_20;
  }
  switch ( a1 )
  {
    case 6:
      result = 7;
      goto LABEL_18;
    case 7:
      v4 = 0;
      result = 0;
      if ( a3 )
        goto LABEL_20;
      break;
    case 8:
      result = 12;
      goto LABEL_18;
    case 11:
      result = 25;
      goto LABEL_18;
    case 12:
      goto LABEL_10;
    case 14:
      result = 23;
      goto LABEL_18;
    case 15:
      result = 2;
      goto LABEL_18;
    case 18:
      goto LABEL_11;
    default:
      goto LABEL_19;
  }
  return result;
}
