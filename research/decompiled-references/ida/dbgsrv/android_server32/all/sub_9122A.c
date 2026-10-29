/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9122A
// Address: 0x0009122A

//----- (0009122A) --------------------------------------------------------
void __fastcall sub_9122A(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 91236: variable 'v1' is possibly undefined
