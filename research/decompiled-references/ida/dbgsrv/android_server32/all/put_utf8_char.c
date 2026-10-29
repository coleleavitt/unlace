/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: put_utf8_char
// Address: 0x0007513C

//----- (0007513C) --------------------------------------------------------
int __fastcall put_utf8_char(_BYTE *a1, unsigned int a2)
{
  _BYTE *v2; // r1

  if ( a2 <= 0x7F )
  {
    *a1 = a2;
    v2 = a1 + 1;
LABEL_9:
    *v2 = 0;
    return v2 - a1;
  }
  if ( !(a2 >> 11) )
  {
    a1[1] = (a2 & 0x3F) + 0x80;
    *a1 = (a2 << 21 >> 27) - 64;
    v2 = a1 + 2;
    goto LABEL_9;
  }
  if ( !HIWORD(a2) )
  {
    a1[2] = (a2 & 0x3F) + 0x80;
    a1[1] = (a2 << 20 >> 26) + 0x80;
    *a1 = ((unsigned __int16)a2 >> 12) - 32;
    v2 = a1 + 3;
    goto LABEL_9;
  }
  if ( HIWORD(a2) <= 0x10u )
  {
    a1[3] = (a2 & 0x3F) + 0x80;
    a1[1] = (a2 << 14 >> 26) + 0x80;
    *a1 = (a2 << 11 >> 29) - 16;
    a1[2] = (a2 << 20 >> 26) + 0x80;
    v2 = a1 + 4;
    goto LABEL_9;
  }
  *a1 = 0;
  return -1;
}
