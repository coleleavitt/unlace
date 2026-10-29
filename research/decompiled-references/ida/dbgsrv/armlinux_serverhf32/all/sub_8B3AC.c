/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B3AC
// Address: 0x0008B3AC

//----- (0008B3AC) --------------------------------------------------------
void __fastcall sub_8B3AC(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_8AF78(v5, &byte_8DEAC);
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_8B2DC(a1);
  sub_8B258(v4, a2);
  std::domain_error::~domain_error((std::domain_error *)v5);
}
// 14354: using guessed type int __fastcall ITM_memcpyRnWt(_DWORD, _DWORD, _DWORD);
// 8DEAC: using guessed type char byte_8DEAC;
