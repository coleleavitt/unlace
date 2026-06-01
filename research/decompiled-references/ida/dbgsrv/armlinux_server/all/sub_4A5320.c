/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5320
// Address: 0x00000000004A5320

//----- (00000000004A5320) ----------------------------------------------------
__int64 __fastcall sub_4A5320(unsigned __int8 **a1)
{
  __int64 v1; // x3
  int v2; // w4
  int v3; // w6
  unsigned __int8 *v4; // x3
  unsigned int v5; // w1
  int v6; // w5
  int v7; // t1
  unsigned int v8; // w5

  v1 = (__int64)*a1;
  v2 = **a1;
  if ( v2 != 110 )
  {
    if ( (unsigned __int8)(v2 - 48) <= 9u )
    {
      v3 = 0;
      goto LABEL_4;
    }
    return 0;
  }
  *a1 = (unsigned __int8 *)(v1 + 1);
  v2 = *(unsigned __int8 *)(v1 + 1);
  if ( (unsigned __int8)(v2 - 48) > 9u )
    return 0;
  ++v1;
  v3 = 1;
LABEL_4:
  v4 = (unsigned __int8 *)(v1 + 1);
  v5 = 0;
  do
  {
    *a1 = v4;
    v6 = v2 + 10 * v5;
    v7 = *v4++;
    v2 = v7;
    v5 = v6 - 48;
  }
  while ( (unsigned __int8)(v7 - 48) <= 9u );
  v8 = 48 - v6;
  if ( v3 )
    return v8;
  return v5;
}
