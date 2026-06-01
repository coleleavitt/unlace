/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7ABA0
// Address: 0x0007ABA0

//----- (0007ABA0) --------------------------------------------------------
void __cdecl sub_7ABA0(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_13839C;
  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    qfree(v1);
    a1[1] = 0;
    a1[3] = 0;
  }
}
// 13839C: using guessed type int (__cdecl *off_13839C)(int, int, int off);
