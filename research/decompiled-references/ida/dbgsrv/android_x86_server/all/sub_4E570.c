/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E570
// Address: 0x0004E570

//----- (0004E570) --------------------------------------------------------
void __cdecl sub_4E570(int a1)
{
  void *v1; // eax

  v1 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v1);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
