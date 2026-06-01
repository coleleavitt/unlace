/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B754
// Address: 0x0008B754

//----- (0008B754) --------------------------------------------------------
void __fastcall sub_8B754(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_8B03C(v5, &byte_8DEAC);
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_8B2E0(a1);
  sub_8B258(v4, a2);
  std::range_error::~range_error((std::range_error *)v5);
}
// 14354: using guessed type int __fastcall ITM_memcpyRnWt(_DWORD, _DWORD, _DWORD);
// 8DEAC: using guessed type char byte_8DEAC;
