/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A4B38
// Address: 0x00000000004A4B38

//----- (00000000004A4B38) ----------------------------------------------------
void __fastcall sub_4A4B38(__int64 a1, __int64 a2)
{
  __int64 *v4; // x0
  _QWORD v5[2]; // [xsp+30h] [xbp+30h] BYREF

  sub_4A4098(v5, &byte_4B31F0);
  _ITM_memcpyRnWt(a1, v5, 16);
  v4 = (__int64 *)sub_4A4488(a1);
  sub_4A43B0(v4, a2);
  std::runtime_error::~runtime_error((std::runtime_error *)v5);
}
// 406650: using guessed type __int64 __fastcall _ITM_memcpyRnWt(_QWORD, _QWORD, _QWORD);
// 4B31F0: using guessed type char byte_4B31F0;
