/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CE30
// Address: 0x0045CE30

//----- (0045CE30) --------------------------------------------------------
int __userpurge sub_45CE30@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, LPCCH lpMultiByteStr)
{
  int result; // eax

  result = sub_45CD10(a1, a2, a3, lpMultiByteStr, (int)"rtN", 64);
  if ( !result )
  {
    sub_45CC20(1);
    return 0;
  }
  return result;
}
