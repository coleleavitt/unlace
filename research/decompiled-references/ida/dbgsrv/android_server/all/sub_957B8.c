/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_957B8
// Address: 0x00000000000957B8

//----- (00000000000957B8) ----------------------------------------------------
__int64 __fastcall sub_957B8(__int64 result, unsigned int a2, char a3, __int64 a4, _QWORD *a5)
{
  unsigned int *v5; // x8
  __int64 v6; // x9
  unsigned int v7; // w8

  v5 = (unsigned int *)(result + 8LL * a2);
  v6 = *v5;
  if ( a3 == 1 )
  {
    *a5 = bswap32(v6);
    v7 = bswap32(v5[1]);
  }
  else
  {
    *a5 = v6;
    v7 = v5[1];
  }
  a5[1] = (unsigned __int8)v7;
  a5[2] = v7 >> 8;
  a5[3] = 0;
  return result;
}
