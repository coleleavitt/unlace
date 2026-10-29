/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7AB20
// Address: 0x0007AB20

//----- (0007AB20) --------------------------------------------------------
void __cdecl sub_7AB20(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax

  *a1 = &off_1383DC;
  v1 = (void *)a1[7];
  if ( v1 )
  {
    a1[8] = 0;
    qfree(v1);
    a1[7] = 0;
    a1[9] = 0;
  }
  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
    a1[4] = 0;
    a1[6] = 0;
  }
}
// 1383DC: using guessed type int (__cdecl *off_1383DC)(int, int);
