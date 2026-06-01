/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9124A
// Address: 0x0009124A

//----- (0009124A) --------------------------------------------------------
void __fastcall sub_9124A(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 91256: variable 'v1' is possibly undefined
