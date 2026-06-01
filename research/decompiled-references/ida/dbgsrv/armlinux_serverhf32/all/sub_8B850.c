/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B850
// Address: 0x0008B850

//----- (0008B850) --------------------------------------------------------
void __fastcall sub_8B850(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  _DWORD v4[3]; // [sp+0h] [bp-Ch] BYREF

  sub_8B060(v4, &byte_8DEAC);
  ITM_memcpyRnWt(a1, v4, 8);
  v2 = (_DWORD *)sub_8B2E0(a1);
  v3 = sub_8B2AC();
  sub_8B258(v2, v3);
  std::overflow_error::~overflow_error((std::overflow_error *)v4);
}
// 14354: using guessed type int __fastcall ITM_memcpyRnWt(_DWORD, _DWORD, _DWORD);
// 8DEAC: using guessed type char byte_8DEAC;
