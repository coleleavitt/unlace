/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E778
// Address: 0x0003E778

//----- (0003E778) --------------------------------------------------------
void *__fastcall sub_3E778(_DWORD *a1, int a2, void *dest, signed int n)
{
  if ( a1[3] - a2 < n )
    sub_149A0();
  return j_memcpy(dest, (const void *)(a2 + *a1), n);
}
