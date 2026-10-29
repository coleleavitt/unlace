/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EDA08
// Address: 0x00000000000EDA08

//----- (00000000000EDA08) ----------------------------------------------------
char *__fastcall sub_EDA08(char *result, _QWORD *a2)
{
  __int64 v2; // x2
  unsigned int v3; // w3
  char v4; // w4
  char v5; // t1
  unsigned __int64 v6; // x5

  v2 = 0;
  v3 = 0;
  do
  {
    v5 = *result++;
    v4 = v5;
    v6 = (unsigned __int64)(v5 & 0x7F) << v3;
    v3 += 7;
    v2 |= v6;
  }
  while ( v5 < 0 );
  if ( v3 <= 0x3F && (v4 & 0x40) != 0 )
    v2 |= -1LL << v3;
  *a2 = v2;
  return result;
}
