/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475AE0
// Address: 0x0000000000475AE0

//----- (0000000000475AE0) ----------------------------------------------------
void __fastcall sub_475AE0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_4C4188;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}
// 4C4188: using guessed type __int64 (__fastcall *off_4C4188)();
