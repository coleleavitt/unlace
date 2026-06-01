/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85150
// Address: 0x00085150

//----- (00085150) --------------------------------------------------------
int __cdecl sub_85150(int a1, int *a2, char **a3, int a4)
{
  int v4; // eax
  int v5; // ecx

  v4 = *(_DWORD *)(a1 + 208);
  v5 = v4 - 100;
  if ( !v4 )
    v5 = 0;
  return sub_84690(v5, a2, a3, a4);
}
