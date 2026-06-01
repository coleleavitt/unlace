/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BA2D0
// Address: 0x080BA2D0

//----- (080BA2D0) --------------------------------------------------------
void __cdecl sub_80BA2D0(_DWORD *a1)
{
  void *v1; // eax

  *a1 = dword_811CDC4;
  sub_80BC010(a1 + 17, -1);
  v1 = (void *)a1[18];
  if ( v1 )
  {
    a1[19] = 0;
    sub_80CF780(v1);
  }
}
// 811CDC4: using guessed type int dword_811CDC4[2];
