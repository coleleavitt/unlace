/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D580
// Address: 0x000000010006D580

//----- (000000010006D580) ----------------------------------------------------
void __fastcall sub_10006D580(std::__shared_weak_count *__p)
{
  __p->__vftable = (std::__shared_weak_count_vtbl *)&off_1000AA7B0;
  std::__shared_weak_count::~__shared_weak_count(__p);
  operator delete(__p);
}
// 1000AA7B0: using guessed type __int64 (__fastcall *off_1000AA7B0)();
