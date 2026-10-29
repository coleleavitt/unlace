/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CE90
// Address: 0x0045CE90

//----- (0045CE90) --------------------------------------------------------
int __userpurge sub_45CE90@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, LPCCH lpMultiByteStr, char *a5)
{
  int result; // eax
  char v6[20]; // [esp+4h] [ebp-18h] BYREF

  sub_45ACB0((unsigned int)v6, a5, 20);
  sub_45AC30(v6, "N", 20);
  result = sub_45CD10(a1, a2, a3, lpMultiByteStr, (int)v6, 64);
  if ( !result )
  {
    sub_45CC20(1);
    return 0;
  }
  return result;
}
