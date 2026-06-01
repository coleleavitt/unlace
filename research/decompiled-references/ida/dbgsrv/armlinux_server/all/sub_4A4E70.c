/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A4E70
// Address: 0x00000000004A4E70

//----- (00000000004A4E70) ----------------------------------------------------
void __fastcall sub_4A4E70(__int64 a1, __int64 a2)
{
  __int64 *v4; // x21
  __int64 v5; // x0
  _QWORD v6[2]; // [xsp+30h] [xbp+30h] BYREF

  sub_4A4118(v6, &byte_4B31F0);
  _ITM_memcpyRnWt(a1, v6, 16);
  v4 = (__int64 *)sub_4A4488(a1);
  v5 = j___ITM_RU8_0(a2);
  sub_4A43B0(v4, v5);
  std::overflow_error::~overflow_error((std::overflow_error *)v6);
}
// 406650: using guessed type __int64 __fastcall _ITM_memcpyRnWt(_QWORD, _QWORD, _QWORD);
// 4A4450: using guessed type __int64 __fastcall j___ITM_RU8_0(_QWORD);
// 4B31F0: using guessed type char byte_4B31F0;
