/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452B90
// Address: 0x00452B90

//----- (00452B90) --------------------------------------------------------
unsigned __int8 *__userpurge sub_452B90@<eax>(__m128i a1@<xmm0>, int a2, const char *a3, int a4)
{
  *(_DWORD *)(a2 + 4) = 0;
  return sub_4528E0(a1, a2, a3, a4, -1);
}
