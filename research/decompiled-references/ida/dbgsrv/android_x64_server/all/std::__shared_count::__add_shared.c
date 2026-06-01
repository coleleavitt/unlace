/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__shared_count::__add_shared
// Address: 0x00000000000CEA10

//----- (00000000000CEA10) ----------------------------------------------------
void __fastcall std::__shared_count::__add_shared(std::__shared_count *this)
{
  _InterlockedAdd64((volatile signed __int64 *)this + 1, 1u);
}
