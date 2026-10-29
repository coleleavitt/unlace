/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8068E70
// Address: 0x08068E70

//----- (08068E70) --------------------------------------------------------
void __cdecl sub_8068E70(_DWORD *a1)
{
  void *v1; // edx

  *a1 = &off_811B8AC;
  v1 = (void *)a1[7];
  if ( v1 )
  {
    a1[8] = 0;
    sub_80CF780(v1);
  }
}
// 811B8AC: using guessed type int (__cdecl *off_811B8AC)(int);
