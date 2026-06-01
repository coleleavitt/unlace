/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060C90
// Address: 0x0000000100060C90

//----- (0000000100060C90) ----------------------------------------------------
void __fastcall sub_100060C90(std::__shared_weak_count *a1)
{
  void *v1; // x0

  a1->__vftable = (std::__shared_weak_count_vtbl *)off_10009BC58;
  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v1);
}
// 100060CAC: variable 'v1' is possibly undefined
// 10009BC58: using guessed type __int64 (__fastcall *off_10009BC58[3])();
