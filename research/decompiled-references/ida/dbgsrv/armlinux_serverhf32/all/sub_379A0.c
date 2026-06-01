/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_379A0
// Address: 0x000379A0

//----- (000379A0) --------------------------------------------------------
int __fastcall sub_379A0(_DWORD *a1)
{
  const char *v2; // r0

  if ( a1[7] )
    v2 = (const char *)a1[6];
  else
    v2 = (const char *)&dword_8DA5C;
  a1[26] = sub_3F378(v2, 0);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
