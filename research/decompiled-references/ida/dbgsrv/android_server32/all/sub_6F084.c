/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F084
// Address: 0x0006F084

//----- (0006F084) --------------------------------------------------------
void __fastcall sub_6F084(std::__shared_weak_count *a1)
{
  void *v2; // r0

  *(_DWORD *)a1 = &off_DAA24;
  ((void (__fastcall *)(char *))loc_6F140)((char *)a1 + 12);
  std::__shared_weak_count::~__shared_weak_count(a1);
  operator delete(v2);
}
// 6F09E: variable 'v2' is possibly undefined
// DAA24: using guessed type _UNKNOWN *off_DAA24;
