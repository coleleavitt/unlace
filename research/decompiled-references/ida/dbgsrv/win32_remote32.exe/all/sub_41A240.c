/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A240
// Address: 0x0041A240

//----- (0041A240) --------------------------------------------------------
int __stdcall sub_41A240(int a1, int a2)
{
  const char *v2; // ecx

  v2 = MultiByteStr;
  if ( *(_DWORD *)(a1 + 36) )
    v2 = *(const char **)(a1 + 32);
  *(_DWORD *)(a2 + 8) = sub_4238B0(a1, v2) == 0;
  return 0;
}
