/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8254
// Address: 0x00000000000A8254

//----- (00000000000A8254) ----------------------------------------------------
void __fastcall sub_A8254(std::__shared_weak_count *a1)
{
  *(_QWORD *)a1 = off_15F388;
  ((void (__fastcall *)(char *))loc_A8384)((char *)a1 + 24);
  std::__shared_weak_count::~__shared_weak_count(a1);
}
// 15F388: using guessed type __int64 (__fastcall *off_15F388[3])();
