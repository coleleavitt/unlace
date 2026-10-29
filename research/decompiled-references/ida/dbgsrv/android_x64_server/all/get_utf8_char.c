/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_utf8_char
// Address: 0x00000000000B6330

//----- (00000000000B6330) ----------------------------------------------------
__int64 __fastcall get_utf8_char(char **a1)
{
  char *v1; // rcx
  unsigned int v2; // edx
  char *v3; // rsi
  __int64 result; // rax
  char v5; // si
  char v6; // si
  char v7; // r8
  char v8; // si
  char v9; // r8
  int v10; // r8d
  int v11; // r9d

  v1 = *a1;
  v2 = (unsigned __int8)**a1;
  if ( !**a1 )
    return 0;
  v3 = v1 + 1;
  if ( (v2 & 0x80u) == 0 )
  {
    *a1 = v3;
LABEL_4:
    *a1 = v3;
    return v2;
  }
  if ( (v2 & 0xFFFFFFE0) == 0xC0 )
  {
    v5 = *v3;
    result = 0xFFFFFFFFLL;
    if ( v5 < -64 )
    {
      v2 = ((v2 & 0x1F) << 6) | v5 & 0x3F;
      if ( v2 >= 0x80 )
      {
        v3 = v1 + 2;
        goto LABEL_4;
      }
    }
  }
  else if ( (v2 & 0xFFFFFFF0) == 0xE0 )
  {
    v6 = *v3;
    result = 0xFFFFFFFFLL;
    if ( v6 < -64 )
    {
      v7 = v1[2];
      if ( v7 < -64 )
      {
        v2 = (unsigned __int16)(((_WORD)v2 << 12) | ((v6 & 0x3F) << 6) | v7 & 0x3F);
        if ( v2 > 0x7FF )
        {
          v3 = v1 + 3;
          goto LABEL_4;
        }
      }
    }
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( (v2 & 0xFFFFFFF8) == 0xF0 )
    {
      v8 = *v3;
      if ( v8 < -64 )
      {
        v9 = v1[2];
        if ( v9 < -64 && v1[3] < -64 )
        {
          v10 = ((v2 & 7) << 18) | ((v8 & 0x3F) << 12) | ((v9 & 0x3F) << 6);
          v11 = v1[3] & 0x3F;
          if ( (unsigned int)(v11 + v10 - 0x10000) < 0x100000 )
          {
            v3 = v1 + 4;
            v2 = v11 | v10;
            goto LABEL_4;
          }
        }
      }
    }
  }
  return result;
}
