/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DD60
// Address: 0x0042DD60

//----- (0042DD60) --------------------------------------------------------
int __userpurge sub_42DD60@<eax>(void **a1@<ebx>, __m128i a2@<xmm0>, int a3)
{
  return sub_4385A0(a1, a2, *(_DWORD *)(*(_DWORD *)(a3 + 56) + 16), a3 + 16, nullptr);
}
