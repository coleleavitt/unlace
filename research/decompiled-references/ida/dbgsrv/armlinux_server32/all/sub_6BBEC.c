/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BBEC
// Address: 0x0006BBEC

//----- (0006BBEC) --------------------------------------------------------
unsigned int __fastcall sub_6BBEC(unsigned __int8 **a1)
{
  unsigned int result; // r0
  unsigned int v3; // r3
  unsigned __int8 *v4; // r6
  int v5; // r3
  int v6; // r3
  unsigned __int8 *v7; // r7
  int v8; // r6
  unsigned __int8 *v9; // r9
  unsigned __int8 v10; // r6
  char v11[4]; // [sp+4h] [bp-10h] BYREF
  char v12; // [sp+8h] [bp-Ch] BYREF
  unsigned __int8 v13; // [sp+9h] [bp-Bh]
  char v14; // [sp+Ah] [bp-Ah]
  char v15; // [sp+Bh] [bp-9h]

  result = sub_70290(a1);
  if ( result == -1 )
    return 0;
  v3 = result;
  if ( result > 0xFF )
    return 92;
  result = (unsigned __int8)result;
  if ( (unsigned int)(unsigned __int8)v3 - 48 > 7 )
  {
    switch ( v3 )
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
        v7 = *a1;
        v8 = **a1;
        if ( (v8 & 0xFFFFFF80) != 0 || !isxdigit(**a1) )
        {
          result = 120;
        }
        else
        {
          v12 = v8;
          v9 = v7 + 1;
          v10 = v7[1];
          if ( (v10 & 0x80) != 0 )
          {
            v10 = 0;
          }
          else if ( isxdigit(v7[1]) )
          {
            v9 = v7 + 2;
          }
          else
          {
            v10 = 0;
          }
          v13 = v10;
          v14 = 0;
          sub_7EC4C((int)&v12, "%x", v11);
          *a1 = v9;
          result = (unsigned __int8)v11[0];
        }
        break;
      default:
        return result;
    }
  }
  else
  {
    v4 = *a1;
    v12 = result;
    v5 = *v4;
    if ( (unsigned int)(v5 - 48) > 7 )
      LOBYTE(v5) = 0;
    else
      ++v4;
    v13 = v5;
    v6 = *v4;
    v15 = 0;
    if ( (unsigned int)(v6 - 48) > 7 )
      LOBYTE(v6) = 0;
    else
      ++v4;
    v14 = v6;
    sub_7EC4C((int)&v12, "%o", v11);
    *a1 = v4;
    return (unsigned __int8)v11[0];
  }
  return result;
}
