/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B8C4
// Address: 0x0008B8C4

//----- (0008B8C4) --------------------------------------------------------
void __fastcall sub_8B8C4(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_8B084(v5, &byte_8DEAC);
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_8B2E0(a1);
  sub_8B258(v4, a2);
  std::underflow_error::~underflow_error((std::underflow_error *)v5);
}
// 14354: using guessed type int __fastcall ITM_memcpyRnWt(_DWORD, _DWORD, _DWORD);
// 8DEAC: using guessed type char byte_8DEAC;
