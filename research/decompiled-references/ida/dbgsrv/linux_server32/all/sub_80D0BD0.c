/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0BD0
// Address: 0x080D0BD0

//----- (080D0BD0) --------------------------------------------------------
bool __cdecl sub_80D0BD0(pthread_t th)
{
  return pthread_join(th, nullptr) == 0;
}
