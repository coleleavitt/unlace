/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DA44
// Address: 0x0008DA44

//----- (0008DA44) --------------------------------------------------------
_DWORD *__fastcall sub_8DA44(_DWORD *a1, char *src)
{
  int v4; // r2

  v4 = -1;
  *a1 = a1 + 2;
  if ( src )
    v4 = (int)&src[strlen(src)];
  sub_8D910(a1, src, v4);
  return a1;
}
