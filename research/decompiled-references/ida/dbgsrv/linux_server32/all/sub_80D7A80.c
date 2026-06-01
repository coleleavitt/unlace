/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D7A80
// Address: 0x080D7A80

//----- (080D7A80) --------------------------------------------------------
int __cdecl sub_80D7A80(void (*lpfunc)(void *))
{
  return __cxa_atexit(lpfunc, nullptr, nullptr);
}
