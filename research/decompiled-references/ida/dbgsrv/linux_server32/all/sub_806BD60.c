/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806BD60
// Address: 0x0806BD60

//----- (0806BD60) --------------------------------------------------------
int __cdecl sub_806BD60(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 0x18 )
    sub_8068F40();
  return *(_DWORD *)(a1 + 4 * a2 + 28);
}
