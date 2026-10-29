/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: back_char
// Address: 0x0009CB50

//----- (0009CB50) --------------------------------------------------------
unsigned int __cdecl back_char(char **a1)
{
  unsigned int utf8_char; // eax
  unsigned int v2; // edx
  char *v3; // eax
  char v4; // di
  char *v5; // ecx
  _BOOL4 v6; // esi
  unsigned __int8 v7; // al
  char *v8; // edi
  char *v10; // edi
  char v11; // al
  int v12; // eax
  int v13; // eax
  char *v14; // edi
  bool v15; // zf
  char *v16; // eax
  char *v17; // edi
  unsigned __int8 v18; // al
  char v19; // [esp+18h] [ebp-24h]
  char v20; // [esp+18h] [ebp-24h]
  unsigned int v21; // [esp+1Ch] [ebp-20h]
  char *v22; // [esp+1Ch] [ebp-20h]
  char v23; // [esp+20h] [ebp-1Ch] BYREF
  __int16 v24; // [esp+21h] [ebp-1Bh]
  _BYTE v25[2]; // [esp+24h] [ebp-18h] BYREF
  __int16 v26; // [esp+26h] [ebp-16h]
  unsigned int v27; // [esp+28h] [ebp-14h]

  v27 = __readgsdword(0x14u);
  utf8_char = get_utf8_char(a1);
  if ( utf8_char == -1 )
    return 0;
  LOBYTE(v2) = 92;
  if ( utf8_char <= 0xFF )
  {
    v2 = utf8_char;
    if ( (utf8_char & 0xF8) == 0x30 )
    {
      v3 = *a1;
      v25[0] = v2;
      v4 = *v3;
      v5 = v3 + 1;
      v6 = (*v3 & 0xF8) == 48;
      if ( (*v3 & 0xF8) != 0x30 )
      {
        v5 = v3;
        v4 = 0;
      }
      v25[1] = v4;
      v7 = v3[v6];
      v8 = v5 + 1;
      if ( (v7 & 0xF8) != 0x30 )
      {
        v8 = v5;
        v7 = 0;
      }
      v26 = v7;
      qsscanf((int)v25, "%o", (int)&v23);
      LOBYTE(v2) = v23;
      *a1 = v8;
    }
    else
    {
      switch ( (char)utf8_char )
      {
        case 'a':
          LOBYTE(v2) = 7;
          break;
        case 'b':
          LOBYTE(v2) = 8;
          break;
        case 'f':
          LOBYTE(v2) = 12;
          break;
        case 'n':
          LOBYTE(v2) = 10;
          break;
        case 'r':
          LOBYTE(v2) = 13;
          break;
        case 't':
          LOBYTE(v2) = 9;
          break;
        case 'v':
          LOBYTE(v2) = 11;
          break;
        case 'x':
          v10 = *a1;
          v11 = **a1;
          if ( v11 >= 0 )
          {
            v19 = **a1;
            v21 = v2;
            v12 = isxdigit((unsigned __int8)v11);
            v2 = v21;
            if ( v12 )
            {
              v23 = v19;
              v13 = (unsigned __int8)v10[1];
              if ( (v13 & 0x80u) != 0 )
              {
                v18 = 0;
                v17 = v10 + 1;
              }
              else
              {
                v20 = v10[1];
                v22 = v10 + 1;
                v14 = v10 + 2;
                v15 = isxdigit(v13) == 0;
                v16 = v22;
                if ( !v15 )
                  v16 = v14;
                v17 = v16;
                if ( v15 )
                  v18 = 0;
                else
                  v18 = v20;
              }
              v24 = v18;
              qsscanf((int)&v23, "%x", (int)v25);
              LOBYTE(v2) = v25[0];
              *a1 = v17;
            }
          }
          break;
        default:
          return v2;
      }
    }
  }
  return v2;
}
// 9CC23: variable 'v2' is possibly undefined
