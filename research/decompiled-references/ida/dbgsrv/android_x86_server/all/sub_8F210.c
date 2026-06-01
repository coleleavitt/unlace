/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F210
// Address: 0x0008F210

//----- (0008F210) --------------------------------------------------------
void __cdecl sub_8F210(_DWORD *ptr)
{
  void *v1; // eax

  *ptr = &off_1386D4;
  v1 = (void *)ptr[15];
  if ( v1 )
  {
    ptr[16] = 0;
    qfree(v1);
    ptr[15] = 0;
    ptr[17] = 0;
  }
  sub_936A0(ptr);
  operator delete(ptr);
}
// 1386D4: using guessed type int (__cdecl *off_1386D4)(int);
