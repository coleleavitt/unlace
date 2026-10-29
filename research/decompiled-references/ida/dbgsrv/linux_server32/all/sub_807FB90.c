/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FB90
// Address: 0x0807FB90

//----- (0807FB90) --------------------------------------------------------
void *__cdecl sub_807FB90(_DWORD *a1, int a2, void *dest, int n)
{
  if ( a1[3] - a2 < n )
    sub_807E100();
  return memcpy(dest, (const void *)(*a1 + a2), n);
}
