/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_utf8_char
// Address: 0x00000000000B1778

//----- (00000000000B1778) ----------------------------------------------------
__int64 __fastcall get_utf8_char(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // x9
  unsigned int v2; // w10
  char *v3; // x11
  int v5; // w11
  unsigned int v6; // w8
  int v7; // w11
  unsigned int v8; // w12
  int v9; // w11
  unsigned int v10; // w12
  unsigned int v11; // w13
  unsigned int v12; // w8

  v1 = *a1;
  v3 = (char *)(*a1 + 1);
  v2 = **a1;
  if ( !**a1 )
    return 0;
  if ( ((char)v2 & 0x80000000) == 0 )
  {
    *a1 = (unsigned __int8 *)v3;
    *a1 = (unsigned __int8 *)v3;
    return v2;
  }
  if ( (v2 & 0xE0) == 0xC0 )
  {
    v5 = *v3;
    if ( v5 < 0 && (unsigned __int8)v5 < 0xC0u )
    {
      v6 = v5 & 0x3F | ((v2 & 0x1F) << 6);
      if ( v6 >= 0x80 )
      {
        *a1 = v1 + 2;
        return v6;
      }
    }
  }
  else if ( (v2 & 0xF0) == 0xE0 )
  {
    v7 = *v3;
    if ( v7 < 0 && (unsigned __int8)v7 <= 0xBFu && (char)v1[2] < 0 )
    {
      v8 = v1[2];
      if ( v8 <= 0xBF && (unsigned __int16)(((_WORD)v2 << 12) | ((v7 & 0x3F) << 6) | v8 & 0x3F) > 0x7FFu )
      {
        *a1 = v1 + 3;
        return (unsigned __int16)(((_WORD)v2 << 12) | ((v7 & 0x3F) << 6) | v8 & 0x3F);
      }
    }
  }
  else if ( (v2 & 0xF8) == 0xF0 )
  {
    v9 = *v3;
    if ( v9 < 0 && (unsigned __int8)v9 <= 0xBFu && (char)v1[2] < 0 )
    {
      v10 = v1[2];
      if ( v10 <= 0xBF && (char)v1[3] < 0 )
      {
        v11 = v1[3];
        if ( v11 <= 0xBF )
        {
          v12 = ((v2 & 7) << 18) | ((v9 & 0x3F) << 12) | ((v10 & 0x3F) << 6) | v11 & 0x3F;
          if ( v12 - 0x10000 < 0x100000 )
          {
            *a1 = v1 + 4;
            return v12;
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
