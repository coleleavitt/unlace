/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memicmp
// Address: 0x000794D4

//----- (000794D4) --------------------------------------------------------
int __fastcall memicmp(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r5
  unsigned __int8 *v5; // r7
  int v6; // t1
  int v7; // r4
  int v8; // t1
  int result; // r0

  if ( a3 <= 0 )
    return 0;
  v3 = a1;
  v5 = &a1[a3];
  do
  {
    v6 = *v3++;
    v7 = tolower(v6);
    v8 = *a2++;
    result = v7 - tolower(v8);
  }
  while ( !result && v3 != v5 );
  return result;
}
