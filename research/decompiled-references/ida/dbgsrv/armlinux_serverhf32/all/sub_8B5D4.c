/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B5D4
// Address: 0x0008B5D4

//----- (0008B5D4) --------------------------------------------------------
void __fastcall sub_8B5D4(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_8AFE4(v5, &byte_8DEAC);
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_8B2DC(a1);
  sub_8B258(v4, a2);
  std::out_of_range::~out_of_range((std::out_of_range *)v5);
}
// 14354: using guessed type int __fastcall ITM_memcpyRnWt(_DWORD, _DWORD, _DWORD);
// 8DEAC: using guessed type char byte_8DEAC;
