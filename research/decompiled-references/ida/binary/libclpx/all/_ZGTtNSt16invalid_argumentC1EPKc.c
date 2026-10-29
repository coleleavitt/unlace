// Alternative name is '_ZGTtNSt16invalid_argumentC2EPKc'
unsigned __int64 __fastcall `transaction-clone for`std::invalid_argument::invalid_argument(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  _BYTE v4[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  std::invalid_argument::invalid_argument((std::invalid_argument *)v4, "");
  _ITM_memcpyRnWt();
  v2 = (__int64 *)sub_2859A0(a1);
  sub_2858B0(v2, a2);
  std::invalid_argument::~invalid_argument((std::invalid_argument *)v4);
  return __readfsqword(0x28u) ^ v5;
}

