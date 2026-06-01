/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D2D0
// Address: 0x0008D2D0

//----- (0008D2D0) --------------------------------------------------------
unsigned int __fastcall sub_8D2D0(_DWORD *a1, void *s, unsigned int a3, size_t n)
{
  unsigned int v4; // r4
  unsigned int v5; // r7
  int v8; // r5
  int v9; // t1

  if ( !n )
    return -1;
  v4 = a3;
  v5 = a1[1];
  if ( a3 >= v5 )
    return -1;
  v8 = *a1 + a3 - 1;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)++v8;
    if ( memchr(s, v9, n) )
      break;
    if ( ++v4 == v5 )
      return -1;
  }
  return v4;
}
