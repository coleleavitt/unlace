/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: put_utf8_char
// Address: 0x000A2B70

//----- (000A2B70) --------------------------------------------------------
int __cdecl put_utf8_char(_BYTE *a1, unsigned int a2)
{
  _BYTE *v2; // eax

  if ( a2 <= 0x7F )
  {
    v2 = a1 + 1;
    *a1 = a2;
LABEL_9:
    *v2 = 0;
    return v2 - a1;
  }
  if ( a2 <= 0x7FF )
  {
    *a1 = (a2 >> 6) & 0x1F | 0xC0;
    v2 = a1 + 2;
    a1[1] = a2 & 0x3F | 0x80;
    goto LABEL_9;
  }
  if ( a2 <= 0xFFFF )
  {
    *a1 = (a2 >> 12) & 0xF | 0xE0;
    a1[1] = (a2 >> 6) & 0x3F | 0x80;
    v2 = a1 + 3;
    a1[2] = a2 & 0x3F | 0x80;
    goto LABEL_9;
  }
  if ( a2 <= (unsigned int)&byte_10FFFF )
  {
    *a1 = (a2 >> 18) & 7 | 0xF0;
    a1[1] = (a2 >> 12) & 0x3F | 0x80;
    a1[2] = (a2 >> 6) & 0x3F | 0x80;
    v2 = a1 + 4;
    a1[3] = a2 & 0x3F | 0x80;
    goto LABEL_9;
  }
  *a1 = 0;
  return -1;
}
// 10FFFF: using guessed type char byte_10FFFF;
