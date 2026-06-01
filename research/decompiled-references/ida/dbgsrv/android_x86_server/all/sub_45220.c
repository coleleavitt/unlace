/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45220
// Address: 0x00045220

//----- (00045220) --------------------------------------------------------
int __cdecl sub_45220(int a1, int a2)
{
  int v2; // ecx
  int v3; // edx

  v2 = *(_DWORD *)(a1 + 8);
  v3 = v2 - 1;
  if ( !v2 )
    v3 = 0;
  *(_DWORD *)(a2 + 4) = v3;
  return 0;
}
