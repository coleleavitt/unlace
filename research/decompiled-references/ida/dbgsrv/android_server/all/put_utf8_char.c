/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: put_utf8_char
// Address: 0x00000000000B19E0

//----- (00000000000B19E0) ----------------------------------------------------
__int64 __fastcall put_utf8_char(_BYTE *a1, unsigned int a2)
{
  _BYTE *v2; // x8

  if ( a2 <= 0x7F )
  {
    *a1 = a2;
    v2 = a1 + 1;
LABEL_9:
    *v2 = 0;
    return v2 - a1;
  }
  if ( a2 <= 0x7FF )
  {
    v2 = a1 + 2;
    *a1 = (a2 >> 6) & 0x1F | 0xC0;
    a1[1] = a2 & 0x3F | 0x80;
    goto LABEL_9;
  }
  if ( !HIWORD(a2) )
  {
    v2 = a1 + 3;
    *a1 = ((unsigned __int16)a2 >> 12) | 0xE0;
    a1[1] = (a2 >> 6) & 0x3F | 0x80;
    a1[2] = a2 & 0x3F | 0x80;
    goto LABEL_9;
  }
  if ( HIWORD(a2) <= 0x10u )
  {
    v2 = a1 + 4;
    *a1 = (a2 >> 18) & 7 | 0xF0;
    a1[1] = (a2 >> 12) & 0x3F | 0x80;
    a1[2] = (a2 >> 6) & 0x3F | 0x80;
    a1[3] = a2 & 0x3F | 0x80;
    goto LABEL_9;
  }
  *a1 = 0;
  return -1;
}
