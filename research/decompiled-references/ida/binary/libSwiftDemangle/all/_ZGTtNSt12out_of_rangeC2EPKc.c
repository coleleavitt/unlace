// Alternative name is '_ZGTtNSt12out_of_rangeC1EPKc'
unsigned __int64 __fastcall `transaction-clone for`std::out_of_range::out_of_range(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  _BYTE _0[24]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  std::out_of_range::out_of_range((std::out_of_range *)_0, "");
  _ITM_memcpyRnWt(a1, _0, 16);
  v2 = (__int64 *)sub_335D0(a1);
  sub_33500(v2, a2);
  std::out_of_range::~out_of_range((std::out_of_range *)_0);
  return vars18 - __readfsqword(0x28u);
}

