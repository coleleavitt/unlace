/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_utf8_char
// Address: 0x00075088

//----- (00075088) --------------------------------------------------------
int __fastcall prev_utf8_char(int *a1, unsigned int *a2, unsigned int a3)
{
  int result; // r0
  unsigned int v5; // r7
  unsigned __int8 *v6; // r4
  unsigned int v7; // r3
  _BYTE *v8; // r3
  _BYTE *v9; // r4
  int utf8_char; // r1
  unsigned __int8 *v13; // [sp+14h] [bp-8h] BYREF

  result = 0;
  if ( a1 )
    *a1 = -1;
  v5 = *a2;
  v6 = (unsigned __int8 *)(*a2 - 1);
  if ( (unsigned int)v6 >= a3 )
  {
    v7 = *v6;
    if ( (v7 & 0x80) != 0 )
    {
      if ( (v7 & 0xC0) == 0x80 )
      {
        if ( v7 >> 6 == 2 )
        {
          v8 = (_BYTE *)(v5 - 2);
          while ( (unsigned int)v8 >= a3 && (int)(v5 - (_DWORD)v8) <= 4 )
          {
            v9 = v8 - 1;
            if ( (*v8-- & 0xC0) != 128 )
            {
              v6 = v9 + 1;
              goto LABEL_15;
            }
          }
        }
        else
        {
LABEL_15:
          v13 = v6;
          utf8_char = get_utf8_char(&v13);
          result = 0;
          if ( utf8_char != -1 && (unsigned int)v13 <= v5 )
          {
            *a1 = utf8_char;
            *a2 = (unsigned int)v6;
            return 1;
          }
        }
      }
    }
    else
    {
      if ( a1 )
        *a1 = v7;
      *a2 = (unsigned int)v6;
      return 1;
    }
  }
  return result;
}
// 7511A: conditional instruction was optimized away because r6.4==80
