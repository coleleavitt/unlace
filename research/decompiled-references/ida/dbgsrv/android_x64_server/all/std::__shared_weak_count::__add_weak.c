/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_weak_count::__add_weak
// Address: 0x00000000000CEA60

//----- (00000000000CEA60) ----------------------------------------------------
void __fastcall std::__shared_weak_count::__add_weak(std::__shared_weak_count *this)
{
  _InterlockedAdd64((volatile signed __int64 *)this + 2, 1u);
}
