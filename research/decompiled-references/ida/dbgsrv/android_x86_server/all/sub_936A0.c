/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_936A0
// Address: 0x000936A0

//----- (000936A0) --------------------------------------------------------
void __cdecl sub_936A0(_DWORD *a1)
{
  int v1; // eax
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  *a1 = &off_138A7C;
  sub_94D80(a1 + 10, -1);
  v1 = a1[11];
  if ( v1 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v1 + 4))(a1[11]);
  v2 = (void *)a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
    a1[7] = 0;
    a1[9] = 0;
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
    a1[4] = 0;
    a1[6] = 0;
  }
  v4 = (void *)a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    qfree(v4);
    a1[1] = 0;
    a1[3] = 0;
  }
}
// 138A7C: using guessed type int (__cdecl *off_138A7C)(int);
