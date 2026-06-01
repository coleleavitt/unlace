/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4345B0
// Address: 0x00000000004345B0

//----- (00000000004345B0) ----------------------------------------------------
__int64 __fastcall sub_4345B0(__int64 a1)
{
  const char *v1; // rsi

  v1 = s1;
  if ( *(_QWORD *)(a1 + 48) )
    v1 = *(const char **)(a1 + 40);
  return sub_433E10(a1, v1);
}
