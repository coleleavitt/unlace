/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000652D0
// Address: 0x00000001000652D0

//----- (00000001000652D0) ----------------------------------------------------
void __fastcall sub_1000652D0(std::__shared_weak_count *a1)
{
  void *v1; // x0
  __int64 _8; // [xsp+8h] [xbp+8h]

  a1->__vftable = (std::__shared_weak_count_vtbl *)off_10009FC98;
  std::__shared_weak_count::~__shared_weak_count(a1);
  if ( ((_8 ^ (2 * _8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}
// 100065304: variable '_8' is possibly undefined
// 100065310: variable 'v1' is possibly undefined
// 10009FC98: using guessed type __int64 (__fastcall *off_10009FC98[3])();
