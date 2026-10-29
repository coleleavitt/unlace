/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BEF0
// Address: 0x0003BEF0

//----- (0003BEF0) --------------------------------------------------------
int __fastcall sub_3BEF0(_DWORD *a1)
{
  char *v1; // r1

  if ( a1[7] )
    v1 = (char *)a1[6];
  else
    v1 = (char *)&dword_8DB98;
  return sub_3B944(a1, v1);
}
// 8DB98: using guessed type int dword_8DB98;
