/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98C10
// Address: 0x00098C10

//----- (00098C10) --------------------------------------------------------
void __cdecl sub_98C10(std::__shared_weak_count *a1)
{
  *(_DWORD *)a1 = off_138BD8;
  sub_98DE0((int)a1 + 12);
  std::__shared_weak_count::~__shared_weak_count();
  operator delete(a1);
}
// 138BD8: using guessed type int (__cdecl *off_138BD8[2])(std::__shared_weak_count *);
