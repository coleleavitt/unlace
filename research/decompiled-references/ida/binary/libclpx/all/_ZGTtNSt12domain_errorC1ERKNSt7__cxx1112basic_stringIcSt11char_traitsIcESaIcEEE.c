// Alternative name is '_ZGTtNSt12domain_errorC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE'
unsigned __int64 __fastcall `transaction-clone for`std::domain_error::domain_error(__int64 a1)
{
  __int64 v1; // r12
  __int64 *v2; // rax
  _BYTE v4[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  std::domain_error::domain_error((std::domain_error *)v4, "");
  _ITM_memcpyRnWt();
  v1 = j___ITM_RU8_0();
  v2 = (__int64 *)sub_2859A0(a1);
  sub_2858B0(v2, v1);
  std::domain_error::~domain_error((std::domain_error *)v4);
  return __readfsqword(0x28u) ^ v5;
}

