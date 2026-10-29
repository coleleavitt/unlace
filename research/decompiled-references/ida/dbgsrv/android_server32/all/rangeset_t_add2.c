/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add2
// Address: 0x00082DD4

//----- (00082DD4) --------------------------------------------------------
int __fastcall rangeset_t_add2(int a1, int *a2)
{
  char v3; // r7
  int v5; // r6

  v3 = 0;
  if ( 8 * a2[1] )
  {
    v5 = *a2;
    v3 = 0;
    do
    {
      v3 |= rangeset_t_add(a1, v5);
      v5 += 8;
    }
    while ( v5 != *a2 + 8 * a2[1] );
  }
  return v3 & 1;
}
