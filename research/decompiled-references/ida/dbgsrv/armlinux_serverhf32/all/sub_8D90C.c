/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D90C
// Address: 0x0008D90C

//----- (0008D90C) --------------------------------------------------------
_DWORD *__fastcall sub_8D90C(_DWORD *a1, char *src)
{
  int v4; // r2

  v4 = -1;
  *a1 = a1 + 2;
  if ( src )
    v4 = (int)&src[strlen(src)];
  sub_8D7D8(a1, src, v4);
  return a1;
}
