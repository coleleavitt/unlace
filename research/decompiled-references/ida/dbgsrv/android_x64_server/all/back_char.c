/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: back_char
// Address: 0x00000000000B0DB0

//----- (00000000000B0DB0) ----------------------------------------------------
__int64 __fastcall back_char(char **a1)
{
  unsigned int v1; // ebp
  unsigned int utf8_char; // eax
  char *v3; // rcx
  char v4; // dl
  char v5; // bl
  char *v6; // rax
  char v7; // cl
  char *v8; // rbx
  char *v10; // r15
  char v11; // bl
  char *v12; // r14
  int v13; // eax
  char *v14; // r15
  char v15[4]; // [rsp+0h] [rbp-38h] BYREF
  char v16[4]; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  utf8_char = get_utf8_char(a1);
  if ( utf8_char == -1 )
  {
    return 0;
  }
  else
  {
    LOBYTE(v1) = 92;
    if ( utf8_char <= 0xFF )
    {
      v1 = utf8_char;
      if ( (utf8_char & 0xF8) == 0x30 )
      {
        v3 = *a1;
        v16[0] = utf8_char;
        v4 = *v3;
        v5 = *v3 & 0xF8;
        v6 = v3 + 1;
        if ( v5 != 48 )
        {
          v6 = v3;
          v4 = 0;
        }
        v16[1] = v4;
        v7 = v3[v5 == 48];
        v8 = v6 + 1;
        if ( (v7 & 0xF8) != 0x30 )
        {
          v8 = v6;
          v7 = 0;
        }
        v16[2] = v7;
        v16[3] = 0;
        qsscanf(v16, "%o", v15);
        LOBYTE(v1) = v15[0];
        *a1 = v8;
      }
      else
      {
        switch ( (char)utf8_char )
        {
          case 'a':
            LOBYTE(v1) = 7;
            break;
          case 'b':
            LOBYTE(v1) = 8;
            break;
          case 'f':
            LOBYTE(v1) = 12;
            break;
          case 'n':
            LOBYTE(v1) = 10;
            break;
          case 'r':
            LOBYTE(v1) = 13;
            break;
          case 't':
            LOBYTE(v1) = 9;
            break;
          case 'v':
            LOBYTE(v1) = 11;
            break;
          case 'x':
            v10 = *a1;
            v11 = **a1;
            if ( v11 >= 0 && isxdigit((unsigned __int8)v11) )
            {
              v12 = v10 + 1;
              v15[0] = v11;
              v1 = (unsigned __int8)v10[1];
              if ( (v1 & 0x80u) == 0 && (v13 = isxdigit((unsigned __int8)v10[1]), v14 = v10 + 2, v13) )
                v12 = v14;
              else
                v1 = 0;
              v15[1] = v1;
              v15[2] = 0;
              qsscanf(v15, "%x", v16);
              LOBYTE(v1) = v16[0];
              *a1 = v12;
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
// B0E74: variable 'v1' is possibly undefined
