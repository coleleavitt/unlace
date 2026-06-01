/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A4950
// Address: 0x080A4950

//----- (080A4950) --------------------------------------------------------
void __cdecl sub_80A4950(int a1)
{
  void *v1; // eax

  v1 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_80CF780(v1);
  }
}
