/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C3380
// Address: 0x080C3380

//----- (080C3380) --------------------------------------------------------
void __cdecl sub_80C3380(std::exception *a1)
{
  *(_DWORD *)a1 = off_811C884;
  std::exception::~exception(a1);
  operator delete(a1, 4u);
}
// 811C884: using guessed type int (__cdecl *off_811C884[2])(std::exception *);
