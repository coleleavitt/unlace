std::_V2 *__fastcall sub_22A8430(std::_V2 *a1, _QWORD **a2)
{
  __int64 v2; // r12
  void *v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+10h] [rbp-38h] BYREF

  v2 = std::_V2::generic_category(a1);
  sub_2253560(v4, a2);
  sub_22205D0(a1, (__int64)v4, 22, v2);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
  return a1;
}
