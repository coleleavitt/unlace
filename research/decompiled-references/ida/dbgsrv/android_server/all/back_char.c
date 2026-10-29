/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: back_char
// Address: 0x00000000000AC864

//----- (00000000000AC864) ----------------------------------------------------
__int64 __fastcall back_char(unsigned __int8 **a1)
{
  __int64 result; // x0
  unsigned __int8 *v3; // x8
  unsigned __int8 v4; // w10
  bool v5; // zf
  unsigned __int8 *v6; // x11
  unsigned __int8 v7; // w10
  unsigned __int8 *v8; // x20
  unsigned __int8 v9; // w8
  unsigned __int8 *v10; // x23
  int v11; // w20
  unsigned __int8 *v12; // x22
  unsigned __int8 v13; // w20
  unsigned __int8 v14; // w8
  unsigned int v15; // [xsp+0h] [xbp-40h] BYREF
  unsigned int v16; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v17; // [xsp+8h] [xbp-38h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = get_utf8_char(a1);
  if ( (_DWORD)result == -1 )
    return 0;
  if ( (unsigned int)result > 0xFF )
    return 92;
  if ( (result & 0xF8) == 0x30 )
  {
    v3 = *a1;
    LOBYTE(v16) = result;
    v4 = *v3;
    v5 = (*v3 & 0xF8) == 48;
    if ( (*v3 & 0xF8) == 0x30 )
    {
      v6 = v3 + 1;
    }
    else
    {
      v4 = 0;
      v6 = v3;
    }
    BYTE1(v16) = v4;
    v7 = *v6;
    if ( v5 )
      ++v3;
    HIBYTE(v16) = 0;
    if ( (v7 & 0xF8) == 0x30 )
      v8 = v3 + 1;
    else
      v8 = v3;
    if ( (v7 & 0xF8) == 0x30 )
      v9 = v7;
    else
      v9 = 0;
    BYTE2(v16) = v9;
    qsscanf((const char *)&v16, byte_11B32C, &v15);
    result = v15;
    *a1 = v8;
  }
  else
  {
    switch ( (char)result )
    {
      case 'a':
        result = 7;
        break;
      case 'b':
        result = 8;
        break;
      case 'f':
        result = 12;
        break;
      case 'n':
        result = 10;
        break;
      case 'r':
        result = 13;
        break;
      case 't':
        result = 9;
        break;
      case 'v':
        result = 11;
        break;
      case 'x':
        v10 = *a1;
        v11 = (char)**a1;
        if ( v11 < 0 || !isxdigit(**a1) )
        {
          result = 120;
        }
        else
        {
          LOBYTE(v15) = v11;
          v12 = v10 + 1;
          if ( (char)v10[1] < 0 )
          {
            v14 = 0;
          }
          else
          {
            v13 = v10[1];
            if ( isxdigit(v13) )
            {
              v12 = v10 + 2;
              v14 = v13;
            }
            else
            {
              v14 = 0;
            }
          }
          *(_WORD *)((char *)&v15 + 1) = v14;
          qsscanf((const char *)&v15, "%x", &v16);
          result = v16;
          *a1 = v12;
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
