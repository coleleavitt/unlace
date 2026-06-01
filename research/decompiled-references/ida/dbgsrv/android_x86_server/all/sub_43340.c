/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43340
// Address: 0x00043340

//----- (00043340) --------------------------------------------------------
void __cdecl sub_43340(int *ptr)
{
  *ptr = (int)&off_13484C;
  if ( ptr[7] )
  {
    sub_41610(ptr + 7, 0);
    qfree((void *)ptr[7]);
  }
  operator delete(ptr);
}
// 13484C: using guessed type int (__cdecl *off_13484C)(int);
