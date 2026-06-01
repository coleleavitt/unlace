/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_utf8_char
// Address: 0x00000000000B18F0

//----- (00000000000B18F0) ----------------------------------------------------
__int64 __fastcall prev_utf8_char(_DWORD *a1, unsigned __int8 **a2, unsigned __int64 a3)
{
  unsigned __int8 *v5; // x22
  unsigned __int8 *v6; // x23
  __int64 result; // x0
  int utf8_char; // w8
  unsigned __int8 *v9; // x8
  char v10; // t1
  unsigned __int8 *v11[2]; // [xsp+0h] [xbp-40h] BYREF

  v11[1] = *(unsigned __int8 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 )
    *a1 = -1;
  v5 = *a2;
  v6 = *a2 - 1;
  if ( (unsigned __int64)v6 < a3 )
    return 0;
  utf8_char = *v6;
  if ( (utf8_char & 0x80) != 0 )
  {
    if ( (utf8_char & 0xC0) == 0x80 )
    {
      v9 = v5 - 2;
      while ( (unsigned __int64)v9 >= a3 && v5 - v9 <= 4 )
      {
        v10 = *v9--;
        if ( (v10 & 0xC0) != 0x80 )
        {
          v6 = v9 + 1;
          v11[0] = v9 + 1;
          utf8_char = get_utf8_char(v11);
          result = 0;
          if ( utf8_char != -1 && v11[0] <= v5 )
            goto LABEL_6;
          return result;
        }
      }
    }
    return 0;
  }
LABEL_6:
  if ( a1 )
    *a1 = utf8_char;
  result = 1;
  *a2 = v6;
  return result;
}
// B1980: conditional instruction was optimized away because w8.4==80
