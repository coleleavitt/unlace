/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_utf8_char
// Address: 0x0000000100073B90

//----- (0000000100073B90) ----------------------------------------------------
__int64 __fastcall get_utf8_char(char **a1)
{
  char *v1; // rcx
  unsigned int v2; // edx
  char *v3; // rsi
  __int64 result; // rax
  char v5; // r8
  char v6; // r8
  char v7; // si
  unsigned __int16 v8; // dx
  char v9; // si
  char v10; // r8
  char v11; // r9
  int v12; // edx
  int v13; // esi
  int v14; // r9d

  v1 = *a1;
  v2 = (unsigned __int8)**a1;
  if ( !**a1 )
    return 0;
  v3 = v1 + 1;
  if ( (v2 & 0x80u) == 0 )
    goto LABEL_3;
  if ( (v2 & 0xFFFFFFE0) == 0xC0 )
  {
    v5 = *v3;
    result = 0xFFFFFFFFLL;
    if ( *v3 < -64 && (v2 & 0x1F) >= 2 )
    {
      v3 = v1 + 2;
      v2 = ((v2 & 0x1F) << 6) | v5 & 0x3F;
LABEL_3:
      *a1 = v3;
      return v2;
    }
  }
  else if ( (v2 & 0xFFFFFFF0) == 0xE0 )
  {
    v6 = *v3;
    result = 0xFFFFFFFFLL;
    if ( *v3 <= -65 )
    {
      v7 = v1[2];
      if ( v7 <= -65 )
      {
        v8 = ((_WORD)v2 << 12) | ((v6 & 0x3F) << 6);
        if ( v8 > 0x7FFu )
        {
          v2 = v7 & 0x3F | v8;
          v3 = v1 + 3;
          goto LABEL_3;
        }
      }
    }
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( (v2 & 0xFFFFFFF8) == 0xF0 )
    {
      v9 = *v3;
      if ( v9 <= -65 )
      {
        v10 = v1[2];
        if ( v10 <= -65 )
        {
          v11 = v1[3];
          if ( v11 <= -65 )
          {
            v12 = (v2 & 7) << 18;
            v13 = (v9 & 0x3F) << 12;
            if ( (unsigned int)(v13 + v12 - 0x10000) < 0x100000 )
            {
              v14 = v12 | v13 | ((v10 & 0x3F) << 6) | v11 & 0x3F;
              v3 = v1 + 4;
              v2 = v14;
              goto LABEL_3;
            }
          }
        }
      }
    }
  }
  return result;
}
