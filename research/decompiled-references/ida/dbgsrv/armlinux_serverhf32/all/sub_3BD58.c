/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BD58
// Address: 0x0003BD58

//----- (0003BD58) --------------------------------------------------------
int __fastcall sub_3BD58(_DWORD *a1)
{
  char *v1; // r1

  if ( a1[7] )
    v1 = (char *)a1[6];
  else
    v1 = (char *)&dword_8DA5C;
  return sub_3B7AC(a1, v1);
}
// 8DA5C: using guessed type int dword_8DA5C;
