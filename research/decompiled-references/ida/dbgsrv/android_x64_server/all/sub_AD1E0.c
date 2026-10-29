/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD1E0
// Address: 0x00000000000AD1E0

//----- (00000000000AD1E0) ----------------------------------------------------
void __fastcall sub_AD1E0(std::__shared_weak_count *this)
{
  *(_QWORD *)this = off_14F788;
  sub_AD320((__int64)this + 24);
  std::__shared_weak_count::~__shared_weak_count(this);
  operator delete(this);
}
// 14F788: using guessed type __int64 (__fastcall *off_14F788[2])(std::__shared_weak_count *this);
