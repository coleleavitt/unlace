/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_948D0
// Address: 0x000948D0

//----- (000948D0) --------------------------------------------------------
void __cdecl sub_948D0(void ***ptr)
{
  *ptr = (void **)&off_138B2C;
  sub_94950((int)(ptr + 1), ptr[2]);
  operator delete(ptr);
}
// 138B2C: using guessed type int (__cdecl *off_138B2C)(int);
