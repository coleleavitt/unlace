/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E5E0
// Address: 0x0003E5E0

//----- (0003E5E0) --------------------------------------------------------
void *__fastcall sub_3E5E0(_DWORD *a1, int a2, void *dest, signed int n)
{
  if ( a1[3] - a2 < n )
    sub_147F8();
  return j_memcpy(dest, (const void *)(a2 + *a1), n);
}
