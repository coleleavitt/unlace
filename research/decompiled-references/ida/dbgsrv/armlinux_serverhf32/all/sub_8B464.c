/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B464
// Address: 0x0008B464

//----- (0008B464) --------------------------------------------------------
void __fastcall sub_8B464(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_8AF9C(v5, &byte_8DEAC);
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_8B2DC(a1);
  sub_8B258(v4, a2);
  std::invalid_argument::~invalid_argument((std::invalid_argument *)v5);
}
// 14354: using guessed type int __fastcall ITM_memcpyRnWt(_DWORD, _DWORD, _DWORD);
// 8DEAC: using guessed type char byte_8DEAC;
