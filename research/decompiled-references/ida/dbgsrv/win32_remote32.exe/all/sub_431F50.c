/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431F50
// Address: 0x00431F50

//----- (00431F50) --------------------------------------------------------
int __userpurge sub_431F50@<eax>(int a1@<ecx>, void **a2@<ebx>, __m128i a3@<xmm0>, int a4, _DWORD *a5)
{
  int result; // eax

  result = sub_4360F0(a1, a2, a3, a4, 0, a5);
  if ( *(_DWORD *)(a1 + 32) )
  {
    if ( !result )
      return sub_4345C0((const CHAR **)a1, a2, a4);
  }
  return result;
}
