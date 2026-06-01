/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: back_char
// Address: 0x0007162C

//----- (0007162C) --------------------------------------------------------
int __fastcall back_char(unsigned __int8 **a1)
{
  unsigned int utf8_char; // r1
  unsigned __int8 v3; // r6
  unsigned __int8 *v4; // r2
  unsigned __int8 v5; // r7
  int v6; // r3
  unsigned __int8 *v7; // r7
  unsigned __int8 v8; // r2
  int v9; // r6
  unsigned __int8 *v10; // r0
  int v12; // r0
  unsigned __int8 v13; // r7
  unsigned __int8 *v14; // r7
  int v15; // r0
  unsigned __int8 v16; // r6
  unsigned __int8 *v17; // [sp+8h] [bp-14h]
  unsigned __int8 v18; // [sp+10h] [bp-Ch] BYREF
  __int16 v19; // [sp+11h] [bp-Bh]
  _BYTE v20[4]; // [sp+14h] [bp-8h] BYREF

  utf8_char = get_utf8_char(a1);
  v3 = 0;
  if ( utf8_char != -1 )
  {
    v3 = 92;
    if ( utf8_char <= 0xFF )
    {
      if ( (utf8_char & 0xF8) == 0x30 )
      {
        v4 = *a1;
        v20[0] = utf8_char;
        v5 = *v4;
        v6 = *v4 & 0xF8;
        if ( v6 != 48 )
          v5 = 0;
        v20[1] = v5;
        v7 = v4 + 1;
        if ( v6 != 48 )
          v7 = v4;
        v8 = *v7;
        v20[3] = 0;
        v9 = v8 & 0xF8;
        if ( v9 != 48 )
          v8 = 0;
        v20[2] = v8;
        qsscanf((int)v20, "%o");
        v10 = v7 + 1;
        if ( v9 != 48 )
          v10 = v7;
        v3 = v18;
        *a1 = v10;
      }
      else
      {
        v3 = utf8_char;
        switch ( (char)utf8_char )
        {
          case 'a':
            v3 = 7;
            break;
          case 'b':
            v3 = 8;
            break;
          case 'f':
            v3 = 12;
            break;
          case 'n':
            v3 = 10;
            break;
          case 'r':
            v3 = 13;
            break;
          case 't':
            v3 = 9;
            break;
          case 'v':
            v3 = 11;
            break;
          case 'x':
            v12 = **a1;
            v13 = v12;
            v3 = 120;
            if ( (v12 & 0x80u) == 0 )
            {
              v17 = *a1;
              if ( isxdigit(v12) )
              {
                v18 = v13;
                v14 = v17 + 1;
                v15 = v17[1];
                v16 = v15;
                if ( (char)v15 <= -1 )
                {
                  v16 = 0;
                }
                else
                {
                  v14 = v17 + 2;
                  if ( !isxdigit(v15) )
                  {
                    v14 = v17 + 1;
                    v16 = 0;
                  }
                }
                v19 = v16;
                qsscanf((int)&v18, "%x");
                v3 = v20[0];
                *a1 = v14;
              }
            }
            break;
          default:
            return v3;
        }
      }
    }
  }
  return v3;
}
