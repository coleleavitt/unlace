/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90F0C
// Address: 0x00090F0C

//----- (00090F0C) --------------------------------------------------------
int __fastcall sub_90F0C(char **a1)
{
  char *v1; // r3
  unsigned int v2; // r1
  int v3; // r12
  char v4; // lr
  char v5; // t1
  int result; // r0

  v1 = *a1;
  v2 = 0;
  v3 = 0;
  do
  {
    v5 = *v1++;
    v4 = v5;
    v3 |= (v5 & 0x7F) << v2;
    v2 += 7;
  }
  while ( v5 < 0 );
  *a1 = v1;
  result = v3;
  if ( (v4 & 0x40) != 0 )
    result = v3 | (-1 << v2);
  if ( v2 >= 0x20 )
    return v3;
  return result;
}
