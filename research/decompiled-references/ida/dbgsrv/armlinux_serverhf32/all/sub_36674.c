/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36674
// Address: 0x00036674

//----- (00036674) --------------------------------------------------------
int __fastcall sub_36674(_DWORD *a1, int a2)
{
  const char *v3; // r0

  if ( a1[3] )
    v3 = (const char *)a1[2];
  else
    v3 = (const char *)&dword_8DA5C;
  *(_DWORD *)(a2 + 8) = sub_772FC(v3, a1[8]);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
