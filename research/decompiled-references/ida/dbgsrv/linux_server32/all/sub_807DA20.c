/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807DA20
// Address: 0x0807DA20

//----- (0807DA20) --------------------------------------------------------
void __cdecl sub_807DA20(int a1)
{
  void *v1; // eax

  v1 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_80CF780(v1);
  }
}
