/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EF92C
// Address: 0x00000000000EF92C

//----- (00000000000EF92C) ----------------------------------------------------
char *__fastcall sub_EF92C(char *result, _QWORD *a2)
{
  __int64 v2; // x2
  int v3; // w3
  char v4; // t1
  unsigned __int64 v5; // x4

  v2 = 0;
  v3 = 0;
  do
  {
    v4 = *result++;
    v5 = (unsigned __int64)(v4 & 0x7F) << v3;
    v3 += 7;
    v2 |= v5;
  }
  while ( v4 < 0 );
  *a2 = v2;
  return result;
}
