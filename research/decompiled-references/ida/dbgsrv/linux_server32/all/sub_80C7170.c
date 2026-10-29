/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7170
// Address: 0x080C7170

//----- (080C7170) --------------------------------------------------------
int __cdecl sub_80C7170(unsigned __int8 **a1)
{
  int v1; // ecx
  unsigned __int8 *v2; // edx
  int v3; // eax
  unsigned __int8 *v4; // edx
  int v6; // esi
  __int16 v7; // di
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // si
  __int16 v10; // ax
  __int16 v11; // si
  unsigned __int8 v12; // di
  unsigned __int16 v13; // ax

  v1 = 0;
  v2 = *a1;
  v3 = **a1;
  if ( (_BYTE)v3 )
  {
    if ( (v3 & 0x80u) == 0 )
    {
      v4 = v2 + 1;
      v1 = (char)v3;
LABEL_4:
      *a1 = v4;
      return v1;
    }
    if ( (v3 & 0xE0) == 0xC0 )
    {
      v9 = v2[1];
      v1 = -1;
      if ( (unsigned __int8)(v9 + 0x80) <= 0x3Fu )
      {
        v10 = v9 & 0x3F | ((_WORD)v3 << 6) & 0x7C0;
        if ( v10 > 127 )
        {
          v4 = v2 + 2;
          v1 = v10;
          goto LABEL_4;
        }
      }
    }
    else if ( (v3 & 0xF0) == 0xE0 )
    {
      v11 = v2[1];
      v1 = -1;
      if ( (unsigned __int8)(v11 + 0x80) <= 0x3Fu )
      {
        v12 = v2[2];
        if ( (unsigned __int8)(v12 + 0x80) <= 0x3Fu )
        {
          v4 = v2 + 3;
          v13 = (v11 << 6) & 0xFC0 | v12 & 0x3F | ((_WORD)v3 << 12);
          v1 = v13;
          if ( v13 > 0x7FFu )
            goto LABEL_4;
          return -1;
        }
      }
    }
    else
    {
      v1 = -1;
      if ( (v3 & 0xF8) == 0xF0 )
      {
        v6 = v2[1];
        if ( (unsigned __int8)(v6 + 0x80) <= 0x3Fu )
        {
          v7 = v2[2];
          if ( (unsigned __int8)(v7 + 0x80) <= 0x3Fu )
          {
            v8 = v2[3];
            if ( (unsigned __int8)(v8 + 0x80) <= 0x3Fu )
            {
              v1 = (v7 << 6) & 0xFC0 | v8 & 0x3F | (v6 << 12) & 0x3F000 | (v3 << 18) & 0x1C0000;
              if ( (unsigned int)(v1 - 0x10000) <= 0xFFFFF )
              {
                v4 = v2 + 4;
                goto LABEL_4;
              }
              return -1;
            }
          }
        }
      }
    }
  }
  return v1;
}
