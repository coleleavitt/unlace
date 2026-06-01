/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3680C
// Address: 0x0003680C

//----- (0003680C) --------------------------------------------------------
int __fastcall sub_3680C(_DWORD *a1, int a2)
{
  const char *v3; // r0

  if ( a1[3] )
    v3 = (const char *)a1[2];
  else
    v3 = (const char *)&dword_8DB98;
  *(_DWORD *)(a2 + 8) = sub_77464(v3, a1[8]);
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
