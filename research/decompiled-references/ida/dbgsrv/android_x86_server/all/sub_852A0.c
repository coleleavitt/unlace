/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_852A0
// Address: 0x000852A0

//----- (000852A0) --------------------------------------------------------
void __cdecl sub_852A0(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax

  *a1 = &off_138384;
  v1 = (void *)a1[5];
  if ( v1 )
  {
    a1[6] = 0;
    qfree(v1);
    a1[5] = 0;
    a1[7] = 0;
  }
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 138384: using guessed type int (__cdecl *off_138384)(int);
