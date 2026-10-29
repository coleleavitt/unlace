/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CD20
// Address: 0x0040CD20

//----- (0040CD20) --------------------------------------------------------
int __userpurge sub_40CD20@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, char *lpBaseAddress)
{
  int v3; // eax
  int v4; // ecx
  __m128i v6[5]; // [esp+0h] [ebp-FCh] BYREF
  int v7; // [esp+50h] [ebp-ACh]

  v3 = sub_412370(a1, a2, lpBaseAddress, v6);
  v4 = v7;
  if ( v3 == -1 )
    return 0;
  return v4;
}
