/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90E78
// Address: 0x00090E78

//----- (00090E78) --------------------------------------------------------
int __fastcall sub_90E78(char **a1)
{
  char *v1; // lr
  int v2; // r3
  int v3; // r1
  char v4; // t1

  v1 = *a1;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = *v1++;
    v3 |= (v4 & 0x7F) << v2;
    v2 += 7;
  }
  while ( v4 < 0 );
  *a1 = v1;
  return v3;
}
