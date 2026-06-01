/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BA80
// Address: 0x0008BA80

//----- (0008BA80) --------------------------------------------------------
void __fastcall sub_8BA80(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_8B2D4(v5, &byte_8DFE8);
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_8B554(a1);
  sub_8B4CC(v4, a2);
  std::overflow_error::~overflow_error((std::overflow_error *)v5);
}
// 144D8: using guessed type int __fastcall ITM_memcpyRnWt(_DWORD, _DWORD, _DWORD);
// 8DFE8: using guessed type char byte_8DFE8;
