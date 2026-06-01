/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_utf8_char
// Address: 0x00074F60

//----- (00074F60) --------------------------------------------------------
int __fastcall get_utf8_char(unsigned __int8 **a1)
{
  unsigned __int8 *v2; // r2
  char *v3; // r7
  unsigned int v4; // r6
  __int16 v5; // r3
  int result; // r0
  unsigned int v7; // r6
  int v8; // r5
  unsigned int v9; // r7
  unsigned int v10; // r6
  int v11; // r5
  unsigned int v12; // r7
  unsigned int v13; // r6
  unsigned int v14; // [sp+0h] [bp-Ch]

  v2 = *a1;
  v3 = (char *)(*a1 + 1);
  v4 = **a1;
  v5 = (char)v4;
  result = 0;
  if ( v4 )
  {
    if ( (char)v4 > -1 )
    {
      *a1 = (unsigned __int8 *)v3;
LABEL_4:
      *a1 = (unsigned __int8 *)v3;
      return v4;
    }
    result = -1;
    if ( (v4 & 0xE0) == 0xC0 )
    {
      v7 = (unsigned __int8)*v3;
      if ( *v3 < 0 && v7 < 0xC0 )
      {
        v4 = ((v5 & 0x1F) << 6) + (v7 & 0x3F);
        v3 = (char *)(v2 + 2);
        if ( v4 >= 0x80 )
          goto LABEL_4;
      }
    }
    else if ( (v4 & 0xF0) == 0xE0 )
    {
      v8 = *v3;
      v9 = (unsigned __int8)*v3;
      if ( v8 < 0 && v9 < 0xC0 )
      {
        v10 = v2[2];
        if ( (v2[2] & 0x80u) != 0 && v10 < 0xC0 )
        {
          v4 = (unsigned __int16)(((v9 & 0x3F) << 6) + (v5 << 12) + (v10 & 0x3F));
          v3 = (char *)(v2 + 3);
          if ( v4 >> 11 )
            goto LABEL_4;
        }
      }
    }
    else if ( (v4 & 0xF8) == 0xF0 )
    {
      v11 = *v3;
      v12 = (unsigned __int8)*v3;
      if ( v11 < 0 && v12 < 0xC0 )
      {
        v13 = v2[2];
        if ( (v2[2] & 0x80u) != 0 && v13 < 0xC0 )
        {
          v14 = v2[3];
          if ( (v2[3] & 0x80u) != 0 && v14 < 0xC0 )
          {
            v4 = ((v12 & 0x3F) << 12) + ((v5 & 7) << 18) + ((v13 & 0x3F) << 6) + (v14 & 0x3F);
            v3 = (char *)(v2 + 4);
            if ( !((v4 - 0x10000) >> 20) )
              goto LABEL_4;
          }
        }
      }
    }
  }
  return result;
}
