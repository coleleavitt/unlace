/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D31C
// Address: 0x0008D31C

//----- (0008D31C) --------------------------------------------------------
int __fastcall sub_8D31C(int *a1, void *s, unsigned int a3, size_t n)
{
  int v4; // r4
  unsigned int v5; // r4
  int v6; // r5
  int v9; // r4
  int v10; // t1
  int v11; // r8

  v4 = a1[1];
  if ( !v4 )
    return -1;
  v5 = v4 - 1;
  v6 = *a1;
  if ( v5 >= a3 )
    v5 = a3;
  v9 = v5 + 1 + v6;
  while ( 1 )
  {
    v11 = ~v6 + v9;
    if ( !n )
      break;
    v10 = *(unsigned __int8 *)--v9;
    if ( !memchr(s, v10, n) )
      break;
    if ( v9 == v6 )
      return -1;
  }
  return v11;
}
