/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5F60
// Address: 0x080A5F60

//----- (080A5F60) --------------------------------------------------------
void __cdecl sub_80A5F60(_DWORD *a1)
{
  _BYTE *v1; // eax
  void *v2; // eax
  void *v3; // eax

  *a1 = &off_811CC00;
  a1[25] = off_811CC2C;
  v1 = (_BYTE *)a1[61];
  if ( v1[452] != 1 && v1 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 20))(a1[61]);
  sub_80BA350((int)a1);
  a1[62] = 0;
  sub_80C6090(a1 + 50);
  sub_80C6090(a1 + 39);
  a1[25] = dword_811CDF8;
  v2 = (void *)a1[35];
  if ( v2 )
  {
    a1[36] = 0;
    sub_80CF780(v2);
  }
  v3 = (void *)a1[27];
  if ( v3 )
  {
    a1[28] = 0;
    sub_80CF780(v3);
  }
  sub_80BA2D0(a1);
}
// 811CC00: using guessed type int (__cdecl *off_811CC00)(int);
// 811CC2C: using guessed type int (__cdecl *off_811CC2C[2])(int);
// 811CDF8: using guessed type int dword_811CDF8[2];
