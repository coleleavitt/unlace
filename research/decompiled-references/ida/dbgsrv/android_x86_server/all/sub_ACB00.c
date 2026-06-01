/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ACB00
// Address: 0x000ACB00

//----- (000ACB00) --------------------------------------------------------
void __cdecl sub_ACB00(FILE **ptr)
{
  FILE *v1; // eax

  *ptr = (FILE *)&off_13934C;
  if ( ptr[5] )
    qfclose(ptr[5]);
  ptr[5] = nullptr;
  ptr[4] = nullptr;
  v1 = ptr[8];
  if ( v1 )
  {
    ptr[9] = nullptr;
    qfree(v1);
  }
  operator delete(ptr);
}
// 13934C: using guessed type int (__cdecl *off_13934C)(int, int off, int, void *ptr, int);
