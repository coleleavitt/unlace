/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9120A
// Address: 0x0009120A

//----- (0009120A) --------------------------------------------------------
void __fastcall sub_9120A(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 91216: variable 'v1' is possibly undefined
