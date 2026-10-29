/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_911FA
// Address: 0x000911FA

//----- (000911FA) --------------------------------------------------------
void __fastcall sub_911FA(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 91206: variable 'v1' is possibly undefined
