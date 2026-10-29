/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_utf8_char
// Address: 0x000A28F0

//----- (000A28F0) --------------------------------------------------------
int __cdecl get_utf8_char(char **a1)
{
  char *v1; // edx
  unsigned int v2; // ebx
  char *v3; // esi
  int result; // eax
  char v5; // cl
  char v6; // cl
  char v7; // ch
  char v8; // cl
  int v9; // ecx
  int v10; // ebx
  char v11; // [esp+4h] [ebp-14h]

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
    result = -1;
    if ( *v3 < 0 && (unsigned __int8)v5 < 0xC0u )
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
    result = -1;
    if ( *v3 < 0 && (unsigned __int8)v6 <= 0xBFu )
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
    result = -1;
    if ( (v2 & 0xFFFFFFF8) == 0xF0 )
    {
      v8 = *v3;
      if ( *v3 < 0 && (unsigned __int8)v8 <= 0xBFu && v1[2] < -64 )
      {
        v11 = v1[3];
        if ( v11 < -64 )
        {
          v9 = ((v2 & 7) << 18) | ((v8 & 0x3F) << 12) | ((v1[2] & 0x3F) << 6);
          v10 = v11 & 0x3F;
          if ( v10 + v9 - 0x10000 < (unsigned int)&byte_100000 )
          {
            v3 = v1 + 4;
            v2 = v10 | v9;
            goto LABEL_4;
          }
        }
      }
    }
  }
  return result;
}
// 100000: using guessed type char byte_100000;
