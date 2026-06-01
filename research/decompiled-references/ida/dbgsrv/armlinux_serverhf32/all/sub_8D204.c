/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D204
// Address: 0x0008D204

//----- (0008D204) --------------------------------------------------------
int __fastcall sub_8D204(int *a1, void *s, unsigned int a3, size_t n)
{
  int v4; // r4
  bool v5; // zf
  unsigned int v6; // r4
  int v7; // r5
  int v10; // r4
  int v11; // r8
  int v12; // t1

  v4 = a1[1];
  v5 = v4 == 0;
  if ( v4 )
    v5 = n == 0;
  if ( v5 )
    return -1;
  v6 = v4 - 1;
  v7 = *a1;
  if ( v6 >= a3 )
    v6 = a3;
  v10 = v6 + 1 + v7;
  while ( 1 )
  {
    v11 = ~v7 + v10;
    v12 = *(unsigned __int8 *)--v10;
    if ( memchr(s, v12, n) )
      break;
    if ( v10 == v7 )
      return -1;
  }
  return v11;
}
