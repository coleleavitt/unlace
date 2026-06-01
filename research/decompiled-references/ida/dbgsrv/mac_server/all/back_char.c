/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: back_char
// Address: 0x0000000100071730

//----- (0000000100071730) ----------------------------------------------------
__int64 __fastcall back_char(char **a1)
{
  unsigned int utf8_char; // eax
  char v3; // cl
  char *v4; // rcx
  char v5; // al
  char v6; // dl
  _BOOL8 v7; // rdi
  char *v8; // rdx
  char v9; // al
  char v10; // cl
  __int64 v11; // r14
  char *v12; // r14
  char *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  char v17; // si
  char *v18; // rdx
  char v19; // al
  char v20[4]; // [rsp+0h] [rbp-20h] BYREF
  char v21[4]; // [rsp+4h] [rbp-1Ch] BYREF

  utf8_char = get_utf8_char(a1);
  if ( utf8_char == -1 )
  {
    return 0;
  }
  else
  {
    v3 = 92;
    if ( utf8_char <= 0xFF )
    {
      if ( (utf8_char & 0xF8) == 0x30 )
      {
        v4 = *a1;
        v21[0] = utf8_char;
        v5 = *v4;
        v6 = *v4 & 0xF8;
        v7 = v6 == 48;
        if ( v6 != 48 )
          v5 = 0;
        v8 = &v4[v7];
        v21[1] = v5;
        v9 = v4[v7];
        v10 = v9 & 0xF8;
        v11 = 0;
        if ( (v9 & 0xF8) != 0x30 )
          v9 = 0;
        LOBYTE(v11) = v10 == 48;
        v12 = &v8[v11];
        v21[2] = v9;
        v21[3] = 0;
        qsscanf(v21, "%o", v20);
        v3 = v20[0];
LABEL_9:
        *a1 = v12;
      }
      else
      {
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
            v14 = *a1;
            v15 = **a1;
            if ( v15 < 0 )
              goto LABEL_23;
            v3 = utf8_char;
            if ( (_DefaultRuneLocale.__runetype[v15] & 0x10000) != 0 )
            {
              v12 = v14 + 1;
              v20[0] = v15;
              v16 = v14[1];
              if ( v16 < 0 )
              {
                v19 = 0;
              }
              else
              {
                v17 = BYTE2(_DefaultRuneLocale.__runetype[v16]) & 1;
                v18 = v14 + 2;
                if ( v17 )
                  v12 = v18;
                v19 = v16 & -v17;
              }
              v20[1] = v19;
              v20[2] = 0;
              qsscanf(v20, "%x", v21);
              v3 = v21[0];
              goto LABEL_9;
            }
            break;
          default:
LABEL_23:
            v3 = utf8_char;
            break;
        }
      }
    }
  }
  return (unsigned int)v3;
}
