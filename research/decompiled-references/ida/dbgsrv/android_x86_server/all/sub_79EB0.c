/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79EB0
// Address: 0x00079EB0

//----- (00079EB0) --------------------------------------------------------
const char *__cdecl sub_79EB0(int a1, int a2)
{
  char *v2; // edx

  if ( *(_DWORD *)(a1 + 12) )
    v2 = *(char **)(a1 + 8);
  else
    v2 = byte_EF875;
  return sub_79EF0(a2, v2);
}
