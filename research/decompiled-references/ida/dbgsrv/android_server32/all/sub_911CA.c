/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_911CA
// Address: 0x000911CA

//----- (000911CA) --------------------------------------------------------
void __fastcall sub_911CA(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 911D6: variable 'v1' is possibly undefined
