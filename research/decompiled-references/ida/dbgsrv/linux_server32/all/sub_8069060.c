/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069060
// Address: 0x08069060

//----- (08069060) --------------------------------------------------------
void __cdecl sub_8069060(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_811B8AC;
  v1 = (void *)a1[7];
  if ( v1 )
  {
    a1[8] = 0;
    sub_80CF780(v1);
  }
  operator delete(a1, 0x38u);
}
// 811B8AC: using guessed type int (__cdecl *off_811B8AC)(int);
