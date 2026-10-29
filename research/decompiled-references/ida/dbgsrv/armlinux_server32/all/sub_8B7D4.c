/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B7D4
// Address: 0x0008B7D4

//----- (0008B7D4) --------------------------------------------------------
void __fastcall sub_8B7D4(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  _DWORD v4[3]; // [sp+0h] [bp-Ch] BYREF

  sub_8B234(v4, &byte_8DFE8);
  ITM_memcpyRnWt(a1, v4, 8);
  v2 = (_DWORD *)sub_8B550(a1);
  v3 = sub_8B520();
  sub_8B4CC(v2, v3);
  std::length_error::~length_error((std::length_error *)v4);
}
// 144D8: using guessed type int __fastcall ITM_memcpyRnWt(_DWORD, _DWORD, _DWORD);
// 8DFE8: using guessed type char byte_8DFE8;
