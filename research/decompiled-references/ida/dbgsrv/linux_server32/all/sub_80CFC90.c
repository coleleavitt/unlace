/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CFC90
// Address: 0x080CFC90

//----- (080CFC90) --------------------------------------------------------
void __cdecl sub_80CFC90(std::exception *a1)
{
  *(_DWORD *)a1 = off_811CE50;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}
// 811CE50: using guessed type int (__cdecl *off_811CE50[3])(std::exception *);
