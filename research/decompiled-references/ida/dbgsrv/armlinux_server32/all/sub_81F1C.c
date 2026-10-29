/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81F1C
// Address: 0x00081F1C

//----- (00081F1C) --------------------------------------------------------
int __fastcall sub_81F1C(int *a1, void *s, unsigned int a3, size_t n)
{
  int v4; // r7
  int v5; // r4
  unsigned int v6; // r4
  int v9; // r4
  int v10; // t1
  int v11; // r5

  v4 = *a1;
  v5 = *(_DWORD *)(*a1 - 12);
  if ( !v5 )
    return -1;
  v6 = v5 - 1;
  if ( v6 >= a3 )
    v6 = a3;
  v9 = v6 + 1 + v4;
  while ( 1 )
  {
    v11 = ~v4 + v9;
    if ( !n )
      break;
    v10 = *(unsigned __int8 *)--v9;
    if ( !memchr(s, v10, n) )
      break;
    if ( v9 == v4 )
      return -1;
  }
  return v11;
}
