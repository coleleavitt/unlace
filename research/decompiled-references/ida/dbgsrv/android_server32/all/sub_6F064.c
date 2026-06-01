/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F064
// Address: 0x0006F064

//----- (0006F064) --------------------------------------------------------
void __fastcall sub_6F064(std::__shared_weak_count *a1)
{
  *(_DWORD *)a1 = &off_DAA24;
  ((void (__fastcall *)(char *))loc_6F140)((char *)a1 + 12);
  std::__shared_weak_count::~__shared_weak_count(a1);
}
// DAA24: using guessed type _UNKNOWN *off_DAA24;
