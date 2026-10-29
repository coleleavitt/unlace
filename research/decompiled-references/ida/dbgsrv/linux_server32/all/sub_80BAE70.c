/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BAE70
// Address: 0x080BAE70

//----- (080BAE70) --------------------------------------------------------
void __cdecl sub_80BAE70(_DWORD *a1)
{
  int v1; // eax
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  *a1 = dword_811CDDC;
  sub_80BC010(a1 + 10, -1);
  v1 = a1[11];
  if ( v1 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 4))(a1[11]);
  v2 = (void *)a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    sub_80CF780(v2);
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    sub_80CF780(v3);
  }
  v4 = (void *)a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    sub_80CF780(v4);
  }
}
// 811CDDC: using guessed type int dword_811CDDC[2];
