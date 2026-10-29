// Alternative name is '_ZGTtNSt13runtime_errorC1EPKc'
unsigned __int64 __fastcall `transaction-clone for`std::runtime_error::runtime_error(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  _BYTE _0[24]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  std::runtime_error::runtime_error((std::runtime_error *)_0, "");
  _ITM_memcpyRnWt(a1, _0, 16);
  v2 = (__int64 *)sub_335E0(a1);
  sub_33500(v2, a2);
  std::runtime_error::~runtime_error((std::runtime_error *)_0);
  return vars18 - __readfsqword(0x28u);
}

