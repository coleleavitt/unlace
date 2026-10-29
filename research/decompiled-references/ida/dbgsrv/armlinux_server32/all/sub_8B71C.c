/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B71C
// Address: 0x0008B71C

//----- (0008B71C) --------------------------------------------------------
void __fastcall sub_8B71C(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  _DWORD v4[3]; // [sp+0h] [bp-Ch] BYREF

  sub_8B210(v4, &byte_8DFE8);
  ITM_memcpyRnWt(a1, v4, 8);
  v2 = (_DWORD *)sub_8B550(a1);
  v3 = sub_8B520();
  sub_8B4CC(v2, v3);
  std::invalid_argument::~invalid_argument((std::invalid_argument *)v4);
}
// 144D8: using guessed type int __fastcall ITM_memcpyRnWt(_DWORD, _DWORD, _DWORD);
// 8DFE8: using guessed type char byte_8DFE8;
