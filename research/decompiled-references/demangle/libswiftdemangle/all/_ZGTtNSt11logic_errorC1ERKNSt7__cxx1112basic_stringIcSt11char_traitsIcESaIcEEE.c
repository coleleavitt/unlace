// Alternative name is '_ZGTtNSt11logic_errorC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE'
unsigned __int64 __fastcall `transaction-clone for`std::logic_error::logic_error(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 *v3; // rax
  _BYTE _0[24]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  std::logic_error::logic_error((std::logic_error *)_0, "");
  _ITM_memcpyRnWt(a1, _0, 16);
  v2 = j___ITM_RU8_0(a2);
  v3 = (__int64 *)sub_335D0(a1);
  sub_33500(v3, v2);
  std::logic_error::~logic_error((std::logic_error *)_0);
  return vars18 - __readfsqword(0x28u);
}
