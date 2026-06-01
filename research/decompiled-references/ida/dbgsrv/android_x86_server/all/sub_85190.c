/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85190
// Address: 0x00085190

//----- (00085190) --------------------------------------------------------
int __cdecl sub_85190(int a1, int a2, unsigned int a3)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(_DWORD *)(a1 + 208);
  v4 = v3 - 100;
  if ( !v3 )
    v4 = 0;
  return sub_84FC0(v4, a2, a3);
}
