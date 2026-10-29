/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_911DA
// Address: 0x000911DA

//----- (000911DA) --------------------------------------------------------
void __fastcall sub_911DA(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 911E6: variable 'v1' is possibly undefined
