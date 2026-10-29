/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_utf8_char
// Address: 0x000000010006B6F4

//----- (000000010006B6F4) ----------------------------------------------------
__int64 __fastcall get_utf8_char(char **a1)
{
  char *v2; // x9
  __int64 result; // x0
  char *v4; // x10
  int v5; // w10
  char v6; // w11
  int v7; // w10
  int v8; // w11
  unsigned __int16 v9; // w12
  int v10; // w10
  int v11; // w11
  int v12; // w13
  unsigned int v13; // w12

  v2 = *a1;
  v4 = *a1 + 1;
  result = (unsigned __int8)**a1;
  if ( (_DWORD)result )
  {
    if ( (result & 0x80) == 0 )
    {
LABEL_3:
      *a1 = v4;
      return result;
    }
    if ( (result & 0xE0) == 0xC0 )
    {
      v5 = *v4;
      if ( v5 < -64 && ((unsigned __int8)result & 0x1Fu) >= 2 )
      {
        v6 = v5;
        v4 = v2 + 2;
        result = v6 & 0x3F | ((unsigned __int8)(result & 0x1F) << 6);
        goto LABEL_3;
      }
    }
    else if ( (result & 0xF0) == 0xE0 )
    {
      v7 = *v4;
      if ( v7 <= -65 )
      {
        v8 = v2[2];
        if ( v8 <= -65 )
        {
          v9 = ((_WORD)result << 12) | ((v7 & 0x3F) << 6);
          if ( v9 > 0x7FFu )
          {
            v4 = v2 + 3;
            result = v9 & 0xFFC0 | v8 & 0x3Fu;
            goto LABEL_3;
          }
        }
      }
    }
    else if ( (result & 0xF8) == 0xF0 )
    {
      v10 = *v4;
      if ( v10 <= -65 )
      {
        v11 = v2[2];
        if ( v11 <= -65 )
        {
          v12 = v2[3];
          if ( v12 <= -65 )
          {
            v13 = ((result & 7) << 18) | ((v10 & 0x3F) << 12);
            if ( v13 - 0x10000 < 0x100000 )
            {
              v4 = v2 + 4;
              result = v12 & 0x3F | ((v11 & 0x3F) << 6) | v13;
              goto LABEL_3;
            }
          }
        }
      }
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}
