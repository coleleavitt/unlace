__int64 __fastcall back_char(char **a1)
{
  unsigned int v1; // ebp
  unsigned int utf8_char; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  char *v7; // r12
  char v8; // al
  char *v10; // r12
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // edi
  char *v16; // r14
  char v17[4]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v18[2]; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v1 = 0;
  v19 = __readfsqword(0x28u);
  utf8_char = get_utf8_char(a1);
  if ( utf8_char != -1 )
  {
    v1 = 92;
    if ( utf8_char <= 0xFF )
    {
      v1 = utf8_char;
      if ( (unsigned __int8)(utf8_char - 48) <= 7u )
      {
        v7 = *a1;
        v18[0] = utf8_char;
        v8 = *v7;
        if ( (unsigned __int8)(*v7 - 48) <= 7u )
          ++v7;
        else
          v8 = 0;
        v18[1] = v8;
        if ( (unsigned __int8)(*v7 - 48) <= 7u )
          ++v7;
        qsscanf((int)v18, (int)"%o", (int)v17, v4, v5, v6, v17[0]);
        *a1 = v7;
        return (unsigned __int8)v17[0];
      }
      else
      {
        switch ( (char)utf8_char )
        {
          case 'a':
            v1 = 7;
            break;
          case 'b':
            v1 = 8;
            break;
          case 'f':
            v1 = 12;
            break;
          case 'n':
            v1 = 10;
            break;
          case 'r':
            v1 = 13;
            break;
          case 't':
            v1 = 9;
            break;
          case 'v':
            v1 = 11;
            break;
          case 'x':
            v10 = *a1;
            v11 = **a1;
            if ( v11 <= 0x7F && isxdigit(v11) )
            {
              v18[0] = v11;
              v15 = v10[1];
              v16 = v10 + 1;
              if ( v15 <= 0x7F && isxdigit(v15) )
                v16 = v10 + 2;
              qsscanf((int)v18, (int)"%x", (int)v17, v12, v13, v14, v17[0]);
              *a1 = v16;
              v1 = (unsigned __int8)v17[0];
            }
            break;
          default:
            return v1;
        }
      }
    }
  }
  return v1;
}

