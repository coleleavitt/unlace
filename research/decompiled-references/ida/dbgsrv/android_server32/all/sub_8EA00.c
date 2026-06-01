/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EA00
// Address: 0x0008EA00

//----- (0008EA00) --------------------------------------------------------
char *__fastcall sub_8EA00(int a1)
{
  int v1; // r1
  unsigned int v2; // r2
  int v3; // r0

  v1 = 2 - a1;
  v2 = a1 + 6;
  v3 = 9;
  if ( v2 <= 8 )
    v3 = v1;
  return off_DB36C[v3];
}
// DB36C: using guessed type char *off_DB36C[2];
